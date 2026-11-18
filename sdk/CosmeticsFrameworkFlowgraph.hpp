#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkFlowgraph
{
    struct CosmeticFlowData
    {
        static constexpr std::string_view Name = "CosmeticFlowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NamedData", 0x0, "MapProperty"},
        }};
    };

    struct CosmeticFlowGraphKey
    {
        static constexpr std::string_view Name = "CosmeticFlowGraphKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryTag = 0x0;
            static constexpr std::uintptr_t FlowTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CategoryTag", 0x0, "StructProperty"},
            {"FlowTag", 0x4, "StructProperty"},
        }};
    };

    struct CosmeticFlowOptionSetKey
    {
        static constexpr std::string_view Name = "CosmeticFlowOptionSetKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionSetTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OptionSetTag", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticFlowgraphKeyHelper
    {
        static constexpr std::string_view Name = "CosmeticFlowgraphKeyHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedFlowgraphKey = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstancedFlowgraphKey", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticFlowgraphState
    {
        static constexpr std::string_view Name = "CosmeticFlowgraphState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Builder = 0x0;
            static constexpr std::uintptr_t Steps = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Builder", 0x0, "ObjectProperty"},
            {"Steps", 0x8, "ArrayProperty"},
        }};
    };

    struct CosmeticStepDependencyBuilder
    {
        static constexpr std::string_view Name = "CosmeticStepDependencyBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ComputedStepSequence = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComputedStepSequence", 0x38, "StructProperty"},
        }};
    };

    struct CosmeticStepDetails
    {
        static constexpr std::string_view Name = "CosmeticStepDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticStepParentData
    {
        static constexpr std::string_view Name = "CosmeticStepParentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticsFlowgraphDebugger
    {
        static constexpr std::string_view Name = "CosmeticsFlowgraphDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticsFlowgraphManager
    {
        static constexpr std::string_view Name = "CosmeticsFlowgraphManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticCategories = 0x28;
            static constexpr std::uintptr_t AllocatedContexts = 0x38;
            static constexpr std::uintptr_t CosmeticFlowOptionSets = 0x48;
            static constexpr std::uintptr_t FlowgraphDebugger = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CosmeticCategories", 0x28, "MapProperty"},
            {"AllocatedContexts", 0x38, "ArrayProperty"},
            {"CosmeticFlowOptionSets", 0x48, "MapProperty"},
            {"FlowgraphDebugger", 0x70, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AreAllFlowsComplete",
            "GetFlowgraphManager",
        }};
    };

    struct CosmeticsFlowgraphManagerSource
    {
        static constexpr std::string_view Name = "CosmeticsFlowgraphManagerSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticsFlowgraphSubsystem
    {
        static constexpr std::string_view Name = "CosmeticsFlowgraphSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowManager = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowManager", 0x38, "ObjectProperty"},
        }};
    };

    struct CosmeticsPassCoreBehaviorFlagsState
    {
        static constexpr std::string_view Name = "CosmeticsPassCoreBehaviorFlagsState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OptInFlags = 0x0;
            static constexpr std::uintptr_t OptOutFlags = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OptInFlags", 0x0, "ArrayProperty"},
            {"OptOutFlags", 0x10, "ArrayProperty"},
        }};
    };

    struct CosmeticsStepSequenceContainer
    {
        static constexpr std::string_view Name = "CosmeticsStepSequenceContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StepCDOsByIndex = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StepCDOsByIndex", 0x50, "ArrayProperty"},
        }};
    };

    struct ExtensibilityPassContextEntry
    {
        static constexpr std::string_view Name = "ExtensibilityPassContextEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Context", 0x0, "ObjectProperty"},
        }};
    };

    struct FortCosmeticFlowNode
    {
        static constexpr std::string_view Name = "FortCosmeticFlowNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCosmeticFlowOption
    {
        static constexpr std::string_view Name = "FortCosmeticFlowOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticFlowNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCosmeticFlowOptionSet
    {
        static constexpr std::string_view Name = "FortCosmeticFlowOptionSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Options = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Options", 0x28, "ArrayProperty"},
        }};
    };

    struct FortCosmeticPassContext
    {
        static constexpr std::string_view Name = "FortCosmeticPassContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticStateStorage = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticStateStorage", 0x48, "StructProperty"},
        }};
    };

    struct FortCosmeticStep
    {
        static constexpr std::string_view Name = "FortCosmeticStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticFlowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct OperationSequenceHandle
    {
        static constexpr std::string_view Name = "OperationSequenceHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OrderedOperation
    {
        static constexpr std::string_view Name = "OrderedOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
