#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataflowCore
{
    struct ConvertBoolArrayTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertBoolArrayTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertBoolTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertBoolTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xE9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xE9, "StructProperty"},
        }};
    };

    struct ConvertIndexArrayToSelectionTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertIndexArrayToSelectionTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0xE8;
            static constexpr std::uintptr_t In = 0x118;
            static constexpr std::uintptr_t Out = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Collection", 0xE8, "StructProperty"},
            {"In", 0x118, "ArrayProperty"},
            {"Out", 0x128, "StructProperty"},
        }};
    };

    struct ConvertIndexToSelectionTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertIndexToSelectionTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0xE8;
            static constexpr std::uintptr_t In = 0x118;
            static constexpr std::uintptr_t Out = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Collection", 0xE8, "StructProperty"},
            {"In", 0x118, "IntProperty"},
            {"Out", 0x120, "StructProperty"},
        }};
    };

    struct ConvertNumericArrayTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertNumericArrayTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertNumericTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertNumericTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF0, "StructProperty"},
        }};
    };

    struct ConvertRotationDataflowNode
    {
        static constexpr std::string_view Name = "ConvertRotationDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0x100, "StructProperty"},
        }};
    };

    struct ConvertSelectionTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertSelectionTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0xE8;
            static constexpr std::uintptr_t In = 0x118;
            static constexpr std::uintptr_t bAllElementsMustBeSelected = 0x140;
            static constexpr std::uintptr_t Out = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Collection", 0xE8, "StructProperty"},
            {"In", 0x118, "StructProperty"},
            {"bAllElementsMustBeSelected", 0x140, "BoolProperty"},
            {"Out", 0x148, "StructProperty"},
        }};
    };

    struct ConvertSelectionTypesToIndexArrayDataflowNode
    {
        static constexpr std::string_view Name = "ConvertSelectionTypesToIndexArrayDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0x110, "ArrayProperty"},
        }};
    };

    struct ConvertStringArrayTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertStringArrayTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertStringConvertibleTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertStringConvertibleTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertStringTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertStringTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertTransformArrayTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertTransformArrayTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertTransformTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertTransformTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xF0;
            static constexpr std::uintptr_t Out = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xF0, "StructProperty"},
            {"Out", 0x150, "StructProperty"},
        }};
    };

    struct ConvertUObjectConvertibleTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertUObjectConvertibleTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF0, "StructProperty"},
        }};
    };

    struct ConvertVectorArrayTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertVectorArrayTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xE8;
            static constexpr std::uintptr_t Out = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xE8, "StructProperty"},
            {"Out", 0xF8, "StructProperty"},
        }};
    };

    struct ConvertVectorTypesDataflowNode
    {
        static constexpr std::string_view Name = "ConvertVectorTypesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t In = 0xF0;
            static constexpr std::uintptr_t Out = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"In", 0xF0, "StructProperty"},
            {"Out", 0x110, "StructProperty"},
        }};
    };

    struct DataflowAllTypes
    {
        static constexpr std::string_view Name = "DataflowAllTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowAnyType
    {
        static constexpr std::string_view Name = "DataflowAnyType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowArrayInput
    {
        static constexpr std::string_view Name = "DataflowArrayInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowInput";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowArrayOutput
    {
        static constexpr std::string_view Name = "DataflowArrayOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowOutput";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowArrayTypes
    {
        static constexpr std::string_view Name = "DataflowArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowBaseElement
    {
        static constexpr std::string_view Name = "DataflowBaseElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowBoolArrayTypes
    {
        static constexpr std::string_view Name = "DataflowBoolArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowBoolTypes
    {
        static constexpr std::string_view Name = "DataflowBoolTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "BoolProperty"},
        }};
    };

    struct DataflowBranchNode
    {
        static constexpr std::string_view Name = "DataflowBranchNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TrueValue = 0xE8;
            static constexpr std::uintptr_t FalseValue = 0xE9;
            static constexpr std::uintptr_t bCondition = 0xEA;
            static constexpr std::uintptr_t Result = 0xEB;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TrueValue", 0xE8, "StructProperty"},
            {"FalseValue", 0xE9, "StructProperty"},
            {"bCondition", 0xEA, "BoolProperty"},
            {"Result", 0xEB, "StructProperty"},
        }};
    };

    struct DataflowConnection
    {
        static constexpr std::string_view Name = "DataflowConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowConvertToResolutionNode
    {
        static constexpr std::string_view Name = "DataflowConvertToResolutionNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE8;
            static constexpr std::uintptr_t Method = 0xF0;
            static constexpr std::uintptr_t Resolution = 0xF4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0xE8, "StructProperty"},
            {"Method", 0xF0, "EnumProperty"},
            {"Resolution", 0xF4, "EnumProperty"},
        }};
    };

    struct DataflowCurveSelection
    {
        static constexpr std::string_view Name = "DataflowCurveSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowFaceSelection
    {
        static constexpr std::string_view Name = "DataflowFaceSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowForceDependencyNode
    {
        static constexpr std::string_view Name = "DataflowForceDependencyNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE8;
            static constexpr std::uintptr_t DependentValue = 0xE9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0xE8, "StructProperty"},
            {"DependentValue", 0xE9, "StructProperty"},
        }};
    };

    struct DataflowFreezeActions
    {
        static constexpr std::string_view Name = "DataflowFreezeActions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowFunctionProperty
    {
        static constexpr std::string_view Name = "DataflowFunctionProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowGeometrySelection
    {
        static constexpr std::string_view Name = "DataflowGeometrySelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowGraphInterface
    {
        static constexpr std::string_view Name = "DataflowGraphInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowImage
    {
        static constexpr std::string_view Name = "DataflowImage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowImageCombineChannelsNode
    {
        static constexpr std::string_view Name = "DataflowImageCombineChannelsNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Red = 0xE8;
            static constexpr std::uintptr_t Green = 0x110;
            static constexpr std::uintptr_t Blue = 0x138;
            static constexpr std::uintptr_t Alpha = 0x160;
            static constexpr std::uintptr_t Image = 0x188;
            static constexpr std::uintptr_t ResolutionOptions = 0x1B0;
            static constexpr std::uintptr_t Resolution = 0x1B4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Red", 0xE8, "StructProperty"},
            {"Green", 0x110, "StructProperty"},
            {"Blue", 0x138, "StructProperty"},
            {"Alpha", 0x160, "StructProperty"},
            {"Image", 0x188, "StructProperty"},
            {"ResolutionOptions", 0x1B0, "EnumProperty"},
            {"Resolution", 0x1B4, "EnumProperty"},
        }};
    };

    struct DataflowImageFromColorNode
    {
        static constexpr std::string_view Name = "DataflowImageFromColorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FillColor = 0xE8;
            static constexpr std::uintptr_t Resolution = 0xF8;
            static constexpr std::uintptr_t Image = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FillColor", 0xE8, "StructProperty"},
            {"Resolution", 0xF8, "EnumProperty"},
            {"Image", 0x100, "StructProperty"},
        }};
    };

    struct DataflowImageSplitChannelsNode
    {
        static constexpr std::string_view Name = "DataflowImageSplitChannelsNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0xE8;
            static constexpr std::uintptr_t Red = 0x110;
            static constexpr std::uintptr_t Green = 0x138;
            static constexpr std::uintptr_t Blue = 0x160;
            static constexpr std::uintptr_t Alpha = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Image", 0xE8, "StructProperty"},
            {"Red", 0x110, "StructProperty"},
            {"Green", 0x138, "StructProperty"},
            {"Blue", 0x160, "StructProperty"},
            {"Alpha", 0x188, "StructProperty"},
        }};
    };

    struct DataflowInput
    {
        static constexpr std::string_view Name = "DataflowInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowConnection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowLinearSequenceGeneratorNode
    {
        static constexpr std::string_view Name = "DataflowLinearSequenceGeneratorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0xE8;
            static constexpr std::uintptr_t Increment = 0xF0;
            static constexpr std::uintptr_t bReverseOrder = 0xF8;
            static constexpr std::uintptr_t Generator = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Start", 0xE8, "StructProperty"},
            {"Increment", 0xF0, "StructProperty"},
            {"bReverseOrder", 0xF8, "BoolProperty"},
            {"Generator", 0x100, "StructProperty"},
        }};
    };

    struct DataflowMaterialSelection
    {
        static constexpr std::string_view Name = "DataflowMaterialSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowMathAbsNode
    {
        static constexpr std::string_view Name = "DataflowMathAbsNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathAddNode
    {
        static constexpr std::string_view Name = "DataflowMathAddNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathArcCosNode
    {
        static constexpr std::string_view Name = "DataflowMathArcCosNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathArcSinNode
    {
        static constexpr std::string_view Name = "DataflowMathArcSinNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathArcTan2Node
    {
        static constexpr std::string_view Name = "DataflowMathArcTan2Node";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathArcTanNode
    {
        static constexpr std::string_view Name = "DataflowMathArcTanNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathCeilNode
    {
        static constexpr std::string_view Name = "DataflowMathCeilNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathClampNode
    {
        static constexpr std::string_view Name = "DataflowMathClampNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0xF8;
            static constexpr std::uintptr_t max = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0xF8, "StructProperty"},
            {"max", 0x100, "StructProperty"},
        }};
    };

    struct DataflowMathConstantNode
    {
        static constexpr std::string_view Name = "DataflowMathConstantNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Constant = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Constant", 0xE8, "EnumProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathCosNode
    {
        static constexpr std::string_view Name = "DataflowMathCosNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathCubeNode
    {
        static constexpr std::string_view Name = "DataflowMathCubeNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathDegToRadNode
    {
        static constexpr std::string_view Name = "DataflowMathDegToRadNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathDivideNode
    {
        static constexpr std::string_view Name = "DataflowMathDivideNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Fallback = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fallback", 0x100, "StructProperty"},
        }};
    };

    struct DataflowMathExpNode
    {
        static constexpr std::string_view Name = "DataflowMathExpNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathFloorNode
    {
        static constexpr std::string_view Name = "DataflowMathFloorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathFracNode
    {
        static constexpr std::string_view Name = "DataflowMathFracNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathInverseSquareRootNode
    {
        static constexpr std::string_view Name = "DataflowMathInverseSquareRootNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Fallback = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fallback", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathLogNode
    {
        static constexpr std::string_view Name = "DataflowMathLogNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathLogXNode
    {
        static constexpr std::string_view Name = "DataflowMathLogXNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"base", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathMaximumNode
    {
        static constexpr std::string_view Name = "DataflowMathMaximumNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathMaximumNode_v2
    {
        static constexpr std::string_view Name = "DataflowMathMaximumNode_v2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0xE8;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Inputs", 0xE8, "ArrayProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathMinimumNode
    {
        static constexpr std::string_view Name = "DataflowMathMinimumNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathMinimumNode_v2
    {
        static constexpr std::string_view Name = "DataflowMathMinimumNode_v2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0xE8;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Inputs", 0xE8, "ArrayProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathMultiplyNode
    {
        static constexpr std::string_view Name = "DataflowMathMultiplyNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathNegateNode
    {
        static constexpr std::string_view Name = "DataflowMathNegateNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathOneInputOperatorNode
    {
        static constexpr std::string_view Name = "DataflowMathOneInputOperatorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathOneMinusNode
    {
        static constexpr std::string_view Name = "DataflowMathOneMinusNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathPowNode
    {
        static constexpr std::string_view Name = "DataflowMathPowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathRadToDegNode
    {
        static constexpr std::string_view Name = "DataflowMathRadToDegNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathReciprocalNode
    {
        static constexpr std::string_view Name = "DataflowMathReciprocalNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Fallback = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fallback", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathRoundNode
    {
        static constexpr std::string_view Name = "DataflowMathRoundNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathSignNode
    {
        static constexpr std::string_view Name = "DataflowMathSignNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathSinNode
    {
        static constexpr std::string_view Name = "DataflowMathSinNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathSquareNode
    {
        static constexpr std::string_view Name = "DataflowMathSquareNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathSquareRootNode
    {
        static constexpr std::string_view Name = "DataflowMathSquareRootNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathSubtractNode
    {
        static constexpr std::string_view Name = "DataflowMathSubtractNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathTwoInputsOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMathTanNode
    {
        static constexpr std::string_view Name = "DataflowMathTanNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathTruncNode
    {
        static constexpr std::string_view Name = "DataflowMathTruncNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowMathOneInputOperatorNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t Result = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"Result", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowMathTwoInputsOperatorNode
    {
        static constexpr std::string_view Name = "DataflowMathTwoInputsOperatorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t Result = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xE8, "StructProperty"},
            {"B", 0xF0, "StructProperty"},
            {"Result", 0xF8, "StructProperty"},
        }};
    };

    struct DataflowMeshSelectionTypes
    {
        static constexpr std::string_view Name = "DataflowMeshSelectionTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowNode
    {
        static constexpr std::string_view Name = "DataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideColor = 0x10;
            static constexpr std::uintptr_t OverrideColor = 0x14;
            static constexpr std::uintptr_t bActive = 0x88;
            static constexpr std::uintptr_t FrozenProperties = 0x90;
            static constexpr std::uintptr_t bIsFrozen = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideColor", 0x10, "BoolProperty"},
            {"OverrideColor", 0x14, "StructProperty"},
            {"bActive", 0x88, "BoolProperty"},
            {"FrozenProperties", 0x90, "StructProperty"},
            {"bIsFrozen", 0xA0, "BoolProperty"},
        }};
    };

    struct DataflowNumericArrayTypes
    {
        static constexpr std::string_view Name = "DataflowNumericArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowNumericTypes
    {
        static constexpr std::string_view Name = "DataflowNumericTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "DoubleProperty"},
        }};
    };

    struct DataflowOutput
    {
        static constexpr std::string_view Name = "DataflowOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowConnection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowOverrideNode
    {
        static constexpr std::string_view Name = "DataflowOverrideNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0xE8;
            static constexpr std::uintptr_t Default = 0xF0;
            static constexpr std::uintptr_t IsOverriden = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0xE8, "NameProperty"},
            {"Default", 0xF0, "StrProperty"},
            {"IsOverriden", 0x100, "BoolProperty"},
        }};
    };

    struct DataflowPath
    {
        static constexpr std::string_view Name = "DataflowPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPerlinNoiseGeneratorNode
    {
        static constexpr std::string_view Name = "DataflowPerlinNoiseGeneratorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Frequency = 0xE8;
            static constexpr std::uintptr_t Offset = 0xEC;
            static constexpr std::uintptr_t NoiseMin = 0xF0;
            static constexpr std::uintptr_t NoiseMax = 0xF4;
            static constexpr std::uintptr_t bClamp = 0xF8;
            static constexpr std::uintptr_t bReverseOrder = 0xF9;
            static constexpr std::uintptr_t Generator = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Frequency", 0xE8, "FloatProperty"},
            {"Offset", 0xEC, "FloatProperty"},
            {"NoiseMin", 0xF0, "FloatProperty"},
            {"NoiseMax", 0xF4, "FloatProperty"},
            {"bClamp", 0xF8, "BoolProperty"},
            {"bReverseOrder", 0xF9, "BoolProperty"},
            {"Generator", 0x100, "StructProperty"},
        }};
    };

    struct DataflowPlane
    {
        static constexpr std::string_view Name = "DataflowPlane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Point = 0x0;
            static constexpr std::uintptr_t Normal = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Point", 0x0, "StructProperty"},
            {"Normal", 0x18, "StructProperty"},
        }};
    };

    struct DataflowPoints
    {
        static constexpr std::string_view Name = "DataflowPoints";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Collection", 0x0, "StructProperty"},
        }};
    };

    struct DataflowPointsSelection
    {
        static constexpr std::string_view Name = "DataflowPointsSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPrimitiveArrayStorage
    {
        static constexpr std::string_view Name = "DataflowPrimitiveArrayStorage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPrimitiveArrayTypes
    {
        static constexpr std::string_view Name = "DataflowPrimitiveArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowPrimitiveTypes
    {
        static constexpr std::string_view Name = "DataflowPrimitiveTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowPrimitiveTypesStorage
    {
        static constexpr std::string_view Name = "DataflowPrimitiveTypesStorage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPrintNode
    {
        static constexpr std::string_view Name = "DataflowPrintNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0xE8, "StructProperty"},
        }};
    };

    struct DataflowRandomGeneratorNode
    {
        static constexpr std::string_view Name = "DataflowRandomGeneratorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0xE8;
            static constexpr std::uintptr_t RandomMin = 0xF0;
            static constexpr std::uintptr_t RandomMax = 0xF8;
            static constexpr std::uintptr_t bReverseOrder = 0x100;
            static constexpr std::uintptr_t Generator = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Seed", 0xE8, "IntProperty"},
            {"RandomMin", 0xF0, "StructProperty"},
            {"RandomMax", 0xF8, "StructProperty"},
            {"bReverseOrder", 0x100, "BoolProperty"},
            {"Generator", 0x108, "StructProperty"},
        }};
    };

    struct DataflowReRouteNode
    {
        static constexpr std::string_view Name = "DataflowReRouteNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0xE8, "StructProperty"},
        }};
    };

    struct DataflowRotationTypes
    {
        static constexpr std::string_view Name = "DataflowRotationTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowSelectNode
    {
        static constexpr std::string_view Name = "DataflowSelectNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0xE8;
            static constexpr std::uintptr_t SelectedIndex = 0xF8;
            static constexpr std::uintptr_t Result = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Inputs", 0xE8, "ArrayProperty"},
            {"SelectedIndex", 0xF8, "IntProperty"},
            {"Result", 0xFC, "StructProperty"},
        }};
    };

    struct DataflowSelection
    {
        static constexpr std::string_view Name = "DataflowSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSelectionTypes
    {
        static constexpr std::string_view Name = "DataflowSelectionTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowSettings
    {
        static constexpr std::string_view Name = "DataflowSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateEntries = 0x30;
            static constexpr std::uintptr_t NodeColorsMap = 0x40;
            static constexpr std::uintptr_t PinSettingsMap = 0x50;
            static constexpr std::uintptr_t TransformLevelColors = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TemplateEntries", 0x30, "ArrayProperty"},
            {"NodeColorsMap", 0x40, "MapProperty"},
            {"PinSettingsMap", 0x50, "MapProperty"},
            {"TransformLevelColors", 0x60, "StructProperty"},
        }};
    };

    struct DataflowSimpleRegexGeneratorNode
    {
        static constexpr std::string_view Name = "DataflowSimpleRegexGeneratorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t List = 0xE8;
            static constexpr std::uintptr_t bReverseOrder = 0xF8;
            static constexpr std::uintptr_t Generator = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"List", 0xE8, "StrProperty"},
            {"bReverseOrder", 0xF8, "BoolProperty"},
            {"Generator", 0x100, "StructProperty"},
        }};
    };

    struct DataflowStringArrayTypes
    {
        static constexpr std::string_view Name = "DataflowStringArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowStringConvertibleTypes
    {
        static constexpr std::string_view Name = "DataflowStringConvertibleTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StrProperty"},
        }};
    };

    struct DataflowStringTypes
    {
        static constexpr std::string_view Name = "DataflowStringTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StrProperty"},
        }};
    };

    struct DataflowTemplateSettingsEntry
    {
        static constexpr std::string_view Name = "DataflowTemplateSettingsEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassType = 0x0;
            static constexpr std::uintptr_t TemplateFolder = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassType", 0x0, "ClassProperty"},
            {"TemplateFolder", 0x8, "StructProperty"},
        }};
    };

    struct DataflowTerminalNode
    {
        static constexpr std::string_view Name = "DataflowTerminalNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideColor = 0x10;
            static constexpr std::uintptr_t OverrideColor = 0x14;
            static constexpr std::uintptr_t bActive = 0x88;
            static constexpr std::uintptr_t FrozenProperties = 0x90;
            static constexpr std::uintptr_t bIsFrozen = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideColor", 0x10, "BoolProperty"},
            {"OverrideColor", 0x14, "StructProperty"},
            {"bActive", 0x88, "BoolProperty"},
            {"FrozenProperties", 0x90, "StructProperty"},
            {"bIsFrozen", 0xA0, "BoolProperty"},
        }};
    };

    struct DataflowTransformArrayTypes
    {
        static constexpr std::string_view Name = "DataflowTransformArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowTransformSelection
    {
        static constexpr std::string_view Name = "DataflowTransformSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowTransformTypes
    {
        static constexpr std::string_view Name = "DataflowTransformTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowUObjectConvertibleTypes
    {
        static constexpr std::string_view Name = "DataflowUObjectConvertibleTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ObjectProperty"},
        }};
    };

    struct DataflowUStructTypes
    {
        static constexpr std::string_view Name = "DataflowUStructTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowValueGenerator
    {
        static constexpr std::string_view Name = "DataflowValueGenerator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowVectorAddNode
    {
        static constexpr std::string_view Name = "DataflowVectorAddNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t V = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"V", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorArrayTypes
    {
        static constexpr std::string_view Name = "DataflowVectorArrayTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowVectorBreakNode
    {
        static constexpr std::string_view Name = "DataflowVectorBreakNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t V = 0xF0;
            static constexpr std::uintptr_t X = 0x110;
            static constexpr std::uintptr_t Y = 0x118;
            static constexpr std::uintptr_t Z = 0x120;
            static constexpr std::uintptr_t W = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"V", 0xF0, "StructProperty"},
            {"X", 0x110, "StructProperty"},
            {"Y", 0x118, "StructProperty"},
            {"Z", 0x120, "StructProperty"},
            {"W", 0x128, "StructProperty"},
        }};
    };

    struct DataflowVectorCrossProductNode
    {
        static constexpr std::string_view Name = "DataflowVectorCrossProductNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t CrossProduct = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"CrossProduct", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorDistanceNode
    {
        static constexpr std::string_view Name = "DataflowVectorDistanceNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t Distance = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"Distance", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorDivideNode
    {
        static constexpr std::string_view Name = "DataflowVectorDivideNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t Fallback = 0x130;
            static constexpr std::uintptr_t V = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"Fallback", 0x130, "StructProperty"},
            {"V", 0x150, "StructProperty"},
        }};
    };

    struct DataflowVectorDotProductNode
    {
        static constexpr std::string_view Name = "DataflowVectorDotProductNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t DotProduct = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"DotProduct", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorLengthNode
    {
        static constexpr std::string_view Name = "DataflowVectorLengthNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t V = 0xF0;
            static constexpr std::uintptr_t Length = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"V", 0xF0, "StructProperty"},
            {"Length", 0x110, "StructProperty"},
        }};
    };

    struct DataflowVectorMakeVec2Node
    {
        static constexpr std::string_view Name = "DataflowVectorMakeVec2Node";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0xE8;
            static constexpr std::uintptr_t Y = 0xF0;
            static constexpr std::uintptr_t Vector2D = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0xE8, "StructProperty"},
            {"Y", 0xF0, "StructProperty"},
            {"Vector2D", 0x100, "StructProperty"},
        }};
    };

    struct DataflowVectorMakeVec3Node
    {
        static constexpr std::string_view Name = "DataflowVectorMakeVec3Node";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0xE8;
            static constexpr std::uintptr_t Y = 0xF0;
            static constexpr std::uintptr_t Z = 0xF8;
            static constexpr std::uintptr_t Vector3d = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0xE8, "StructProperty"},
            {"Y", 0xF0, "StructProperty"},
            {"Z", 0xF8, "StructProperty"},
            {"Vector3d", 0x100, "StructProperty"},
        }};
    };

    struct DataflowVectorMakeVec4Node
    {
        static constexpr std::string_view Name = "DataflowVectorMakeVec4Node";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0xE8;
            static constexpr std::uintptr_t Y = 0xF0;
            static constexpr std::uintptr_t Z = 0xF8;
            static constexpr std::uintptr_t W = 0x100;
            static constexpr std::uintptr_t Vector4d = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"X", 0xE8, "StructProperty"},
            {"Y", 0xF0, "StructProperty"},
            {"Z", 0xF8, "StructProperty"},
            {"W", 0x100, "StructProperty"},
            {"Vector4d", 0x110, "StructProperty"},
        }};
    };

    struct DataflowVectorMultiplyNode
    {
        static constexpr std::string_view Name = "DataflowVectorMultiplyNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t V = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"V", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorNormalize
    {
        static constexpr std::string_view Name = "DataflowVectorNormalize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t V = 0xF0;
            static constexpr std::uintptr_t Normalized = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"V", 0xF0, "StructProperty"},
            {"Normalized", 0x110, "StructProperty"},
        }};
    };

    struct DataflowVectorScaleNode
    {
        static constexpr std::string_view Name = "DataflowVectorScaleNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t V = 0xF0;
            static constexpr std::uintptr_t Scale = 0x110;
            static constexpr std::uintptr_t Scaled = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"V", 0xF0, "StructProperty"},
            {"Scale", 0x110, "StructProperty"},
            {"Scaled", 0x120, "StructProperty"},
        }};
    };

    struct DataflowVectorSquaredLengthNode
    {
        static constexpr std::string_view Name = "DataflowVectorSquaredLengthNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t V = 0xF0;
            static constexpr std::uintptr_t SquaredLength = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"V", 0xF0, "StructProperty"},
            {"SquaredLength", 0x110, "StructProperty"},
        }};
    };

    struct DataflowVectorSubtractNode
    {
        static constexpr std::string_view Name = "DataflowVectorSubtractNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xF0;
            static constexpr std::uintptr_t B = 0x110;
            static constexpr std::uintptr_t V = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xF0, "StructProperty"},
            {"B", 0x110, "StructProperty"},
            {"V", 0x130, "StructProperty"},
        }};
    };

    struct DataflowVectorTypes
    {
        static constexpr std::string_view Name = "DataflowVectorTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowAnyType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct DataflowVertexSelection
    {
        static constexpr std::string_view Name = "DataflowVertexSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NodeColors
    {
        static constexpr std::string_view Name = "NodeColors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTitleColor = 0x0;
            static constexpr std::uintptr_t NodeBodyTintColor = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeTitleColor", 0x0, "StructProperty"},
            {"NodeBodyTintColor", 0x10, "StructProperty"},
        }};
    };

    struct PinSettings
    {
        static constexpr std::string_view Name = "PinSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PinColor = 0x0;
            static constexpr std::uintptr_t WireThickness = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PinColor", 0x0, "StructProperty"},
            {"WireThickness", 0x10, "FloatProperty"},
        }};
    };

    struct TransformLevelColors
    {
        static constexpr std::string_view Name = "TransformLevelColors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelColors = 0x0;
            static constexpr std::uintptr_t BlankColor = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LevelColors", 0x0, "ArrayProperty"},
            {"BlankColor", 0x10, "StructProperty"},
        }};
    };

}
