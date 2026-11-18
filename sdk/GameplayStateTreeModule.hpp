#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayStateTreeModule
{
    struct BTTask_RunDynamicStateTree
    {
        static constexpr std::string_view Name = "BTTask_RunDynamicStateTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeRef = 0x70;
            static constexpr std::uintptr_t InstanceData = 0x98;
            static constexpr std::uintptr_t InjectionTag = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTreeRef", 0x70, "StructProperty"},
            {"InstanceData", 0x98, "StructProperty"},
            {"InjectionTag", 0xA8, "StructProperty"},
        }};
    };

    struct BTTask_RunStateTree
    {
        static constexpr std::string_view Name = "BTTask_RunStateTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeRef = 0x78;
            static constexpr std::uintptr_t InstanceData = 0xA0;
            static constexpr std::uintptr_t Interval = 0xB0;
            static constexpr std::uintptr_t RandomDeviation = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StateTreeRef", 0x78, "StructProperty"},
            {"InstanceData", 0xA0, "StructProperty"},
            {"Interval", 0xB0, "FloatProperty"},
            {"RandomDeviation", 0xB4, "FloatProperty"},
        }};
    };

    struct GameplayStateTreeBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "GameplayStateTreeBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RunStateTree",
        }};
    };

    struct StateTreeAIActionTaskBase
    {
        static constexpr std::string_view Name = "StateTreeAIActionTaskBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeAITaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTaskEnabled = 0x20;
            static constexpr std::uintptr_t bHasTaskCompletionDelegateDispatcher = 0x21;
            static constexpr std::uintptr_t TransitionHandlingPriority = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTaskEnabled", 0x20, "BoolProperty"},
            {"bHasTaskCompletionDelegateDispatcher", 0x21, "BoolProperty"},
            {"TransitionHandlingPriority", 0x22, "EnumProperty"},
        }};
    };

    struct StateTreeAIComponent
    {
        static constexpr std::string_view Name = "StateTreeAIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x138;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x160;
            static constexpr std::uintptr_t InstanceData = 0x170;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x138, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x160, "StructProperty"},
            {"InstanceData", 0x170, "StructProperty"},
            {"bStartLogicAutomatically", 0x180, "BoolProperty"},
        }};
    };

    struct StateTreeAIComponentSchema
    {
        static constexpr std::string_view Name = "StateTreeAIComponentSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeComponentSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t AIControllerClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AIControllerClass", 0x48, "ClassProperty"},
        }};
    };

    struct StateTreeAIConditionBase
    {
        static constexpr std::string_view Name = "StateTreeAIConditionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operand = 0x20;
            static constexpr std::uintptr_t DeltaIndent = 0x21;
            static constexpr std::uintptr_t EvaluationMode = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operand", 0x20, "EnumProperty"},
            {"DeltaIndent", 0x21, "Int8Property"},
            {"EvaluationMode", 0x22, "EnumProperty"},
        }};
    };

    struct StateTreeAITaskBase
    {
        static constexpr std::string_view Name = "StateTreeAITaskBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTaskEnabled = 0x20;
            static constexpr std::uintptr_t bHasTaskCompletionDelegateDispatcher = 0x21;
            static constexpr std::uintptr_t TransitionHandlingPriority = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTaskEnabled", 0x20, "BoolProperty"},
            {"bHasTaskCompletionDelegateDispatcher", 0x21, "BoolProperty"},
            {"TransitionHandlingPriority", 0x22, "EnumProperty"},
        }};
    };

    struct StateTreeComponent
    {
        static constexpr std::string_view Name = "StateTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BrainComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x138;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x160;
            static constexpr std::uintptr_t InstanceData = 0x170;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x138, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x160, "StructProperty"},
            {"InstanceData", 0x170, "StructProperty"},
            {"bStartLogicAutomatically", 0x180, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddLinkedStateTreeOverrides",
            "GetStateTreeRunStatus",
            "RemoveLinkedStateTreeOverrides",
            "SendStateTreeEvent",
            "SetStartLogicAutomatically",
            "SetStateTree",
            "SetStateTreeReference",
        }};
    };

    struct StateTreeComponentExecutionExtension
    {
        static constexpr std::string_view Name = "StateTreeComponentExecutionExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeExecutionExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Component", 0x8, "ObjectProperty"},
        }};
    };

    struct StateTreeComponentSchema
    {
        static constexpr std::string_view Name = "StateTreeComponentSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextActorClass = 0x28;
            static constexpr std::uintptr_t ScheduledTickPolicy = 0x30;
            static constexpr std::uintptr_t ContextDataDescs = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ContextActorClass", 0x28, "ClassProperty"},
            {"ScheduledTickPolicy", 0x30, "EnumProperty"},
            {"ContextDataDescs", 0x38, "ArrayProperty"},
        }};
    };

    struct StateTreeGetActorLocationPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeGetActorLocationPropertyFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreePropertyFunctionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t BindingsBatch = 0xC;
            static constexpr std::uintptr_t OutputBindingsBatch = 0xE;
            static constexpr std::uintptr_t InstanceTemplateIndex = 0x10;
            static constexpr std::uintptr_t ExecutionRuntimeTemplateIndex = 0x12;
            static constexpr std::uintptr_t InstanceDataHandle = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"BindingsBatch", 0xC, "StructProperty"},
            {"OutputBindingsBatch", 0xE, "StructProperty"},
            {"InstanceTemplateIndex", 0x10, "StructProperty"},
            {"ExecutionRuntimeTemplateIndex", 0x12, "StructProperty"},
            {"InstanceDataHandle", 0x14, "StructProperty"},
        }};
    };

    struct StateTreeGetActorLocationPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeGetActorLocationPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x0;
            static constexpr std::uintptr_t Output = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x0, "ObjectProperty"},
            {"Output", 0x8, "StructProperty"},
        }};
    };

    struct StateTreeMoveToTask
    {
        static constexpr std::string_view Name = "StateTreeMoveToTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeAIActionTaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bSavedShouldCallTick = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSavedShouldCallTick", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeMoveToTaskInstanceData
    {
        static constexpr std::string_view Name = "StateTreeMoveToTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AIController = 0x0;
            static constexpr std::uintptr_t Destination = 0x8;
            static constexpr std::uintptr_t TargetActor = 0x20;
            static constexpr std::uintptr_t AcceptableRadius = 0x28;
            static constexpr std::uintptr_t DestinationMoveTolerance = 0x2C;
            static constexpr std::uintptr_t FilterClass = 0x30;
            static constexpr std::uintptr_t bAllowStrafe = 0x38;
            static constexpr std::uintptr_t bAllowPartialPath = 0x39;
            static constexpr std::uintptr_t bTrackMovingGoal = 0x3A;
            static constexpr std::uintptr_t bRequireNavigableEndLocation = 0x3B;
            static constexpr std::uintptr_t bProjectGoalLocation = 0x3C;
            static constexpr std::uintptr_t bReachTestIncludesAgentRadius = 0x3D;
            static constexpr std::uintptr_t bReachTestIncludesGoalRadius = 0x3E;
            static constexpr std::uintptr_t MoveToTask = 0x40;
            static constexpr std::uintptr_t TaskOwner = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AIController", 0x0, "ObjectProperty"},
            {"Destination", 0x8, "StructProperty"},
            {"TargetActor", 0x20, "ObjectProperty"},
            {"AcceptableRadius", 0x28, "FloatProperty"},
            {"DestinationMoveTolerance", 0x2C, "FloatProperty"},
            {"FilterClass", 0x30, "ClassProperty"},
            {"bAllowStrafe", 0x38, "BoolProperty"},
            {"bAllowPartialPath", 0x39, "BoolProperty"},
            {"bTrackMovingGoal", 0x3A, "BoolProperty"},
            {"bRequireNavigableEndLocation", 0x3B, "BoolProperty"},
            {"bProjectGoalLocation", 0x3C, "BoolProperty"},
            {"bReachTestIncludesAgentRadius", 0x3D, "BoolProperty"},
            {"bReachTestIncludesGoalRadius", 0x3E, "BoolProperty"},
            {"MoveToTask", 0x40, "ObjectProperty"},
            {"TaskOwner", 0x48, "InterfaceProperty"},
        }};
    };

    struct StateTreeRunEnvQueryInstanceData
    {
        static constexpr std::string_view Name = "StateTreeRunEnvQueryInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x0;
            static constexpr std::uintptr_t QueryOwner = 0x8;
            static constexpr std::uintptr_t QueryTemplate = 0x10;
            static constexpr std::uintptr_t QueryConfig = 0x18;
            static constexpr std::uintptr_t RunMode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Result", 0x0, "StructProperty"},
            {"QueryOwner", 0x8, "ObjectProperty"},
            {"QueryTemplate", 0x10, "ObjectProperty"},
            {"QueryConfig", 0x18, "ArrayProperty"},
            {"RunMode", 0x28, "ByteProperty"},
        }};
    };

    struct StateTreeRunEnvQueryTask
    {
        static constexpr std::string_view Name = "StateTreeRunEnvQueryTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTaskEnabled = 0x20;
            static constexpr std::uintptr_t bHasTaskCompletionDelegateDispatcher = 0x21;
            static constexpr std::uintptr_t TransitionHandlingPriority = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTaskEnabled", 0x20, "BoolProperty"},
            {"bHasTaskCompletionDelegateDispatcher", 0x21, "BoolProperty"},
            {"TransitionHandlingPriority", 0x22, "EnumProperty"},
        }};
    };

}
