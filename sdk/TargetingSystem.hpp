#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TargetingSystem
{
    struct AbilityTask_PerformTargeting
    {
        static constexpr std::string_view Name = "AbilityTask_PerformTargeting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTargetReady = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnTargetReady", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "PerformFilteringRequest",
            "PerformTargetingRequest",
        }};
    };

    struct AsyncAction_PerformTargeting
    {
        static constexpr std::string_view Name = "AsyncAction_PerformTargeting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targeted = 0x30;
            static constexpr std::uintptr_t TargetingPreset = 0x40;
            static constexpr std::uintptr_t WeakSourceActor = 0x48;
            static constexpr std::uintptr_t InitialTargets = 0x50;
            static constexpr std::uintptr_t TargetingHandle = 0x60;
            static constexpr std::uintptr_t bUseAsyncTargeting = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Targeted", 0x30, "MulticastInlineDelegateProperty"},
            {"TargetingPreset", 0x40, "ObjectProperty"},
            {"WeakSourceActor", 0x48, "WeakObjectProperty"},
            {"InitialTargets", 0x50, "ArrayProperty"},
            {"TargetingHandle", 0x60, "StructProperty"},
            {"bUseAsyncTargeting", 0x64, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetTargetingHandle",
            "PerformFilteringRequest",
            "PerformTargetingRequest",
        }};
    };

    struct CollisionQueryTaskData
    {
        static constexpr std::string_view Name = "CollisionQueryTaskData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IgnoredActors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IgnoredActors", 0x0, "ArrayProperty"},
        }};
    };

    struct SimpleTargetingFilterTask
    {
        static constexpr std::string_view Name = "SimpleTargetingFilterTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_ShouldFilterTarget",
        }};
    };

    struct SimpleTargetingSelectionTask
    {
        static constexpr std::string_view Name = "SimpleTargetingSelectionTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddHitResult",
            "AddTargetActor",
            "SelectTargets",
        }};
    };

    struct SimpleTargetingSortTask
    {
        static constexpr std::string_view Name = "SimpleTargetingSortTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSortTask_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t bAscending = 0x28;
            static constexpr std::uintptr_t bStableSort = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAscending", 0x28, "BoolProperty"},
            {"bStableSort", 0x28, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetScoreForTarget",
        }};
    };

    struct TargetingAsyncTaskData
    {
        static constexpr std::string_view Name = "TargetingAsyncTaskData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingDebugData
    {
        static constexpr std::string_view Name = "TargetingDebugData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingDefaultResultData
    {
        static constexpr std::string_view Name = "TargetingDefaultResultData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HitResult = 0x0;
            static constexpr std::uintptr_t Score = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HitResult", 0x0, "StructProperty"},
            {"Score", 0xF8, "FloatProperty"},
        }};
    };

    struct TargetingDefaultResultsSet
    {
        static constexpr std::string_view Name = "TargetingDefaultResultsSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetResults = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetResults", 0x0, "ArrayProperty"},
        }};
    };

    struct TargetingFilterTask_ActorClass
    {
        static constexpr std::string_view Name = "TargetingFilterTask_ActorClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredActorClassFilters = 0x28;
            static constexpr std::uintptr_t IgnoredActorClassFilters = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredActorClassFilters", 0x28, "ArrayProperty"},
            {"IgnoredActorClassFilters", 0x38, "ArrayProperty"},
        }};
    };

    struct TargetingFilterTask_BasicFilterTemplate
    {
        static constexpr std::string_view Name = "TargetingFilterTask_BasicFilterTemplate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingFilterTask_SortByDistance
    {
        static constexpr std::string_view Name = "TargetingFilterTask_SortByDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSortTask_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDistanceToNearestBlockingCollider = 0x30;
            static constexpr std::uintptr_t DistanceToCollisionChannel = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseDistanceToNearestBlockingCollider", 0x30, "BoolProperty"},
            {"DistanceToCollisionChannel", 0x31, "ByteProperty"},
        }};
    };

    struct TargetingImmediateTaskData
    {
        static constexpr std::string_view Name = "TargetingImmediateTaskData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingPreset
    {
        static constexpr std::string_view Name = "TargetingPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingTaskSet = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetingTaskSet", 0x28, "StructProperty"},
        }};
    };

    struct TargetingRequestData
    {
        static constexpr std::string_view Name = "TargetingRequestData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingRequestDynamicDelegate = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetingRequestDynamicDelegate", 0x20, "DelegateProperty"},
        }};
    };

    struct TargetingRequestHandle
    {
        static constexpr std::string_view Name = "TargetingRequestHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingSelectionTask_AOE
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_AOE";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeType = 0x28;
            static constexpr std::uintptr_t CollisionChannel = 0x29;
            static constexpr std::uintptr_t CollisionProfileName = 0x2C;
            static constexpr std::uintptr_t CollisionObjectTypes = 0x30;
            static constexpr std::uintptr_t DefaultSourceOffset = 0x40;
            static constexpr std::uintptr_t DefaultSourceRotationOffset = 0x58;
            static constexpr std::uintptr_t bIgnoreInstigatorActor = 0x70;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x70;
            static constexpr std::uintptr_t bTraceComplex = 0x70;
            static constexpr std::uintptr_t bUseRelativeOffset = 0x70;
            static constexpr std::uintptr_t HalfExtentX = 0x78;
            static constexpr std::uintptr_t HalfExtentY = 0xA0;
            static constexpr std::uintptr_t HalfExtentZ = 0xC8;
            static constexpr std::uintptr_t Radius = 0xF0;
            static constexpr std::uintptr_t HalfHeight = 0x118;
            static constexpr std::uintptr_t ComponentTag = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ShapeType", 0x28, "EnumProperty"},
            {"CollisionChannel", 0x29, "ByteProperty"},
            {"CollisionProfileName", 0x2C, "StructProperty"},
            {"CollisionObjectTypes", 0x30, "ArrayProperty"},
            {"DefaultSourceOffset", 0x40, "StructProperty"},
            {"DefaultSourceRotationOffset", 0x58, "StructProperty"},
            {"bIgnoreInstigatorActor", 0x70, "BoolProperty"},
            {"bIgnoreSourceActor", 0x70, "BoolProperty"},
            {"bTraceComplex", 0x70, "BoolProperty"},
            {"bUseRelativeOffset", 0x70, "BoolProperty"},
            {"HalfExtentX", 0x78, "StructProperty"},
            {"HalfExtentY", 0xA0, "StructProperty"},
            {"HalfExtentZ", 0xC8, "StructProperty"},
            {"Radius", 0xF0, "StructProperty"},
            {"HalfHeight", 0x118, "StructProperty"},
            {"ComponentTag", 0x140, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetSourceLocation",
            "GetSourceOffset",
            "GetSourceRotation",
            "GetSourceRotationOffset",
        }};
    };

    struct TargetingSelectionTask_SourceActor
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_SourceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingSelectionTask_Trace
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_Trace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceType = 0x28;
            static constexpr std::uintptr_t TraceChannel = 0x29;
            static constexpr std::uintptr_t CollisionProfileName = 0x2C;
            static constexpr std::uintptr_t DefaultSweptTraceRadius = 0x30;
            static constexpr std::uintptr_t DefaultSweptTraceCapsuleHalfHeight = 0x58;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentX = 0x80;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentY = 0xA8;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentZ = 0xD0;
            static constexpr std::uintptr_t DefaultSweptTraceRotation = 0xF8;
            static constexpr std::uintptr_t DefaultTraceLength = 0x110;
            static constexpr std::uintptr_t DefaultSourceOffset = 0x138;
            static constexpr std::uintptr_t ExplicitTraceDirection = 0x150;
            static constexpr std::uintptr_t bComplexTrace = 0x168;
            static constexpr std::uintptr_t bIgnoreInstigatorActor = 0x168;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x168;
            static constexpr std::uintptr_t bMultiTrace = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"TraceType", 0x28, "EnumProperty"},
            {"TraceChannel", 0x29, "ByteProperty"},
            {"CollisionProfileName", 0x2C, "StructProperty"},
            {"DefaultSweptTraceRadius", 0x30, "StructProperty"},
            {"DefaultSweptTraceCapsuleHalfHeight", 0x58, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentX", 0x80, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentY", 0xA8, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentZ", 0xD0, "StructProperty"},
            {"DefaultSweptTraceRotation", 0xF8, "StructProperty"},
            {"DefaultTraceLength", 0x110, "StructProperty"},
            {"DefaultSourceOffset", 0x138, "StructProperty"},
            {"ExplicitTraceDirection", 0x150, "StructProperty"},
            {"bComplexTrace", 0x168, "BoolProperty"},
            {"bIgnoreInstigatorActor", 0x168, "BoolProperty"},
            {"bIgnoreSourceActor", 0x168, "BoolProperty"},
            {"bMultiTrace", 0x168, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GetAdditionalActorsToIgnore",
            "GetSourceLocation",
            "GetSourceOffset",
            "GetSweptTraceBoxHalfExtents",
            "GetSweptTraceCapsuleHalfHeight",
            "GetSweptTraceRadius",
            "GetSweptTraceRotation",
            "GetTraceDirection",
            "GetTraceLength",
        }};
    };

    struct TargetingSortTask_Base
    {
        static constexpr std::string_view Name = "TargetingSortTask_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
            static constexpr std::uintptr_t bAscending = 0x28;
            static constexpr std::uintptr_t bStableSort = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAscending", 0x28, "BoolProperty"},
            {"bStableSort", 0x28, "BoolProperty"},
        }};
    };

    struct TargetingSourceContext
    {
        static constexpr std::string_view Name = "TargetingSourceContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceActor = 0x0;
            static constexpr std::uintptr_t InstigatorActor = 0x8;
            static constexpr std::uintptr_t SourceLocation = 0x10;
            static constexpr std::uintptr_t SourceSocketName = 0x28;
            static constexpr std::uintptr_t SourceObject = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceActor", 0x0, "ObjectProperty"},
            {"InstigatorActor", 0x8, "ObjectProperty"},
            {"SourceLocation", 0x10, "StructProperty"},
            {"SourceSocketName", 0x28, "NameProperty"},
            {"SourceObject", 0x30, "ObjectProperty"},
        }};
    };

    struct TargetingSubsystem
    {
        static constexpr std::string_view Name = "TargetingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncTargetingRequests = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AsyncTargetingRequests", 0x40, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ExecuteTargetingRequest",
            "GetTargetingResults",
            "GetTargetingResultsActors",
            "GetTargetingSourceContext",
            "OverrideCollisionQueryTaskData",
            "RemoveAsyncTargetingRequestWithHandle",
            "StartAsyncTargetingRequest",
        }};
    };

    struct TargetingTask
    {
        static constexpr std::string_view Name = "TargetingTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTargetingSubsystem",
        }};
    };

    struct TargetingTaskSet
    {
        static constexpr std::string_view Name = "TargetingTaskSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tasks = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tasks", 0x0, "ArrayProperty"},
        }};
    };

}
