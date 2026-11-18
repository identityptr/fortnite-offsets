#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassRepresentation
{
    struct MassConsumeInstancedSkinnedMeshAnimationProcessor
    {
        static constexpr std::string_view Name = "MassConsumeInstancedSkinnedMeshAnimationProcessor";
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

    struct MassDistanceLODProcessor
    {
        static constexpr std::string_view Name = "MassDistanceLODProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterTag = 0x13B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterTag", 0x13B8, "ObjectProperty"},
        }};
    };

    struct MassDistanceVisualizationTrait
    {
        static constexpr std::string_view Name = "MassDistanceVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshInstanceDesc = 0x30;
            static constexpr std::uintptr_t HighResTemplateActor = 0xC0;
            static constexpr std::uintptr_t LowResTemplateActor = 0xC8;
            static constexpr std::uintptr_t RepresentationSubsystemClass = 0xD0;
            static constexpr std::uintptr_t Params = 0xD8;
            static constexpr std::uintptr_t LODParams = 0xF8;
            static constexpr std::uintptr_t bAllowServerSideVisualization = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StaticMeshInstanceDesc", 0x30, "StructProperty"},
            {"HighResTemplateActor", 0xC0, "ClassProperty"},
            {"LowResTemplateActor", 0xC8, "ClassProperty"},
            {"RepresentationSubsystemClass", 0xD0, "ClassProperty"},
            {"Params", 0xD8, "StructProperty"},
            {"LODParams", 0xF8, "StructProperty"},
            {"bAllowServerSideVisualization", 0x118, "BoolProperty"},
        }};
    };

    struct MassMovableVisualizationTrait
    {
        static constexpr std::string_view Name = "MassMovableVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshInstanceDesc = 0x30;
            static constexpr std::uintptr_t SkinnedMeshInstanceDesc = 0xC0;
            static constexpr std::uintptr_t HighResTemplateActor = 0x150;
            static constexpr std::uintptr_t LowResTemplateActor = 0x158;
            static constexpr std::uintptr_t RepresentationSubsystemClass = 0x160;
            static constexpr std::uintptr_t Params = 0x168;
            static constexpr std::uintptr_t LODParams = 0x188;
            static constexpr std::uintptr_t bAllowServerSideVisualization = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StaticMeshInstanceDesc", 0x30, "StructProperty"},
            {"SkinnedMeshInstanceDesc", 0xC0, "StructProperty"},
            {"HighResTemplateActor", 0x150, "ClassProperty"},
            {"LowResTemplateActor", 0x158, "ClassProperty"},
            {"RepresentationSubsystemClass", 0x160, "ClassProperty"},
            {"Params", 0x168, "StructProperty"},
            {"LODParams", 0x188, "StructProperty"},
            {"bAllowServerSideVisualization", 0x1D0, "BoolProperty"},
        }};
    };

    struct MassRepresentationActorManagement
    {
        static constexpr std::string_view Name = "MassRepresentationActorManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRepresentationFragmentDestructor
    {
        static constexpr std::string_view Name = "MassRepresentationFragmentDestructor";
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

    struct MassRepresentationProcessor
    {
        static constexpr std::string_view Name = "MassRepresentationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateParams = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateParams", 0x750, "StructProperty"},
        }};
    };

    struct MassRepresentationSubsystem
    {
        static constexpr std::string_view Name = "MassRepresentationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationComponent = 0x78;
            static constexpr std::uintptr_t Visualizer = 0x80;
            static constexpr std::uintptr_t ActorSpawnerSubsystem = 0x88;
            static constexpr std::uintptr_t WorldPartitionSubsystem = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VisualizationComponent", 0x78, "WeakObjectProperty"},
            {"Visualizer", 0x80, "WeakObjectProperty"},
            {"ActorSpawnerSubsystem", 0x88, "ObjectProperty"},
            {"WorldPartitionSubsystem", 0xA0, "ObjectProperty"},
        }};
    };

    struct MassStationaryDistanceVisualizationTrait
    {
        static constexpr std::string_view Name = "MassStationaryDistanceVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassDistanceVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshInstanceDesc = 0x30;
            static constexpr std::uintptr_t HighResTemplateActor = 0xC0;
            static constexpr std::uintptr_t LowResTemplateActor = 0xC8;
            static constexpr std::uintptr_t RepresentationSubsystemClass = 0xD0;
            static constexpr std::uintptr_t Params = 0xD8;
            static constexpr std::uintptr_t LODParams = 0xF8;
            static constexpr std::uintptr_t bAllowServerSideVisualization = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StaticMeshInstanceDesc", 0x30, "StructProperty"},
            {"HighResTemplateActor", 0xC0, "ClassProperty"},
            {"LowResTemplateActor", 0xC8, "ClassProperty"},
            {"RepresentationSubsystemClass", 0xD0, "ClassProperty"},
            {"Params", 0xD8, "StructProperty"},
            {"LODParams", 0xF8, "StructProperty"},
            {"bAllowServerSideVisualization", 0x118, "BoolProperty"},
        }};
    };

    struct MassStationaryISMRepresentationFragmentDestructor
    {
        static constexpr std::string_view Name = "MassStationaryISMRepresentationFragmentDestructor";
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

    struct MassStationaryISMSwitcherProcessor
    {
        static constexpr std::string_view Name = "MassStationaryISMSwitcherProcessor";
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

    struct MassStationaryVisualizationTrait
    {
        static constexpr std::string_view Name = "MassStationaryVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshInstanceDesc = 0x30;
            static constexpr std::uintptr_t SkinnedMeshInstanceDesc = 0xC0;
            static constexpr std::uintptr_t HighResTemplateActor = 0x150;
            static constexpr std::uintptr_t LowResTemplateActor = 0x158;
            static constexpr std::uintptr_t RepresentationSubsystemClass = 0x160;
            static constexpr std::uintptr_t Params = 0x168;
            static constexpr std::uintptr_t LODParams = 0x188;
            static constexpr std::uintptr_t bAllowServerSideVisualization = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StaticMeshInstanceDesc", 0x30, "StructProperty"},
            {"SkinnedMeshInstanceDesc", 0xC0, "StructProperty"},
            {"HighResTemplateActor", 0x150, "ClassProperty"},
            {"LowResTemplateActor", 0x158, "ClassProperty"},
            {"RepresentationSubsystemClass", 0x160, "ClassProperty"},
            {"Params", 0x168, "StructProperty"},
            {"LODParams", 0x188, "StructProperty"},
            {"bAllowServerSideVisualization", 0x1D0, "BoolProperty"},
        }};
    };

    struct MassUpdateISMProcessor
    {
        static constexpr std::string_view Name = "MassUpdateISMProcessor";
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

    struct MassUpdateInstancedSkinnedMeshProcessor
    {
        static constexpr std::string_view Name = "MassUpdateInstancedSkinnedMeshProcessor";
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

    struct MassVisualizationComponent
    {
        static constexpr std::string_view Name = "MassVisualizationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedStaticMeshInfos = 0xC0;
            static constexpr std::uintptr_t InstancedSkinnedMeshInfos = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstancedStaticMeshInfos", 0xC0, "ArrayProperty"},
            {"InstancedSkinnedMeshInfos", 0x160, "ArrayProperty"},
        }};
    };

    struct MassVisualizationLODProcessor
    {
        static constexpr std::string_view Name = "MassVisualizationLODProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterTag = 0x19E8;
            static constexpr std::uintptr_t bDoAdjustmentFromCount = 0x19F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FilterTag", 0x19E8, "ObjectProperty"},
            {"bDoAdjustmentFromCount", 0x19F0, "BoolProperty"},
        }};
    };

    struct MassVisualizationProcessor
    {
        static constexpr std::string_view Name = "MassVisualizationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRepresentationProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateParams = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateParams", 0x750, "StructProperty"},
        }};
    };

    struct MassVisualizationTrait
    {
        static constexpr std::string_view Name = "MassVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshInstanceDesc = 0x30;
            static constexpr std::uintptr_t SkinnedMeshInstanceDesc = 0xC0;
            static constexpr std::uintptr_t HighResTemplateActor = 0x150;
            static constexpr std::uintptr_t LowResTemplateActor = 0x158;
            static constexpr std::uintptr_t RepresentationSubsystemClass = 0x160;
            static constexpr std::uintptr_t Params = 0x168;
            static constexpr std::uintptr_t LODParams = 0x188;
            static constexpr std::uintptr_t bAllowServerSideVisualization = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StaticMeshInstanceDesc", 0x30, "StructProperty"},
            {"SkinnedMeshInstanceDesc", 0xC0, "StructProperty"},
            {"HighResTemplateActor", 0x150, "ClassProperty"},
            {"LowResTemplateActor", 0x158, "ClassProperty"},
            {"RepresentationSubsystemClass", 0x160, "ClassProperty"},
            {"Params", 0x168, "StructProperty"},
            {"LODParams", 0x188, "StructProperty"},
            {"bAllowServerSideVisualization", 0x1D0, "BoolProperty"},
        }};
    };

    struct MassVisualizer
    {
        static constexpr std::string_view Name = "MassVisualizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t VisComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VisComponent", 0x278, "ObjectProperty"},
        }};
    };

}
