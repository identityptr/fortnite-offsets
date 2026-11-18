#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WorldConditions
{
    struct WorldConditionBase
    {
        static constexpr std::string_view Name = "WorldConditionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0xB;
            static constexpr std::uintptr_t Operator = 0xC;
            static constexpr std::uintptr_t NextExpressionDepth = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInvert", 0xB, "BoolProperty"},
            {"Operator", 0xC, "EnumProperty"},
            {"NextExpressionDepth", 0xD, "ByteProperty"},
        }};
    };

    struct WorldConditionCommonActorBase
    {
        static constexpr std::string_view Name = "WorldConditionCommonActorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "WorldConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0xB;
            static constexpr std::uintptr_t Operator = 0xC;
            static constexpr std::uintptr_t NextExpressionDepth = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInvert", 0xB, "BoolProperty"},
            {"Operator", 0xC, "EnumProperty"},
            {"NextExpressionDepth", 0xD, "ByteProperty"},
        }};
    };

    struct WorldConditionCommonBase
    {
        static constexpr std::string_view Name = "WorldConditionCommonBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "WorldConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0xB;
            static constexpr std::uintptr_t Operator = 0xC;
            static constexpr std::uintptr_t NextExpressionDepth = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInvert", 0xB, "BoolProperty"},
            {"Operator", 0xC, "EnumProperty"},
            {"NextExpressionDepth", 0xD, "ByteProperty"},
        }};
    };

    struct WorldConditionContextDataDesc
    {
        static constexpr std::string_view Name = "WorldConditionContextDataDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Struct", 0x0, "ObjectProperty"},
            {"Name", 0x8, "NameProperty"},
            {"Type", 0xC, "EnumProperty"},
        }};
    };

    struct WorldConditionContextDataRef
    {
        static constexpr std::string_view Name = "WorldConditionContextDataRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Index = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Index", 0x4, "ByteProperty"},
        }};
    };

    struct WorldConditionEditable
    {
        static constexpr std::string_view Name = "WorldConditionEditable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExpressionDepth = 0x0;
            static constexpr std::uintptr_t Operator = 0x1;
            static constexpr std::uintptr_t bInvert = 0x2;
            static constexpr std::uintptr_t Condition = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExpressionDepth", 0x0, "ByteProperty"},
            {"Operator", 0x1, "EnumProperty"},
            {"bInvert", 0x2, "BoolProperty"},
            {"Condition", 0x8, "StructProperty"},
        }};
    };

    struct WorldConditionItem
    {
        static constexpr std::string_view Name = "WorldConditionItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldConditionQuery
    {
        static constexpr std::string_view Name = "WorldConditionQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryDefinition = 0x0;
            static constexpr std::uintptr_t QueryState = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QueryDefinition", 0x0, "StructProperty"},
            {"QueryState", 0x28, "StructProperty"},
        }};
    };

    struct WorldConditionQueryDefinition
    {
        static constexpr std::string_view Name = "WorldConditionQueryDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedDefinition = 0x0;
            static constexpr std::uintptr_t SchemaClass = 0x10;
            static constexpr std::uintptr_t EditableConditions = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SharedDefinition", 0x0, "StructProperty"},
            {"SchemaClass", 0x10, "ClassProperty"},
            {"EditableConditions", 0x18, "ArrayProperty"},
        }};
    };

    struct WorldConditionQuerySharedDefinition
    {
        static constexpr std::string_view Name = "WorldConditionQuerySharedDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x0;
            static constexpr std::uintptr_t SchemaClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Conditions", 0x0, "StructProperty"},
            {"SchemaClass", 0x10, "ClassProperty"},
        }};
    };

    struct WorldConditionQueryState
    {
        static constexpr std::string_view Name = "WorldConditionQueryState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x28, "ObjectProperty"},
        }};
    };

    struct WorldConditionResult
    {
        static constexpr std::string_view Name = "WorldConditionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t bCanBeCached = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "EnumProperty"},
            {"bCanBeCached", 0x1, "BoolProperty"},
        }};
    };

    struct WorldConditionSchema
    {
        static constexpr std::string_view Name = "WorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct WorldConditionStateObject
    {
        static constexpr std::string_view Name = "WorldConditionStateObject";
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

}
