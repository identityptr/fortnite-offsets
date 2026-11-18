#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StateTreeModule
{
    struct CompactEventDesc
    {
        static constexpr std::string_view Name = "CompactEventDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PayloadStruct = 0x0;
            static constexpr std::uintptr_t Tag = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PayloadStruct", 0x0, "ObjectProperty"},
            {"Tag", 0x8, "StructProperty"},
        }};
    };

    struct CompactStateTransition
    {
        static constexpr std::string_view Name = "CompactStateTransition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredEvent = 0x0;
            static constexpr std::uintptr_t RequiredDelegateDispatcher = 0x10;
            static constexpr std::uintptr_t ConditionsBegin = 0x2C;
            static constexpr std::uintptr_t State = 0x2E;
            static constexpr std::uintptr_t Delay = 0x30;
            static constexpr std::uintptr_t Trigger = 0x34;
            static constexpr std::uintptr_t Priority = 0x35;
            static constexpr std::uintptr_t Fallback = 0x36;
            static constexpr std::uintptr_t ConditionsNum = 0x37;
            static constexpr std::uintptr_t ChangeTypeTargetStateRule = 0x38;
            static constexpr std::uintptr_t bConsumeEventOnSelect = 0x39;
            static constexpr std::uintptr_t bTransitionEnabled = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RequiredEvent", 0x0, "StructProperty"},
            {"RequiredDelegateDispatcher", 0x10, "StructProperty"},
            {"ConditionsBegin", 0x2C, "UInt16Property"},
            {"State", 0x2E, "StructProperty"},
            {"Delay", 0x30, "StructProperty"},
            {"Trigger", 0x34, "EnumProperty"},
            {"Priority", 0x35, "EnumProperty"},
            {"Fallback", 0x36, "EnumProperty"},
            {"ConditionsNum", 0x37, "ByteProperty"},
            {"ChangeTypeTargetStateRule", 0x38, "EnumProperty"},
            {"bConsumeEventOnSelect", 0x39, "BoolProperty"},
            {"bTransitionEnabled", 0x39, "BoolProperty"},
        }};
    };

    struct CompactStateTreeFrame
    {
        static constexpr std::string_view Name = "CompactStateTreeFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootState = 0x0;
            static constexpr std::uintptr_t NumberOfTasksStatusMasks = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootState", 0x0, "StructProperty"},
            {"NumberOfTasksStatusMasks", 0x2, "ByteProperty"},
        }};
    };

    struct CompactStateTreeParameters
    {
        static constexpr std::string_view Name = "CompactStateTreeParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x0;
            static constexpr std::uintptr_t InstancedParameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Parameters", 0x0, "StructProperty"},
            {"InstancedParameters", 0x10, "StructProperty"},
        }};
    };

    struct CompactStateTreeState
    {
        static constexpr std::string_view Name = "CompactStateTreeState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredEventToEnter = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t Tag = 0x14;
            static constexpr std::uintptr_t LinkedAsset = 0x30;
            static constexpr std::uintptr_t LinkedState = 0x38;
            static constexpr std::uintptr_t Parent = 0x3A;
            static constexpr std::uintptr_t ChildrenBegin = 0x3C;
            static constexpr std::uintptr_t ChildrenEnd = 0x3E;
            static constexpr std::uintptr_t EnterConditionsBegin = 0x40;
            static constexpr std::uintptr_t UtilityConsiderationsBegin = 0x42;
            static constexpr std::uintptr_t TransitionsBegin = 0x44;
            static constexpr std::uintptr_t TasksBegin = 0x46;
            static constexpr std::uintptr_t ParameterTemplateIndex = 0x48;
            static constexpr std::uintptr_t ParameterDataHandle = 0x4A;
            static constexpr std::uintptr_t ParameterBindingsBatch = 0x50;
            static constexpr std::uintptr_t EventDataIndex = 0x52;
            static constexpr std::uintptr_t Weight = 0x54;
            static constexpr std::uintptr_t CustomTickRate = 0x58;
            static constexpr std::uintptr_t CompletionTasksMask = 0x5C;
            static constexpr std::uintptr_t CompletionTasksMaskBufferIndex = 0x60;
            static constexpr std::uintptr_t CompletionTasksMaskBitsOffset = 0x61;
            static constexpr std::uintptr_t CompletionTasksNumberOfBits = 0x62;
            static constexpr std::uintptr_t CompletionTasksControl = 0x63;
            static constexpr std::uintptr_t EnterConditionsNum = 0x64;
            static constexpr std::uintptr_t UtilityConsiderationsNum = 0x65;
            static constexpr std::uintptr_t TransitionsNum = 0x66;
            static constexpr std::uintptr_t TasksNum = 0x67;
            static constexpr std::uintptr_t EnabledTasksNum = 0x68;
            static constexpr std::uintptr_t InstanceDataNum = 0x69;
            static constexpr std::uintptr_t Depth = 0x6A;
            static constexpr std::uintptr_t Type = 0x6B;
            static constexpr std::uintptr_t SelectionBehavior = 0x6C;
            static constexpr std::uintptr_t bCanOverrideLinkedAssetAtRuntime = 0x6D;
            static constexpr std::uintptr_t bHasStateChangeConditions = 0x6D;
            static constexpr std::uintptr_t bHasTickTriggerTransitions = 0x6D;
            static constexpr std::uintptr_t bHasTransitionTasks = 0x6D;
            static constexpr std::uintptr_t bCheckPrerequisitesWhenActivatingChildDirectly = 0x6E;
            static constexpr std::uintptr_t bConsumeEventOnSelect = 0x6E;
            static constexpr std::uintptr_t bEnabled = 0x6E;
            static constexpr std::uintptr_t bHasCompletedTriggerTransitions = 0x6E;
            static constexpr std::uintptr_t bHasDelegateTriggerTransitions = 0x6E;
            static constexpr std::uintptr_t bHasEventTriggerTransitions = 0x6E;
            static constexpr std::uintptr_t bHasFailedTriggerTransitions = 0x6E;
            static constexpr std::uintptr_t bHasSucceededTriggerTransitions = 0x6E;
            static constexpr std::uintptr_t bCopyParameterBindingsOnTick = 0x6F;
            static constexpr std::uintptr_t bHasCustomTickRate = 0x6F;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"RequiredEventToEnter", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"Tag", 0x14, "StructProperty"},
            {"LinkedAsset", 0x30, "ObjectProperty"},
            {"LinkedState", 0x38, "StructProperty"},
            {"Parent", 0x3A, "StructProperty"},
            {"ChildrenBegin", 0x3C, "UInt16Property"},
            {"ChildrenEnd", 0x3E, "UInt16Property"},
            {"EnterConditionsBegin", 0x40, "UInt16Property"},
            {"UtilityConsiderationsBegin", 0x42, "UInt16Property"},
            {"TransitionsBegin", 0x44, "UInt16Property"},
            {"TasksBegin", 0x46, "UInt16Property"},
            {"ParameterTemplateIndex", 0x48, "StructProperty"},
            {"ParameterDataHandle", 0x4A, "StructProperty"},
            {"ParameterBindingsBatch", 0x50, "StructProperty"},
            {"EventDataIndex", 0x52, "StructProperty"},
            {"Weight", 0x54, "FloatProperty"},
            {"CustomTickRate", 0x58, "FloatProperty"},
            {"CompletionTasksMask", 0x5C, "UInt32Property"},
            {"CompletionTasksMaskBufferIndex", 0x60, "ByteProperty"},
            {"CompletionTasksMaskBitsOffset", 0x61, "ByteProperty"},
            {"CompletionTasksNumberOfBits", 0x62, "ByteProperty"},
            {"CompletionTasksControl", 0x63, "EnumProperty"},
            {"EnterConditionsNum", 0x64, "ByteProperty"},
            {"UtilityConsiderationsNum", 0x65, "ByteProperty"},
            {"TransitionsNum", 0x66, "ByteProperty"},
            {"TasksNum", 0x67, "ByteProperty"},
            {"EnabledTasksNum", 0x68, "ByteProperty"},
            {"InstanceDataNum", 0x69, "ByteProperty"},
            {"Depth", 0x6A, "ByteProperty"},
            {"Type", 0x6B, "EnumProperty"},
            {"SelectionBehavior", 0x6C, "EnumProperty"},
            {"bCanOverrideLinkedAssetAtRuntime", 0x6D, "BoolProperty"},
            {"bHasStateChangeConditions", 0x6D, "BoolProperty"},
            {"bHasTickTriggerTransitions", 0x6D, "BoolProperty"},
            {"bHasTransitionTasks", 0x6D, "BoolProperty"},
            {"bCheckPrerequisitesWhenActivatingChildDirectly", 0x6E, "BoolProperty"},
            {"bConsumeEventOnSelect", 0x6E, "BoolProperty"},
            {"bEnabled", 0x6E, "BoolProperty"},
            {"bHasCompletedTriggerTransitions", 0x6E, "BoolProperty"},
            {"bHasDelegateTriggerTransitions", 0x6E, "BoolProperty"},
            {"bHasEventTriggerTransitions", 0x6E, "BoolProperty"},
            {"bHasFailedTriggerTransitions", 0x6E, "BoolProperty"},
            {"bHasSucceededTriggerTransitions", 0x6E, "BoolProperty"},
            {"bCopyParameterBindingsOnTick", 0x6F, "BoolProperty"},
            {"bHasCustomTickRate", 0x6F, "BoolProperty"},
        }};
    };

    struct ExecutionFrameHandle
    {
        static constexpr std::string_view Name = "ExecutionFrameHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t RootState = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateTree", 0x0, "ObjectProperty"},
            {"RootState", 0x8, "StructProperty"},
        }};
    };

    struct ExecutionRuntimeData
    {
        static constexpr std::string_view Name = "ExecutionRuntimeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instances = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instances", 0x8, "StructProperty"},
        }};
    };

    struct GameplayTagContainerMatchCondition
    {
        static constexpr std::string_view Name = "GameplayTagContainerMatchCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchType = 0x28;
            static constexpr std::uintptr_t bExactMatch = 0x29;
            static constexpr std::uintptr_t bInvert = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MatchType", 0x28, "EnumProperty"},
            {"bExactMatch", 0x29, "BoolProperty"},
            {"bInvert", 0x2A, "BoolProperty"},
        }};
    };

    struct GameplayTagContainerMatchConditionInstanceData
    {
        static constexpr std::string_view Name = "GameplayTagContainerMatchConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagContainer = 0x0;
            static constexpr std::uintptr_t OtherContainer = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagContainer", 0x0, "StructProperty"},
            {"OtherContainer", 0x20, "StructProperty"},
        }};
    };

    struct GameplayTagMatchCondition
    {
        static constexpr std::string_view Name = "GameplayTagMatchCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bExactMatch = 0x28;
            static constexpr std::uintptr_t bInvert = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bExactMatch", 0x28, "BoolProperty"},
            {"bInvert", 0x29, "BoolProperty"},
        }};
    };

    struct GameplayTagMatchConditionInstanceData
    {
        static constexpr std::string_view Name = "GameplayTagMatchConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagContainer = 0x0;
            static constexpr std::uintptr_t Tag = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagContainer", 0x0, "StructProperty"},
            {"Tag", 0x20, "StructProperty"},
        }};
    };

    struct GameplayTagQueryCondition
    {
        static constexpr std::string_view Name = "GameplayTagQueryCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQuery = 0x28;
            static constexpr std::uintptr_t bInvert = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagQuery", 0x28, "StructProperty"},
            {"bInvert", 0x70, "BoolProperty"},
        }};
    };

    struct GameplayTagQueryConditionInstanceData
    {
        static constexpr std::string_view Name = "GameplayTagQueryConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagContainer = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagContainer", 0x0, "StructProperty"},
        }};
    };

    struct GameplayTagSingleMatchCondition
    {
        static constexpr std::string_view Name = "GameplayTagSingleMatchCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bExactMatch = 0x28;
            static constexpr std::uintptr_t bInvert = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bExactMatch", 0x28, "BoolProperty"},
            {"bInvert", 0x29, "BoolProperty"},
        }};
    };

    struct GameplayTagSingleMatchConditionInstanceData
    {
        static constexpr std::string_view Name = "GameplayTagSingleMatchConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "StructProperty"},
            {"Right", 0x4, "StructProperty"},
        }};
    };

    struct InstanceContainer
    {
        static constexpr std::string_view Name = "InstanceContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceStructs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceStructs", 0x0, "StructProperty"},
        }};
    };

    struct RecordedActiveState
    {
        static constexpr std::string_view Name = "RecordedActiveState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t State = 0x8;
            static constexpr std::uintptr_t EventIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTree", 0x0, "ObjectProperty"},
            {"State", 0x8, "StructProperty"},
            {"EventIndex", 0xC, "IntProperty"},
        }};
    };

    struct RecordedStateTreeExecutionFrame
    {
        static constexpr std::string_view Name = "RecordedStateTreeExecutionFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t RootState = 0x8;
            static constexpr std::uintptr_t ActiveStates = 0xC;
            static constexpr std::uintptr_t bIsGlobalFrame = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StateTree", 0x0, "ObjectProperty"},
            {"RootState", 0x8, "StructProperty"},
            {"ActiveStates", 0xC, "StructProperty"},
            {"bIsGlobalFrame", 0x40, "BoolProperty"},
        }};
    };

    struct RecordedStateTreeTransitionResult
    {
        static constexpr std::string_view Name = "RecordedStateTreeTransitionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t States = 0x0;
            static constexpr std::uintptr_t Events = 0x10;
            static constexpr std::uintptr_t Priority = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"States", 0x0, "ArrayProperty"},
            {"Events", 0x10, "ArrayProperty"},
            {"Priority", 0x20, "EnumProperty"},
        }};
    };

    struct StateTree
    {
        static constexpr std::string_view Name = "StateTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t LastCompiledEditorDataHash = 0x28;
            static constexpr std::uintptr_t Schema = 0x30;
            static constexpr std::uintptr_t Frames = 0x38;
            static constexpr std::uintptr_t States = 0x48;
            static constexpr std::uintptr_t Transitions = 0x58;
            static constexpr std::uintptr_t Nodes = 0x68;
            static constexpr std::uintptr_t DefaultInstanceData = 0x78;
            static constexpr std::uintptr_t DefaultEvaluationScopeInstanceData = 0x88;
            static constexpr std::uintptr_t DefaultExecutionRuntimeData = 0x98;
            static constexpr std::uintptr_t SharedInstanceData = 0xA8;
            static constexpr std::uintptr_t ContextDataDescs = 0xD0;
            static constexpr std::uintptr_t PropertyBindings = 0xE0;
            static constexpr std::uintptr_t TaskCompletionDispatchers = 0x1F0;
            static constexpr std::uintptr_t Extensions = 0x200;
            static constexpr std::uintptr_t IDToStateMappings = 0x210;
            static constexpr std::uintptr_t IDToNodeMappings = 0x220;
            static constexpr std::uintptr_t IDToTransitionMappings = 0x230;
            static constexpr std::uintptr_t Parameters = 0x240;
            static constexpr std::uintptr_t ExternalDataDescs = 0x250;
            static constexpr std::uintptr_t CompletionGlobalTasksMask = 0x260;
            static constexpr std::uintptr_t NumContextData = 0x264;
            static constexpr std::uintptr_t NumGlobalInstanceData = 0x266;
            static constexpr std::uintptr_t EvaluatorsBegin = 0x268;
            static constexpr std::uintptr_t EvaluatorsNum = 0x26A;
            static constexpr std::uintptr_t GlobalTasksBegin = 0x26C;
            static constexpr std::uintptr_t GlobalTasksNum = 0x26E;
            static constexpr std::uintptr_t CompletionGlobalTasksControl = 0x274;
            static constexpr std::uintptr_t ParameterDataType = 0x275;
            static constexpr std::uintptr_t bHasGlobalTransitionTasks = 0x277;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"LastCompiledEditorDataHash", 0x28, "UInt32Property"},
            {"Schema", 0x30, "ObjectProperty"},
            {"Frames", 0x38, "ArrayProperty"},
            {"States", 0x48, "ArrayProperty"},
            {"Transitions", 0x58, "ArrayProperty"},
            {"Nodes", 0x68, "StructProperty"},
            {"DefaultInstanceData", 0x78, "StructProperty"},
            {"DefaultEvaluationScopeInstanceData", 0x88, "StructProperty"},
            {"DefaultExecutionRuntimeData", 0x98, "StructProperty"},
            {"SharedInstanceData", 0xA8, "StructProperty"},
            {"ContextDataDescs", 0xD0, "ArrayProperty"},
            {"PropertyBindings", 0xE0, "StructProperty"},
            {"TaskCompletionDispatchers", 0x1F0, "ArrayProperty"},
            {"Extensions", 0x200, "ArrayProperty"},
            {"IDToStateMappings", 0x210, "ArrayProperty"},
            {"IDToNodeMappings", 0x220, "ArrayProperty"},
            {"IDToTransitionMappings", 0x230, "ArrayProperty"},
            {"Parameters", 0x240, "StructProperty"},
            {"ExternalDataDescs", 0x250, "ArrayProperty"},
            {"CompletionGlobalTasksMask", 0x260, "UInt32Property"},
            {"NumContextData", 0x264, "UInt16Property"},
            {"NumGlobalInstanceData", 0x266, "UInt16Property"},
            {"EvaluatorsBegin", 0x268, "UInt16Property"},
            {"EvaluatorsNum", 0x26A, "UInt16Property"},
            {"GlobalTasksBegin", 0x26C, "UInt16Property"},
            {"GlobalTasksNum", 0x26E, "UInt16Property"},
            {"CompletionGlobalTasksControl", 0x274, "EnumProperty"},
            {"ParameterDataType", 0x275, "EnumProperty"},
            {"bHasGlobalTransitionTasks", 0x277, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "K2_GetExtension",
        }};
    };

    struct StateTreeAbsoluteFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeAbsoluteFloatPropertyFunction";
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

    struct StateTreeAbsoluteIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeAbsoluteIntPropertyFunction";
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

    struct StateTreeActiveStates
    {
        static constexpr std::string_view Name = "StateTreeActiveStates";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t States = 0x20;
            static constexpr std::uintptr_t NumStates = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"States", 0x20, "StructProperty"},
            {"NumStates", 0x30, "ByteProperty"},
        }};
    };

    struct StateTreeAddFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeAddFloatPropertyFunction";
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

    struct StateTreeAddIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeAddIntPropertyFunction";
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

    struct StateTreeAnyEnum
    {
        static constexpr std::string_view Name = "StateTreeAnyEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Enum = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "UInt32Property"},
            {"Enum", 0x8, "ObjectProperty"},
        }};
    };

    struct StateTreeBindableStructDesc
    {
        static constexpr std::string_view Name = "StateTreeBindableStructDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PropertyBindingBindableStructDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t DataHandle = 0x18;
            static constexpr std::uintptr_t DataSource = 0x1E;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataHandle", 0x18, "StructProperty"},
            {"DataSource", 0x1E, "EnumProperty"},
        }};
    };

    struct StateTreeBlueprintConditionWrapper
    {
        static constexpr std::string_view Name = "StateTreeBlueprintConditionWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConditionClass", 0x28, "ClassProperty"},
        }};
    };

    struct StateTreeBlueprintConsiderationWrapper
    {
        static constexpr std::string_view Name = "StateTreeBlueprintConsiderationWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConsiderationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsiderationClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConsiderationClass", 0x28, "ClassProperty"},
        }};
    };

    struct StateTreeBlueprintEvaluatorWrapper
    {
        static constexpr std::string_view Name = "StateTreeBlueprintEvaluatorWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeEvaluatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluatorClass = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EvaluatorClass", 0x20, "ClassProperty"},
        }};
    };

    struct StateTreeBlueprintPropertyRef
    {
        static constexpr std::string_view Name = "StateTreeBlueprintPropertyRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreePropertyRef";
        struct Offsets
        {
            static constexpr std::uintptr_t RefType = 0x2;
            static constexpr std::uintptr_t bIsOptional = 0x3;
            static constexpr std::uintptr_t bIsRefToArray = 0x3;
            static constexpr std::uintptr_t TypeObject = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RefType", 0x2, "EnumProperty"},
            {"bIsOptional", 0x3, "BoolProperty"},
            {"bIsRefToArray", 0x3, "BoolProperty"},
            {"TypeObject", 0x8, "ObjectProperty"},
        }};
    };

    struct StateTreeBlueprintTaskWrapper
    {
        static constexpr std::string_view Name = "StateTreeBlueprintTaskWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TaskClass = 0x28;
            static constexpr std::uintptr_t TaskFlags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TaskClass", 0x28, "ClassProperty"},
            {"TaskFlags", 0x30, "ByteProperty"},
        }};
    };

    struct StateTreeBooleanAndPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeBooleanAndPropertyFunction";
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

    struct StateTreeBooleanNotOperationPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeBooleanNotOperationPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bInput = 0x0;
            static constexpr std::uintptr_t bResult = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInput", 0x0, "BoolProperty"},
            {"bResult", 0x1, "BoolProperty"},
        }};
    };

    struct StateTreeBooleanNotPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeBooleanNotPropertyFunction";
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

    struct StateTreeBooleanOperationPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeBooleanOperationPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bLeft = 0x0;
            static constexpr std::uintptr_t bRight = 0x1;
            static constexpr std::uintptr_t bResult = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bLeft", 0x0, "BoolProperty"},
            {"bRight", 0x1, "BoolProperty"},
            {"bResult", 0x2, "BoolProperty"},
        }};
    };

    struct StateTreeBooleanOrPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeBooleanOrPropertyFunction";
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

    struct StateTreeBooleanXOrPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeBooleanXOrPropertyFunction";
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

    struct StateTreeBreakTransformPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeBreakTransformPropertyFunction";
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

    struct StateTreeBreakTransformPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeBreakTransformPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InTransform = 0x0;
            static constexpr std::uintptr_t OutTranslation = 0x60;
            static constexpr std::uintptr_t OutRotation = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InTransform", 0x0, "StructProperty"},
            {"OutTranslation", 0x60, "StructProperty"},
            {"OutRotation", 0x80, "StructProperty"},
        }};
    };

    struct StateTreeCompareBoolCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareBoolCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeCompareBoolConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareBoolConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bLeft = 0x0;
            static constexpr std::uintptr_t bRight = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bLeft", 0x0, "BoolProperty"},
            {"bRight", 0x1, "BoolProperty"},
        }};
    };

    struct StateTreeCompareDistanceCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareDistanceCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
            static constexpr std::uintptr_t Operator = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
            {"Operator", 0x29, "EnumProperty"},
        }};
    };

    struct StateTreeCompareDistanceConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareDistanceConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t Target = 0x18;
            static constexpr std::uintptr_t Distance = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x0, "StructProperty"},
            {"Target", 0x18, "StructProperty"},
            {"Distance", 0x30, "DoubleProperty"},
        }};
    };

    struct StateTreeCompareEnumCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareEnumCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeCompareEnumConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareEnumConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "StructProperty"},
            {"Right", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeCompareFloatCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareFloatCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
            static constexpr std::uintptr_t Operator = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
            {"Operator", 0x29, "EnumProperty"},
        }};
    };

    struct StateTreeCompareFloatConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareFloatConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "DoubleProperty"},
            {"Right", 0x8, "DoubleProperty"},
        }};
    };

    struct StateTreeCompareIntCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareIntCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
            static constexpr std::uintptr_t Operator = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
            {"Operator", 0x29, "EnumProperty"},
        }};
    };

    struct StateTreeCompareIntConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareIntConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "IntProperty"},
            {"Right", 0x4, "IntProperty"},
        }};
    };

    struct StateTreeCompareNameCondition
    {
        static constexpr std::string_view Name = "StateTreeCompareNameCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeCompareNameConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeCompareNameConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "NameProperty"},
            {"Right", 0x4, "NameProperty"},
        }};
    };

    struct StateTreeConditionBase
    {
        static constexpr std::string_view Name = "StateTreeConditionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeNodeBase";
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

    struct StateTreeConditionBlueprintBase
    {
        static constexpr std::string_view Name = "StateTreeConditionBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeNodeBlueprintBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReceiveTestCondition",
        }};
    };

    struct StateTreeConditionCommonBase
    {
        static constexpr std::string_view Name = "StateTreeConditionCommonBase";
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

    struct StateTreeConsiderationBase
    {
        static constexpr std::string_view Name = "StateTreeConsiderationBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeNodeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operand = 0x20;
            static constexpr std::uintptr_t DeltaIndent = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operand", 0x20, "EnumProperty"},
            {"DeltaIndent", 0x21, "Int8Property"},
        }};
    };

    struct StateTreeConsiderationBlueprintBase
    {
        static constexpr std::string_view Name = "StateTreeConsiderationBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeNodeBlueprintBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReceiveGetScore",
        }};
    };

    struct StateTreeConsiderationCommonBase
    {
        static constexpr std::string_view Name = "StateTreeConsiderationCommonBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConsiderationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operand = 0x20;
            static constexpr std::uintptr_t DeltaIndent = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operand", 0x20, "EnumProperty"},
            {"DeltaIndent", 0x21, "Int8Property"},
        }};
    };

    struct StateTreeConsiderationResponseCurve
    {
        static constexpr std::string_view Name = "StateTreeConsiderationResponseCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveInfo = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurveInfo", 0x0, "StructProperty"},
        }};
    };

    struct StateTreeConstantConsideration
    {
        static constexpr std::string_view Name = "StateTreeConstantConsideration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConsiderationCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operand = 0x20;
            static constexpr std::uintptr_t DeltaIndent = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operand", 0x20, "EnumProperty"},
            {"DeltaIndent", 0x21, "Int8Property"},
        }};
    };

    struct StateTreeConstantConsiderationInstanceData
    {
        static constexpr std::string_view Name = "StateTreeConstantConsiderationInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Constant = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Constant", 0x0, "FloatProperty"},
        }};
    };

    struct StateTreeDataHandle
    {
        static constexpr std::string_view Name = "StateTreeDataHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t Index = 0x2;
            static constexpr std::uintptr_t StateHandle = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x0, "EnumProperty"},
            {"Index", 0x2, "UInt16Property"},
            {"StateHandle", 0x4, "StructProperty"},
        }};
    };

    struct StateTreeDebugTextTask
    {
        static constexpr std::string_view Name = "StateTreeDebugTextTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x28;
            static constexpr std::uintptr_t TextColor = 0x38;
            static constexpr std::uintptr_t FontScale = 0x3C;
            static constexpr std::uintptr_t Offset = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text", 0x28, "StrProperty"},
            {"TextColor", 0x38, "StructProperty"},
            {"FontScale", 0x3C, "FloatProperty"},
            {"Offset", 0x40, "StructProperty"},
        }};
    };

    struct StateTreeDebugTextTaskInstanceData
    {
        static constexpr std::string_view Name = "StateTreeDebugTextTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t ReferenceActor = 0x8;
            static constexpr std::uintptr_t BindableText = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"ReferenceActor", 0x8, "ObjectProperty"},
            {"BindableText", 0x10, "StrProperty"},
        }};
    };

    struct StateTreeDelayTask
    {
        static constexpr std::string_view Name = "StateTreeDelayTask";
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

    struct StateTreeDelayTaskInstanceData
    {
        static constexpr std::string_view Name = "StateTreeDelayTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x0;
            static constexpr std::uintptr_t RandomDeviation = 0x4;
            static constexpr std::uintptr_t bRunForever = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"duration", 0x0, "FloatProperty"},
            {"RandomDeviation", 0x4, "FloatProperty"},
            {"bRunForever", 0x8, "BoolProperty"},
        }};
    };

    struct StateTreeDelegateDispatcher
    {
        static constexpr std::string_view Name = "StateTreeDelegateDispatcher";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "StructProperty"},
        }};
    };

    struct StateTreeDelegateListener
    {
        static constexpr std::string_view Name = "StateTreeDelegateListener";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dispatcher = 0x0;
            static constexpr std::uintptr_t ID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Dispatcher", 0x0, "StructProperty"},
            {"ID", 0x10, "IntProperty"},
        }};
    };

    struct StateTreeDivideFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeDivideFloatPropertyFunction";
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

    struct StateTreeDivideIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeDivideIntPropertyFunction";
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

    struct StateTreeEditorPropertyPath
    {
        static constexpr std::string_view Name = "StateTreeEditorPropertyPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeEnumInputConsideration
    {
        static constexpr std::string_view Name = "StateTreeEnumInputConsideration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConsiderationCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumValueScorePairs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnumValueScorePairs", 0x28, "StructProperty"},
        }};
    };

    struct StateTreeEnumInputConsiderationInstanceData
    {
        static constexpr std::string_view Name = "StateTreeEnumInputConsiderationInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Input", 0x0, "StructProperty"},
        }};
    };

    struct StateTreeEnumValueScorePair
    {
        static constexpr std::string_view Name = "StateTreeEnumValueScorePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumValue = 0x0;
            static constexpr std::uintptr_t Score = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnumValue", 0x0, "Int64Property"},
            {"Score", 0x8, "FloatProperty"},
        }};
    };

    struct StateTreeEnumValueScorePairs
    {
        static constexpr std::string_view Name = "StateTreeEnumValueScorePairs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x0, "ArrayProperty"},
        }};
    };

    struct StateTreeEvaluatorBase
    {
        static constexpr std::string_view Name = "StateTreeEvaluatorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeNodeBase";
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

    struct StateTreeEvaluatorBlueprintBase
    {
        static constexpr std::string_view Name = "StateTreeEvaluatorBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeNodeBlueprintBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ReceiveTick",
            "ReceiveTreeStart",
            "ReceiveTreeStop",
        }};
    };

    struct StateTreeEvaluatorCommonBase
    {
        static constexpr std::string_view Name = "StateTreeEvaluatorCommonBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeEvaluatorBase";
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

    struct StateTreeEvent
    {
        static constexpr std::string_view Name = "StateTreeEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x0;
            static constexpr std::uintptr_t Payload = 0x8;
            static constexpr std::uintptr_t origin = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x0, "StructProperty"},
            {"Payload", 0x8, "StructProperty"},
            {"origin", 0x18, "NameProperty"},
        }};
    };

    struct StateTreeEventQueue
    {
        static constexpr std::string_view Name = "StateTreeEventQueue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedEvents = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedEvents", 0x0, "ArrayProperty"},
        }};
    };

    struct StateTreeExecutionExtension
    {
        static constexpr std::string_view Name = "StateTreeExecutionExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeExecutionFrame
    {
        static constexpr std::string_view Name = "StateTreeExecutionFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t ActiveTasksStatus = 0x8;
            static constexpr std::uintptr_t ActiveStates = 0x18;
            static constexpr std::uintptr_t StateParameterDataHandle = 0x4C;
            static constexpr std::uintptr_t GlobalParameterDataHandle = 0x52;
            static constexpr std::uintptr_t RootState = 0x68;
            static constexpr std::uintptr_t ExternalDataBaseIndex = 0x6C;
            static constexpr std::uintptr_t GlobalInstanceIndexBase = 0x6E;
            static constexpr std::uintptr_t GlobalParameterIndexBase = 0x70;
            static constexpr std::uintptr_t StateParameterIndexBase = 0x72;
            static constexpr std::uintptr_t ActiveInstanceIndexBase = 0x74;
            static constexpr std::uintptr_t ExecutionRuntimeIndexBase = 0x76;
            static constexpr std::uintptr_t bHaveEntered = 0x78;
            static constexpr std::uintptr_t bIsGlobalFrame = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"StateTree", 0x0, "ObjectProperty"},
            {"ActiveTasksStatus", 0x8, "StructProperty"},
            {"ActiveStates", 0x18, "StructProperty"},
            {"StateParameterDataHandle", 0x4C, "StructProperty"},
            {"GlobalParameterDataHandle", 0x52, "StructProperty"},
            {"RootState", 0x68, "StructProperty"},
            {"ExternalDataBaseIndex", 0x6C, "StructProperty"},
            {"GlobalInstanceIndexBase", 0x6E, "StructProperty"},
            {"GlobalParameterIndexBase", 0x70, "StructProperty"},
            {"StateParameterIndexBase", 0x72, "StructProperty"},
            {"ActiveInstanceIndexBase", 0x74, "StructProperty"},
            {"ExecutionRuntimeIndexBase", 0x76, "StructProperty"},
            {"bHaveEntered", 0x78, "BoolProperty"},
            {"bIsGlobalFrame", 0x78, "BoolProperty"},
        }};
    };

    struct StateTreeExecutionState
    {
        static constexpr std::string_view Name = "StateTreeExecutionState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveFrames = 0x0;
            static constexpr std::uintptr_t DelayedTransitions = 0x10;
            static constexpr std::uintptr_t RandomStream = 0x20;
            static constexpr std::uintptr_t ExecutionExtension = 0x58;
            static constexpr std::uintptr_t LastTickStatus = 0x68;
            static constexpr std::uintptr_t TreeRunStatus = 0x69;
            static constexpr std::uintptr_t RequestedStop = 0x6A;
            static constexpr std::uintptr_t CurrentPhase = 0x6B;
            static constexpr std::uintptr_t StateChangeCount = 0x6C;
            static constexpr std::uintptr_t bHasPendingCompletedState = 0x6E;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ActiveFrames", 0x0, "ArrayProperty"},
            {"DelayedTransitions", 0x10, "ArrayProperty"},
            {"RandomStream", 0x20, "StructProperty"},
            {"ExecutionExtension", 0x58, "StructProperty"},
            {"LastTickStatus", 0x68, "EnumProperty"},
            {"TreeRunStatus", 0x69, "EnumProperty"},
            {"RequestedStop", 0x6A, "EnumProperty"},
            {"CurrentPhase", 0x6B, "EnumProperty"},
            {"StateChangeCount", 0x6C, "UInt16Property"},
            {"bHasPendingCompletedState", 0x6E, "BoolProperty"},
        }};
    };

    struct StateTreeExtension
    {
        static constexpr std::string_view Name = "StateTreeExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeExternalDataDesc
    {
        static constexpr std::string_view Name = "StateTreeExternalDataDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Handle = 0xC;
            static constexpr std::uintptr_t Requirement = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Struct", 0x0, "ObjectProperty"},
            {"Name", 0x8, "NameProperty"},
            {"Handle", 0xC, "StructProperty"},
            {"Requirement", 0x12, "EnumProperty"},
        }};
    };

    struct StateTreeExternalDataHandle
    {
        static constexpr std::string_view Name = "StateTreeExternalDataHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataHandle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataHandle", 0x0, "StructProperty"},
        }};
    };

    struct StateTreeFloatCombinaisonPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeFloatCombinaisonPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Left", 0x0, "FloatProperty"},
            {"Right", 0x4, "FloatProperty"},
            {"Result", 0x8, "FloatProperty"},
        }};
    };

    struct StateTreeFloatInputConsideration
    {
        static constexpr std::string_view Name = "StateTreeFloatInputConsideration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConsiderationCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ResponseCurve = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResponseCurve", 0x28, "StructProperty"},
        }};
    };

    struct StateTreeFloatInputConsiderationInstanceData
    {
        static constexpr std::string_view Name = "StateTreeFloatInputConsiderationInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x0;
            static constexpr std::uintptr_t Interval = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x0, "FloatProperty"},
            {"Interval", 0x4, "StructProperty"},
        }};
    };

    struct StateTreeFunctionLibrary
    {
        static constexpr std::string_view Name = "StateTreeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "K2_GetParametersProperty",
            "K2_SetParametersProperty",
            "MakeStateTreeReference",
            "SetStateTree",
        }};
    };

    struct StateTreeIndex16
    {
        static constexpr std::string_view Name = "StateTreeIndex16";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt16Property"},
        }};
    };

    struct StateTreeIndex8
    {
        static constexpr std::string_view Name = "StateTreeIndex8";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ByteProperty"},
        }};
    };

    struct StateTreeInstanceData
    {
        static constexpr std::string_view Name = "StateTreeInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeInstanceObjectWrapper
    {
        static constexpr std::string_view Name = "StateTreeInstanceObjectWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceObject = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceObject", 0x0, "ObjectProperty"},
        }};
    };

    struct StateTreeInstanceStorage
    {
        static constexpr std::string_view Name = "StateTreeInstanceStorage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceStructs = 0x0;
            static constexpr std::uintptr_t ExecutionState = 0x10;
            static constexpr std::uintptr_t ExecutionRuntimeData = 0x80;
            static constexpr std::uintptr_t TemporaryInstances = 0xB0;
            static constexpr std::uintptr_t TransitionRequests = 0xE0;
            static constexpr std::uintptr_t GlobalParameters = 0xF0;
            static constexpr std::uintptr_t UniqueIdGenerator = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InstanceStructs", 0x0, "StructProperty"},
            {"ExecutionState", 0x10, "StructProperty"},
            {"ExecutionRuntimeData", 0x80, "StructProperty"},
            {"TemporaryInstances", 0xB0, "ArrayProperty"},
            {"TransitionRequests", 0xE0, "ArrayProperty"},
            {"GlobalParameters", 0xF0, "StructProperty"},
            {"UniqueIdGenerator", 0x100, "UInt32Property"},
        }};
    };

    struct StateTreeIntCombinaisonPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeIntCombinaisonPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x4;
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Left", 0x0, "IntProperty"},
            {"Right", 0x4, "IntProperty"},
            {"Result", 0x8, "IntProperty"},
        }};
    };

    struct StateTreeInvertFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeInvertFloatPropertyFunction";
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

    struct StateTreeInvertIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeInvertIntPropertyFunction";
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

    struct StateTreeMakeIntervalPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeMakeIntervalPropertyFunction";
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

    struct StateTreeMakeIntervalPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeMakeIntervalPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x4;
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "FloatProperty"},
            {"max", 0x4, "FloatProperty"},
            {"Result", 0x8, "StructProperty"},
        }};
    };

    struct StateTreeMakeTransformPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeMakeTransformPropertyFunction";
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

    struct StateTreeMakeTransformPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeMakeTransformPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InTranslation = 0x0;
            static constexpr std::uintptr_t InRotation = 0x20;
            static constexpr std::uintptr_t OutTransform = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InTranslation", 0x0, "StructProperty"},
            {"InRotation", 0x20, "StructProperty"},
            {"OutTransform", 0x40, "StructProperty"},
        }};
    };

    struct StateTreeMultiplyFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeMultiplyFloatPropertyFunction";
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

    struct StateTreeMultiplyIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeMultiplyIntPropertyFunction";
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

    struct StateTreeNodeBase
    {
        static constexpr std::string_view Name = "StateTreeNodeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
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

    struct StateTreeNodeBlueprintBase
    {
        static constexpr std::string_view Name = "StateTreeNodeBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetPropertyDescriptionByPropertyName",
            "GetPropertyReference",
            "IsPropertyRefValid",
            "ReceiveGetDescription",
            "RequestTransition",
            "SendEvent",
        }};
    };

    struct StateTreeNodeIdToIndex
    {
        static constexpr std::string_view Name = "StateTreeNodeIdToIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Index = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Index", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeObjectEqualsCondition
    {
        static constexpr std::string_view Name = "StateTreeObjectEqualsCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeObjectEqualsConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeObjectEqualsConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "ObjectProperty"},
            {"Right", 0x8, "ObjectProperty"},
        }};
    };

    struct StateTreeObjectIsChildOfClassCondition
    {
        static constexpr std::string_view Name = "StateTreeObjectIsChildOfClassCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeObjectIsChildOfClassConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeObjectIsChildOfClassConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t Class = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Object", 0x0, "ObjectProperty"},
            {"Class", 0x8, "ClassProperty"},
        }};
    };

    struct StateTreeObjectIsValidCondition
    {
        static constexpr std::string_view Name = "StateTreeObjectIsValidCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x28, "BoolProperty"},
        }};
    };

    struct StateTreeObjectIsValidConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeObjectIsValidConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Object", 0x0, "ObjectProperty"},
        }};
    };

    struct StateTreePropertyAccess
    {
        static constexpr std::string_view Name = "StateTreePropertyAccess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceIndirection = 0x0;
            static constexpr std::uintptr_t SourceStructType = 0x20;
            static constexpr std::uintptr_t SourceDataHandle = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceIndirection", 0x0, "StructProperty"},
            {"SourceStructType", 0x20, "ObjectProperty"},
            {"SourceDataHandle", 0x28, "StructProperty"},
        }};
    };

    struct StateTreePropertyBindings
    {
        static constexpr std::string_view Name = "StateTreePropertyBindings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PropertyBindingBindingCollection";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceStructs = 0xC0;
            static constexpr std::uintptr_t PropertyPathBindings = 0xD0;
            static constexpr std::uintptr_t PropertyReferencePaths = 0xE0;
            static constexpr std::uintptr_t PropertyAccesses = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceStructs", 0xC0, "ArrayProperty"},
            {"PropertyPathBindings", 0xD0, "ArrayProperty"},
            {"PropertyReferencePaths", 0xE0, "ArrayProperty"},
            {"PropertyAccesses", 0xF0, "ArrayProperty"},
        }};
    };

    struct StateTreePropertyFunctionBase
    {
        static constexpr std::string_view Name = "StateTreePropertyFunctionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeNodeBase";
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

    struct StateTreePropertyFunctionCommonBase
    {
        static constexpr std::string_view Name = "StateTreePropertyFunctionCommonBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreePropertyFunctionBase";
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

    struct StateTreePropertyPathBinding
    {
        static constexpr std::string_view Name = "StateTreePropertyPathBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PropertyBindingBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceDataHandle = 0x28;
            static constexpr std::uintptr_t bIsOutputBinding = 0x2E;
            static constexpr std::uintptr_t TaskCompletionCondition = 0x2F;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceDataHandle", 0x28, "StructProperty"},
            {"bIsOutputBinding", 0x2E, "BoolProperty"},
            {"TaskCompletionCondition", 0x2F, "OptionalProperty"},
        }};
    };

    struct StateTreePropertyRef
    {
        static constexpr std::string_view Name = "StateTreePropertyRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RefAccessIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RefAccessIndex", 0x0, "StructProperty"},
        }};
    };

    struct StateTreePropertyRefPath
    {
        static constexpr std::string_view Name = "StateTreePropertyRefPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePropertyPath = 0x0;
            static constexpr std::uintptr_t SourceDataHandle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourcePropertyPath", 0x0, "StructProperty"},
            {"SourceDataHandle", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeRandomCondition
    {
        static constexpr std::string_view Name = "StateTreeRandomCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionCommonBase";
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

    struct StateTreeRandomConditionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeRandomConditionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Threshold = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Threshold", 0x0, "FloatProperty"},
        }};
    };

    struct StateTreeRandomTimeDuration
    {
        static constexpr std::string_view Name = "StateTreeRandomTimeDuration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x0;
            static constexpr std::uintptr_t RandomVariance = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"duration", 0x0, "UInt16Property"},
            {"RandomVariance", 0x2, "UInt16Property"},
        }};
    };

    struct StateTreeReference
    {
        static constexpr std::string_view Name = "StateTreeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t Parameters = 0x8;
            static constexpr std::uintptr_t PropertyOverrides = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTree", 0x0, "ObjectProperty"},
            {"Parameters", 0x8, "StructProperty"},
            {"PropertyOverrides", 0x18, "ArrayProperty"},
        }};
    };

    struct StateTreeReferenceOverrideItem
    {
        static constexpr std::string_view Name = "StateTreeReferenceOverrideItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTag = 0x0;
            static constexpr std::uintptr_t StateTreeReference = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateTag", 0x0, "StructProperty"},
            {"StateTreeReference", 0x8, "StructProperty"},
        }};
    };

    struct StateTreeReferenceOverrides
    {
        static constexpr std::string_view Name = "StateTreeReferenceOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideItems = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideItems", 0x0, "ArrayProperty"},
        }};
    };

    struct StateTreeRunParallelStateTreeExecutionExtension
    {
        static constexpr std::string_view Name = "StateTreeRunParallelStateTreeExecutionExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeExecutionExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeRunParallelStateTreeTask
    {
        static constexpr std::string_view Name = "StateTreeRunParallelStateTreeTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskCommonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeOverrideTag = 0x28;
            static constexpr std::uintptr_t bShouldCopyParametersOnTick = 0x2C;
            static constexpr std::uintptr_t bShouldCopyParametersOnExitState = 0x2D;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTreeOverrideTag", 0x28, "StructProperty"},
            {"bShouldCopyParametersOnTick", 0x2C, "BoolProperty"},
            {"bShouldCopyParametersOnExitState", 0x2D, "BoolProperty"},
        }};
    };

    struct StateTreeRunParallelStateTreeTaskInstanceData
    {
        static constexpr std::string_view Name = "StateTreeRunParallelStateTreeTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x0;
            static constexpr std::uintptr_t TreeInstanceData = 0x28;
            static constexpr std::uintptr_t RunningStateTree = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTree", 0x0, "StructProperty"},
            {"TreeInstanceData", 0x28, "StructProperty"},
            {"RunningStateTree", 0x38, "ObjectProperty"},
        }};
    };

    struct StateTreeScheduledTick
    {
        static constexpr std::string_view Name = "StateTreeScheduledTick";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NextDeltaTime = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NextDeltaTime", 0x0, "FloatProperty"},
        }};
    };

    struct StateTreeSchema
    {
        static constexpr std::string_view Name = "StateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeSchemaProvider
    {
        static constexpr std::string_view Name = "StateTreeSchemaProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeSettings
    {
        static constexpr std::string_view Name = "StateTreeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoStartDebuggerTracesOnNonEditorTargets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAutoStartDebuggerTracesOnNonEditorTargets", 0x30, "BoolProperty"},
        }};
    };

    struct StateTreeSharedEvent
    {
        static constexpr std::string_view Name = "StateTreeSharedEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeSingleFloatPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeSingleFloatPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x0;
            static constexpr std::uintptr_t Result = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x0, "FloatProperty"},
            {"Result", 0x4, "FloatProperty"},
        }};
    };

    struct StateTreeSingleIntPropertyFunctionInstanceData
    {
        static constexpr std::string_view Name = "StateTreeSingleIntPropertyFunctionInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x0;
            static constexpr std::uintptr_t Result = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x0, "IntProperty"},
            {"Result", 0x4, "IntProperty"},
        }};
    };

    struct StateTreeStateHandle
    {
        static constexpr std::string_view Name = "StateTreeStateHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "UInt16Property"},
        }};
    };

    struct StateTreeStateIdToHandle
    {
        static constexpr std::string_view Name = "StateTreeStateIdToHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Handle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Handle", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeStateLink
    {
        static constexpr std::string_view Name = "StateTreeStateLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateHandle = 0x0;
            static constexpr std::uintptr_t Fallback = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateHandle", 0x0, "StructProperty"},
            {"Fallback", 0x2, "EnumProperty"},
        }};
    };

    struct StateTreeStructRef
    {
        static constexpr std::string_view Name = "StateTreeStructRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeSubtractFloatPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeSubtractFloatPropertyFunction";
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

    struct StateTreeSubtractIntPropertyFunction
    {
        static constexpr std::string_view Name = "StateTreeSubtractIntPropertyFunction";
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

    struct StateTreeTaskBase
    {
        static constexpr std::string_view Name = "StateTreeTaskBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeNodeBase";
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

    struct StateTreeTaskBlueprintBase
    {
        static constexpr std::string_view Name = "StateTreeTaskBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeNodeBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldCallTickOnlyOnEvents = 0x69;
            static constexpr std::uintptr_t bShouldCopyBoundPropertiesOnExitState = 0x69;
            static constexpr std::uintptr_t bShouldCopyBoundPropertiesOnTick = 0x69;
            static constexpr std::uintptr_t bShouldStateChangeOnReselect = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShouldCallTickOnlyOnEvents", 0x69, "BoolProperty"},
            {"bShouldCopyBoundPropertiesOnExitState", 0x69, "BoolProperty"},
            {"bShouldCopyBoundPropertiesOnTick", 0x69, "BoolProperty"},
            {"bShouldStateChangeOnReselect", 0x69, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "BindDelegate",
            "BroadcastDelegate",
            "FinishTask",
            "ReceiveEnterState",
            "ReceiveExitState",
            "ReceiveLatentEnterState",
            "ReceiveLatentTick",
            "ReceiveStateCompleted",
            "ReceiveTick",
            "UnbindDelegate",
        }};
    };

    struct StateTreeTaskCommonBase
    {
        static constexpr std::string_view Name = "StateTreeTaskCommonBase";
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

    struct StateTreeTasksCompletionStatus
    {
        static constexpr std::string_view Name = "StateTreeTasksCompletionStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTreeTemporaryInstanceData
    {
        static constexpr std::string_view Name = "StateTreeTemporaryInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataHandle = 0x4;
            static constexpr std::uintptr_t OwnerNodeIndex = 0xA;
            static constexpr std::uintptr_t Instance = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataHandle", 0x4, "StructProperty"},
            {"OwnerNodeIndex", 0xA, "StructProperty"},
            {"Instance", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeTransitionDelayedState
    {
        static constexpr std::string_view Name = "StateTreeTransitionDelayedState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x8;
            static constexpr std::uintptr_t CapturedEvent = 0x10;
            static constexpr std::uintptr_t TimeLeft = 0x20;
            static constexpr std::uintptr_t CapturedEventHash = 0x24;
            static constexpr std::uintptr_t StateHandle = 0x28;
            static constexpr std::uintptr_t TransitionIndex = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StateTree", 0x8, "ObjectProperty"},
            {"CapturedEvent", 0x10, "StructProperty"},
            {"TimeLeft", 0x20, "FloatProperty"},
            {"CapturedEventHash", 0x24, "UInt32Property"},
            {"StateHandle", 0x28, "StructProperty"},
            {"TransitionIndex", 0x2A, "StructProperty"},
        }};
    };

    struct StateTreeTransitionIdToIndex
    {
        static constexpr std::string_view Name = "StateTreeTransitionIdToIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Index = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Index", 0x10, "StructProperty"},
        }};
    };

    struct StateTreeTransitionRequest
    {
        static constexpr std::string_view Name = "StateTreeTransitionRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetState = 0x0;
            static constexpr std::uintptr_t Priority = 0x2;
            static constexpr std::uintptr_t Fallback = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetState", 0x0, "StructProperty"},
            {"Priority", 0x2, "EnumProperty"},
            {"Fallback", 0x3, "EnumProperty"},
        }};
    };

    struct StateTreeTransitionResult
    {
        static constexpr std::string_view Name = "StateTreeTransitionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetState = 0x8;
            static constexpr std::uintptr_t CurrentState = 0xA;
            static constexpr std::uintptr_t CurrentRunStatus = 0xC;
            static constexpr std::uintptr_t ChangeType = 0xD;
            static constexpr std::uintptr_t Priority = 0xE;
            static constexpr std::uintptr_t NextActiveFrames = 0x10;
            static constexpr std::uintptr_t SourceStateTree = 0x30;
            static constexpr std::uintptr_t SourceRootState = 0x38;
            static constexpr std::uintptr_t SourceState = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TargetState", 0x8, "StructProperty"},
            {"CurrentState", 0xA, "StructProperty"},
            {"CurrentRunStatus", 0xC, "EnumProperty"},
            {"ChangeType", 0xD, "EnumProperty"},
            {"Priority", 0xE, "EnumProperty"},
            {"NextActiveFrames", 0x10, "ArrayProperty"},
            {"SourceStateTree", 0x30, "ObjectProperty"},
            {"SourceRootState", 0x38, "StructProperty"},
            {"SourceState", 0x3A, "StructProperty"},
        }};
    };

    struct StateTreeTransitionSource
    {
        static constexpr std::string_view Name = "StateTreeTransitionSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TaskCompletionDispatcher
    {
        static constexpr std::string_view Name = "TaskCompletionDispatcher";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dispatcher = 0x0;
            static constexpr std::uintptr_t TaskNodeIndex = 0x10;
            static constexpr std::uintptr_t Condition = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Dispatcher", 0x0, "StructProperty"},
            {"TaskNodeIndex", 0x10, "StructProperty"},
            {"Condition", 0x12, "EnumProperty"},
        }};
    };

}
