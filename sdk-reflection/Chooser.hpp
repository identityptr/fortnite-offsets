#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Chooser
{
    struct AnimCurveOverride
    {
        static constexpr std::string_view Name = "AnimCurveOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName = 0x0;
            static constexpr std::uintptr_t CurveValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurveName", 0x0, "NameProperty"},
            {"CurveValue", 0x4, "FloatProperty"},
        }};
    };

    struct AnimCurveOverrideList
    {
        static constexpr std::string_view Name = "AnimCurveOverrideList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
            static constexpr std::uintptr_t Hash = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x0, "ArrayProperty"},
            {"Hash", 0x10, "UInt32Property"},
        }};
    };

    struct AnimNode_ChooserPlayer
    {
        static constexpr std::string_view Name = "AnimNode_ChooserPlayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendStack_Standalone";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationFrequency = 0xF0;
            static constexpr std::uintptr_t Chooser = 0xF8;
            static constexpr std::uintptr_t MirrorDataTable = 0x108;
            static constexpr std::uintptr_t BlendSpaceX = 0x110;
            static constexpr std::uintptr_t BlendSpaceY = 0x114;
            static constexpr std::uintptr_t DefaultSettings = 0x120;
            static constexpr std::uintptr_t ChooserContextDefinition = 0x190;
            static constexpr std::uintptr_t bStartFromMatchingPose = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EvaluationFrequency", 0xF0, "EnumProperty"},
            {"Chooser", 0xF8, "StructProperty"},
            {"MirrorDataTable", 0x108, "ObjectProperty"},
            {"BlendSpaceX", 0x110, "FloatProperty"},
            {"BlendSpaceY", 0x114, "FloatProperty"},
            {"DefaultSettings", 0x120, "StructProperty"},
            {"ChooserContextDefinition", 0x190, "ArrayProperty"},
            {"bStartFromMatchingPose", 0x1A0, "BoolProperty"},
        }};
    };

    struct AssetChooser
    {
        static constexpr std::string_view Name = "AssetChooser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x8, "ObjectProperty"},
        }};
    };

    struct BoolCVarProperty
    {
        static constexpr std::string_view Name = "BoolCVarProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariableName", 0x8, "StrProperty"},
        }};
    };

    struct BoolColumn
    {
        static constexpr std::string_view Name = "BoolColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValuesWithAny = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValuesWithAny", 0x18, "ArrayProperty"},
        }};
    };

    struct BoolContextProperty
    {
        static constexpr std::string_view Name = "BoolContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBoolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t Binding = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"Binding", 0x18, "StructProperty"},
        }};
    };

    struct ChooserColumn
    {
        static constexpr std::string_view Name = "ChooserColumn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserColumnBase
    {
        static constexpr std::string_view Name = "ChooserColumnBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserColumnBool
    {
        static constexpr std::string_view Name = "ChooserColumnBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x30;
            static constexpr std::uintptr_t RowValues = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x30, "InterfaceProperty"},
            {"RowValues", 0x40, "ArrayProperty"},
        }};
    };

    struct ChooserColumnEnum
    {
        static constexpr std::string_view Name = "ChooserColumnEnum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x30;
            static constexpr std::uintptr_t RowValues = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x30, "InterfaceProperty"},
            {"RowValues", 0x40, "ArrayProperty"},
        }};
    };

    struct ChooserColumnFloatRange
    {
        static constexpr std::string_view Name = "ChooserColumnFloatRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x30;
            static constexpr std::uintptr_t RowValues = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x30, "InterfaceProperty"},
            {"RowValues", 0x40, "ArrayProperty"},
        }};
    };

    struct ChooserColumnGameplayTag
    {
        static constexpr std::string_view Name = "ChooserColumnGameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x30;
            static constexpr std::uintptr_t TagMatchType = 0x40;
            static constexpr std::uintptr_t RowValues = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x30, "InterfaceProperty"},
            {"TagMatchType", 0x40, "EnumProperty"},
            {"RowValues", 0x48, "ArrayProperty"},
        }};
    };

    struct ChooserColumnMenuContext
    {
        static constexpr std::string_view Name = "ChooserColumnMenuContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserEnumPropertyBinding
    {
        static constexpr std::string_view Name = "ChooserEnumPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserPropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t ContextIndex = 0x18;
            static constexpr std::uintptr_t IsBoundToRoot = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"ContextIndex", 0x18, "IntProperty"},
            {"IsBoundToRoot", 0x1C, "BoolProperty"},
        }};
    };

    struct ChooserEnumRowData
    {
        static constexpr std::string_view Name = "ChooserEnumRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Comparison = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Comparison", 0x0, "EnumProperty"},
            {"Value", 0x4, "ByteProperty"},
        }};
    };

    struct ChooserEvaluationContext
    {
        static constexpr std::string_view Name = "ChooserEvaluationContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserEvaluationInputObject
    {
        static constexpr std::string_view Name = "ChooserEvaluationInputObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserEvaluationOutputArray
    {
        static constexpr std::string_view Name = "ChooserEvaluationOutputArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserFloatDistanceRowData
    {
        static constexpr std::string_view Name = "ChooserFloatDistanceRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "FloatProperty"},
        }};
    };

    struct ChooserFloatRangeRowData
    {
        static constexpr std::string_view Name = "ChooserFloatRangeRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x4;
            static constexpr std::uintptr_t bNoMin = 0x8;
            static constexpr std::uintptr_t bNoMax = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"min", 0x0, "FloatProperty"},
            {"max", 0x4, "FloatProperty"},
            {"bNoMin", 0x8, "BoolProperty"},
            {"bNoMax", 0x9, "BoolProperty"},
        }};
    };

    struct ChooserFunctionLibrary
    {
        static constexpr std::string_view Name = "ChooserFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "AddChooserObjectInput",
            "AddChooserStructInput",
            "AddChooserStructInputOutput",
            "EvaluateChooser",
            "EvaluateChooserMulti",
            "EvaluateObjectChooserBase",
            "EvaluateObjectChooserBaseMulti",
            "EvaluateObjectChooserBaseMultiSoft",
            "EvaluateObjectChooserBaseSoft",
            "GetChooserObject",
            "GetChooserObjectInput",
            "GetChooserStructOutput",
            "GetChooserStructOutputArray",
            "MakeChooserEvaluationContext",
            "MakeEvaluateChooser",
        }};
    };

    struct ChooserMultiEnumRowData
    {
        static constexpr std::string_view Name = "ChooserMultiEnumRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct ChooserNameColumn
    {
        static constexpr std::string_view Name = "ChooserNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct ChooserNameRowData
    {
        static constexpr std::string_view Name = "ChooserNameRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Comparison = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Comparison", 0x0, "EnumProperty"},
            {"Value", 0x4, "NameProperty"},
        }};
    };

    struct ChooserObjectClassRowData
    {
        static constexpr std::string_view Name = "ChooserObjectClassRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Comparison = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Comparison", 0x0, "EnumProperty"},
            {"Value", 0x8, "ClassProperty"},
        }};
    };

    struct ChooserObjectPropertyBinding
    {
        static constexpr std::string_view Name = "ChooserObjectPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserPropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t ContextIndex = 0x18;
            static constexpr std::uintptr_t IsBoundToRoot = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"ContextIndex", 0x18, "IntProperty"},
            {"IsBoundToRoot", 0x1C, "BoolProperty"},
        }};
    };

    struct ChooserObjectRowData
    {
        static constexpr std::string_view Name = "ChooserObjectRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Comparison = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Comparison", 0x0, "EnumProperty"},
            {"Value", 0x8, "SoftObjectProperty"},
        }};
    };

    struct ChooserOutputEnumRowData
    {
        static constexpr std::string_view Name = "ChooserOutputEnumRowData";
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

    struct ChooserOutputNameColumn
    {
        static constexpr std::string_view Name = "ChooserOutputNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
            static constexpr std::uintptr_t FallbackValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
            {"FallbackValue", 0x28, "NameProperty"},
        }};
    };

    struct ChooserOutputObjectRowData
    {
        static constexpr std::string_view Name = "ChooserOutputObjectRowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct ChooserParameterBase
    {
        static constexpr std::string_view Name = "ChooserParameterBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterBool
    {
        static constexpr std::string_view Name = "ChooserParameterBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterBoolBase
    {
        static constexpr std::string_view Name = "ChooserParameterBoolBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterBool_ContextProperty
    {
        static constexpr std::string_view Name = "ChooserParameterBool_ContextProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyBindingChain", 0x30, "ArrayProperty"},
        }};
    };

    struct ChooserParameterEnum
    {
        static constexpr std::string_view Name = "ChooserParameterEnum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterEnumBase
    {
        static constexpr std::string_view Name = "ChooserParameterEnumBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterEnum_ContextProperty
    {
        static constexpr std::string_view Name = "ChooserParameterEnum_ContextProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyBindingChain", 0x30, "ArrayProperty"},
        }};
    };

    struct ChooserParameterFloat
    {
        static constexpr std::string_view Name = "ChooserParameterFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterFloatBase
    {
        static constexpr std::string_view Name = "ChooserParameterFloatBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterFloat_ContextProperty
    {
        static constexpr std::string_view Name = "ChooserParameterFloat_ContextProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyBindingChain", 0x30, "ArrayProperty"},
        }};
    };

    struct ChooserParameterGameplayTag
    {
        static constexpr std::string_view Name = "ChooserParameterGameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterGameplayTagBase
    {
        static constexpr std::string_view Name = "ChooserParameterGameplayTagBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterGameplayTagQueryBase
    {
        static constexpr std::string_view Name = "ChooserParameterGameplayTagQueryBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterGameplayTag_ContextProperty
    {
        static constexpr std::string_view Name = "ChooserParameterGameplayTag_ContextProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyBindingChain", 0x30, "ArrayProperty"},
        }};
    };

    struct ChooserParameterNameBase
    {
        static constexpr std::string_view Name = "ChooserParameterNameBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterObjectBase
    {
        static constexpr std::string_view Name = "ChooserParameterObjectBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterRandomizeBase
    {
        static constexpr std::string_view Name = "ChooserParameterRandomizeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterStructBase
    {
        static constexpr std::string_view Name = "ChooserParameterStructBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserPlayerSettings
    {
        static constexpr std::string_view Name = "ChooserPlayerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bMirror = 0x0;
            static constexpr std::uintptr_t StartTime = 0x4;
            static constexpr std::uintptr_t bForceLooping = 0x8;
            static constexpr std::uintptr_t PlaybackRate = 0xC;
            static constexpr std::uintptr_t CurveOverrides = 0x10;
            static constexpr std::uintptr_t BlendTime = 0x28;
            static constexpr std::uintptr_t BlendProfile = 0x30;
            static constexpr std::uintptr_t BlendOption = 0x38;
            static constexpr std::uintptr_t bUseInertialBlend = 0x39;
            static constexpr std::uintptr_t bForceBlendTo = 0x3A;
            static constexpr std::uintptr_t MinDeltaTimeToForceBlendTo = 0x3C;
            static constexpr std::uintptr_t PlayingAsset = 0x40;
            static constexpr std::uintptr_t PlayingAssetAccumulatedTime = 0x48;
            static constexpr std::uintptr_t bIsPlayingAssetMirrored = 0x4C;
            static constexpr std::uintptr_t PlayingAssetBlendParameters = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bMirror", 0x0, "BoolProperty"},
            {"StartTime", 0x4, "FloatProperty"},
            {"bForceLooping", 0x8, "BoolProperty"},
            {"PlaybackRate", 0xC, "FloatProperty"},
            {"CurveOverrides", 0x10, "StructProperty"},
            {"BlendTime", 0x28, "FloatProperty"},
            {"BlendProfile", 0x30, "ObjectProperty"},
            {"BlendOption", 0x38, "EnumProperty"},
            {"bUseInertialBlend", 0x39, "BoolProperty"},
            {"bForceBlendTo", 0x3A, "BoolProperty"},
            {"MinDeltaTimeToForceBlendTo", 0x3C, "FloatProperty"},
            {"PlayingAsset", 0x40, "ObjectProperty"},
            {"PlayingAssetAccumulatedTime", 0x48, "FloatProperty"},
            {"bIsPlayingAssetMirrored", 0x4C, "BoolProperty"},
            {"PlayingAssetBlendParameters", 0x50, "StructProperty"},
        }};
    };

    struct ChooserPropertyBinding
    {
        static constexpr std::string_view Name = "ChooserPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t ContextIndex = 0x18;
            static constexpr std::uintptr_t IsBoundToRoot = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"ContextIndex", 0x18, "IntProperty"},
            {"IsBoundToRoot", 0x1C, "BoolProperty"},
        }};
    };

    struct ChooserRandomizationContext
    {
        static constexpr std::string_view Name = "ChooserRandomizationContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserSignature
    {
        static constexpr std::string_view Name = "ChooserSignature";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Signature = 0x48;
            static constexpr std::uintptr_t ResultType = 0x50;
            static constexpr std::uintptr_t OutputObjectType = 0x58;
            static constexpr std::uintptr_t ContextData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Signature", 0x48, "ObjectProperty"},
            {"ResultType", 0x50, "EnumProperty"},
            {"OutputObjectType", 0x58, "ClassProperty"},
            {"ContextData", 0x60, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "IsUsingLocalSignatureData",
            "SupportsSignatureAsset",
        }};
    };

    struct ChooserStructPropertyBinding
    {
        static constexpr std::string_view Name = "ChooserStructPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserPropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t ContextIndex = 0x18;
            static constexpr std::uintptr_t IsBoundToRoot = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"ContextIndex", 0x18, "IntProperty"},
            {"IsBoundToRoot", 0x1C, "BoolProperty"},
        }};
    };

    struct ChooserTable
    {
        static constexpr std::string_view Name = "ChooserTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChooserSignature";
        struct Offsets
        {
            static constexpr std::uintptr_t RootChooser = 0x70;
            static constexpr std::uintptr_t FallbackResult = 0x78;
            static constexpr std::uintptr_t CookedResults = 0x88;
            static constexpr std::uintptr_t ColumnsStructs = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootChooser", 0x70, "ObjectProperty"},
            {"FallbackResult", 0x78, "StructProperty"},
            {"CookedResults", 0x88, "ArrayProperty"},
            {"ColumnsStructs", 0x98, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ResultAssetFilter",
        }};
    };

    struct ClassChooser
    {
        static constexpr std::string_view Name = "ClassChooser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Class", 0x8, "ClassProperty"},
        }};
    };

    struct ContextObjectTypeBase
    {
        static constexpr std::string_view Name = "ContextObjectTypeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Direction", 0x0, "EnumProperty"},
        }};
    };

    struct ContextObjectTypeClass
    {
        static constexpr std::string_view Name = "ContextObjectTypeClass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ContextObjectTypeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Class", 0x8, "ClassProperty"},
        }};
    };

    struct ContextObjectTypeStruct
    {
        static constexpr std::string_view Name = "ContextObjectTypeStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ContextObjectTypeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Struct", 0x8, "ObjectProperty"},
        }};
    };

    struct EnumCVarProperty
    {
        static constexpr std::string_view Name = "EnumCVarProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterEnumBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x8;
            static constexpr std::uintptr_t Enum = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableName", 0x8, "StrProperty"},
            {"Enum", 0x18, "ObjectProperty"},
        }};
    };

    struct EnumColumn
    {
        static constexpr std::string_view Name = "EnumColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EnumColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct EnumColumnBase
    {
        static constexpr std::string_view Name = "EnumColumnBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnumContextProperty
    {
        static constexpr std::string_view Name = "EnumContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterEnumBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t Binding = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"Binding", 0x18, "StructProperty"},
        }};
    };

    struct EvaluateChooser
    {
        static constexpr std::string_view Name = "EvaluateChooser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chooser = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Chooser", 0x8, "ObjectProperty"},
        }};
    };

    struct FloatAutoPopulator
    {
        static constexpr std::string_view Name = "FloatAutoPopulator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FloatCVarProperty
    {
        static constexpr std::string_view Name = "FloatCVarProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariableName", 0x8, "StrProperty"},
        }};
    };

    struct FloatContextProperty
    {
        static constexpr std::string_view Name = "FloatContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterFloatBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t Binding = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"Binding", 0x18, "StructProperty"},
        }};
    };

    struct FloatDistanceColumn
    {
        static constexpr std::string_view Name = "FloatDistanceColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t MaxDistance = 0x18;
            static constexpr std::uintptr_t CostMultiplier = 0x20;
            static constexpr std::uintptr_t bFilterOverMaxDistance = 0x24;
            static constexpr std::uintptr_t bWrapInput = 0x25;
            static constexpr std::uintptr_t MinValue = 0x28;
            static constexpr std::uintptr_t MaxValue = 0x30;
            static constexpr std::uintptr_t RowValues = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"MaxDistance", 0x18, "DoubleProperty"},
            {"CostMultiplier", 0x20, "FloatProperty"},
            {"bFilterOverMaxDistance", 0x24, "BoolProperty"},
            {"bWrapInput", 0x25, "BoolProperty"},
            {"MinValue", 0x28, "DoubleProperty"},
            {"MaxValue", 0x30, "DoubleProperty"},
            {"RowValues", 0x38, "ArrayProperty"},
        }};
    };

    struct FloatRangeColumn
    {
        static constexpr std::string_view Name = "FloatRangeColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t bWrapInput = 0x18;
            static constexpr std::uintptr_t MinValue = 0x20;
            static constexpr std::uintptr_t MaxValue = 0x28;
            static constexpr std::uintptr_t RowValues = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"bWrapInput", 0x18, "BoolProperty"},
            {"MinValue", 0x20, "DoubleProperty"},
            {"MaxValue", 0x28, "DoubleProperty"},
            {"RowValues", 0x30, "ArrayProperty"},
        }};
    };

    struct GameplayTagColumn
    {
        static constexpr std::string_view Name = "GameplayTagColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t TagMatchType = 0x18;
            static constexpr std::uintptr_t TagMatchDirection = 0x19;
            static constexpr std::uintptr_t bMatchExact = 0x1A;
            static constexpr std::uintptr_t bInvertMatchingLogic = 0x1B;
            static constexpr std::uintptr_t RowValues = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"TagMatchType", 0x18, "EnumProperty"},
            {"TagMatchDirection", 0x19, "EnumProperty"},
            {"bMatchExact", 0x1A, "BoolProperty"},
            {"bInvertMatchingLogic", 0x1B, "BoolProperty"},
            {"RowValues", 0x20, "ArrayProperty"},
        }};
    };

    struct GameplayTagContextProperty
    {
        static constexpr std::string_view Name = "GameplayTagContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterGameplayTagBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyBindingChain = 0x8;
            static constexpr std::uintptr_t Binding = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyBindingChain", 0x8, "ArrayProperty"},
            {"Binding", 0x18, "StructProperty"},
        }};
    };

    struct GameplayTagQueryColumn
    {
        static constexpr std::string_view Name = "GameplayTagQueryColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct GameplayTagQueryContextProperty
    {
        static constexpr std::string_view Name = "GameplayTagQueryContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterGameplayTagQueryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct HasContextClass
    {
        static constexpr std::string_view Name = "HasContextClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiEnumColumn
    {
        static constexpr std::string_view Name = "MultiEnumColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct NameContextProperty
    {
        static constexpr std::string_view Name = "NameContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterNameBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct NestedChooser
    {
        static constexpr std::string_view Name = "NestedChooser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chooser = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Chooser", 0x8, "ObjectProperty"},
        }};
    };

    struct ObjectChooser
    {
        static constexpr std::string_view Name = "ObjectChooser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectChooserBase
    {
        static constexpr std::string_view Name = "ObjectChooserBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectChooser_Asset
    {
        static constexpr std::string_view Name = "ObjectChooser_Asset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x30, "ObjectProperty"},
        }};
    };

    struct ObjectChooser_EvaluateChooser
    {
        static constexpr std::string_view Name = "ObjectChooser_EvaluateChooser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Chooser = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Chooser", 0x30, "ObjectProperty"},
        }};
    };

    struct ObjectClassColumn
    {
        static constexpr std::string_view Name = "ObjectClassColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct ObjectColumn
    {
        static constexpr std::string_view Name = "ObjectColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
        }};
    };

    struct ObjectContextProperty
    {
        static constexpr std::string_view Name = "ObjectContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterObjectBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct OutputBoolColumn
    {
        static constexpr std::string_view Name = "OutputBoolColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t bFallbackValue = 0x18;
            static constexpr std::uintptr_t RowValues = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"bFallbackValue", 0x18, "BoolProperty"},
            {"RowValues", 0x20, "ArrayProperty"},
        }};
    };

    struct OutputEnumColumn
    {
        static constexpr std::string_view Name = "OutputEnumColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EnumColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t FallbackValue = 0x18;
            static constexpr std::uintptr_t RowValues = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"FallbackValue", 0x18, "StructProperty"},
            {"RowValues", 0x20, "ArrayProperty"},
        }};
    };

    struct OutputFloatColumn
    {
        static constexpr std::string_view Name = "OutputFloatColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t FallbackValue = 0x18;
            static constexpr std::uintptr_t RowValues = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"FallbackValue", 0x18, "DoubleProperty"},
            {"RowValues", 0x20, "ArrayProperty"},
        }};
    };

    struct OutputGameplayTagColumn
    {
        static constexpr std::string_view Name = "OutputGameplayTagColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
            static constexpr std::uintptr_t FallbackValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
            {"FallbackValue", 0x28, "StructProperty"},
        }};
    };

    struct OutputGameplayTagQueryColumn
    {
        static constexpr std::string_view Name = "OutputGameplayTagQueryColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
            static constexpr std::uintptr_t FallbackValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
            {"FallbackValue", 0x28, "StructProperty"},
        }};
    };

    struct OutputObjectColumn
    {
        static constexpr std::string_view Name = "OutputObjectColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RowValues = 0x18;
            static constexpr std::uintptr_t FallbackValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RowValues", 0x18, "ArrayProperty"},
            {"FallbackValue", 0x28, "StructProperty"},
        }};
    };

    struct OutputStructColumn
    {
        static constexpr std::string_view Name = "OutputStructColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t FallbackValue = 0x18;
            static constexpr std::uintptr_t RowValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"FallbackValue", 0x18, "StructProperty"},
            {"RowValues", 0x28, "ArrayProperty"},
        }};
    };

    struct RandomizeColumn
    {
        static constexpr std::string_view Name = "RandomizeColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x8;
            static constexpr std::uintptr_t RepeatProbabilityMultipliers = 0x18;
            static constexpr std::uintptr_t EqualCostThreshold = 0x28;
            static constexpr std::uintptr_t RowValues = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputValue", 0x8, "StructProperty"},
            {"RepeatProbabilityMultipliers", 0x18, "ArrayProperty"},
            {"EqualCostThreshold", 0x28, "FloatProperty"},
            {"RowValues", 0x30, "ArrayProperty"},
        }};
    };

    struct RandomizeContextProperty
    {
        static constexpr std::string_view Name = "RandomizeContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterRandomizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct SoftAssetChooser
    {
        static constexpr std::string_view Name = "SoftAssetChooser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x8, "SoftObjectProperty"},
        }};
    };

    struct StructContextProperty
    {
        static constexpr std::string_view Name = "StructContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

}
