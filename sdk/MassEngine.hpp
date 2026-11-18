#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassEngine
{
    struct MassBaseStaticMeshDestroyRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassBaseStaticMeshDestroyRenderStateProcessor";
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

    struct MassBaseStaticMeshSetupRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassBaseStaticMeshSetupRenderStateProcessor";
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

    struct MassCreateRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassCreateRenderStateProcessor";
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

    struct MassDestroyRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassDestroyRenderStateProcessor";
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

    struct MassDirtyNavigationRelevantUpdateProcessor
    {
        static constexpr std::string_view Name = "MassDirtyNavigationRelevantUpdateProcessor";
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

    struct MassDirtyRenderISMInstanceProcessor
    {
        static constexpr std::string_view Name = "MassDirtyRenderISMInstanceProcessor";
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

    struct MassEditorVisualizationMeshFragment
    {
        static constexpr std::string_view Name = "MassEditorVisualizationMeshFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassISMDestroyRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassISMDestroyRenderStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassBaseStaticMeshDestroyRenderStateProcessor";
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

    struct MassISMGroupingFragment
    {
        static constexpr std::string_view Name = "MassISMGroupingFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupID", 0x0, "StructProperty"},
        }};
    };

    struct MassInstantiateStaticMeshAndCreateISMRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassInstantiateStaticMeshAndCreateISMRenderStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassBaseStaticMeshSetupRenderStateProcessor";
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

    struct MassNavigationElementProcessor
    {
        static constexpr std::string_view Name = "MassNavigationElementProcessor";
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

    struct MassNavigationEvaluatedTag
    {
        static constexpr std::string_view Name = "MassNavigationEvaluatedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassNavigationRelevantFragment
    {
        static constexpr std::string_view Name = "MassNavigationRelevantFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassNavigationRelevantMassDeinitializer
    {
        static constexpr std::string_view Name = "MassNavigationRelevantMassDeinitializer";
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

    struct MassNavigationRelevantParameters
    {
        static constexpr std::string_view Name = "MassNavigationRelevantParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bFillCollisionUnderneathForNavData", 0x0, "BoolProperty"},
        }};
    };

    struct MassOverrideMaterialsFragment
    {
        static constexpr std::string_view Name = "MassOverrideMaterialsFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideMaterials = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideMaterials", 0x0, "ArrayProperty"},
        }};
    };

    struct MassPhysicsBodyInstanceFragment
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstanceFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyInstanceOwnerObject = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BodyInstanceOwnerObject", 0x0, "WeakObjectProperty"},
        }};
    };

    struct MassPhysicsBodyInstanceInitializedTag
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstanceInitializedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassPhysicsBodyInstanceReInitializer
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstanceReInitializer";
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

    struct MassPhysicsBodyInstancesBatchInitializer
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstancesBatchInitializer";
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

    struct MassPhysicsBodyInstancesBatcher
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstancesBatcher";
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

    struct MassPhysicsBodyInstancesInitializationRequestFragment
    {
        static constexpr std::string_view Name = "MassPhysicsBodyInstancesInitializationRequestFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMesh = 0x0;
            static constexpr std::uintptr_t Transforms = 0x8;
            static constexpr std::uintptr_t PrimitiveComponent = 0x28;
            static constexpr std::uintptr_t bDynamic = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StaticMesh", 0x0, "WeakObjectProperty"},
            {"Transforms", 0x8, "ArrayProperty"},
            {"PrimitiveComponent", 0x28, "ObjectProperty"},
            {"bDynamic", 0x50, "BoolProperty"},
        }};
    };

    struct MassPhysicsCollisionSettingsFragment
    {
        static constexpr std::string_view Name = "MassPhysicsCollisionSettingsFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionType = 0x0;
            static constexpr std::uintptr_t CollisionResponse = 0x1;
            static constexpr std::uintptr_t bCanAffectNavigation = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CollisionType", 0x0, "ByteProperty"},
            {"CollisionResponse", 0x1, "StructProperty"},
            {"bCanAffectNavigation", 0x41, "BoolProperty"},
        }};
    };

    struct MassPhysicsDynamicBodyTag
    {
        static constexpr std::string_view Name = "MassPhysicsDynamicBodyTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassPhysicsSimulatedBodyTag
    {
        static constexpr std::string_view Name = "MassPhysicsSimulatedBodyTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRenderISMCandidateTag
    {
        static constexpr std::string_view Name = "MassRenderISMCandidateTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRenderISMFragment
    {
        static constexpr std::string_view Name = "MassRenderISMFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRenderISMInstanceFragment
    {
        static constexpr std::string_view Name = "MassRenderISMInstanceFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceIndex", 0x0, "IntProperty"},
        }};
    };

    struct MassRenderISMLinkFragment
    {
        static constexpr std::string_view Name = "MassRenderISMLinkFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassEntityLinkFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkedEntityHandle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LinkedEntityHandle", 0x0, "StructProperty"},
        }};
    };

    struct MassRenderPrimitiveFragment
    {
        static constexpr std::string_view Name = "MassRenderPrimitiveFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalBounds = 0x0;
            static constexpr std::uintptr_t WorldBounds = 0x38;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x70;
            static constexpr std::uintptr_t DetailMode = 0x80;
            static constexpr std::uintptr_t bIsVisible = 0x81;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x81;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LocalBounds", 0x0, "StructProperty"},
            {"WorldBounds", 0x38, "StructProperty"},
            {"CustomPrimitiveData", 0x70, "StructProperty"},
            {"DetailMode", 0x80, "ByteProperty"},
            {"bIsVisible", 0x81, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x81, "BoolProperty"},
            {"RuntimeVirtualTextures", 0x88, "ArrayProperty"},
        }};
    };

    struct MassRenderStateDirtyUpdateProcessor
    {
        static constexpr std::string_view Name = "MassRenderStateDirtyUpdateProcessor";
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

    struct MassRenderStateFragment
    {
        static constexpr std::string_view Name = "MassRenderStateFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRenderStateTeardownSubsystem
    {
        static constexpr std::string_view Name = "MassRenderStateTeardownSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRenderStaticMeshFragment
    {
        static constexpr std::string_view Name = "MassRenderStaticMeshFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassSceneProxyCreatedTag
    {
        static constexpr std::string_view Name = "MassSceneProxyCreatedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassStaticMeshDestroyRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassStaticMeshDestroyRenderStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassBaseStaticMeshDestroyRenderStateProcessor";
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

    struct MassStaticMeshFragment
    {
        static constexpr std::string_view Name = "MassStaticMeshFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mesh", 0x0, "WeakObjectProperty"},
        }};
    };

    struct MassStaticMeshSetupRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassStaticMeshSetupRenderStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassBaseStaticMeshSetupRenderStateProcessor";
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

    struct MassStaticMeshUpdateRenderStateProcessor
    {
        static constexpr std::string_view Name = "MassStaticMeshUpdateRenderStateProcessor";
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

    struct MassTypeElementFragment
    {
        static constexpr std::string_view Name = "MassTypeElementFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassVisualizationMeshFragment
    {
        static constexpr std::string_view Name = "MassVisualizationMeshFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x0;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x8;
            static constexpr std::uintptr_t LightingChannels = 0xC;
            static constexpr std::uintptr_t AffectDynamicIndirectLighting = 0xD;
            static constexpr std::uintptr_t AffectIndirectLightingWhileHidden = 0xD;
            static constexpr std::uintptr_t CastHiddenShadow = 0xD;
            static constexpr std::uintptr_t CastShadow = 0xD;
            static constexpr std::uintptr_t CastShadowAsTwoSided = 0xD;
            static constexpr std::uintptr_t HiddenInGame = 0xD;
            static constexpr std::uintptr_t NeverDistanceCull = 0xD;
            static constexpr std::uintptr_t ReceivesDecals = 0xD;
            static constexpr std::uintptr_t CastContactShadow = 0xE;
            static constexpr std::uintptr_t CastFarShadow = 0xE;
            static constexpr std::uintptr_t CastInsetShadow = 0xE;
            static constexpr std::uintptr_t RenderCustomDepth = 0xE;
            static constexpr std::uintptr_t VisibleInReflections = 0xE;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"CustomDepthStencilValue", 0x0, "Int64Property"},
            {"TranslucencySortPriority", 0x8, "IntProperty"},
            {"LightingChannels", 0xC, "StructProperty"},
            {"AffectDynamicIndirectLighting", 0xD, "BoolProperty"},
            {"AffectIndirectLightingWhileHidden", 0xD, "BoolProperty"},
            {"CastHiddenShadow", 0xD, "BoolProperty"},
            {"CastShadow", 0xD, "BoolProperty"},
            {"CastShadowAsTwoSided", 0xD, "BoolProperty"},
            {"HiddenInGame", 0xD, "BoolProperty"},
            {"NeverDistanceCull", 0xD, "BoolProperty"},
            {"ReceivesDecals", 0xD, "BoolProperty"},
            {"CastContactShadow", 0xE, "BoolProperty"},
            {"CastFarShadow", 0xE, "BoolProperty"},
            {"CastInsetShadow", 0xE, "BoolProperty"},
            {"RenderCustomDepth", 0xE, "BoolProperty"},
            {"VisibleInReflections", 0xE, "BoolProperty"},
        }};
    };

}
