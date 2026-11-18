#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RigVM
{
    struct DataAssetLink
    {
        static constexpr std::string_view Name = "DataAssetLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NameSpacedUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t DataAsset = 0x80;
            static constexpr std::uintptr_t DataAssetCached = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataAsset", 0x80, "SoftObjectProperty"},
            {"DataAssetCached", 0xA0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDataAsset",
            "SetDataAsset",
        }};
    };

    struct MathRBFInterpolateQuatColor_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateQuatColor_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateQuatFloat_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateQuatFloat_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "FloatProperty"},
        }};
    };

    struct MathRBFInterpolateQuatQuat_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateQuatQuat_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateQuatVector_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateQuatVector_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateQuatXform_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateQuatXform_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateVectorColor_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateVectorColor_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateVectorFloat_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateVectorFloat_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x18, "FloatProperty"},
        }};
    };

    struct MathRBFInterpolateVectorQuat_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateVectorQuat_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateVectorVector_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateVectorVector_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct MathRBFInterpolateVectorXform_Target
    {
        static constexpr std::string_view Name = "MathRBFInterpolateVectorXform_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct NameSpacedUserData
    {
        static constexpr std::string_view Name = "NameSpacedUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Namespace", 0x28, "StrProperty"},
        }};
    };

    struct RigDispatch_FromString
    {
        static constexpr std::string_view Name = "RigDispatch_FromString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_ToString
    {
        static constexpr std::string_view Name = "RigDispatch_ToString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVM
    {
        static constexpr std::string_view Name = "RigVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LiteralMemoryStorage = 0x28;
            static constexpr std::uintptr_t DefaultWorkMemoryStorage = 0x78;
            static constexpr std::uintptr_t DefaultDebugMemoryStorage = 0xC8;
            static constexpr std::uintptr_t ByteCodeStorage = 0x138;
            static constexpr std::uintptr_t Instructions = 0x1C8;
            static constexpr std::uintptr_t FunctionNamesStorage = 0x1D8;
            static constexpr std::uintptr_t Parameters = 0x220;
            static constexpr std::uintptr_t CachedVMHash = 0x2B8;
            static constexpr std::uintptr_t CachedCanonicalVMHash = 0x2BC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LiteralMemoryStorage", 0x28, "StructProperty"},
            {"DefaultWorkMemoryStorage", 0x78, "StructProperty"},
            {"DefaultDebugMemoryStorage", 0xC8, "StructProperty"},
            {"ByteCodeStorage", 0x138, "StructProperty"},
            {"Instructions", 0x1C8, "StructProperty"},
            {"FunctionNamesStorage", 0x1D8, "ArrayProperty"},
            {"Parameters", 0x220, "ArrayProperty"},
            {"CachedVMHash", 0x2B8, "UInt32Property"},
            {"CachedCanonicalVMHash", 0x2BC, "UInt32Property"},
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "AddRigVMFunction",
            "Execute",
            "GetParameterValueBool",
            "GetParameterValueDouble",
            "GetParameterValueFloat",
            "GetParameterValueInt",
            "GetParameterValueName",
            "GetParameterValueQuat",
            "GetParameterValueString",
            "GetParameterValueTransform",
            "GetParameterValueVector",
            "GetParameterValueVector2D",
            "GetRigVMFunctionName",
            "GetStatistics",
            "SetParameterValueBool",
            "SetParameterValueDouble",
            "SetParameterValueFloat",
            "SetParameterValueInt",
            "SetParameterValueName",
            "SetParameterValueQuat",
            "SetParameterValueString",
            "SetParameterValueTransform",
            "SetParameterValueVector",
            "SetParameterValueVector2D",
        }};
    };

    struct RigVMBaseOp
    {
        static constexpr std::string_view Name = "RigVMBaseOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMBinaryOp
    {
        static constexpr std::string_view Name = "RigVMBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMBlueprintGeneratedClass
    {
        static constexpr std::string_view Name = "RigVMBlueprintGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphFunctionStore = 0x2C0;
            static constexpr std::uintptr_t SupportedEventNames = 0x2E0;
            static constexpr std::uintptr_t AssetVariant = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GraphFunctionStore", 0x2C0, "StructProperty"},
            {"SupportedEventNames", 0x2E0, "ArrayProperty"},
            {"AssetVariant", 0x2F0, "StructProperty"},
        }};
    };

    struct RigVMBranchInfo
    {
        static constexpr std::string_view Name = "RigVMBranchInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t Label = 0x4;
            static constexpr std::uintptr_t InstructionIndex = 0x8;
            static constexpr std::uintptr_t ArgumentIndex = 0xC;
            static constexpr std::uintptr_t FirstInstruction = 0x10;
            static constexpr std::uintptr_t LastInstruction = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"Label", 0x4, "NameProperty"},
            {"InstructionIndex", 0x8, "IntProperty"},
            {"ArgumentIndex", 0xC, "IntProperty"},
            {"FirstInstruction", 0x10, "IntProperty"},
            {"LastInstruction", 0x14, "IntProperty"},
        }};
    };

    struct RigVMByteCode
    {
        static constexpr std::string_view Name = "RigVMByteCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ByteCode = 0x0;
            static constexpr std::uintptr_t NumInstructions = 0x10;
            static constexpr std::uintptr_t Entries = 0x18;
            static constexpr std::uintptr_t BranchInfos = 0x28;
            static constexpr std::uintptr_t PredicateBranches = 0x38;
            static constexpr std::uintptr_t CallableInfos = 0x48;
            static constexpr std::uintptr_t PublicContextAssetPath = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ByteCode", 0x0, "ArrayProperty"},
            {"NumInstructions", 0x10, "IntProperty"},
            {"Entries", 0x18, "ArrayProperty"},
            {"BranchInfos", 0x28, "ArrayProperty"},
            {"PredicateBranches", 0x38, "ArrayProperty"},
            {"CallableInfos", 0x48, "ArrayProperty"},
            {"PublicContextAssetPath", 0x58, "StructProperty"},
        }};
    };

    struct RigVMByteCodeEntry
    {
        static constexpr std::string_view Name = "RigVMByteCodeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t InstructionIndex = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"InstructionIndex", 0x4, "IntProperty"},
        }};
    };

    struct RigVMByteCodeStatistics
    {
        static constexpr std::string_view Name = "RigVMByteCodeStatistics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstructionCount = 0x0;
            static constexpr std::uintptr_t DataBytes = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstructionCount", 0x0, "IntProperty"},
            {"DataBytes", 0x4, "IntProperty"},
        }};
    };

    struct RigVMCallableArgument
    {
        static constexpr std::string_view Name = "RigVMCallableArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeString = 0x8;
            static constexpr std::uintptr_t InterfaceOperand = 0x18;
            static constexpr std::uintptr_t ForwardedOperand = 0x1E;
            static constexpr std::uintptr_t Direction = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeString", 0x8, "StrProperty"},
            {"InterfaceOperand", 0x18, "StructProperty"},
            {"ForwardedOperand", 0x1E, "StructProperty"},
            {"Direction", 0x24, "EnumProperty"},
        }};
    };

    struct RigVMCallableInfo
    {
        static constexpr std::string_view Name = "RigVMCallableInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t FunctionHash = 0x8;
            static constexpr std::uintptr_t Arguments = 0x10;
            static constexpr std::uintptr_t FirstInstruction = 0x20;
            static constexpr std::uintptr_t LastInstruction = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"Name", 0x4, "NameProperty"},
            {"FunctionHash", 0x8, "UInt32Property"},
            {"Arguments", 0x10, "ArrayProperty"},
            {"FirstInstruction", 0x20, "IntProperty"},
            {"LastInstruction", 0x24, "IntProperty"},
        }};
    };

    struct RigVMChangeTypeOp
    {
        static constexpr std::string_view Name = "RigVMChangeTypeOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMUnaryOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMComparisonOp
    {
        static constexpr std::string_view Name = "RigVMComparisonOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMCopyOp
    {
        static constexpr std::string_view Name = "RigVMCopyOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDebugDrawSettings
    {
        static constexpr std::string_view Name = "RigVMDebugDrawSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DepthPriority = 0x0;
            static constexpr std::uintptr_t Lifetime = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DepthPriority", 0x0, "ByteProperty"},
            {"Lifetime", 0x4, "FloatProperty"},
        }};
    };

    struct RigVMDebugInfo
    {
        static constexpr std::string_view Name = "RigVMDebugInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatchFactory
    {
        static constexpr std::string_view Name = "RigVMDispatchFactory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayAdd
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArraySetAtIndex";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayAppend
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayAppend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayBase
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayBaseMutable
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayClone
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayClone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayDifference
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayDifference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayFind
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayFind";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayGetAtIndex
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayGetAtIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayGetNum
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayGetNum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayInit
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayInit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayInsert
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayInsert";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArraySetAtIndex";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayIntersection
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayIntersection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayDifference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayIsEmpty
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayIsEmpty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayIterator
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayIterator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayMake
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayRemove
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayRemove";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayReset
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayReset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayReverse
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayReverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayReset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArraySetAtIndex
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArraySetAtIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArraySetNum
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArraySetNum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayBaseMutable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_ArrayUnion
    {
        static constexpr std::string_view Name = "RigVMDispatch_ArrayUnion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_ArrayAppend";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_BreakStruct
    {
        static constexpr std::string_view Name = "RigVMDispatch_BreakStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_MakeStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CastEnumToInt
    {
        static constexpr std::string_view Name = "RigVMDispatch_CastEnumToInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CastIntToEnum
    {
        static constexpr std::string_view Name = "RigVMDispatch_CastIntToEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CastObject
    {
        static constexpr std::string_view Name = "RigVMDispatch_CastObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_Constant
    {
        static constexpr std::string_view Name = "RigVMDispatch_Constant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CoreBase
    {
        static constexpr std::string_view Name = "RigVMDispatch_CoreBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CoreEquals
    {
        static constexpr std::string_view Name = "RigVMDispatch_CoreEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CoreNotEquals
    {
        static constexpr std::string_view Name = "RigVMDispatch_CoreNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreEquals";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_If
    {
        static constexpr std::string_view Name = "RigVMDispatch_If";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_MakeStruct
    {
        static constexpr std::string_view Name = "RigVMDispatch_MakeStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_Print
    {
        static constexpr std::string_view Name = "RigVMDispatch_Print";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_SelectInt32
    {
        static constexpr std::string_view Name = "RigVMDispatch_SelectInt32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_SwitchBase
    {
        static constexpr std::string_view Name = "RigVMDispatch_SwitchBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CoreBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_SwitchEnum
    {
        static constexpr std::string_view Name = "RigVMDispatch_SwitchEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_SwitchBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_SwitchInt32
    {
        static constexpr std::string_view Name = "RigVMDispatch_SwitchInt32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_SwitchBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDrawContainer
    {
        static constexpr std::string_view Name = "RigVMDrawContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instructions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instructions", 0x8, "ArrayProperty"},
        }};
    };

    struct RigVMDrawInstruction
    {
        static constexpr std::string_view Name = "RigVMDrawInstruction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t PrimitiveType = 0x4;
            static constexpr std::uintptr_t Positions = 0x8;
            static constexpr std::uintptr_t Color = 0x18;
            static constexpr std::uintptr_t Thickness = 0x28;
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t DepthPriority = 0x90;
            static constexpr std::uintptr_t Lifetime = 0x94;
            static constexpr std::uintptr_t Text = 0x98;
            static constexpr std::uintptr_t FontScale = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"PrimitiveType", 0x4, "ByteProperty"},
            {"Positions", 0x8, "ArrayProperty"},
            {"Color", 0x18, "StructProperty"},
            {"Thickness", 0x28, "FloatProperty"},
            {"Transform", 0x30, "StructProperty"},
            {"DepthPriority", 0x90, "ByteProperty"},
            {"Lifetime", 0x94, "FloatProperty"},
            {"Text", 0x98, "StrProperty"},
            {"FontScale", 0xA8, "FloatProperty"},
        }};
    };

    struct RigVMDrawInterface
    {
        static constexpr std::string_view Name = "RigVMDrawInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDrawContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t Instructions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instructions", 0x8, "ArrayProperty"},
        }};
    };

    struct RigVMEditorSettings
    {
        static constexpr std::string_view Name = "RigVMEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExecuteContext
    {
        static constexpr std::string_view Name = "RigVMExecuteContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMExecutePin";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExecuteOp
    {
        static constexpr std::string_view Name = "RigVMExecuteOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMInvokeCallableOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExecutePin
    {
        static constexpr std::string_view Name = "RigVMExecutePin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExtendedExecuteContext
    {
        static constexpr std::string_view Name = "RigVMExtendedExecuteContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExternalVariable
    {
        static constexpr std::string_view Name = "RigVMExternalVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMExternalVariableDef";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMExternalVariableDef
    {
        static constexpr std::string_view Name = "RigVMExternalVariableDef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMForwardedMemoryHandle
    {
        static constexpr std::string_view Name = "RigVMForwardedMemoryHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFourPointBezier
    {
        static constexpr std::string_view Name = "RigVMFourPointBezier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x0;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t C = 0x30;
            static constexpr std::uintptr_t D = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x0, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"C", 0x30, "StructProperty"},
            {"D", 0x48, "StructProperty"},
        }};
    };

    struct RigVMFunctionCompilationData
    {
        static constexpr std::string_view Name = "RigVMFunctionCompilationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ByteCode = 0x0;
            static constexpr std::uintptr_t FunctionNames = 0x78;
            static constexpr std::uintptr_t WorkPropertyDescriptions = 0x88;
            static constexpr std::uintptr_t WorkPropertyPathDescriptions = 0x98;
            static constexpr std::uintptr_t LiteralPropertyDescriptions = 0xA8;
            static constexpr std::uintptr_t LiteralPropertyPathDescriptions = 0xB8;
            static constexpr std::uintptr_t DebugPropertyDescriptions = 0xC8;
            static constexpr std::uintptr_t DebugPropertyPathDescriptions = 0xD8;
            static constexpr std::uintptr_t ExternalPropertyDescriptions = 0xE8;
            static constexpr std::uintptr_t ExternalPropertyPathDescriptions = 0xF8;
            static constexpr std::uintptr_t ExternalRegisterIndexToVariable = 0x108;
            static constexpr std::uintptr_t Operands = 0x118;
            static constexpr std::uintptr_t InterfaceOperands = 0x128;
            static constexpr std::uintptr_t Hash = 0x138;
            static constexpr std::uintptr_t bEncounteredSurpressedErrors = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ByteCode", 0x0, "StructProperty"},
            {"FunctionNames", 0x78, "ArrayProperty"},
            {"WorkPropertyDescriptions", 0x88, "ArrayProperty"},
            {"WorkPropertyPathDescriptions", 0x98, "ArrayProperty"},
            {"LiteralPropertyDescriptions", 0xA8, "ArrayProperty"},
            {"LiteralPropertyPathDescriptions", 0xB8, "ArrayProperty"},
            {"DebugPropertyDescriptions", 0xC8, "ArrayProperty"},
            {"DebugPropertyPathDescriptions", 0xD8, "ArrayProperty"},
            {"ExternalPropertyDescriptions", 0xE8, "ArrayProperty"},
            {"ExternalPropertyPathDescriptions", 0xF8, "ArrayProperty"},
            {"ExternalRegisterIndexToVariable", 0x108, "MapProperty"},
            {"Operands", 0x118, "MapProperty"},
            {"InterfaceOperands", 0x128, "MapProperty"},
            {"Hash", 0x138, "UInt32Property"},
            {"bEncounteredSurpressedErrors", 0x13C, "BoolProperty"},
        }};
    };

    struct RigVMFunctionCompilationPropertyDescription
    {
        static constexpr std::string_view Name = "RigVMFunctionCompilationPropertyDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t CPPType = 0x8;
            static constexpr std::uintptr_t CPPTypeObject = 0x18;
            static constexpr std::uintptr_t DefaultValue = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"CPPType", 0x8, "StrProperty"},
            {"CPPTypeObject", 0x18, "SoftObjectProperty"},
            {"DefaultValue", 0x38, "StrProperty"},
        }};
    };

    struct RigVMFunctionCompilationPropertyPath
    {
        static constexpr std::string_view Name = "RigVMFunctionCompilationPropertyPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyIndex = 0x0;
            static constexpr std::uintptr_t HeadCPPType = 0x8;
            static constexpr std::uintptr_t SegmentPath = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyIndex", 0x0, "IntProperty"},
            {"HeadCPPType", 0x8, "StrProperty"},
            {"SegmentPath", 0x18, "StrProperty"},
        }};
    };

    struct RigVMFunction_AccumulateBase
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_AccumulateFloatAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateFloatAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Increment = 0x8;
            static constexpr std::uintptr_t InitialValue = 0xC;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
            static constexpr std::uintptr_t AccumulatedValue = 0x18;
            static constexpr std::uintptr_t bIsInitialized = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Increment", 0x8, "FloatProperty"},
            {"InitialValue", 0xC, "FloatProperty"},
            {"bIntegrateDeltaTime", 0x10, "BoolProperty"},
            {"Result", 0x14, "FloatProperty"},
            {"AccumulatedValue", 0x18, "FloatProperty"},
            {"bIsInitialized", 0x1C, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateFloatLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateFloatLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetValue = 0x8;
            static constexpr std::uintptr_t InitialValue = 0xC;
            static constexpr std::uintptr_t Blend = 0x10;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t AccumulatedValue = 0x1C;
            static constexpr std::uintptr_t bIsInitialized = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetValue", 0x8, "FloatProperty"},
            {"InitialValue", 0xC, "FloatProperty"},
            {"Blend", 0x10, "FloatProperty"},
            {"bIntegrateDeltaTime", 0x14, "BoolProperty"},
            {"Result", 0x18, "FloatProperty"},
            {"AccumulatedValue", 0x1C, "FloatProperty"},
            {"bIsInitialized", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateFloatMul
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateFloatMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Multiplier = 0x8;
            static constexpr std::uintptr_t InitialValue = 0xC;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
            static constexpr std::uintptr_t AccumulatedValue = 0x18;
            static constexpr std::uintptr_t bIsInitialized = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Multiplier", 0x8, "FloatProperty"},
            {"InitialValue", 0xC, "FloatProperty"},
            {"bIntegrateDeltaTime", 0x10, "BoolProperty"},
            {"Result", 0x14, "FloatProperty"},
            {"AccumulatedValue", 0x18, "FloatProperty"},
            {"bIsInitialized", 0x1C, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateFloatRange
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateFloatRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t AccumulatedMinimum = 0x14;
            static constexpr std::uintptr_t AccumulatedMaximum = 0x18;
            static constexpr std::uintptr_t bIsInitialized = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Minimum", 0xC, "FloatProperty"},
            {"Maximum", 0x10, "FloatProperty"},
            {"AccumulatedMinimum", 0x14, "FloatProperty"},
            {"AccumulatedMaximum", 0x18, "FloatProperty"},
            {"bIsInitialized", 0x1C, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateQuatLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateQuatLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetValue = 0x10;
            static constexpr std::uintptr_t InitialValue = 0x30;
            static constexpr std::uintptr_t Blend = 0x50;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x54;
            static constexpr std::uintptr_t Result = 0x60;
            static constexpr std::uintptr_t AccumulatedValue = 0x80;
            static constexpr std::uintptr_t bIsInitialized = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetValue", 0x10, "StructProperty"},
            {"InitialValue", 0x30, "StructProperty"},
            {"Blend", 0x50, "FloatProperty"},
            {"bIntegrateDeltaTime", 0x54, "BoolProperty"},
            {"Result", 0x60, "StructProperty"},
            {"AccumulatedValue", 0x80, "StructProperty"},
            {"bIsInitialized", 0xA0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateQuatMul
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateQuatMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Multiplier = 0x10;
            static constexpr std::uintptr_t InitialValue = 0x30;
            static constexpr std::uintptr_t bFlipOrder = 0x50;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x51;
            static constexpr std::uintptr_t Result = 0x60;
            static constexpr std::uintptr_t AccumulatedValue = 0x80;
            static constexpr std::uintptr_t bIsInitialized = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Multiplier", 0x10, "StructProperty"},
            {"InitialValue", 0x30, "StructProperty"},
            {"bFlipOrder", 0x50, "BoolProperty"},
            {"bIntegrateDeltaTime", 0x51, "BoolProperty"},
            {"Result", 0x60, "StructProperty"},
            {"AccumulatedValue", 0x80, "StructProperty"},
            {"bIsInitialized", 0xA0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateTransformLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateTransformLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetValue = 0x10;
            static constexpr std::uintptr_t InitialValue = 0x70;
            static constexpr std::uintptr_t Blend = 0xD0;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0xD4;
            static constexpr std::uintptr_t Result = 0xE0;
            static constexpr std::uintptr_t AccumulatedValue = 0x140;
            static constexpr std::uintptr_t bIsInitialized = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetValue", 0x10, "StructProperty"},
            {"InitialValue", 0x70, "StructProperty"},
            {"Blend", 0xD0, "FloatProperty"},
            {"bIntegrateDeltaTime", 0xD4, "BoolProperty"},
            {"Result", 0xE0, "StructProperty"},
            {"AccumulatedValue", 0x140, "StructProperty"},
            {"bIsInitialized", 0x1A0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateTransformMul
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateTransformMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Multiplier = 0x10;
            static constexpr std::uintptr_t InitialValue = 0x70;
            static constexpr std::uintptr_t bFlipOrder = 0xD0;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0xD1;
            static constexpr std::uintptr_t Result = 0xE0;
            static constexpr std::uintptr_t AccumulatedValue = 0x140;
            static constexpr std::uintptr_t bIsInitialized = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Multiplier", 0x10, "StructProperty"},
            {"InitialValue", 0x70, "StructProperty"},
            {"bFlipOrder", 0xD0, "BoolProperty"},
            {"bIntegrateDeltaTime", 0xD1, "BoolProperty"},
            {"Result", 0xE0, "StructProperty"},
            {"AccumulatedValue", 0x140, "StructProperty"},
            {"bIsInitialized", 0x1A0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateVectorAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateVectorAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Increment = 0x8;
            static constexpr std::uintptr_t InitialValue = 0x20;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x38;
            static constexpr std::uintptr_t Result = 0x40;
            static constexpr std::uintptr_t AccumulatedValue = 0x58;
            static constexpr std::uintptr_t bIsInitialized = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Increment", 0x8, "StructProperty"},
            {"InitialValue", 0x20, "StructProperty"},
            {"bIntegrateDeltaTime", 0x38, "BoolProperty"},
            {"Result", 0x40, "StructProperty"},
            {"AccumulatedValue", 0x58, "StructProperty"},
            {"bIsInitialized", 0x70, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateVectorLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateVectorLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetValue = 0x8;
            static constexpr std::uintptr_t InitialValue = 0x20;
            static constexpr std::uintptr_t Blend = 0x38;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x3C;
            static constexpr std::uintptr_t Result = 0x40;
            static constexpr std::uintptr_t AccumulatedValue = 0x58;
            static constexpr std::uintptr_t bIsInitialized = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetValue", 0x8, "StructProperty"},
            {"InitialValue", 0x20, "StructProperty"},
            {"Blend", 0x38, "FloatProperty"},
            {"bIntegrateDeltaTime", 0x3C, "BoolProperty"},
            {"Result", 0x40, "StructProperty"},
            {"AccumulatedValue", 0x58, "StructProperty"},
            {"bIsInitialized", 0x70, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateVectorMul
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateVectorMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Multiplier = 0x8;
            static constexpr std::uintptr_t InitialValue = 0x20;
            static constexpr std::uintptr_t bIntegrateDeltaTime = 0x38;
            static constexpr std::uintptr_t Result = 0x40;
            static constexpr std::uintptr_t AccumulatedValue = 0x58;
            static constexpr std::uintptr_t bIsInitialized = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Multiplier", 0x8, "StructProperty"},
            {"InitialValue", 0x20, "StructProperty"},
            {"bIntegrateDeltaTime", 0x38, "BoolProperty"},
            {"Result", 0x40, "StructProperty"},
            {"AccumulatedValue", 0x58, "StructProperty"},
            {"bIsInitialized", 0x70, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AccumulateVectorRange
    {
        static constexpr std::string_view Name = "RigVMFunction_AccumulateVectorRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AccumulateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0x20;
            static constexpr std::uintptr_t Maximum = 0x38;
            static constexpr std::uintptr_t AccumulatedMinimum = 0x50;
            static constexpr std::uintptr_t AccumulatedMaximum = 0x68;
            static constexpr std::uintptr_t bIsInitialized = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Minimum", 0x20, "StructProperty"},
            {"Maximum", 0x38, "StructProperty"},
            {"AccumulatedMinimum", 0x50, "StructProperty"},
            {"AccumulatedMaximum", 0x68, "StructProperty"},
            {"bIsInitialized", 0x80, "BoolProperty"},
        }};
    };

    struct RigVMFunction_AlphaInterp
    {
        static constexpr std::string_view Name = "RigVMFunction_AlphaInterp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Scale = 0xC;
            static constexpr std::uintptr_t Bias = 0x10;
            static constexpr std::uintptr_t bMapRange = 0x14;
            static constexpr std::uintptr_t InRange = 0x18;
            static constexpr std::uintptr_t OutRange = 0x20;
            static constexpr std::uintptr_t bClampResult = 0x28;
            static constexpr std::uintptr_t ClampMin = 0x2C;
            static constexpr std::uintptr_t ClampMax = 0x30;
            static constexpr std::uintptr_t bInterpResult = 0x34;
            static constexpr std::uintptr_t InterpSpeedIncreasing = 0x38;
            static constexpr std::uintptr_t InterpSpeedDecreasing = 0x3C;
            static constexpr std::uintptr_t Result = 0x40;
            static constexpr std::uintptr_t ScaleBiasClamp = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Scale", 0xC, "FloatProperty"},
            {"Bias", 0x10, "FloatProperty"},
            {"bMapRange", 0x14, "BoolProperty"},
            {"InRange", 0x18, "StructProperty"},
            {"OutRange", 0x20, "StructProperty"},
            {"bClampResult", 0x28, "BoolProperty"},
            {"ClampMin", 0x2C, "FloatProperty"},
            {"ClampMax", 0x30, "FloatProperty"},
            {"bInterpResult", 0x34, "BoolProperty"},
            {"InterpSpeedIncreasing", 0x38, "FloatProperty"},
            {"InterpSpeedDecreasing", 0x3C, "FloatProperty"},
            {"Result", 0x40, "FloatProperty"},
            {"ScaleBiasClamp", 0x44, "StructProperty"},
        }};
    };

    struct RigVMFunction_AlphaInterpQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_AlphaInterpQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Scale = 0x30;
            static constexpr std::uintptr_t Bias = 0x34;
            static constexpr std::uintptr_t bMapRange = 0x38;
            static constexpr std::uintptr_t InRange = 0x3C;
            static constexpr std::uintptr_t OutRange = 0x44;
            static constexpr std::uintptr_t bClampResult = 0x4C;
            static constexpr std::uintptr_t ClampMin = 0x50;
            static constexpr std::uintptr_t ClampMax = 0x54;
            static constexpr std::uintptr_t bInterpResult = 0x58;
            static constexpr std::uintptr_t InterpSpeedIncreasing = 0x5C;
            static constexpr std::uintptr_t InterpSpeedDecreasing = 0x60;
            static constexpr std::uintptr_t Result = 0x70;
            static constexpr std::uintptr_t ScaleBiasClamp = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Scale", 0x30, "FloatProperty"},
            {"Bias", 0x34, "FloatProperty"},
            {"bMapRange", 0x38, "BoolProperty"},
            {"InRange", 0x3C, "StructProperty"},
            {"OutRange", 0x44, "StructProperty"},
            {"bClampResult", 0x4C, "BoolProperty"},
            {"ClampMin", 0x50, "FloatProperty"},
            {"ClampMax", 0x54, "FloatProperty"},
            {"bInterpResult", 0x58, "BoolProperty"},
            {"InterpSpeedIncreasing", 0x5C, "FloatProperty"},
            {"InterpSpeedDecreasing", 0x60, "FloatProperty"},
            {"Result", 0x70, "StructProperty"},
            {"ScaleBiasClamp", 0x90, "StructProperty"},
        }};
    };

    struct RigVMFunction_AlphaInterpVector
    {
        static constexpr std::string_view Name = "RigVMFunction_AlphaInterpVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Scale = 0x20;
            static constexpr std::uintptr_t Bias = 0x24;
            static constexpr std::uintptr_t bMapRange = 0x28;
            static constexpr std::uintptr_t InRange = 0x2C;
            static constexpr std::uintptr_t OutRange = 0x34;
            static constexpr std::uintptr_t bClampResult = 0x3C;
            static constexpr std::uintptr_t ClampMin = 0x40;
            static constexpr std::uintptr_t ClampMax = 0x44;
            static constexpr std::uintptr_t bInterpResult = 0x48;
            static constexpr std::uintptr_t InterpSpeedIncreasing = 0x4C;
            static constexpr std::uintptr_t InterpSpeedDecreasing = 0x50;
            static constexpr std::uintptr_t Result = 0x58;
            static constexpr std::uintptr_t ScaleBiasClamp = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Scale", 0x20, "FloatProperty"},
            {"Bias", 0x24, "FloatProperty"},
            {"bMapRange", 0x28, "BoolProperty"},
            {"InRange", 0x2C, "StructProperty"},
            {"OutRange", 0x34, "StructProperty"},
            {"bClampResult", 0x3C, "BoolProperty"},
            {"ClampMin", 0x40, "FloatProperty"},
            {"ClampMax", 0x44, "FloatProperty"},
            {"bInterpResult", 0x48, "BoolProperty"},
            {"InterpSpeedIncreasing", 0x4C, "FloatProperty"},
            {"InterpSpeedDecreasing", 0x50, "FloatProperty"},
            {"Result", 0x58, "StructProperty"},
            {"ScaleBiasClamp", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_AnimBase
    {
        static constexpr std::string_view Name = "RigVMFunction_AnimBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_AnimEasing
    {
        static constexpr std::string_view Name = "RigVMFunction_AnimEasing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
            static constexpr std::uintptr_t SourceMinimum = 0x10;
            static constexpr std::uintptr_t SourceMaximum = 0x14;
            static constexpr std::uintptr_t TargetMinimum = 0x18;
            static constexpr std::uintptr_t TargetMaximum = 0x1C;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Type", 0xC, "EnumProperty"},
            {"SourceMinimum", 0x10, "FloatProperty"},
            {"SourceMaximum", 0x14, "FloatProperty"},
            {"TargetMinimum", 0x18, "FloatProperty"},
            {"TargetMaximum", 0x1C, "FloatProperty"},
            {"Result", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_AnimEasingType
    {
        static constexpr std::string_view Name = "RigVMFunction_AnimEasingType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x8, "EnumProperty"},
        }};
    };

    struct RigVMFunction_AnimEvalRichCurve
    {
        static constexpr std::string_view Name = "RigVMFunction_AnimEvalRichCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Curve = 0x10;
            static constexpr std::uintptr_t SourceMinimum = 0x58;
            static constexpr std::uintptr_t SourceMaximum = 0x5C;
            static constexpr std::uintptr_t TargetMinimum = 0x60;
            static constexpr std::uintptr_t TargetMaximum = 0x64;
            static constexpr std::uintptr_t Result = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Curve", 0x10, "StructProperty"},
            {"SourceMinimum", 0x58, "FloatProperty"},
            {"SourceMaximum", 0x5C, "FloatProperty"},
            {"TargetMinimum", 0x60, "FloatProperty"},
            {"TargetMaximum", 0x64, "FloatProperty"},
            {"Result", 0x68, "FloatProperty"},
        }};
    };

    struct RigVMFunction_AnimRichCurve
    {
        static constexpr std::string_view Name = "RigVMFunction_AnimRichCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curve", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_BreakFromLoop
    {
        static constexpr std::string_view Name = "RigVMFunction_BreakFromLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t BlockToRun = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"BlockToRun", 0x110, "NameProperty"},
        }};
    };

    struct RigVMFunction_Contains
    {
        static constexpr std::string_view Name = "RigVMFunction_Contains";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Search = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Search", 0xC, "NameProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_ContinueLoop
    {
        static constexpr std::string_view Name = "RigVMFunction_ContinueLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_ControlFlowBase
    {
        static constexpr std::string_view Name = "RigVMFunction_ControlFlowBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_ControlFlowBranch
    {
        static constexpr std::string_view Name = "RigVMFunction_ControlFlowBranch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_ControlFlowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Condition = 0x110;
            static constexpr std::uintptr_t TRUE = 0x120;
            static constexpr std::uintptr_t FALSE = 0x220;
            static constexpr std::uintptr_t Completed = 0x320;
            static constexpr std::uintptr_t BlockToRun = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Condition", 0x110, "BoolProperty"},
            {"TRUE", 0x120, "StructProperty"},
            {"FALSE", 0x220, "StructProperty"},
            {"Completed", 0x320, "StructProperty"},
            {"BlockToRun", 0x420, "NameProperty"},
        }};
    };

    struct RigVMFunction_ControlFlowRunOnce
    {
        static constexpr std::string_view Name = "RigVMFunction_ControlFlowRunOnce";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_ControlFlowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Once = 0x110;
            static constexpr std::uintptr_t Completed = 0x210;
            static constexpr std::uintptr_t BlockToRun = 0x310;
            static constexpr std::uintptr_t HasRun = 0x314;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Once", 0x110, "StructProperty"},
            {"Completed", 0x210, "StructProperty"},
            {"BlockToRun", 0x310, "NameProperty"},
            {"HasRun", 0x314, "BoolProperty"},
        }};
    };

    struct RigVMFunction_ControlFlowTimer
    {
        static constexpr std::string_view Name = "RigVMFunction_ControlFlowTimer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_ControlFlowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Reset = 0x110;
            static constexpr std::uintptr_t Speed = 0x114;
            static constexpr std::uintptr_t duration = 0x118;
            static constexpr std::uintptr_t Repeats = 0x11C;
            static constexpr std::uintptr_t JustStarted = 0x120;
            static constexpr std::uintptr_t IsRunning = 0x220;
            static constexpr std::uintptr_t JustFinished = 0x320;
            static constexpr std::uintptr_t time = 0x420;
            static constexpr std::uintptr_t Ratio = 0x424;
            static constexpr std::uintptr_t Completed = 0x430;
            static constexpr std::uintptr_t BlockToRun = 0x530;
            static constexpr std::uintptr_t AccumulatedValue = 0x534;
            static constexpr std::uintptr_t bIsInitialized = 0x538;
            static constexpr std::uintptr_t bJustStarted = 0x539;
            static constexpr std::uintptr_t bIsRunning = 0x53A;
            static constexpr std::uintptr_t bJustFinished = 0x53B;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Reset", 0x110, "BoolProperty"},
            {"Speed", 0x114, "FloatProperty"},
            {"duration", 0x118, "FloatProperty"},
            {"Repeats", 0x11C, "BoolProperty"},
            {"JustStarted", 0x120, "StructProperty"},
            {"IsRunning", 0x220, "StructProperty"},
            {"JustFinished", 0x320, "StructProperty"},
            {"time", 0x420, "FloatProperty"},
            {"Ratio", 0x424, "FloatProperty"},
            {"Completed", 0x430, "StructProperty"},
            {"BlockToRun", 0x530, "NameProperty"},
            {"AccumulatedValue", 0x534, "FloatProperty"},
            {"bIsInitialized", 0x538, "BoolProperty"},
            {"bJustStarted", 0x539, "BoolProperty"},
            {"bIsRunning", 0x53A, "BoolProperty"},
            {"bJustFinished", 0x53B, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DampFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_DampFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Target = 0xC;
            static constexpr std::uintptr_t SmoothingTime = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Target", 0xC, "FloatProperty"},
            {"SmoothingTime", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_DampQuaternion
    {
        static constexpr std::string_view Name = "RigVMFunction_DampQuaternion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Target = 0x30;
            static constexpr std::uintptr_t SmoothingTime = 0x50;
            static constexpr std::uintptr_t Result = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Target", 0x30, "StructProperty"},
            {"SmoothingTime", 0x50, "FloatProperty"},
            {"Result", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_DampVector
    {
        static constexpr std::string_view Name = "RigVMFunction_DampVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Target = 0x20;
            static constexpr std::uintptr_t SmoothingTime = 0x38;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Target", 0x20, "StructProperty"},
            {"SmoothingTime", 0x38, "FloatProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_DebugArc
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugArc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Radius = 0x90;
            static constexpr std::uintptr_t MinimumDegrees = 0x94;
            static constexpr std::uintptr_t MaximumDegrees = 0x98;
            static constexpr std::uintptr_t Thickness = 0x9C;
            static constexpr std::uintptr_t Detail = 0xA0;
            static constexpr std::uintptr_t Space = 0xA4;
            static constexpr std::uintptr_t WorldOffset = 0xB0;
            static constexpr std::uintptr_t bEnabled = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Radius", 0x90, "FloatProperty"},
            {"MinimumDegrees", 0x94, "FloatProperty"},
            {"MaximumDegrees", 0x98, "FloatProperty"},
            {"Thickness", 0x9C, "FloatProperty"},
            {"Detail", 0xA0, "IntProperty"},
            {"Space", 0xA4, "NameProperty"},
            {"WorldOffset", 0xB0, "StructProperty"},
            {"bEnabled", 0x110, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugArcNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugArcNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Radius = 0x90;
            static constexpr std::uintptr_t MinimumDegrees = 0x94;
            static constexpr std::uintptr_t MaximumDegrees = 0x98;
            static constexpr std::uintptr_t Thickness = 0x9C;
            static constexpr std::uintptr_t Detail = 0xA0;
            static constexpr std::uintptr_t WorldOffset = 0xB0;
            static constexpr std::uintptr_t bEnabled = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Radius", 0x90, "FloatProperty"},
            {"MinimumDegrees", 0x94, "FloatProperty"},
            {"MaximumDegrees", 0x98, "FloatProperty"},
            {"Thickness", 0x9C, "FloatProperty"},
            {"Detail", 0xA0, "IntProperty"},
            {"WorldOffset", 0xB0, "StructProperty"},
            {"bEnabled", 0x110, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugBase
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugDrawSettings = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugDrawSettings", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_DebugBaseMutable
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStructMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugDrawSettings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugDrawSettings", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_DebugBoxNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugBoxNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x18;
            static constexpr std::uintptr_t Color = 0x50;
            static constexpr std::uintptr_t Thickness = 0x60;
            static constexpr std::uintptr_t WorldOffset = 0x70;
            static constexpr std::uintptr_t bEnabled = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Box", 0x18, "StructProperty"},
            {"Color", 0x50, "StructProperty"},
            {"Thickness", 0x60, "FloatProperty"},
            {"WorldOffset", 0x70, "StructProperty"},
            {"bEnabled", 0xD0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugLineNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugLineNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x18;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Color = 0x48;
            static constexpr std::uintptr_t Thickness = 0x58;
            static constexpr std::uintptr_t WorldOffset = 0x60;
            static constexpr std::uintptr_t bEnabled = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"A", 0x18, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Color", 0x48, "StructProperty"},
            {"Thickness", 0x58, "FloatProperty"},
            {"WorldOffset", 0x60, "StructProperty"},
            {"bEnabled", 0xC0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugLineStripNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugLineStripNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x18;
            static constexpr std::uintptr_t Color = 0x28;
            static constexpr std::uintptr_t Thickness = 0x38;
            static constexpr std::uintptr_t WorldOffset = 0x40;
            static constexpr std::uintptr_t bEnabled = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Points", 0x18, "ArrayProperty"},
            {"Color", 0x28, "StructProperty"},
            {"Thickness", 0x38, "FloatProperty"},
            {"WorldOffset", 0x40, "StructProperty"},
            {"bEnabled", 0xA0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugPoint
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x10;
            static constexpr std::uintptr_t Mode = 0x28;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Scale = 0x3C;
            static constexpr std::uintptr_t Thickness = 0x40;
            static constexpr std::uintptr_t Space = 0x44;
            static constexpr std::uintptr_t WorldOffset = 0x50;
            static constexpr std::uintptr_t bEnabled = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Vector", 0x10, "StructProperty"},
            {"Mode", 0x28, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Scale", 0x3C, "FloatProperty"},
            {"Thickness", 0x40, "FloatProperty"},
            {"Space", 0x44, "NameProperty"},
            {"WorldOffset", 0x50, "StructProperty"},
            {"bEnabled", 0xB0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugPointMutable
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugPointMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x18;
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t Color = 0x34;
            static constexpr std::uintptr_t Scale = 0x44;
            static constexpr std::uintptr_t Thickness = 0x48;
            static constexpr std::uintptr_t Space = 0x4C;
            static constexpr std::uintptr_t WorldOffset = 0x50;
            static constexpr std::uintptr_t bEnabled = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Vector", 0x18, "StructProperty"},
            {"Mode", 0x30, "EnumProperty"},
            {"Color", 0x34, "StructProperty"},
            {"Scale", 0x44, "FloatProperty"},
            {"Thickness", 0x48, "FloatProperty"},
            {"Space", 0x4C, "NameProperty"},
            {"WorldOffset", 0x50, "StructProperty"},
            {"bEnabled", 0xB0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugRectangle
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugRectangle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Scale = 0x90;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Space = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Scale", 0x90, "FloatProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Space", 0x98, "NameProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugRectangleNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugRectangleNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Scale = 0x90;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Scale", 0x90, "FloatProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugTransformArrayMutableNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugTransformArrayMutableNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x18;
            static constexpr std::uintptr_t ParentIndices = 0x28;
            static constexpr std::uintptr_t Mode = 0x38;
            static constexpr std::uintptr_t Color = 0x3C;
            static constexpr std::uintptr_t Thickness = 0x4C;
            static constexpr std::uintptr_t Scale = 0x50;
            static constexpr std::uintptr_t WorldOffset = 0x60;
            static constexpr std::uintptr_t bEnabled = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transforms", 0x18, "ArrayProperty"},
            {"ParentIndices", 0x28, "ArrayProperty"},
            {"Mode", 0x38, "EnumProperty"},
            {"Color", 0x3C, "StructProperty"},
            {"Thickness", 0x4C, "FloatProperty"},
            {"Scale", 0x50, "FloatProperty"},
            {"WorldOffset", 0x60, "StructProperty"},
            {"bEnabled", 0xC0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DebugTransformArrayMutable_WorkData
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugTransformArrayMutable_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DrawTransforms = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DrawTransforms", 0x0, "ArrayProperty"},
        }};
    };

    struct RigVMFunction_DebugTransformMutableNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_DebugTransformMutableNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Mode = 0x80;
            static constexpr std::uintptr_t Color = 0x84;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Scale = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Mode", 0x80, "EnumProperty"},
            {"Color", 0x84, "StructProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Scale", 0x98, "FloatProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DeltaFromPreviousFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_DeltaFromPreviousFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Delta = 0xC;
            static constexpr std::uintptr_t PreviousValue = 0x10;
            static constexpr std::uintptr_t Cache = 0x14;
            static constexpr std::uintptr_t bIsInitialized = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Delta", 0xC, "FloatProperty"},
            {"PreviousValue", 0x10, "FloatProperty"},
            {"Cache", 0x14, "FloatProperty"},
            {"bIsInitialized", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DeltaFromPreviousQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_DeltaFromPreviousQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Delta = 0x30;
            static constexpr std::uintptr_t PreviousValue = 0x50;
            static constexpr std::uintptr_t Cache = 0x70;
            static constexpr std::uintptr_t bIsInitialized = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Delta", 0x30, "StructProperty"},
            {"PreviousValue", 0x50, "StructProperty"},
            {"Cache", 0x70, "StructProperty"},
            {"bIsInitialized", 0x90, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DeltaFromPreviousTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_DeltaFromPreviousTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Delta = 0x70;
            static constexpr std::uintptr_t PreviousValue = 0xD0;
            static constexpr std::uintptr_t Cache = 0x130;
            static constexpr std::uintptr_t bIsInitialized = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Delta", 0x70, "StructProperty"},
            {"PreviousValue", 0xD0, "StructProperty"},
            {"Cache", 0x130, "StructProperty"},
            {"bIsInitialized", 0x190, "BoolProperty"},
        }};
    };

    struct RigVMFunction_DeltaFromPreviousVector
    {
        static constexpr std::string_view Name = "RigVMFunction_DeltaFromPreviousVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Delta = 0x20;
            static constexpr std::uintptr_t PreviousValue = 0x38;
            static constexpr std::uintptr_t Cache = 0x50;
            static constexpr std::uintptr_t bIsInitialized = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Delta", 0x20, "StructProperty"},
            {"PreviousValue", 0x38, "StructProperty"},
            {"Cache", 0x50, "StructProperty"},
            {"bIsInitialized", 0x68, "BoolProperty"},
        }};
    };

    struct RigVMFunction_EndsWith
    {
        static constexpr std::string_view Name = "RigVMFunction_EndsWith";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Ending = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Ending", 0xC, "NameProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_ForLoopCount
    {
        static constexpr std::string_view Name = "RigVMFunction_ForLoopCount";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStructMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockToRun = 0x10;
            static constexpr std::uintptr_t Count = 0x14;
            static constexpr std::uintptr_t Index = 0x18;
            static constexpr std::uintptr_t Ratio = 0x1C;
            static constexpr std::uintptr_t Completed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BlockToRun", 0x10, "NameProperty"},
            {"Count", 0x14, "IntProperty"},
            {"Index", 0x18, "IntProperty"},
            {"Ratio", 0x1C, "FloatProperty"},
            {"Completed", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_FramesToSeconds
    {
        static constexpr std::string_view Name = "RigVMFunction_FramesToSeconds";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Frames = 0x8;
            static constexpr std::uintptr_t Seconds = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Frames", 0x8, "FloatProperty"},
            {"Seconds", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_GetAbsoluteTime
    {
        static constexpr std::string_view Name = "RigVMFunction_GetAbsoluteTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableBase
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t WorkData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"WorkData", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableBool
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_GetConsoleVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_GetConsoleVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableInt
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_GetConsoleVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "IntProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableString
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_GetConsoleVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StrProperty"},
        }};
    };

    struct RigVMFunction_GetConsoleVariableWorkData
    {
        static constexpr std::string_view Name = "RigVMFunction_GetConsoleVariableWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_GetDeltaTime
    {
        static constexpr std::string_view Name = "RigVMFunction_GetDeltaTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_GetNameNumericSuffix
    {
        static constexpr std::string_view Name = "RigVMFunction_GetNameNumericSuffix";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Suffix = 0xC;
            static constexpr std::uintptr_t Success = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Suffix", 0xC, "IntProperty"},
            {"Success", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_GetWorldTime
    {
        static constexpr std::string_view Name = "RigVMFunction_GetWorldTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Year = 0x8;
            static constexpr std::uintptr_t Month = 0xC;
            static constexpr std::uintptr_t Day = 0x10;
            static constexpr std::uintptr_t WeekDay = 0x14;
            static constexpr std::uintptr_t Hours = 0x18;
            static constexpr std::uintptr_t Minutes = 0x1C;
            static constexpr std::uintptr_t Seconds = 0x20;
            static constexpr std::uintptr_t OverallSeconds = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Year", 0x8, "FloatProperty"},
            {"Month", 0xC, "FloatProperty"},
            {"Day", 0x10, "FloatProperty"},
            {"WeekDay", 0x14, "FloatProperty"},
            {"Hours", 0x18, "FloatProperty"},
            {"Minutes", 0x1C, "FloatProperty"},
            {"Seconds", 0x20, "FloatProperty"},
            {"OverallSeconds", 0x24, "FloatProperty"},
        }};
    };

    struct RigVMFunction_IsHostBeingDebugged
    {
        static constexpr std::string_view Name = "RigVMFunction_IsHostBeingDebugged";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x8, "BoolProperty"},
        }};
    };

    struct RigVMFunction_IsNameValid
    {
        static constexpr std::string_view Name = "RigVMFunction_IsNameValid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "NameProperty"},
            {"Result", 0xC, "BoolProperty"},
        }};
    };

    struct RigVMFunction_IsNone
    {
        static constexpr std::string_view Name = "RigVMFunction_IsNone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Result", 0xC, "BoolProperty"},
        }};
    };

    struct RigVMFunction_KalmanFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_KalmanFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t BufferSize = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t Buffer = 0x18;
            static constexpr std::uintptr_t LastInsertIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"BufferSize", 0xC, "IntProperty"},
            {"Result", 0x10, "FloatProperty"},
            {"Buffer", 0x18, "ArrayProperty"},
            {"LastInsertIndex", 0x28, "IntProperty"},
        }};
    };

    struct RigVMFunction_KalmanTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_KalmanTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t BufferSize = 0x70;
            static constexpr std::uintptr_t Result = 0x80;
            static constexpr std::uintptr_t Buffer = 0xE0;
            static constexpr std::uintptr_t LastInsertIndex = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"BufferSize", 0x70, "IntProperty"},
            {"Result", 0x80, "StructProperty"},
            {"Buffer", 0xE0, "ArrayProperty"},
            {"LastInsertIndex", 0xF0, "IntProperty"},
        }};
    };

    struct RigVMFunction_KalmanVector
    {
        static constexpr std::string_view Name = "RigVMFunction_KalmanVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t BufferSize = 0x20;
            static constexpr std::uintptr_t Result = 0x28;
            static constexpr std::uintptr_t Buffer = 0x40;
            static constexpr std::uintptr_t LastInsertIndex = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"BufferSize", 0x20, "IntProperty"},
            {"Result", 0x28, "StructProperty"},
            {"Buffer", 0x40, "ArrayProperty"},
            {"LastInsertIndex", 0x50, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathBoolAll
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolAll";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t IsEmpty = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Result", 0x18, "BoolProperty"},
            {"IsEmpty", 0x19, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolAnd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolAnd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolAny
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolAny";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t IsEmpty = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Result", 0x18, "BoolProperty"},
            {"IsEmpty", 0x19, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathBoolBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolConstFalse
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolConstFalse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolConstTrue
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolConstTrue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolConstant
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolFlipFlop
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolFlipFlop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartValue = 0x8;
            static constexpr std::uintptr_t duration = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t LastValue = 0x11;
            static constexpr std::uintptr_t TimeLeft = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartValue", 0x8, "BoolProperty"},
            {"duration", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
            {"LastValue", 0x11, "BoolProperty"},
            {"TimeLeft", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathBoolMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolNand
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolNand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolNand2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolNand2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolNot
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolNot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "BoolProperty"},
            {"Result", 0x9, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolOnce
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolOnce";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
            static constexpr std::uintptr_t LastValue = 0xD;
            static constexpr std::uintptr_t TimeLeft = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"duration", 0x8, "FloatProperty"},
            {"Result", 0xC, "BoolProperty"},
            {"LastValue", 0xD, "BoolProperty"},
            {"TimeLeft", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathBoolOr
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolOr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x9;
            static constexpr std::uintptr_t Result = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "BoolProperty"},
            {"B", 0x9, "BoolProperty"},
            {"Result", 0xA, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolToFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolToFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "BoolProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathBoolToInteger
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolToInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "BoolProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathBoolToggled
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolToggled";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Toggled = 0x9;
            static constexpr std::uintptr_t Initialized = 0xA;
            static constexpr std::uintptr_t LastValue = 0xB;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "BoolProperty"},
            {"Toggled", 0x9, "BoolProperty"},
            {"Initialized", 0xA, "BoolProperty"},
            {"LastValue", 0xB, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoolUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoolUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "BoolProperty"},
            {"Result", 0x9, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoxBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathBoxExpand
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxExpand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Amount = 0x40;
            static constexpr std::uintptr_t Result = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Amount", 0x40, "StructProperty"},
            {"Result", 0x58, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxFromArray
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxFromArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Box = 0x18;
            static constexpr std::uintptr_t Minimum = 0x50;
            static constexpr std::uintptr_t Maximum = 0x68;
            static constexpr std::uintptr_t Center = 0x80;
            static constexpr std::uintptr_t Size = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Box", 0x18, "StructProperty"},
            {"Minimum", 0x50, "StructProperty"},
            {"Maximum", 0x68, "StructProperty"},
            {"Center", 0x80, "StructProperty"},
            {"Size", 0x98, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxGetCenter
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxGetCenter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Center = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Center", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxGetDistance
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxGetDistance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Position = 0x40;
            static constexpr std::uintptr_t Square = 0x58;
            static constexpr std::uintptr_t Valid = 0x59;
            static constexpr std::uintptr_t Distance = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Position", 0x40, "StructProperty"},
            {"Square", 0x58, "BoolProperty"},
            {"Valid", 0x59, "BoolProperty"},
            {"Distance", 0x5C, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathBoxGetSize
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxGetSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Size = 0x40;
            static constexpr std::uintptr_t Extent = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Size", 0x40, "StructProperty"},
            {"Extent", 0x58, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxGetVolume
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxGetVolume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Volume = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Volume", 0x40, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathBoxIsInside
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxIsInside";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Position = 0x40;
            static constexpr std::uintptr_t Result = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Position", 0x40, "StructProperty"},
            {"Result", 0x58, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoxIsValid
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxIsValid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Valid = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Valid", 0x40, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathBoxMoveTo
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxMoveTo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Center = 0x40;
            static constexpr std::uintptr_t Result = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Center", 0x40, "StructProperty"},
            {"Result", 0x58, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxShift
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxShift";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Amount = 0x40;
            static constexpr std::uintptr_t Result = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Amount", 0x40, "StructProperty"},
            {"Result", 0x58, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathBoxTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathBoxTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x8;
            static constexpr std::uintptr_t Transform = 0x40;
            static constexpr std::uintptr_t Result = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Box", 0x8, "StructProperty"},
            {"Transform", 0x40, "StructProperty"},
            {"Result", 0xA0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathColorBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorFromDouble
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorFromDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorFromFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorFromFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t T = 0x28;
            static constexpr std::uintptr_t Result = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"T", 0x28, "FloatProperty"},
            {"Result", 0x2C, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorLerpUsingHSV
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorLerpUsingHSV";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t T = 0x28;
            static constexpr std::uintptr_t Result = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"T", 0x28, "FloatProperty"},
            {"Result", 0x2C, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t R = 0x8;
            static constexpr std::uintptr_t G = 0xC;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t A = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"R", 0x8, "FloatProperty"},
            {"G", 0xC, "FloatProperty"},
            {"B", 0x10, "FloatProperty"},
            {"A", 0x14, "FloatProperty"},
            {"Result", 0x18, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathColorSub
    {
        static constexpr std::string_view Name = "RigVMFunction_MathColorSub";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathColorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathDistanceToPlane
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDistanceToPlane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Point = 0x8;
            static constexpr std::uintptr_t PlanePoint = 0x20;
            static constexpr std::uintptr_t PlaneNormal = 0x38;
            static constexpr std::uintptr_t ClosestPointOnPlane = 0x50;
            static constexpr std::uintptr_t SignedDistance = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Point", 0x8, "StructProperty"},
            {"PlanePoint", 0x20, "StructProperty"},
            {"PlaneNormal", 0x38, "StructProperty"},
            {"ClosestPointOnPlane", 0x50, "StructProperty"},
            {"SignedDistance", 0x68, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAbs
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAbs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAcos
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAcos";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleArrayAverage
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleArrayAverage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Average = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Average", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleArraySum
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleArraySum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Sum = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Sum", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAsin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAsin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAtan
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAtan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleAtan2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleAtan2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathDoubleBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleCeil
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleCeil";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t Int = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
            {"Int", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleClamp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleClamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0x10;
            static constexpr std::uintptr_t Maximum = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Minimum", 0x10, "DoubleProperty"},
            {"Maximum", 0x18, "DoubleProperty"},
            {"Result", 0x20, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleConstE
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleConstE";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleConstHalfPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleConstHalfPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleConstPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleConstPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleConstTwoPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleConstTwoPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleConstant
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleCos
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleCos";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleDeg
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleDeg";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleDiv
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleDiv";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleExponential
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleExponential";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleFloor
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleFloor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t Int = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
            {"Int", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleGreater
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleGreater";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleGreaterEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleGreaterEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleIsNearlyEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleIsNearlyEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Tolerance = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Tolerance", 0x18, "DoubleProperty"},
            {"Result", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleIsNearlyZero
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleIsNearlyZero";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Tolerance = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Tolerance", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleLawOfCosine
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleLawOfCosine";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t C = 0x18;
            static constexpr std::uintptr_t AlphaAngle = 0x20;
            static constexpr std::uintptr_t BetaAngle = 0x28;
            static constexpr std::uintptr_t GammaAngle = 0x30;
            static constexpr std::uintptr_t bValid = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"C", 0x18, "DoubleProperty"},
            {"AlphaAngle", 0x20, "DoubleProperty"},
            {"BetaAngle", 0x28, "DoubleProperty"},
            {"GammaAngle", 0x30, "DoubleProperty"},
            {"bValid", 0x38, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t T = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"T", 0x18, "DoubleProperty"},
            {"Result", 0x20, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleLess
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleLess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleLessEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleLessEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleMax
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleMax";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleMin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleMin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleMod
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleMod";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleNegate
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleNegate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleOneMinus
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleOneMinus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoublePow
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoublePow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleRad
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleRad";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleRemap
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleRemap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t SourceMinimum = 0x10;
            static constexpr std::uintptr_t SourceMaximum = 0x18;
            static constexpr std::uintptr_t TargetMinimum = 0x20;
            static constexpr std::uintptr_t TargetMaximum = 0x28;
            static constexpr std::uintptr_t bClamp = 0x30;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"SourceMinimum", 0x10, "DoubleProperty"},
            {"SourceMaximum", 0x18, "DoubleProperty"},
            {"TargetMinimum", 0x20, "DoubleProperty"},
            {"TargetMaximum", 0x28, "DoubleProperty"},
            {"bClamp", 0x30, "BoolProperty"},
            {"Result", 0x38, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleRound
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleRound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t Int = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
            {"Int", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleSign
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleSign";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleSin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleSin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleSqrt
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleSqrt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleSub
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleSub";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "DoubleProperty"},
            {"B", 0x10, "DoubleProperty"},
            {"Result", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleTan
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleTan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleToFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleToFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleToInt
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleToInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathDoubleWrap
    {
        static constexpr std::string_view Name = "RigVMFunction_MathDoubleWrap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathDoubleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0x10;
            static constexpr std::uintptr_t Maximum = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Minimum", 0x10, "DoubleProperty"},
            {"Maximum", 0x18, "DoubleProperty"},
            {"Result", 0x20, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAbs
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAbs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAcos
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAcos";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatArrayAverage
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatArrayAverage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Average = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Average", 0x18, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatArraySum
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatArraySum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Sum = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Sum", 0x18, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAsin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAsin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAtan
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAtan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatAtan2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatAtan2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathFloatBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatCeil
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatCeil";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
            static constexpr std::uintptr_t Int = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
            {"Int", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathFloatClamp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatClamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Minimum", 0xC, "FloatProperty"},
            {"Maximum", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatConstE
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatConstE";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatConstHalfPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatConstHalfPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatConstPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatConstPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatConstTwoPi
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatConstTwoPi";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatConstant
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatCos
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatCos";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatDeg
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatDeg";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatDiv
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatDiv";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatExponential
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatExponential";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatFloor
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatFloor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
            static constexpr std::uintptr_t Int = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
            {"Int", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathFloatGreater
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatGreater";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatGreaterEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatGreaterEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatIsNearlyEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatIsNearlyEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Tolerance = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Tolerance", 0x10, "FloatProperty"},
            {"Result", 0x14, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatIsNearlyZero
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatIsNearlyZero";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Tolerance = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Tolerance", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatLawOfCosine
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatLawOfCosine";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t C = 0x10;
            static constexpr std::uintptr_t AlphaAngle = 0x14;
            static constexpr std::uintptr_t BetaAngle = 0x18;
            static constexpr std::uintptr_t GammaAngle = 0x1C;
            static constexpr std::uintptr_t bValid = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"C", 0x10, "FloatProperty"},
            {"AlphaAngle", 0x14, "FloatProperty"},
            {"BetaAngle", 0x18, "FloatProperty"},
            {"GammaAngle", 0x1C, "FloatProperty"},
            {"bValid", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t T = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"T", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatLess
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatLess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatLessEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatLessEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatMax
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatMax";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatMin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatMin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatMod
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatMod";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatNegate
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatNegate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathFloatOneMinus
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatOneMinus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatPow
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatPow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatRad
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatRad";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatRemap
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatRemap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t SourceMinimum = 0xC;
            static constexpr std::uintptr_t SourceMaximum = 0x10;
            static constexpr std::uintptr_t TargetMinimum = 0x14;
            static constexpr std::uintptr_t TargetMaximum = 0x18;
            static constexpr std::uintptr_t bClamp = 0x1C;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"SourceMinimum", 0xC, "FloatProperty"},
            {"SourceMaximum", 0x10, "FloatProperty"},
            {"TargetMinimum", 0x14, "FloatProperty"},
            {"TargetMaximum", 0x18, "FloatProperty"},
            {"bClamp", 0x1C, "BoolProperty"},
            {"Result", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatRound
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatRound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
            static constexpr std::uintptr_t Int = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
            {"Int", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathFloatSelectBool
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatSelectBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x8;
            static constexpr std::uintptr_t IfTrue = 0xC;
            static constexpr std::uintptr_t IfFalse = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Condition", 0x8, "BoolProperty"},
            {"IfTrue", 0xC, "FloatProperty"},
            {"IfFalse", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatSign
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatSign";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatSin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatSin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatSqrt
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatSqrt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatSub
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatSub";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "FloatProperty"},
            {"B", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatTan
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatTan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatToDouble
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatToDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathFloatToInt
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatToInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathFloatUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathFloatWrap
    {
        static constexpr std::string_view Name = "RigVMFunction_MathFloatWrap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Minimum", 0xC, "FloatProperty"},
            {"Maximum", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathIntAbs
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntAbs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntArrayAverage
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntArrayAverage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Average = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Average", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntArraySum
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntArraySum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Sum = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Sum", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathIntBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntClamp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntClamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Minimum", 0xC, "IntProperty"},
            {"Maximum", 0x10, "IntProperty"},
            {"Result", 0x14, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntDiv
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntDiv";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntGreater
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntGreater";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntGreaterEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntGreaterEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntLess
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntLess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntLessEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntLessEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntMax
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntMax";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntMin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntMin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntMod
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntMod";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntNegate
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntNegate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathIntPow
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntPow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntSign
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntSign";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntSub
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntSub";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "IntProperty"},
            {"B", 0xC, "IntProperty"},
            {"Result", 0x10, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntToDouble
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntToDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0x10, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_MathIntToFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntToFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathIntToName
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntToName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Number = 0x8;
            static constexpr std::uintptr_t PaddedSize = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Number", 0x8, "IntProperty"},
            {"PaddedSize", 0xC, "IntProperty"},
            {"Result", 0x10, "NameProperty"},
        }};
    };

    struct RigVMFunction_MathIntToString
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntToString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Number = 0x8;
            static constexpr std::uintptr_t PaddedSize = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Number", 0x8, "IntProperty"},
            {"PaddedSize", 0xC, "IntProperty"},
            {"Result", 0x10, "StrProperty"},
        }};
    };

    struct RigVMFunction_MathIntUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathIntBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Result", 0xC, "IntProperty"},
        }};
    };

    struct RigVMFunction_MathIntersectPlane
    {
        static constexpr std::string_view Name = "RigVMFunction_MathIntersectPlane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t Direction = 0x20;
            static constexpr std::uintptr_t PlanePoint = 0x38;
            static constexpr std::uintptr_t PlaneNormal = 0x50;
            static constexpr std::uintptr_t Result = 0x68;
            static constexpr std::uintptr_t Distance = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"Direction", 0x20, "StructProperty"},
            {"PlanePoint", 0x38, "StructProperty"},
            {"PlaneNormal", 0x50, "StructProperty"},
            {"Result", 0x68, "StructProperty"},
            {"Distance", 0x80, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathMatrixBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x90;
            static constexpr std::uintptr_t Result = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x90, "StructProperty"},
            {"Result", 0x110, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x90;
            static constexpr std::uintptr_t Result = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x90, "StructProperty"},
            {"Result", 0x110, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixFromTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixFromTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixFromTransformV2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixFromTransformV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixFromVectors
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixFromVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x8;
            static constexpr std::uintptr_t X = 0x20;
            static constexpr std::uintptr_t Y = 0x38;
            static constexpr std::uintptr_t Z = 0x50;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"origin", 0x8, "StructProperty"},
            {"X", 0x20, "StructProperty"},
            {"Y", 0x38, "StructProperty"},
            {"Z", 0x50, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixInverse
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixInverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x90, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x90;
            static constexpr std::uintptr_t Result = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x90, "StructProperty"},
            {"Result", 0x110, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixToTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixToTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x90, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixToVectors
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixToVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t origin = 0x90;
            static constexpr std::uintptr_t X = 0xA8;
            static constexpr std::uintptr_t Y = 0xC0;
            static constexpr std::uintptr_t Z = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"origin", 0x90, "StructProperty"},
            {"X", 0xA8, "StructProperty"},
            {"Y", 0xC0, "StructProperty"},
            {"Z", 0xD8, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMatrixUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMatrixUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMatrixBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x90, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathMutableBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathMutableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStructMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathQuaternionBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionDot
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionDot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromAxisAndAngle
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromAxisAndAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Axis = 0x8;
            static constexpr std::uintptr_t Angle = 0x20;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Axis", 0x8, "StructProperty"},
            {"Angle", 0x20, "FloatProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromEuler
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromEuler";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Euler = 0x8;
            static constexpr std::uintptr_t RotationOrder = 0x20;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Euler", 0x8, "StructProperty"},
            {"RotationOrder", 0x20, "EnumProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromRotator
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotator = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rotator", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromRotatorV2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromRotatorV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromTwoVectors
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromTwoVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionFromXVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionFromXVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionGetAxis
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionGetAxis";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Quaternion = 0x10;
            static constexpr std::uintptr_t Axis = 0x30;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Quaternion", 0x10, "StructProperty"},
            {"Axis", 0x30, "ByteProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionInverse
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionInverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x8;
            static constexpr std::uintptr_t Y = 0xC;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x14;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"X", 0x8, "FloatProperty"},
            {"Y", 0xC, "FloatProperty"},
            {"Z", 0x10, "FloatProperty"},
            {"W", 0x14, "FloatProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionMakeAbsolute
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionMakeAbsolute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Local = 0x10;
            static constexpr std::uintptr_t Parent = 0x30;
            static constexpr std::uintptr_t Global = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Local", 0x10, "StructProperty"},
            {"Parent", 0x30, "StructProperty"},
            {"Global", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionMakeRelative
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionMakeRelative";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Global = 0x10;
            static constexpr std::uintptr_t Parent = 0x30;
            static constexpr std::uintptr_t Local = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Global", 0x10, "StructProperty"},
            {"Parent", 0x30, "StructProperty"},
            {"Local", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionMirrorTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionMirrorTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t MirrorAxis = 0x30;
            static constexpr std::uintptr_t AxisToFlip = 0x31;
            static constexpr std::uintptr_t CentralTransform = 0x40;
            static constexpr std::uintptr_t Result = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"MirrorAxis", 0x30, "ByteProperty"},
            {"AxisToFlip", 0x31, "ByteProperty"},
            {"CentralTransform", 0x40, "StructProperty"},
            {"Result", 0xA0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Result", 0x50, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionQInterpTo
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionQInterpTo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t DeltaTime = 0x50;
            static constexpr std::uintptr_t InterpolationSpeed = 0x54;
            static constexpr std::uintptr_t Result = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"DeltaTime", 0x50, "FloatProperty"},
            {"InterpolationSpeed", 0x54, "FloatProperty"},
            {"Result", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionRotateVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionRotateVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Vector = 0x30;
            static constexpr std::uintptr_t Result = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Transform", 0x10, "StructProperty"},
            {"Vector", 0x30, "StructProperty"},
            {"Result", 0x48, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionRotationOrder
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionRotationOrder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationOrder = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RotationOrder", 0x8, "EnumProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionScale
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionScale";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Scale = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Scale", 0x30, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionScaleV2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionScaleV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Factor = 0x30;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Factor", 0x30, "FloatProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionSelectBool
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionSelectBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x8;
            static constexpr std::uintptr_t IfTrue = 0x10;
            static constexpr std::uintptr_t IfFalse = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Condition", 0x8, "BoolProperty"},
            {"IfTrue", 0x10, "StructProperty"},
            {"IfFalse", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionSlerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionSlerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t T = 0x50;
            static constexpr std::uintptr_t Result = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"T", 0x50, "FloatProperty"},
            {"Result", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionSwingTwist
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionSwingTwist";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t TwistAxis = 0x30;
            static constexpr std::uintptr_t Swing = 0x50;
            static constexpr std::uintptr_t Twist = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"TwistAxis", 0x30, "StructProperty"},
            {"Swing", 0x50, "StructProperty"},
            {"Twist", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionToAxisAndAngle
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionToAxisAndAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Axis = 0x30;
            static constexpr std::uintptr_t Angle = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Axis", 0x30, "StructProperty"},
            {"Angle", 0x48, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionToEuler
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionToEuler";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t RotationOrder = 0x30;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"RotationOrder", 0x30, "EnumProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionToRotator
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionToRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionToVectors
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionToVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Forward = 0x30;
            static constexpr std::uintptr_t Right = 0x48;
            static constexpr std::uintptr_t Up = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Forward", 0x30, "StructProperty"},
            {"Right", 0x48, "StructProperty"},
            {"Up", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathQuaternionUnit
    {
        static constexpr std::string_view Name = "RigVMFunction_MathQuaternionUnit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathQuaternionUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t DistanceFunction = 0x30;
            static constexpr std::uintptr_t SmoothingFunction = 0x31;
            static constexpr std::uintptr_t SmoothingAngle = 0x34;
            static constexpr std::uintptr_t bNormalizeOutput = 0x38;
            static constexpr std::uintptr_t TwistAxis = 0x40;
            static constexpr std::uintptr_t WorkData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"DistanceFunction", 0x30, "EnumProperty"},
            {"SmoothingFunction", 0x31, "EnumProperty"},
            {"SmoothingAngle", 0x34, "FloatProperty"},
            {"bNormalizeOutput", 0x38, "BoolProperty"},
            {"TwistAxis", 0x40, "StructProperty"},
            {"WorkData", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatColor
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateQuatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xE0;
            static constexpr std::uintptr_t Output = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xE0, "ArrayProperty"},
            {"Output", 0xF0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateQuatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xE0;
            static constexpr std::uintptr_t Output = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xE0, "ArrayProperty"},
            {"Output", 0xF0, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateQuatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xE0;
            static constexpr std::uintptr_t Output = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xE0, "ArrayProperty"},
            {"Output", 0xF0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateQuatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xE0;
            static constexpr std::uintptr_t Output = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xE0, "ArrayProperty"},
            {"Output", 0xF0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatWorkData
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathRBFInterpolateQuatXform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateQuatXform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateQuatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xE0;
            static constexpr std::uintptr_t Output = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xE0, "ArrayProperty"},
            {"Output", 0xF0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t DistanceFunction = 0x20;
            static constexpr std::uintptr_t SmoothingFunction = 0x21;
            static constexpr std::uintptr_t SmoothingRadius = 0x24;
            static constexpr std::uintptr_t bNormalizeOutput = 0x28;
            static constexpr std::uintptr_t WorkData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"DistanceFunction", 0x20, "EnumProperty"},
            {"SmoothingFunction", 0x21, "EnumProperty"},
            {"SmoothingRadius", 0x24, "FloatProperty"},
            {"bNormalizeOutput", 0x28, "BoolProperty"},
            {"WorkData", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorColor
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Output = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xB0, "ArrayProperty"},
            {"Output", 0xC0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Output = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xB0, "ArrayProperty"},
            {"Output", 0xC0, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Output = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xB0, "ArrayProperty"},
            {"Output", 0xC0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Output = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xB0, "ArrayProperty"},
            {"Output", 0xC0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorWorkData
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathRBFInterpolateVectorXform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRBFInterpolateVectorXform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRBFInterpolateVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Output = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Targets", 0xB0, "ArrayProperty"},
            {"Output", 0xC0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRayBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRayBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathRayGetAt
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRayGetAt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Ray = 0x8;
            static constexpr std::uintptr_t Ratio = 0x38;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Ray", 0x8, "StructProperty"},
            {"Ratio", 0x38, "FloatProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathRayIntersectPlane
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRayIntersectPlane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Ray = 0x8;
            static constexpr std::uintptr_t PlanePoint = 0x38;
            static constexpr std::uintptr_t PlaneNormal = 0x50;
            static constexpr std::uintptr_t Result = 0x68;
            static constexpr std::uintptr_t Distance = 0x80;
            static constexpr std::uintptr_t Ratio = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Ray", 0x8, "StructProperty"},
            {"PlanePoint", 0x38, "StructProperty"},
            {"PlaneNormal", 0x50, "StructProperty"},
            {"Result", 0x68, "StructProperty"},
            {"Distance", 0x80, "FloatProperty"},
            {"Ratio", 0x84, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathRayIntersectRay
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRayIntersectRay";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x38;
            static constexpr std::uintptr_t Result = 0x68;
            static constexpr std::uintptr_t Distance = 0x80;
            static constexpr std::uintptr_t RatioA = 0x84;
            static constexpr std::uintptr_t RatioB = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x38, "StructProperty"},
            {"Result", 0x68, "StructProperty"},
            {"Distance", 0x80, "FloatProperty"},
            {"RatioA", 0x84, "FloatProperty"},
            {"RatioB", 0x88, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathRayTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathRayTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathRayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Ray = 0x8;
            static constexpr std::uintptr_t Transform = 0x40;
            static constexpr std::uintptr_t Result = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Ray", 0x8, "StructProperty"},
            {"Transform", 0x40, "StructProperty"},
            {"Result", 0xA0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformAccumulateArray
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformAccumulateArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformMutableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x10;
            static constexpr std::uintptr_t TargetSpace = 0x20;
            static constexpr std::uintptr_t Root = 0x30;
            static constexpr std::uintptr_t ParentIndices = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transforms", 0x10, "ArrayProperty"},
            {"TargetSpace", 0x20, "EnumProperty"},
            {"Root", 0x30, "StructProperty"},
            {"ParentIndices", 0x90, "ArrayProperty"},
        }};
    };

    struct RigVMFunction_MathTransformArrayToSRT
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformArrayToSRT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x8;
            static constexpr std::uintptr_t Translations = 0x18;
            static constexpr std::uintptr_t Rotations = 0x28;
            static constexpr std::uintptr_t Scales = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transforms", 0x8, "ArrayProperty"},
            {"Translations", 0x18, "ArrayProperty"},
            {"Rotations", 0x28, "ArrayProperty"},
            {"Scales", 0x38, "ArrayProperty"},
        }};
    };

    struct RigVMFunction_MathTransformBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathTransformBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformClampSpatially
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformClampSpatially";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Axis = 0x70;
            static constexpr std::uintptr_t Type = 0x71;
            static constexpr std::uintptr_t Minimum = 0x74;
            static constexpr std::uintptr_t Maximum = 0x78;
            static constexpr std::uintptr_t Space = 0x80;
            static constexpr std::uintptr_t bDrawDebug = 0xE0;
            static constexpr std::uintptr_t DebugColor = 0xE4;
            static constexpr std::uintptr_t DebugThickness = 0xF4;
            static constexpr std::uintptr_t Result = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Axis", 0x70, "ByteProperty"},
            {"Type", 0x71, "ByteProperty"},
            {"Minimum", 0x74, "FloatProperty"},
            {"Maximum", 0x78, "FloatProperty"},
            {"Space", 0x80, "StructProperty"},
            {"bDrawDebug", 0xE0, "BoolProperty"},
            {"DebugColor", 0xE4, "StructProperty"},
            {"DebugThickness", 0xF4, "FloatProperty"},
            {"Result", 0x100, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformFromEulerTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformFromEulerTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EulerTransform = 0x8;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EulerTransform", 0x8, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformFromEulerTransformV2
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformFromEulerTransformV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformFromSRT
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformFromSRT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t RotationOrder = 0x38;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t Transform = 0x60;
            static constexpr std::uintptr_t EulerTransform = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Location", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"RotationOrder", 0x38, "EnumProperty"},
            {"Scale", 0x40, "StructProperty"},
            {"Transform", 0x60, "StructProperty"},
            {"EulerTransform", 0xC0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformInverse
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformInverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x70;
            static constexpr std::uintptr_t T = 0xD0;
            static constexpr std::uintptr_t Result = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x70, "StructProperty"},
            {"T", 0xD0, "FloatProperty"},
            {"Result", 0xE0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Translation = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t Result = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Translation", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"Scale", 0x40, "StructProperty"},
            {"Result", 0x60, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMakeAbsolute
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMakeAbsolute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Local = 0x10;
            static constexpr std::uintptr_t Parent = 0x70;
            static constexpr std::uintptr_t Global = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Local", 0x10, "StructProperty"},
            {"Parent", 0x70, "StructProperty"},
            {"Global", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMakeRelative
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMakeRelative";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Global = 0x10;
            static constexpr std::uintptr_t Parent = 0x70;
            static constexpr std::uintptr_t Local = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Global", 0x10, "StructProperty"},
            {"Parent", 0x70, "StructProperty"},
            {"Local", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMirrorTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMirrorTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t MirrorAxis = 0x70;
            static constexpr std::uintptr_t AxisToFlip = 0x71;
            static constexpr std::uintptr_t CentralTransform = 0x80;
            static constexpr std::uintptr_t Result = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"MirrorAxis", 0x70, "ByteProperty"},
            {"AxisToFlip", 0x71, "ByteProperty"},
            {"CentralTransform", 0x80, "StructProperty"},
            {"Result", 0xE0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformMutableBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformMutableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMutableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformRotateVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformRotateVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Vector = 0x70;
            static constexpr std::uintptr_t Result = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Transform", 0x10, "StructProperty"},
            {"Vector", 0x70, "StructProperty"},
            {"Result", 0x88, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformSelectBool
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformSelectBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x8;
            static constexpr std::uintptr_t IfTrue = 0x10;
            static constexpr std::uintptr_t IfFalse = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Condition", 0x8, "BoolProperty"},
            {"IfTrue", 0x10, "StructProperty"},
            {"IfFalse", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformToEulerTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformToEulerTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformToVectors
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformToVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Forward = 0x70;
            static constexpr std::uintptr_t Right = 0x88;
            static constexpr std::uintptr_t Up = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Forward", 0x70, "StructProperty"},
            {"Right", 0x88, "StructProperty"},
            {"Up", 0xA0, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformTransformVector
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformTransformVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Location = 0x70;
            static constexpr std::uintptr_t Result = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Transform", 0x10, "StructProperty"},
            {"Location", 0x70, "StructProperty"},
            {"Result", 0x88, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathTransformUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathTransformUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathTransformBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorAbs
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorAbs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorAdd
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorAngle
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathVectorArrayAverage
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorArrayAverage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Average = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Average", 0x18, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorArraySum
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorArraySum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x8;
            static constexpr std::uintptr_t Sum = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Array", 0x8, "ArrayProperty"},
            {"Sum", 0x18, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorBase
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_MathVectorBezierFourPoint
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorBezierFourPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Bezier = 0x8;
            static constexpr std::uintptr_t T = 0x68;
            static constexpr std::uintptr_t Result = 0x70;
            static constexpr std::uintptr_t Tangent = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Bezier", 0x8, "StructProperty"},
            {"T", 0x68, "FloatProperty"},
            {"Result", 0x70, "StructProperty"},
            {"Tangent", 0x88, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorBinaryAggregateOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorBinaryAggregateOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorBinaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorBinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorCeil
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorCeil";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorClamp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorClamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Minimum = 0x20;
            static constexpr std::uintptr_t Maximum = 0x38;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Minimum", 0x20, "StructProperty"},
            {"Maximum", 0x38, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorClampLength
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorClampLength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t MinimumLength = 0x20;
            static constexpr std::uintptr_t MaximumLength = 0x24;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"MinimumLength", 0x20, "FloatProperty"},
            {"MaximumLength", 0x24, "FloatProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorClampSpatially
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorClampSpatially";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Axis = 0x20;
            static constexpr std::uintptr_t Type = 0x21;
            static constexpr std::uintptr_t Minimum = 0x24;
            static constexpr std::uintptr_t Maximum = 0x28;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t bDrawDebug = 0x90;
            static constexpr std::uintptr_t DebugColor = 0x94;
            static constexpr std::uintptr_t DebugThickness = 0xA4;
            static constexpr std::uintptr_t Result = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Axis", 0x20, "ByteProperty"},
            {"Type", 0x21, "ByteProperty"},
            {"Minimum", 0x24, "FloatProperty"},
            {"Maximum", 0x28, "FloatProperty"},
            {"Space", 0x30, "StructProperty"},
            {"bDrawDebug", 0x90, "BoolProperty"},
            {"DebugColor", 0x94, "StructProperty"},
            {"DebugThickness", 0xA4, "FloatProperty"},
            {"Result", 0xA8, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorCross
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorCross";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorDeg
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorDeg";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorDistance
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorDistance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathVectorDiv
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorDiv";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorDot
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorDot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathVectorEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorFloor
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorFloor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorFromDouble
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorFromDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Result", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorFromFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorFromFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Result", 0x10, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorIsNearlyEqual
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorIsNearlyEqual";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Tolerance = 0x38;
            static constexpr std::uintptr_t Result = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Tolerance", 0x38, "FloatProperty"},
            {"Result", 0x3C, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorIsNearlyZero
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorIsNearlyZero";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Tolerance = 0x20;
            static constexpr std::uintptr_t Result = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Tolerance", 0x20, "FloatProperty"},
            {"Result", 0x24, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorLength
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorLength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathVectorLengthSquared
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorLengthSquared";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_MathVectorLerp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorLerp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t T = 0x38;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"T", 0x38, "FloatProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMake
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMake";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x8;
            static constexpr std::uintptr_t Y = 0xC;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x8, "FloatProperty"},
            {"Y", 0xC, "FloatProperty"},
            {"Z", 0x10, "FloatProperty"},
            {"Result", 0x18, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMakeAbsolute
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMakeAbsolute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Local = 0x8;
            static constexpr std::uintptr_t Parent = 0x20;
            static constexpr std::uintptr_t Global = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Local", 0x8, "StructProperty"},
            {"Parent", 0x20, "StructProperty"},
            {"Global", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMakeBezierFourPoint
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMakeBezierFourPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Bezier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bezier", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMakeRelative
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMakeRelative";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Global = 0x8;
            static constexpr std::uintptr_t Parent = 0x20;
            static constexpr std::uintptr_t Local = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Global", 0x8, "StructProperty"},
            {"Parent", 0x20, "StructProperty"},
            {"Local", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMax
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMax";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMin
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMirror
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMirror";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Normal = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Normal", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMirrorTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMirrorTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t MirrorAxis = 0x20;
            static constexpr std::uintptr_t AxisToFlip = 0x21;
            static constexpr std::uintptr_t CentralTransform = 0x30;
            static constexpr std::uintptr_t Result = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"MirrorAxis", 0x20, "ByteProperty"},
            {"AxisToFlip", 0x21, "ByteProperty"},
            {"CentralTransform", 0x30, "StructProperty"},
            {"Result", 0x90, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMod
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMod";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorMul
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorMul";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorNegate
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorNegate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorNotEquals
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorOrthogonal
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorOrthogonal";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorParallel
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorParallel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "BoolProperty"},
        }};
    };

    struct RigVMFunction_MathVectorRad
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorRad";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorRemap
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorRemap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t SourceMinimum = 0x20;
            static constexpr std::uintptr_t SourceMaximum = 0x38;
            static constexpr std::uintptr_t TargetMinimum = 0x50;
            static constexpr std::uintptr_t TargetMaximum = 0x68;
            static constexpr std::uintptr_t bClamp = 0x80;
            static constexpr std::uintptr_t Result = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"SourceMinimum", 0x20, "StructProperty"},
            {"SourceMaximum", 0x38, "StructProperty"},
            {"TargetMinimum", 0x50, "StructProperty"},
            {"TargetMaximum", 0x68, "StructProperty"},
            {"bClamp", 0x80, "BoolProperty"},
            {"Result", 0x88, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorRound
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorRound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorScale
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorScale";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Factor = 0x20;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Factor", 0x20, "FloatProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorSelectBool
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorSelectBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x8;
            static constexpr std::uintptr_t IfTrue = 0x10;
            static constexpr std::uintptr_t IfFalse = 0x28;
            static constexpr std::uintptr_t Result = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Condition", 0x8, "BoolProperty"},
            {"IfTrue", 0x10, "StructProperty"},
            {"IfFalse", 0x28, "StructProperty"},
            {"Result", 0x40, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorSetLength
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorSetLength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Length = 0x20;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Length", 0x20, "FloatProperty"},
            {"Result", 0x28, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorSign
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorSign";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorSub
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorSub";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBinaryAggregateOp";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorUnaryOp
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_MathVectorUnit
    {
        static constexpr std::string_view Name = "RigVMFunction_MathVectorUnit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathVectorUnaryOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigVMFunction_NameBase
    {
        static constexpr std::string_view Name = "RigVMFunction_NameBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_NameConcat
    {
        static constexpr std::string_view Name = "RigVMFunction_NameConcat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "NameProperty"},
            {"B", 0xC, "NameProperty"},
            {"Result", 0x10, "NameProperty"},
        }};
    };

    struct RigVMFunction_NameReplace
    {
        static constexpr std::string_view Name = "RigVMFunction_NameReplace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Old = 0xC;
            static constexpr std::uintptr_t New = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Old", 0xC, "NameProperty"},
            {"New", 0x10, "NameProperty"},
            {"Result", 0x14, "NameProperty"},
        }};
    };

    struct RigVMFunction_NameTruncate
    {
        static constexpr std::string_view Name = "RigVMFunction_NameTruncate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Count = 0xC;
            static constexpr std::uintptr_t FromEnd = 0x10;
            static constexpr std::uintptr_t Remainder = 0x14;
            static constexpr std::uintptr_t Chopped = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Count", 0xC, "IntProperty"},
            {"FromEnd", 0x10, "BoolProperty"},
            {"Remainder", 0x14, "NameProperty"},
            {"Chopped", 0x18, "NameProperty"},
        }};
    };

    struct RigVMFunction_NoiseDouble
    {
        static constexpr std::string_view Name = "RigVMFunction_NoiseDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Speed = 0x10;
            static constexpr std::uintptr_t Frequency = 0x18;
            static constexpr std::uintptr_t Minimum = 0x20;
            static constexpr std::uintptr_t Maximum = 0x28;
            static constexpr std::uintptr_t Result = 0x30;
            static constexpr std::uintptr_t time = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "DoubleProperty"},
            {"Speed", 0x10, "DoubleProperty"},
            {"Frequency", 0x18, "DoubleProperty"},
            {"Minimum", 0x20, "DoubleProperty"},
            {"Maximum", 0x28, "DoubleProperty"},
            {"Result", 0x30, "DoubleProperty"},
            {"time", 0x38, "DoubleProperty"},
        }};
    };

    struct RigVMFunction_NoiseFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_NoiseFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Speed = 0xC;
            static constexpr std::uintptr_t Frequency = 0x10;
            static constexpr std::uintptr_t Minimum = 0x14;
            static constexpr std::uintptr_t Maximum = 0x18;
            static constexpr std::uintptr_t Result = 0x1C;
            static constexpr std::uintptr_t time = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"Speed", 0xC, "FloatProperty"},
            {"Frequency", 0x10, "FloatProperty"},
            {"Minimum", 0x14, "FloatProperty"},
            {"Maximum", 0x18, "FloatProperty"},
            {"Result", 0x1C, "FloatProperty"},
            {"time", 0x20, "FloatProperty"},
        }};
    };

    struct RigVMFunction_NoiseVector
    {
        static constexpr std::string_view Name = "RigVMFunction_NoiseVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x8;
            static constexpr std::uintptr_t Speed = 0x20;
            static constexpr std::uintptr_t Frequency = 0x38;
            static constexpr std::uintptr_t Minimum = 0x50;
            static constexpr std::uintptr_t Maximum = 0x54;
            static constexpr std::uintptr_t Result = 0x58;
            static constexpr std::uintptr_t time = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Position", 0x8, "StructProperty"},
            {"Speed", 0x20, "StructProperty"},
            {"Frequency", 0x38, "StructProperty"},
            {"Minimum", 0x50, "FloatProperty"},
            {"Maximum", 0x54, "FloatProperty"},
            {"Result", 0x58, "StructProperty"},
            {"time", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_NoiseVector2
    {
        static constexpr std::string_view Name = "RigVMFunction_NoiseVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Speed = 0x20;
            static constexpr std::uintptr_t Frequency = 0x38;
            static constexpr std::uintptr_t Minimum = 0x50;
            static constexpr std::uintptr_t Maximum = 0x58;
            static constexpr std::uintptr_t Result = 0x60;
            static constexpr std::uintptr_t time = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Speed", 0x20, "StructProperty"},
            {"Frequency", 0x38, "StructProperty"},
            {"Minimum", 0x50, "DoubleProperty"},
            {"Maximum", 0x58, "DoubleProperty"},
            {"Result", 0x60, "StructProperty"},
            {"time", 0x78, "StructProperty"},
        }};
    };

    struct RigVMFunction_RandomFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_RandomFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t duration = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t LastResult = 0x1C;
            static constexpr std::uintptr_t LastSeed = 0x20;
            static constexpr std::uintptr_t BaseSeed = 0x24;
            static constexpr std::uintptr_t TimeLeft = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Seed", 0x8, "IntProperty"},
            {"Minimum", 0xC, "FloatProperty"},
            {"Maximum", 0x10, "FloatProperty"},
            {"duration", 0x14, "FloatProperty"},
            {"Result", 0x18, "FloatProperty"},
            {"LastResult", 0x1C, "FloatProperty"},
            {"LastSeed", 0x20, "IntProperty"},
            {"BaseSeed", 0x24, "IntProperty"},
            {"TimeLeft", 0x28, "FloatProperty"},
        }};
    };

    struct RigVMFunction_RandomInt
    {
        static constexpr std::string_view Name = "RigVMFunction_RandomInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t duration = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t LastResult = 0x1C;
            static constexpr std::uintptr_t LastSeed = 0x20;
            static constexpr std::uintptr_t BaseSeed = 0x24;
            static constexpr std::uintptr_t TimeLeft = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Seed", 0x8, "IntProperty"},
            {"Minimum", 0xC, "IntProperty"},
            {"Maximum", 0x10, "IntProperty"},
            {"duration", 0x14, "FloatProperty"},
            {"Result", 0x18, "IntProperty"},
            {"LastResult", 0x1C, "IntProperty"},
            {"LastSeed", 0x20, "IntProperty"},
            {"BaseSeed", 0x24, "IntProperty"},
            {"TimeLeft", 0x28, "FloatProperty"},
        }};
    };

    struct RigVMFunction_RandomVector
    {
        static constexpr std::string_view Name = "RigVMFunction_RandomVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x8;
            static constexpr std::uintptr_t Minimum = 0xC;
            static constexpr std::uintptr_t Maximum = 0x10;
            static constexpr std::uintptr_t duration = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t LastResult = 0x30;
            static constexpr std::uintptr_t LastSeed = 0x48;
            static constexpr std::uintptr_t BaseSeed = 0x4C;
            static constexpr std::uintptr_t TimeLeft = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Seed", 0x8, "IntProperty"},
            {"Minimum", 0xC, "FloatProperty"},
            {"Maximum", 0x10, "FloatProperty"},
            {"duration", 0x14, "FloatProperty"},
            {"Result", 0x18, "StructProperty"},
            {"LastResult", 0x30, "StructProperty"},
            {"LastSeed", 0x48, "IntProperty"},
            {"BaseSeed", 0x4C, "IntProperty"},
            {"TimeLeft", 0x50, "FloatProperty"},
        }};
    };

    struct RigVMFunction_SecondsToFrames
    {
        static constexpr std::string_view Name = "RigVMFunction_SecondsToFrames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_AnimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Seconds = 0x8;
            static constexpr std::uintptr_t Frames = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Seconds", 0x8, "FloatProperty"},
            {"Frames", 0xC, "FloatProperty"},
        }};
    };

    struct RigVMFunction_Sequence
    {
        static constexpr std::string_view Name = "RigVMFunction_Sequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t A = 0x110;
            static constexpr std::uintptr_t B = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"A", 0x110, "StructProperty"},
            {"B", 0x210, "StructProperty"},
        }};
    };

    struct RigVMFunction_SimBase
    {
        static constexpr std::string_view Name = "RigVMFunction_SimBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_SimBaseMutable
    {
        static constexpr std::string_view Name = "RigVMFunction_SimBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStructMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigVMFunction_SpringDampFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_SpringDampFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMutableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t ValueVelocity = 0x14;
            static constexpr std::uintptr_t Target = 0x18;
            static constexpr std::uintptr_t SmoothingTime = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "FloatProperty"},
            {"ValueVelocity", 0x14, "FloatProperty"},
            {"Target", 0x18, "FloatProperty"},
            {"SmoothingTime", 0x1C, "FloatProperty"},
        }};
    };

    struct RigVMFunction_SpringDampQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_SpringDampQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMutableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t ValueVelocity = 0x30;
            static constexpr std::uintptr_t Target = 0x50;
            static constexpr std::uintptr_t SmoothingTime = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"ValueVelocity", 0x30, "StructProperty"},
            {"Target", 0x50, "StructProperty"},
            {"SmoothingTime", 0x70, "FloatProperty"},
        }};
    };

    struct RigVMFunction_SpringDampVector
    {
        static constexpr std::string_view Name = "RigVMFunction_SpringDampVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_MathMutableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t ValueVelocity = 0x28;
            static constexpr std::uintptr_t Target = 0x40;
            static constexpr std::uintptr_t SmoothingTime = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"ValueVelocity", 0x28, "StructProperty"},
            {"Target", 0x40, "StructProperty"},
            {"SmoothingTime", 0x58, "FloatProperty"},
        }};
    };

    struct RigVMFunction_StartsWith
    {
        static constexpr std::string_view Name = "RigVMFunction_StartsWith";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_NameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Start = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Start", 0xC, "NameProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigVMFunction_StringBase
    {
        static constexpr std::string_view Name = "RigVMFunction_StringBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_StringConcat
    {
        static constexpr std::string_view Name = "RigVMFunction_StringConcat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StrProperty"},
            {"B", 0x18, "StrProperty"},
            {"Result", 0x28, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringContains
    {
        static constexpr std::string_view Name = "RigVMFunction_StringContains";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Search = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "StrProperty"},
            {"Search", 0x18, "StrProperty"},
            {"Result", 0x28, "BoolProperty"},
        }};
    };

    struct RigVMFunction_StringEndsWith
    {
        static constexpr std::string_view Name = "RigVMFunction_StringEndsWith";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Ending = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "StrProperty"},
            {"Ending", 0x18, "StrProperty"},
            {"Result", 0x28, "BoolProperty"},
        }};
    };

    struct RigVMFunction_StringFind
    {
        static constexpr std::string_view Name = "RigVMFunction_StringFind";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Search = 0x18;
            static constexpr std::uintptr_t Found = 0x28;
            static constexpr std::uintptr_t Index = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Search", 0x18, "StrProperty"},
            {"Found", 0x28, "BoolProperty"},
            {"Index", 0x2C, "IntProperty"},
        }};
    };

    struct RigVMFunction_StringJoin
    {
        static constexpr std::string_view Name = "RigVMFunction_StringJoin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x8;
            static constexpr std::uintptr_t Separator = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Values", 0x8, "ArrayProperty"},
            {"Separator", 0x18, "StrProperty"},
            {"Result", 0x28, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringLeft
    {
        static constexpr std::string_view Name = "RigVMFunction_StringLeft";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Count = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Count", 0x18, "IntProperty"},
            {"Result", 0x20, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringLength
    {
        static constexpr std::string_view Name = "RigVMFunction_StringLength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Length = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Length", 0x18, "IntProperty"},
        }};
    };

    struct RigVMFunction_StringMiddle
    {
        static constexpr std::string_view Name = "RigVMFunction_StringMiddle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Start = 0x18;
            static constexpr std::uintptr_t Count = 0x1C;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Start", 0x18, "IntProperty"},
            {"Count", 0x1C, "IntProperty"},
            {"Result", 0x20, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringPadInteger
    {
        static constexpr std::string_view Name = "RigVMFunction_StringPadInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Digits = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "IntProperty"},
            {"Digits", 0xC, "IntProperty"},
            {"Result", 0x10, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringReplace
    {
        static constexpr std::string_view Name = "RigVMFunction_StringReplace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Old = 0x18;
            static constexpr std::uintptr_t New = 0x28;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x8, "StrProperty"},
            {"Old", 0x18, "StrProperty"},
            {"New", 0x28, "StrProperty"},
            {"Result", 0x38, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringReverse
    {
        static constexpr std::string_view Name = "RigVMFunction_StringReverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Reverse = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Reverse", 0x18, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringRight
    {
        static constexpr std::string_view Name = "RigVMFunction_StringRight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Count = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Count", 0x18, "IntProperty"},
            {"Result", 0x20, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringSplit
    {
        static constexpr std::string_view Name = "RigVMFunction_StringSplit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Separator = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Separator", 0x18, "StrProperty"},
            {"Result", 0x28, "ArrayProperty"},
        }};
    };

    struct RigVMFunction_StringStartsWith
    {
        static constexpr std::string_view Name = "RigVMFunction_StringStartsWith";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Start = 0x18;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "StrProperty"},
            {"Start", 0x18, "StrProperty"},
            {"Result", 0x28, "BoolProperty"},
        }};
    };

    struct RigVMFunction_StringToInteger
    {
        static constexpr std::string_view Name = "RigVMFunction_StringToInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t ChopLeft = 0x18;
            static constexpr std::uintptr_t ChopRight = 0x19;
            static constexpr std::uintptr_t Result = 0x1C;
            static constexpr std::uintptr_t Success = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"ChopLeft", 0x18, "BoolProperty"},
            {"ChopRight", 0x19, "BoolProperty"},
            {"Result", 0x1C, "IntProperty"},
            {"Success", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMFunction_StringToLowercase
    {
        static constexpr std::string_view Name = "RigVMFunction_StringToLowercase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Result", 0x18, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringToUppercase
    {
        static constexpr std::string_view Name = "RigVMFunction_StringToUppercase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Result", 0x18, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringTrimWhitespace
    {
        static constexpr std::string_view Name = "RigVMFunction_StringTrimWhitespace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StrProperty"},
            {"Result", 0x18, "StrProperty"},
        }};
    };

    struct RigVMFunction_StringTruncate
    {
        static constexpr std::string_view Name = "RigVMFunction_StringTruncate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_StringBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Count = 0x18;
            static constexpr std::uintptr_t FromEnd = 0x1C;
            static constexpr std::uintptr_t Remainder = 0x20;
            static constexpr std::uintptr_t Chopped = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x8, "StrProperty"},
            {"Count", 0x18, "IntProperty"},
            {"FromEnd", 0x1C, "BoolProperty"},
            {"Remainder", 0x20, "StrProperty"},
            {"Chopped", 0x30, "StrProperty"},
        }};
    };

    struct RigVMFunction_TimeBase
    {
        static constexpr std::string_view Name = "RigVMFunction_TimeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMFunction_TimeLoop
    {
        static constexpr std::string_view Name = "RigVMFunction_TimeLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_TimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0x8;
            static constexpr std::uintptr_t duration = 0xC;
            static constexpr std::uintptr_t Normalize = 0x10;
            static constexpr std::uintptr_t Absolute = 0x14;
            static constexpr std::uintptr_t Relative = 0x18;
            static constexpr std::uintptr_t FlipFlop = 0x1C;
            static constexpr std::uintptr_t Even = 0x20;
            static constexpr std::uintptr_t AccumulatedAbsolute = 0x24;
            static constexpr std::uintptr_t AccumulatedRelative = 0x28;
            static constexpr std::uintptr_t NumIterations = 0x2C;
            static constexpr std::uintptr_t bIsInitialized = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Speed", 0x8, "FloatProperty"},
            {"duration", 0xC, "FloatProperty"},
            {"Normalize", 0x10, "BoolProperty"},
            {"Absolute", 0x14, "FloatProperty"},
            {"Relative", 0x18, "FloatProperty"},
            {"FlipFlop", 0x1C, "FloatProperty"},
            {"Even", 0x20, "BoolProperty"},
            {"AccumulatedAbsolute", 0x24, "FloatProperty"},
            {"AccumulatedRelative", 0x28, "FloatProperty"},
            {"NumIterations", 0x2C, "IntProperty"},
            {"bIsInitialized", 0x30, "BoolProperty"},
        }};
    };

    struct RigVMFunction_TimeOffsetFloat
    {
        static constexpr std::string_view Name = "RigVMFunction_TimeOffsetFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t SecondsAgo = 0xC;
            static constexpr std::uintptr_t BufferSize = 0x10;
            static constexpr std::uintptr_t TimeRange = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t Buffer = 0x20;
            static constexpr std::uintptr_t DeltaTimes = 0x30;
            static constexpr std::uintptr_t LastInsertIndex = 0x40;
            static constexpr std::uintptr_t UpperBound = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"SecondsAgo", 0xC, "FloatProperty"},
            {"BufferSize", 0x10, "IntProperty"},
            {"TimeRange", 0x14, "FloatProperty"},
            {"Result", 0x18, "FloatProperty"},
            {"Buffer", 0x20, "ArrayProperty"},
            {"DeltaTimes", 0x30, "ArrayProperty"},
            {"LastInsertIndex", 0x40, "IntProperty"},
            {"UpperBound", 0x44, "IntProperty"},
        }};
    };

    struct RigVMFunction_TimeOffsetTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_TimeOffsetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t SecondsAgo = 0x70;
            static constexpr std::uintptr_t BufferSize = 0x74;
            static constexpr std::uintptr_t TimeRange = 0x78;
            static constexpr std::uintptr_t Result = 0x80;
            static constexpr std::uintptr_t Buffer = 0xE0;
            static constexpr std::uintptr_t DeltaTimes = 0xF0;
            static constexpr std::uintptr_t LastInsertIndex = 0x100;
            static constexpr std::uintptr_t UpperBound = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"SecondsAgo", 0x70, "FloatProperty"},
            {"BufferSize", 0x74, "IntProperty"},
            {"TimeRange", 0x78, "FloatProperty"},
            {"Result", 0x80, "StructProperty"},
            {"Buffer", 0xE0, "ArrayProperty"},
            {"DeltaTimes", 0xF0, "ArrayProperty"},
            {"LastInsertIndex", 0x100, "IntProperty"},
            {"UpperBound", 0x104, "IntProperty"},
        }};
    };

    struct RigVMFunction_TimeOffsetVector
    {
        static constexpr std::string_view Name = "RigVMFunction_TimeOffsetVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t SecondsAgo = 0x20;
            static constexpr std::uintptr_t BufferSize = 0x24;
            static constexpr std::uintptr_t TimeRange = 0x28;
            static constexpr std::uintptr_t Result = 0x30;
            static constexpr std::uintptr_t Buffer = 0x48;
            static constexpr std::uintptr_t DeltaTimes = 0x58;
            static constexpr std::uintptr_t LastInsertIndex = 0x68;
            static constexpr std::uintptr_t UpperBound = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"SecondsAgo", 0x20, "FloatProperty"},
            {"BufferSize", 0x24, "IntProperty"},
            {"TimeRange", 0x28, "FloatProperty"},
            {"Result", 0x30, "StructProperty"},
            {"Buffer", 0x48, "ArrayProperty"},
            {"DeltaTimes", 0x58, "ArrayProperty"},
            {"LastInsertIndex", 0x68, "IntProperty"},
            {"UpperBound", 0x6C, "IntProperty"},
        }};
    };

    struct RigVMFunction_Timeline
    {
        static constexpr std::string_view Name = "RigVMFunction_Timeline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_TimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0x8;
            static constexpr std::uintptr_t time = 0xC;
            static constexpr std::uintptr_t AccumulatedValue = 0x10;
            static constexpr std::uintptr_t bIsInitialized = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Speed", 0x8, "FloatProperty"},
            {"time", 0xC, "FloatProperty"},
            {"AccumulatedValue", 0x10, "FloatProperty"},
            {"bIsInitialized", 0x14, "BoolProperty"},
        }};
    };

    struct RigVMFunction_TimerValue
    {
        static constexpr std::string_view Name = "RigVMFunction_TimerValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_TimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Reset = 0x8;
            static constexpr std::uintptr_t Speed = 0xC;
            static constexpr std::uintptr_t duration = 0x10;
            static constexpr std::uintptr_t Repeats = 0x14;
            static constexpr std::uintptr_t JustStarted = 0x15;
            static constexpr std::uintptr_t IsRunning = 0x16;
            static constexpr std::uintptr_t JustFinished = 0x17;
            static constexpr std::uintptr_t time = 0x18;
            static constexpr std::uintptr_t Ratio = 0x1C;
            static constexpr std::uintptr_t AccumulatedValue = 0x20;
            static constexpr std::uintptr_t bIsInitialized = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Reset", 0x8, "BoolProperty"},
            {"Speed", 0xC, "FloatProperty"},
            {"duration", 0x10, "FloatProperty"},
            {"Repeats", 0x14, "BoolProperty"},
            {"JustStarted", 0x15, "BoolProperty"},
            {"IsRunning", 0x16, "BoolProperty"},
            {"JustFinished", 0x17, "BoolProperty"},
            {"time", 0x18, "FloatProperty"},
            {"Ratio", 0x1C, "FloatProperty"},
            {"AccumulatedValue", 0x20, "FloatProperty"},
            {"bIsInitialized", 0x24, "BoolProperty"},
        }};
    };

    struct RigVMFunction_UserDefinedEvent
    {
        static constexpr std::string_view Name = "RigVMFunction_UserDefinedEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
            static constexpr std::uintptr_t EventName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
            {"EventName", 0x10, "NameProperty"},
        }};
    };

    struct RigVMFunction_VerletIntegrateVector
    {
        static constexpr std::string_view Name = "RigVMFunction_VerletIntegrateVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x8;
            static constexpr std::uintptr_t Strength = 0x20;
            static constexpr std::uintptr_t Damp = 0x24;
            static constexpr std::uintptr_t Blend = 0x28;
            static constexpr std::uintptr_t Force = 0x30;
            static constexpr std::uintptr_t Position = 0x48;
            static constexpr std::uintptr_t Velocity = 0x60;
            static constexpr std::uintptr_t Acceleration = 0x78;
            static constexpr std::uintptr_t Point = 0x90;
            static constexpr std::uintptr_t bInitialized = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Target", 0x8, "StructProperty"},
            {"Strength", 0x20, "FloatProperty"},
            {"Damp", 0x24, "FloatProperty"},
            {"Blend", 0x28, "FloatProperty"},
            {"Force", 0x30, "StructProperty"},
            {"Position", 0x48, "StructProperty"},
            {"Velocity", 0x60, "StructProperty"},
            {"Acceleration", 0x78, "StructProperty"},
            {"Point", 0x90, "StructProperty"},
            {"bInitialized", 0xD0, "BoolProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugQuat
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t Thickness = 0x34;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t BoneSpace = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
            {"Thickness", 0x34, "FloatProperty"},
            {"Scale", 0x38, "FloatProperty"},
            {"BoneSpace", 0x3C, "NameProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugQuatNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugQuatNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t Thickness = 0x34;
            static constexpr std::uintptr_t Scale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
            {"Thickness", 0x34, "FloatProperty"},
            {"Scale", 0x38, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugTransform
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t Thickness = 0x74;
            static constexpr std::uintptr_t Scale = 0x78;
            static constexpr std::uintptr_t BoneSpace = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"Thickness", 0x74, "FloatProperty"},
            {"Scale", 0x78, "FloatProperty"},
            {"BoneSpace", 0x7C, "NameProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugTransformNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugTransformNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t Thickness = 0x74;
            static constexpr std::uintptr_t Scale = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"Thickness", 0x74, "FloatProperty"},
            {"Scale", 0x78, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugVector
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Mode = 0x29;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t BoneSpace = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"Mode", 0x29, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"Scale", 0x40, "FloatProperty"},
            {"BoneSpace", 0x44, "NameProperty"},
        }};
    };

    struct RigVMFunction_VisualDebugVectorNoSpace
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualDebugVectorNoSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Mode = 0x29;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"Mode", 0x29, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"Scale", 0x40, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogArrow
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogArrow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogObject";
        struct Offsets
        {
            static constexpr std::uintptr_t SegmentStart = 0x40;
            static constexpr std::uintptr_t SegmentEnd = 0x58;
            static constexpr std::uintptr_t ArrowHeadSize = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SegmentStart", 0x40, "StructProperty"},
            {"SegmentEnd", 0x58, "StructProperty"},
            {"ArrowHeadSize", 0x70, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogBase
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x18;
            static constexpr std::uintptr_t Category = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text", 0x18, "StrProperty"},
            {"Category", 0x28, "NameProperty"},
        }};
    };

    struct RigVMFunction_VisualLogBox
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogBox";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Box", 0x48, "StructProperty"},
        }};
    };

    struct RigVMFunction_VisualLogCapsule
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogCapsule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0x48;
            static constexpr std::uintptr_t HalfHeight = 0x60;
            static constexpr std::uintptr_t Radius = 0x64;
            static constexpr std::uintptr_t Rotation = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"base", 0x48, "StructProperty"},
            {"HalfHeight", 0x60, "FloatProperty"},
            {"Radius", 0x64, "FloatProperty"},
            {"Rotation", 0x70, "StructProperty"},
        }};
    };

    struct RigVMFunction_VisualLogCircle
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogCircle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x48;
            static constexpr std::uintptr_t UpAxis = 0x60;
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t Thickness = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Center", 0x48, "StructProperty"},
            {"UpAxis", 0x60, "StructProperty"},
            {"Radius", 0x78, "FloatProperty"},
            {"Thickness", 0x7C, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogCone
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogCone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x48;
            static constexpr std::uintptr_t Direction = 0x60;
            static constexpr std::uintptr_t Length = 0x78;
            static constexpr std::uintptr_t Angle = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"origin", 0x48, "StructProperty"},
            {"Direction", 0x60, "StructProperty"},
            {"Length", 0x78, "FloatProperty"},
            {"Angle", 0x7C, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogCylinder
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogCylinder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x48;
            static constexpr std::uintptr_t End = 0x60;
            static constexpr std::uintptr_t Radius = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Start", 0x48, "StructProperty"},
            {"End", 0x60, "StructProperty"},
            {"Radius", 0x78, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogLocation
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogLocation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogObject";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x40;
            static constexpr std::uintptr_t Radius = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x40, "StructProperty"},
            {"Radius", 0x58, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogObject
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectColor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectColor", 0x30, "StructProperty"},
        }};
    };

    struct RigVMFunction_VisualLogOrientedBox
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogOrientedBox";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x48;
            static constexpr std::uintptr_t Transform = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Box", 0x48, "StructProperty"},
            {"Transform", 0x80, "StructProperty"},
        }};
    };

    struct RigVMFunction_VisualLogSegment
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogSegment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogObject";
        struct Offsets
        {
            static constexpr std::uintptr_t SegmentStart = 0x40;
            static constexpr std::uintptr_t SegmentEnd = 0x58;
            static constexpr std::uintptr_t Thickness = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SegmentStart", 0x40, "StructProperty"},
            {"SegmentEnd", 0x58, "StructProperty"},
            {"Thickness", 0x70, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogSphere
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogSphere";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogWireframeOptional";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x48;
            static constexpr std::uintptr_t Radius = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Center", 0x48, "StructProperty"},
            {"Radius", 0x60, "FloatProperty"},
        }};
    };

    struct RigVMFunction_VisualLogText
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogText";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x18;
            static constexpr std::uintptr_t Category = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text", 0x18, "StrProperty"},
            {"Category", 0x28, "NameProperty"},
        }};
    };

    struct RigVMFunction_VisualLogWireframeOptional
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogWireframeOptional";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogObject";
        struct Offsets
        {
            static constexpr std::uintptr_t bWireframe = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWireframe", 0x40, "BoolProperty"},
        }};
    };

    struct RigVMFunction_VisualLogWorldText
    {
        static constexpr std::string_view Name = "RigVMFunction_VisualLogWorldText";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_VisualLogObject";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldLocation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldLocation", 0x40, "StructProperty"},
        }};
    };

    struct RigVMGraphFunctionArgument
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x4;
            static constexpr std::uintptr_t CPPType = 0x8;
            static constexpr std::uintptr_t CPPTypeObject = 0x10;
            static constexpr std::uintptr_t bIsArray = 0x30;
            static constexpr std::uintptr_t Direction = 0x31;
            static constexpr std::uintptr_t DefaultValue = 0x38;
            static constexpr std::uintptr_t bIsConst = 0x48;
            static constexpr std::uintptr_t bIsInputVariable = 0x49;
            static constexpr std::uintptr_t PathToTooltip = 0x50;
            static constexpr std::uintptr_t Guid = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"DisplayName", 0x4, "NameProperty"},
            {"CPPType", 0x8, "NameProperty"},
            {"CPPTypeObject", 0x10, "SoftObjectProperty"},
            {"bIsArray", 0x30, "BoolProperty"},
            {"Direction", 0x31, "EnumProperty"},
            {"DefaultValue", 0x38, "StrProperty"},
            {"bIsConst", 0x48, "BoolProperty"},
            {"bIsInputVariable", 0x49, "BoolProperty"},
            {"PathToTooltip", 0x50, "MapProperty"},
            {"Guid", 0x60, "StructProperty"},
        }};
    };

    struct RigVMGraphFunctionData
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Header = 0x0;
            static constexpr std::uintptr_t CompilationData = 0x138;
            static constexpr std::uintptr_t SerializedCollapsedNode = 0x2A0;
            static constexpr std::uintptr_t CollapseNodeArchive = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Header", 0x0, "StructProperty"},
            {"CompilationData", 0x138, "StructProperty"},
            {"SerializedCollapsedNode", 0x2A0, "StrProperty"},
            {"CollapseNodeArchive", 0x2B0, "StructProperty"},
        }};
    };

    struct RigVMGraphFunctionHeader
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionHeader";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LibraryPointer = 0x0;
            static constexpr std::uintptr_t Variant = 0x50;
            static constexpr std::uintptr_t Name = 0x70;
            static constexpr std::uintptr_t NodeTitle = 0x78;
            static constexpr std::uintptr_t NodeColor = 0x88;
            static constexpr std::uintptr_t ToolTip = 0x98;
            static constexpr std::uintptr_t Description = 0xA8;
            static constexpr std::uintptr_t Category = 0xB8;
            static constexpr std::uintptr_t Keywords = 0xC8;
            static constexpr std::uintptr_t Arguments = 0xD8;
            static constexpr std::uintptr_t Dependencies = 0xE8;
            static constexpr std::uintptr_t ExternalVariables = 0xF8;
            static constexpr std::uintptr_t Layout = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"LibraryPointer", 0x0, "StructProperty"},
            {"Variant", 0x50, "StructProperty"},
            {"Name", 0x70, "NameProperty"},
            {"NodeTitle", 0x78, "StrProperty"},
            {"NodeColor", 0x88, "StructProperty"},
            {"ToolTip", 0x98, "TextProperty"},
            {"Description", 0xA8, "StrProperty"},
            {"Category", 0xB8, "StrProperty"},
            {"Keywords", 0xC8, "StrProperty"},
            {"Arguments", 0xD8, "ArrayProperty"},
            {"Dependencies", 0xE8, "MapProperty"},
            {"ExternalVariables", 0xF8, "ArrayProperty"},
            {"Layout", 0x108, "StructProperty"},
        }};
    };

    struct RigVMGraphFunctionHeaderArray
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionHeaderArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Headers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Headers", 0x0, "ArrayProperty"},
        }};
    };

    struct RigVMGraphFunctionHost
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMGraphFunctionIdentifier
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LibraryNode = 0x0;
            static constexpr std::uintptr_t Guid = 0x18;
            static constexpr std::uintptr_t LibraryNodePath = 0x28;
            static constexpr std::uintptr_t HostObject = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LibraryNode", 0x0, "StructProperty"},
            {"Guid", 0x18, "StructProperty"},
            {"LibraryNodePath", 0x28, "StrProperty"},
            {"HostObject", 0x38, "StructProperty"},
        }};
    };

    struct RigVMGraphFunctionStore
    {
        static constexpr std::string_view Name = "RigVMGraphFunctionStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PublicFunctions = 0x0;
            static constexpr std::uintptr_t PrivateFunctions = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PublicFunctions", 0x0, "ArrayProperty"},
            {"PrivateFunctions", 0x10, "ArrayProperty"},
        }};
    };

    struct RigVMGraphVariableDescription
    {
        static constexpr std::string_view Name = "RigVMGraphVariableDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t CPPType = 0x18;
            static constexpr std::uintptr_t CPPTypeObject = 0x28;
            static constexpr std::uintptr_t CPPTypeObjectPath = 0x30;
            static constexpr std::uintptr_t DefaultValue = 0x38;
            static constexpr std::uintptr_t Category = 0x48;
            static constexpr std::uintptr_t ToolTip = 0x58;
            static constexpr std::uintptr_t bExposedOnSpawn = 0x68;
            static constexpr std::uintptr_t bExposeToCinematics = 0x69;
            static constexpr std::uintptr_t bPublic = 0x6A;
            static constexpr std::uintptr_t bPrivate = 0x6B;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"CPPType", 0x18, "StrProperty"},
            {"CPPTypeObject", 0x28, "ObjectProperty"},
            {"CPPTypeObjectPath", 0x30, "NameProperty"},
            {"DefaultValue", 0x38, "StrProperty"},
            {"Category", 0x48, "TextProperty"},
            {"ToolTip", 0x58, "TextProperty"},
            {"bExposedOnSpawn", 0x68, "BoolProperty"},
            {"bExposeToCinematics", 0x69, "BoolProperty"},
            {"bPublic", 0x6A, "BoolProperty"},
            {"bPrivate", 0x6B, "BoolProperty"},
        }};
    };

    struct RigVMHost
    {
        static constexpr std::string_view Name = "RigVMHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VMRuntimeSettings = 0x30;
            static constexpr std::uintptr_t VM = 0x70;
            static constexpr std::uintptr_t Variables = 0x78;
            static constexpr std::uintptr_t GeneratedBy = 0xA0;
            static constexpr std::uintptr_t UserDefinedStructGuidToPathName = 0xB0;
            static constexpr std::uintptr_t UserDefinedEnumToPathName = 0xC0;
            static constexpr std::uintptr_t RequiredPlugins = 0xD0;
            static constexpr std::uintptr_t UserDefinedTypesInUse = 0xE0;
            static constexpr std::uintptr_t DrawContainer = 0xF8;
            static constexpr std::uintptr_t DrawInterface = 0x110;
            static constexpr std::uintptr_t EventQueue = 0x128;
            static constexpr std::uintptr_t AssetUserData = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"VMRuntimeSettings", 0x30, "StructProperty"},
            {"VM", 0x70, "ObjectProperty"},
            {"Variables", 0x78, "StructProperty"},
            {"GeneratedBy", 0xA0, "InterfaceProperty"},
            {"UserDefinedStructGuidToPathName", 0xB0, "MapProperty"},
            {"UserDefinedEnumToPathName", 0xC0, "MapProperty"},
            {"RequiredPlugins", 0xD0, "ArrayProperty"},
            {"UserDefinedTypesInUse", 0xE0, "SetProperty"},
            {"DrawContainer", 0xF8, "StructProperty"},
            {"DrawInterface", 0x110, "StructProperty"},
            {"EventQueue", 0x128, "ArrayProperty"},
            {"AssetUserData", 0x1B8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "CanExecute",
            "Execute",
            "ExecuteEvent",
            "FindRigVMHosts",
            "GetAbsoluteTime",
            "GetCurrentFramesPerSecond",
            "GetDeltaTime",
            "GetExtendedExecuteContext",
            "GetScriptAccessibleVariables",
            "GetSupportedEvents",
            "GetVM",
            "GetVariableAsString",
            "GetVariableType",
            "IsInitRequired",
            "RemoveRunOnceEvent",
            "RequestInit",
            "RequestRunOnceEvent",
            "SetAbsoluteAndDeltaTime",
            "SetAbsoluteTime",
            "SetDeltaTime",
            "SetFramesPerSecond",
            "SetVariableFromString",
            "SupportsEvent",
        }};
    };

    struct RigVMInstruction
    {
        static constexpr std::string_view Name = "RigVMInstruction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t ByteCodeIndex = 0x4;
            static constexpr std::uintptr_t OpCode = 0x8;
            static constexpr std::uintptr_t OperandAlignment = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"ByteCodeIndex", 0x4, "IntProperty"},
            {"OpCode", 0x8, "EnumProperty"},
            {"OperandAlignment", 0x9, "ByteProperty"},
        }};
    };

    struct RigVMInstructionArray
    {
        static constexpr std::string_view Name = "RigVMInstructionArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instructions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instructions", 0x0, "ArrayProperty"},
        }};
    };

    struct RigVMInstructionSetExecuteState
    {
        static constexpr std::string_view Name = "RigVMInstructionSetExecuteState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SliceHashToCallStackHash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SliceHashToCallStackHash", 0x0, "MapProperty"},
        }};
    };

    struct RigVMInstructionVisitInfo
    {
        static constexpr std::string_view Name = "RigVMInstructionVisitInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMInvokeCallableOp
    {
        static constexpr std::string_view Name = "RigVMInvokeCallableOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMInvokeEntryOp
    {
        static constexpr std::string_view Name = "RigVMInvokeEntryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMJumpIfOp
    {
        static constexpr std::string_view Name = "RigVMJumpIfOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMUnaryOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMJumpOp
    {
        static constexpr std::string_view Name = "RigVMJumpOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMJumpToBranchOp
    {
        static constexpr std::string_view Name = "RigVMJumpToBranchOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMUnaryOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMMemoryContainer
    {
        static constexpr std::string_view Name = "RigVMMemoryContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseNameMap = 0x0;
            static constexpr std::uintptr_t MemoryType = 0x1;
            static constexpr std::uintptr_t Registers = 0x8;
            static constexpr std::uintptr_t RegisterOffsets = 0x18;
            static constexpr std::uintptr_t Data = 0x28;
            static constexpr std::uintptr_t ScriptStructs = 0x38;
            static constexpr std::uintptr_t NameMap = 0x48;
            static constexpr std::uintptr_t bEncounteredErrorDuringLoad = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bUseNameMap", 0x0, "BoolProperty"},
            {"MemoryType", 0x1, "EnumProperty"},
            {"Registers", 0x8, "ArrayProperty"},
            {"RegisterOffsets", 0x18, "ArrayProperty"},
            {"Data", 0x28, "ArrayProperty"},
            {"ScriptStructs", 0x38, "ArrayProperty"},
            {"NameMap", 0x48, "MapProperty"},
            {"bEncounteredErrorDuringLoad", 0x58, "BoolProperty"},
        }};
    };

    struct RigVMMemoryStatistics
    {
        static constexpr std::string_view Name = "RigVMMemoryStatistics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisterCount = 0x0;
            static constexpr std::uintptr_t DataBytes = 0x4;
            static constexpr std::uintptr_t TotalBytes = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RegisterCount", 0x0, "IntProperty"},
            {"DataBytes", 0x4, "IntProperty"},
            {"TotalBytes", 0x8, "IntProperty"},
        }};
    };

    struct RigVMMemoryStorage
    {
        static constexpr std::string_view Name = "RigVMMemoryStorage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMMemoryStorageGeneratorClass
    {
        static constexpr std::string_view Name = "RigVMMemoryStorageGeneratorClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t NetFields = 0xF8;
            static constexpr std::uintptr_t ClassDefaultObject = 0x110;
            static constexpr std::uintptr_t ClassWithin = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NetFields", 0xF8, "ArrayProperty"},
            {"ClassDefaultObject", 0x110, "ObjectProperty"},
            {"ClassWithin", 0x118, "ClassProperty"},
        }};
    };

    struct RigVMMemoryStorageStruct
    {
        static constexpr std::string_view Name = "RigVMMemoryStorageStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstancedPropertyBag";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct RigVMMirrorSettings
    {
        static constexpr std::string_view Name = "RigVMMirrorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MirrorAxis = 0x0;
            static constexpr std::uintptr_t AxisToFlip = 0x1;
            static constexpr std::uintptr_t SearchString = 0x8;
            static constexpr std::uintptr_t ReplaceString = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MirrorAxis", 0x0, "ByteProperty"},
            {"AxisToFlip", 0x1, "ByteProperty"},
            {"SearchString", 0x8, "StrProperty"},
            {"ReplaceString", 0x18, "StrProperty"},
        }};
    };

    struct RigVMNativized
    {
        static constexpr std::string_view Name = "RigVMNativized";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LiteralMemoryStorage = 0x28;
            static constexpr std::uintptr_t DefaultWorkMemoryStorage = 0x78;
            static constexpr std::uintptr_t DefaultDebugMemoryStorage = 0xC8;
            static constexpr std::uintptr_t ByteCodeStorage = 0x138;
            static constexpr std::uintptr_t Instructions = 0x1C8;
            static constexpr std::uintptr_t FunctionNamesStorage = 0x1D8;
            static constexpr std::uintptr_t Parameters = 0x220;
            static constexpr std::uintptr_t CachedVMHash = 0x2B8;
            static constexpr std::uintptr_t CachedCanonicalVMHash = 0x2BC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LiteralMemoryStorage", 0x28, "StructProperty"},
            {"DefaultWorkMemoryStorage", 0x78, "StructProperty"},
            {"DefaultDebugMemoryStorage", 0xC8, "StructProperty"},
            {"ByteCodeStorage", 0x138, "StructProperty"},
            {"Instructions", 0x1C8, "StructProperty"},
            {"FunctionNamesStorage", 0x1D8, "ArrayProperty"},
            {"Parameters", 0x220, "ArrayProperty"},
            {"CachedVMHash", 0x2B8, "UInt32Property"},
            {"CachedCanonicalVMHash", 0x2BC, "UInt32Property"},
        }};
    };

    struct RigVMNativizedMemoryStruct
    {
        static constexpr std::string_view Name = "RigVMNativizedMemoryStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMNodeLayout
    {
        static constexpr std::string_view Name = "RigVMNodeLayout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x0;
            static constexpr std::uintptr_t PinIndexInCategory = 0x10;
            static constexpr std::uintptr_t DisplayNames = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Categories", 0x0, "ArrayProperty"},
            {"PinIndexInCategory", 0x10, "MapProperty"},
            {"DisplayNames", 0x20, "MapProperty"},
        }};
    };

    struct RigVMObjectArchive
    {
        static constexpr std::string_view Name = "RigVMObjectArchive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Versions = 0x0;
            static constexpr std::uintptr_t Buffer = 0x10;
            static constexpr std::uintptr_t UncompressedSize = 0x20;
            static constexpr std::uintptr_t CompressedSize = 0x24;
            static constexpr std::uintptr_t bIsCompressed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Versions", 0x0, "MapProperty"},
            {"Buffer", 0x10, "ArrayProperty"},
            {"UncompressedSize", 0x20, "IntProperty"},
            {"CompressedSize", 0x24, "IntProperty"},
            {"bIsCompressed", 0x28, "BoolProperty"},
        }};
    };

    struct RigVMOperand
    {
        static constexpr std::string_view Name = "RigVMOperand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryType = 0x0;
            static constexpr std::uintptr_t RegisterIndex = 0x2;
            static constexpr std::uintptr_t RegisterOffset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MemoryType", 0x0, "EnumProperty"},
            {"RegisterIndex", 0x2, "UInt16Property"},
            {"RegisterOffset", 0x4, "UInt16Property"},
        }};
    };

    struct RigVMParameter
    {
        static constexpr std::string_view Name = "RigVMParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t RegisterIndex = 0x8;
            static constexpr std::uintptr_t CPPType = 0x10;
            static constexpr std::uintptr_t ScriptStruct = 0x20;
            static constexpr std::uintptr_t ScriptStructPath = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Name", 0x4, "NameProperty"},
            {"RegisterIndex", 0x8, "IntProperty"},
            {"CPPType", 0x10, "StrProperty"},
            {"ScriptStruct", 0x20, "ObjectProperty"},
            {"ScriptStructPath", 0x28, "NameProperty"},
        }};
    };

    struct RigVMPinCategory
    {
        static constexpr std::string_view Name = "RigVMPinCategory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Elements = 0x10;
            static constexpr std::uintptr_t bExpandedByDefault = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"Elements", 0x10, "ArrayProperty"},
            {"bExpandedByDefault", 0x20, "BoolProperty"},
        }};
    };

    struct RigVMPredicateBranch
    {
        static constexpr std::string_view Name = "RigVMPredicateBranch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMProfilingInfo
    {
        static constexpr std::string_view Name = "RigVMProfilingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMProjectSettings
    {
        static constexpr std::string_view Name = "RigVMProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t VariantTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariantTags", 0x30, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTag",
        }};
    };

    struct RigVMPropertyBag
    {
        static constexpr std::string_view Name = "RigVMPropertyBag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstancedPropertyBag";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct RigVMQuaternaryOp
    {
        static constexpr std::string_view Name = "RigVMQuaternaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMQuinaryOp
    {
        static constexpr std::string_view Name = "RigVMQuinaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMReferenceNodeData
    {
        static constexpr std::string_view Name = "RigVMReferenceNodeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferenceNodePath = 0x0;
            static constexpr std::uintptr_t ReferencedFunctionPath = 0x10;
            static constexpr std::uintptr_t ReferencedHeader = 0x20;
            static constexpr std::uintptr_t ReferencedFunctionIdentifier = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ReferenceNodePath", 0x0, "StrProperty"},
            {"ReferencedFunctionPath", 0x10, "StrProperty"},
            {"ReferencedHeader", 0x20, "StructProperty"},
            {"ReferencedFunctionIdentifier", 0x158, "StructProperty"},
        }};
    };

    struct RigVMRegister
    {
        static constexpr std::string_view Name = "RigVMRegister";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t ByteIndex = 0x4;
            static constexpr std::uintptr_t ElementSize = 0x8;
            static constexpr std::uintptr_t ElementCount = 0xA;
            static constexpr std::uintptr_t SliceCount = 0xC;
            static constexpr std::uintptr_t AlignmentBytes = 0xE;
            static constexpr std::uintptr_t TrailingBytes = 0x10;
            static constexpr std::uintptr_t Name = 0x14;
            static constexpr std::uintptr_t ScriptStructIndex = 0x18;
            static constexpr std::uintptr_t bIsArray = 0x1C;
            static constexpr std::uintptr_t bIsDynamic = 0x1D;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"ByteIndex", 0x4, "UInt32Property"},
            {"ElementSize", 0x8, "UInt16Property"},
            {"ElementCount", 0xA, "UInt16Property"},
            {"SliceCount", 0xC, "UInt16Property"},
            {"AlignmentBytes", 0xE, "ByteProperty"},
            {"TrailingBytes", 0x10, "UInt16Property"},
            {"Name", 0x14, "NameProperty"},
            {"ScriptStructIndex", 0x18, "IntProperty"},
            {"bIsArray", 0x1C, "BoolProperty"},
            {"bIsDynamic", 0x1D, "BoolProperty"},
        }};
    };

    struct RigVMRegisterOffset
    {
        static constexpr std::string_view Name = "RigVMRegisterOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Segments = 0x0;
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t CPPType = 0x14;
            static constexpr std::uintptr_t ScriptStruct = 0x18;
            static constexpr std::uintptr_t ParentScriptStruct = 0x20;
            static constexpr std::uintptr_t ArrayIndex = 0x28;
            static constexpr std::uintptr_t ElementSize = 0x2C;
            static constexpr std::uintptr_t CachedSegmentPath = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Segments", 0x0, "ArrayProperty"},
            {"Type", 0x10, "EnumProperty"},
            {"CPPType", 0x14, "NameProperty"},
            {"ScriptStruct", 0x18, "ObjectProperty"},
            {"ParentScriptStruct", 0x20, "ObjectProperty"},
            {"ArrayIndex", 0x28, "IntProperty"},
            {"ElementSize", 0x2C, "UInt16Property"},
            {"CachedSegmentPath", 0x30, "StrProperty"},
        }};
    };

    struct RigVMRunInstructionsOp
    {
        static constexpr std::string_view Name = "RigVMRunInstructionsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMUnaryOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMRuntimeAsset
    {
        static constexpr std::string_view Name = "RigVMRuntimeAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VM = 0x70;
            static constexpr std::uintptr_t ExecuteContext = 0x80;
            static constexpr std::uintptr_t Variables = 0x2E0;
            static constexpr std::uintptr_t GraphFunctionStore = 0x308;
            static constexpr std::uintptr_t PublicGraphFunctions = 0x328;
            static constexpr std::uintptr_t RuntimeSettings = 0x338;
            static constexpr std::uintptr_t DrawContainer = 0x350;
            static constexpr std::uintptr_t AssetVariant = 0x368;
            static constexpr std::uintptr_t UserDefinedStructGuidToPathName = 0x388;
            static constexpr std::uintptr_t UserDefinedEnumToPathName = 0x398;
            static constexpr std::uintptr_t UserDefinedTypesInUse = 0x3A8;
            static constexpr std::uintptr_t SupportedEventNames = 0x3B8;
            static constexpr std::uintptr_t Status = 0x3C8;
            static constexpr std::uintptr_t RequiredPlugins = 0x3D0;
            static constexpr std::uintptr_t AssetUserData = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"VM", 0x70, "ObjectProperty"},
            {"ExecuteContext", 0x80, "StructProperty"},
            {"Variables", 0x2E0, "StructProperty"},
            {"GraphFunctionStore", 0x308, "StructProperty"},
            {"PublicGraphFunctions", 0x328, "ArrayProperty"},
            {"RuntimeSettings", 0x338, "StructProperty"},
            {"DrawContainer", 0x350, "StructProperty"},
            {"AssetVariant", 0x368, "StructProperty"},
            {"UserDefinedStructGuidToPathName", 0x388, "MapProperty"},
            {"UserDefinedEnumToPathName", 0x398, "MapProperty"},
            {"UserDefinedTypesInUse", 0x3A8, "SetProperty"},
            {"SupportedEventNames", 0x3B8, "ArrayProperty"},
            {"Status", 0x3C8, "ByteProperty"},
            {"RequiredPlugins", 0x3D0, "ArrayProperty"},
            {"AssetUserData", 0x3E0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAssetVariables",
            "GetRigVMHostClass",
        }};
    };

    struct RigVMRuntimeAssetInterface
    {
        static constexpr std::string_view Name = "RigVMRuntimeAssetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMRuntimeSettings
    {
        static constexpr std::string_view Name = "RigVMRuntimeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumArraySize = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaximumArraySize", 0x0, "IntProperty"},
        }};
    };

    struct RigVMSenaryOp
    {
        static constexpr std::string_view Name = "RigVMSenaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMSetupTraitsOp
    {
        static constexpr std::string_view Name = "RigVMSetupTraitsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMUnaryOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMSimPoint
    {
        static constexpr std::string_view Name = "RigVMSimPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mass = 0x0;
            static constexpr std::uintptr_t Size = 0x4;
            static constexpr std::uintptr_t LinearDamping = 0x8;
            static constexpr std::uintptr_t InheritMotion = 0xC;
            static constexpr std::uintptr_t Position = 0x10;
            static constexpr std::uintptr_t LinearVelocity = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Mass", 0x0, "FloatProperty"},
            {"Size", 0x4, "FloatProperty"},
            {"LinearDamping", 0x8, "FloatProperty"},
            {"InheritMotion", 0xC, "FloatProperty"},
            {"Position", 0x10, "StructProperty"},
            {"LinearVelocity", 0x28, "StructProperty"},
        }};
    };

    struct RigVMStatistics
    {
        static constexpr std::string_view Name = "RigVMStatistics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BytesForCDO = 0x0;
            static constexpr std::uintptr_t BytesPerInstance = 0x4;
            static constexpr std::uintptr_t LiteralMemory = 0x8;
            static constexpr std::uintptr_t WorkMemory = 0x14;
            static constexpr std::uintptr_t DebugMemory = 0x20;
            static constexpr std::uintptr_t BytesForCaching = 0x2C;
            static constexpr std::uintptr_t ByteCode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BytesForCDO", 0x0, "IntProperty"},
            {"BytesPerInstance", 0x4, "IntProperty"},
            {"LiteralMemory", 0x8, "StructProperty"},
            {"WorkMemory", 0x14, "StructProperty"},
            {"DebugMemory", 0x20, "StructProperty"},
            {"BytesForCaching", 0x2C, "IntProperty"},
            {"ByteCode", 0x30, "StructProperty"},
        }};
    };

    struct RigVMStepCondition
    {
        static constexpr std::string_view Name = "RigVMStepCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMStruct
    {
        static constexpr std::string_view Name = "RigVMStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMStructMutable
    {
        static constexpr std::string_view Name = "RigVMStructMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigVMTag
    {
        static constexpr std::string_view Name = "RigVMTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
            static constexpr std::uintptr_t ToolTip = 0x18;
            static constexpr std::uintptr_t Color = 0x28;
            static constexpr std::uintptr_t bShowInUserInterface = 0x38;
            static constexpr std::uintptr_t bMarksSubjectAsInvalid = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Label", 0x8, "StrProperty"},
            {"ToolTip", 0x18, "TextProperty"},
            {"Color", 0x28, "StructProperty"},
            {"bShowInUserInterface", 0x38, "BoolProperty"},
            {"bMarksSubjectAsInvalid", 0x39, "BoolProperty"},
        }};
    };

    struct RigVMTemplateArgumentType
    {
        static constexpr std::string_view Name = "RigVMTemplateArgumentType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CPPType = 0x0;
            static constexpr std::uintptr_t CPPTypeObject = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CPPType", 0x0, "NameProperty"},
            {"CPPTypeObject", 0x8, "ObjectProperty"},
        }};
    };

    struct RigVMTernaryOp
    {
        static constexpr std::string_view Name = "RigVMTernaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMTrait
    {
        static constexpr std::string_view Name = "RigVMTrait";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x8, "StrProperty"},
        }};
    };

    struct RigVMUnaryOp
    {
        static constexpr std::string_view Name = "RigVMUnaryOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMBaseOp";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMUnknownType
    {
        static constexpr std::string_view Name = "RigVMUnknownType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Hash", 0x0, "UInt32Property"},
        }};
    };

    struct RigVMUserDefinedTypesInfo
    {
        static constexpr std::string_view Name = "RigVMUserDefinedTypesInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StructGuidToPathName = 0x0;
            static constexpr std::uintptr_t EnumToPathName = 0x10;
            static constexpr std::uintptr_t TypesInUse = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StructGuidToPathName", 0x0, "MapProperty"},
            {"EnumToPathName", 0x10, "MapProperty"},
            {"TypesInUse", 0x20, "SetProperty"},
        }};
    };

    struct RigVMUserWorkflow
    {
        static constexpr std::string_view Name = "RigVMUserWorkflow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x8;
            static constexpr std::uintptr_t ToolTip = 0x18;
            static constexpr std::uintptr_t Type = 0x28;
            static constexpr std::uintptr_t PerformDynamicDelegate = 0x40;
            static constexpr std::uintptr_t OptionsClass = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x8, "StrProperty"},
            {"ToolTip", 0x18, "StrProperty"},
            {"Type", 0x28, "EnumProperty"},
            {"PerformDynamicDelegate", 0x40, "DelegateProperty"},
            {"OptionsClass", 0x50, "ClassProperty"},
        }};
    };

    struct RigVMUserWorkflowOptions
    {
        static constexpr std::string_view Name = "RigVMUserWorkflowOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Subject = 0x28;
            static constexpr std::uintptr_t Workflow = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Subject", 0x28, "ObjectProperty"},
            {"Workflow", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "IsValid",
            "ReportError",
            "ReportInfo",
            "ReportWarning",
            "RequiresDialog",
        }};
    };

    struct RigVMVariant
    {
        static constexpr std::string_view Name = "RigVMVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Tags = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Tags", 0x10, "ArrayProperty"},
        }};
    };

    struct RigVMVariantRef
    {
        static constexpr std::string_view Name = "RigVMVariantRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectPath = 0x0;
            static constexpr std::uintptr_t Variant = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectPath", 0x0, "StructProperty"},
            {"Variant", 0x18, "StructProperty"},
        }};
    };

    struct RigVMWorldTransformDataSource
    {
        static constexpr std::string_view Name = "RigVMWorldTransformDataSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTransform = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldTransform", 0x30, "StructProperty"},
        }};
    };

}
