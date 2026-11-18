#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassCore
{
    struct GenericSystemWrapper
    {
        static constexpr std::string_view Name = "GenericSystemWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassSystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassChildOfFragment
    {
        static constexpr std::string_view Name = "MassChildOfFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parent", 0x0, "StructProperty"},
        }};
    };

    struct MassChildOfRelation
    {
        static constexpr std::string_view Name = "MassChildOfRelation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassRelation";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassChildOfRelationEntityCreation
    {
        static constexpr std::string_view Name = "MassChildOfRelationEntityCreation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRelationEntityCreation";
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

    struct MassChunkFragment
    {
        static constexpr std::string_view Name = "MassChunkFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCompositeProcessor
    {
        static constexpr std::string_view Name = "MassCompositeProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildPipeline = 0x120;
            static constexpr std::uintptr_t GroupName = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChildPipeline", 0x120, "StructProperty"},
            {"GroupName", 0x138, "NameProperty"},
        }};
    };

    struct MassConstSharedFragment
    {
        static constexpr std::string_view Name = "MassConstSharedFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassDebugLogFragment
    {
        static constexpr std::string_view Name = "MassDebugLogFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t LogOwner = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LogOwner", 0x0, "WeakObjectProperty"},
        }};
    };

    struct MassElement
    {
        static constexpr std::string_view Name = "MassElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassEntityHandle
    {
        static constexpr std::string_view Name = "MassEntityHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t SerialNumber = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"SerialNumber", 0x4, "IntProperty"},
        }};
    };

    struct MassEntityLinkFragment
    {
        static constexpr std::string_view Name = "MassEntityLinkFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassConstSharedFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkedEntityHandle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LinkedEntityHandle", 0x0, "StructProperty"},
        }};
    };

    struct MassEntityObserverClassesMap
    {
        static constexpr std::string_view Name = "MassEntityObserverClassesMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Container = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Container", 0x0, "MapProperty"},
        }};
    };

    struct MassEntityView
    {
        static constexpr std::string_view Name = "MassEntityView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassFragment
    {
        static constexpr std::string_view Name = "MassFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassGenericDebugEvent
    {
        static constexpr std::string_view Name = "MassGenericDebugEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassObserverExecutionContext
    {
        static constexpr std::string_view Name = "MassObserverExecutionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassObserverManager
    {
        static constexpr std::string_view Name = "MassObserverManager";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementObservers = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementObservers", 0xE8, "StructProperty"},
        }};
    };

    struct MassObserverProcessor
    {
        static constexpr std::string_view Name = "MassObserverProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
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

    struct MassObserverRegistry
    {
        static constexpr std::string_view Name = "MassObserverRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FragmentObservers = 0x70;
            static constexpr std::uintptr_t TagObservers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FragmentObservers", 0x70, "StructProperty"},
            {"TagObservers", 0xB0, "StructProperty"},
        }};
    };

    struct MassObserversMap
    {
        static constexpr std::string_view Name = "MassObserversMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Container = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Container", 0x0, "MapProperty"},
        }};
    };

    struct MassProcessor
    {
        static constexpr std::string_view Name = "MassProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

    struct MassProcessorClassCollection
    {
        static constexpr std::string_view Name = "MassProcessorClassCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassCollection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassCollection", 0x0, "ArrayProperty"},
        }};
    };

    struct MassProcessorExecutionOrder
    {
        static constexpr std::string_view Name = "MassProcessorExecutionOrder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteInGroup = 0x0;
            static constexpr std::uintptr_t ExecuteBefore = 0x8;
            static constexpr std::uintptr_t ExecuteAfter = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExecuteInGroup", 0x0, "NameProperty"},
            {"ExecuteBefore", 0x8, "ArrayProperty"},
            {"ExecuteAfter", 0x18, "ArrayProperty"},
        }};
    };

    struct MassRelation
    {
        static constexpr std::string_view Name = "MassRelation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRelationEntityCreation
    {
        static constexpr std::string_view Name = "MassRelationEntityCreation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRelationObserver";
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

    struct MassRelationEntityDestruction
    {
        static constexpr std::string_view Name = "MassRelationEntityDestruction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRelationObserver";
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

    struct MassRelationEntityGuardDog
    {
        static constexpr std::string_view Name = "MassRelationEntityGuardDog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRelationObserver";
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

    struct MassRelationFragment
    {
        static constexpr std::string_view Name = "MassRelationFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRelationMappingFragment
    {
        static constexpr std::string_view Name = "MassRelationMappingFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassRelationObserver
    {
        static constexpr std::string_view Name = "MassRelationObserver";
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

    struct MassRelationRoleDestruction
    {
        static constexpr std::string_view Name = "MassRelationRoleDestruction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRelationObserver";
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

    struct MassRuntimePipeline
    {
        static constexpr std::string_view Name = "MassRuntimePipeline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Processors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Processors", 0x0, "ArrayProperty"},
        }};
    };

    struct MassSharedFragment
    {
        static constexpr std::string_view Name = "MassSharedFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassSparseFragment
    {
        static constexpr std::string_view Name = "MassSparseFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassSparseTag
    {
        static constexpr std::string_view Name = "MassSparseTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassSystem
    {
        static constexpr std::string_view Name = "MassSystem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassTag
    {
        static constexpr std::string_view Name = "MassTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ProcessorAuxDataBase
    {
        static constexpr std::string_view Name = "ProcessorAuxDataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformFragment
    {
        static constexpr std::string_view Name = "TransformFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x0, "StructProperty"},
        }};
    };

}
