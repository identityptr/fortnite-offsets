#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassAIBehavior
{
    struct MassBehaviorSettings
    {
        static constexpr std::string_view Name = "MassBehaviorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxActivationsPerLOD = 0x28;
            static constexpr std::uintptr_t DynamicStateTreeProcessorClass = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxActivationsPerLOD", 0x28, "IntProperty"},
            {"DynamicStateTreeProcessorClass", 0x38, "SoftClassProperty"},
        }};
    };

    struct MassComponentHitSubsystem
    {
        static constexpr std::string_view Name = "MassComponentHitSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTickableSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SignalSubsystem = 0x50;
            static constexpr std::uintptr_t AgentSubsystem = 0x58;
            static constexpr std::uintptr_t HitResults = 0x60;
            static constexpr std::uintptr_t ComponentToEntityMap = 0x70;
            static constexpr std::uintptr_t EntityToComponentMap = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SignalSubsystem", 0x50, "ObjectProperty"},
            {"AgentSubsystem", 0x58, "ObjectProperty"},
            {"HitResults", 0x60, "MapProperty"},
            {"ComponentToEntityMap", 0x70, "MapProperty"},
            {"EntityToComponentMap", 0x80, "MapProperty"},
        }};
    };

    struct MassLookAtProcessor
    {
        static constexpr std::string_view Name = "MassLookAtProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryExtent = 0x120;
            static constexpr std::uintptr_t duration = 0x124;
            static constexpr std::uintptr_t DurationVariation = 0x128;
            static constexpr std::uintptr_t DebugZOffset = 0x12C;
            static constexpr std::uintptr_t AngleThresholdInDegrees = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"QueryExtent", 0x120, "FloatProperty"},
            {"duration", 0x124, "FloatProperty"},
            {"DurationVariation", 0x128, "FloatProperty"},
            {"DebugZOffset", 0x12C, "FloatProperty"},
            {"AngleThresholdInDegrees", 0x130, "FloatProperty"},
        }};
    };

    struct MassLookAtRequestDeinitializer
    {
        static constexpr std::string_view Name = "MassLookAtRequestDeinitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassLookAtRequestInitializer
    {
        static constexpr std::string_view Name = "MassLookAtRequestInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassLookAtSettings
    {
        static constexpr std::string_view Name = "MassLookAtSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Priorities = 0x30;
            static constexpr std::uintptr_t DefaultTargetLocationOffset = 0xB0;
            static constexpr std::uintptr_t TargetHeightRatio = 0xC8;
            static constexpr std::uintptr_t FixedOffsetFromTargetHeight = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Priorities", 0x30, "StructProperty"},
            {"DefaultTargetLocationOffset", 0xB0, "StructProperty"},
            {"TargetHeightRatio", 0xC8, "DoubleProperty"},
            {"FixedOffsetFromTargetHeight", 0xD0, "DoubleProperty"},
        }};
    };

    struct MassLookAtSubsystem
    {
        static constexpr std::string_view Name = "MassLookAtSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTickableSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassLookAtTargetGridProcessor
    {
        static constexpr std::string_view Name = "MassLookAtTargetGridProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
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

    struct MassLookAtTargetRemoverProcessor
    {
        static constexpr std::string_view Name = "MassLookAtTargetRemoverProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassLookAtTargetTrait
    {
        static constexpr std::string_view Name = "MassLookAtTargetTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldUseCapsuleComponentToSetTargetOffset = 0x30;
            static constexpr std::uintptr_t Priority = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldUseCapsuleComponentToSetTargetOffset", 0x30, "BoolProperty"},
            {"Priority", 0x31, "StructProperty"},
        }};
    };

    struct MassLookAtTrait
    {
        static constexpr std::string_view Name = "MassLookAtTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

    struct MassStateTreeActivationProcessor
    {
        static constexpr std::string_view Name = "MassStateTreeActivationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
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

    struct MassStateTreeFragmentDestructor
    {
        static constexpr std::string_view Name = "MassStateTreeFragmentDestructor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t SignalSubsystem = 0x770;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignalSubsystem", 0x770, "ObjectProperty"},
        }};
    };

    struct MassStateTreeProcessor
    {
        static constexpr std::string_view Name = "MassStateTreeProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSignalProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HandledStateTrees = 0xAD8;
            static constexpr std::uintptr_t bProcessEntitiesInParallel = 0xAE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HandledStateTrees", 0xAD8, "ArrayProperty"},
            {"bProcessEntitiesInParallel", 0xAE8, "BoolProperty"},
        }};
    };

    struct MassStateTreeSchema
    {
        static constexpr std::string_view Name = "MassStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t Dependencies = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Dependencies", 0x28, "ArrayProperty"},
        }};
    };

    struct MassStateTreeSubsystem
    {
        static constexpr std::string_view Name = "MassStateTreeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceDataArray = 0x50;
            static constexpr std::uintptr_t RequirementsHashToProcessor = 0x70;
            static constexpr std::uintptr_t SimulationSubsystem = 0x90;
            static constexpr std::uintptr_t DynamicProcessorClass = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InstanceDataArray", 0x50, "ArrayProperty"},
            {"RequirementsHashToProcessor", 0x70, "MapProperty"},
            {"SimulationSubsystem", 0x90, "ObjectProperty"},
            {"DynamicProcessorClass", 0x98, "ClassProperty"},
        }};
    };

    struct MassStateTreeTrait
    {
        static constexpr std::string_view Name = "MassStateTreeTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTree", 0x30, "ObjectProperty"},
        }};
    };

    struct MassZoneGraphAnnotationTagUpdateProcessor
    {
        static constexpr std::string_view Name = "MassZoneGraphAnnotationTagUpdateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSignalProcessorBase";
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

    struct MassZoneGraphAnnotationTagsInitializer
    {
        static constexpr std::string_view Name = "MassZoneGraphAnnotationTagsInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassZoneGraphAnnotationTrait
    {
        static constexpr std::string_view Name = "MassZoneGraphAnnotationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

}
