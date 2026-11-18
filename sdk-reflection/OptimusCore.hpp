#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OptimusCore
{
    struct OptimusAction
    {
        static constexpr std::string_view Name = "OptimusAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusActionStack
    {
        static constexpr std::string_view Name = "OptimusActionStack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactedActionIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransactedActionIndex", 0x28, "IntProperty"},
        }};
    };

    struct OptimusAdvancedSkeletonDataInterface
    {
        static constexpr std::string_view Name = "OptimusAdvancedSkeletonDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SkinWeightProfile = 0x28;
            static constexpr std::uintptr_t bEnableLayeredSkinning = 0x2C;
            static constexpr std::uintptr_t AttributeBufferArray = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkinWeightProfile", 0x28, "NameProperty"},
            {"bEnableLayeredSkinning", 0x2C, "BoolProperty"},
            {"AttributeBufferArray", 0x30, "StructProperty"},
        }};
    };

    struct OptimusAdvancedSkeletonDataProvider
    {
        static constexpr std::string_view Name = "OptimusAdvancedSkeletonDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusAlternativeSelectedObjectProvider
    {
        static constexpr std::string_view Name = "OptimusAlternativeSelectedObjectProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusAnimAttributeArray
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerArray = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerArray", 0x0, "ArrayProperty"},
        }};
    };

    struct OptimusAnimAttributeBufferArray
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeBufferArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerArray = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerArray", 0x0, "ArrayProperty"},
        }};
    };

    struct OptimusAnimAttributeBufferDescription
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeBufferDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DataType = 0x10;
            static constexpr std::uintptr_t DefaultValueStruct = 0x38;
            static constexpr std::uintptr_t HlslId = 0x48;
            static constexpr std::uintptr_t PinName = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"DataType", 0x10, "StructProperty"},
            {"DefaultValueStruct", 0x38, "StructProperty"},
            {"HlslId", 0x48, "StrProperty"},
            {"PinName", 0x58, "NameProperty"},
        }};
    };

    struct OptimusAnimAttributeDataInterface
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeArray = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeArray", 0x28, "StructProperty"},
        }};
    };

    struct OptimusAnimAttributeDataProvider
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusAnimAttributeDescription
    {
        static constexpr std::string_view Name = "OptimusAnimAttributeDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BoneName = 0x10;
            static constexpr std::uintptr_t DataType = 0x18;
            static constexpr std::uintptr_t DefaultValueStruct = 0x40;
            static constexpr std::uintptr_t HlslId = 0x50;
            static constexpr std::uintptr_t PinName = 0x60;
            static constexpr std::uintptr_t DefaultValue = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"BoneName", 0x10, "NameProperty"},
            {"DataType", 0x18, "StructProperty"},
            {"DefaultValueStruct", 0x40, "StructProperty"},
            {"HlslId", 0x50, "StrProperty"},
            {"PinName", 0x60, "NameProperty"},
            {"DefaultValue", 0x68, "ObjectProperty"},
        }};
    };

    struct OptimusClothDataInterface
    {
        static constexpr std::string_view Name = "OptimusClothDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusClothDataProvider
    {
        static constexpr std::string_view Name = "OptimusClothDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusCommentNodeAction_ResizeNode
    {
        static constexpr std::string_view Name = "OptimusCommentNodeAction_ResizeNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingAction_AddBinding
    {
        static constexpr std::string_view Name = "OptimusComponentBindingAction_AddBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingAction_RemoveBinding
    {
        static constexpr std::string_view Name = "OptimusComponentBindingAction_RemoveBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingAction_RenameBinding
    {
        static constexpr std::string_view Name = "OptimusComponentBindingAction_RenameBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingAction_SetComponentSource
    {
        static constexpr std::string_view Name = "OptimusComponentBindingAction_SetComponentSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingProvider
    {
        static constexpr std::string_view Name = "OptimusComponentBindingProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentBindingReceiver
    {
        static constexpr std::string_view Name = "OptimusComponentBindingReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentSource
    {
        static constexpr std::string_view Name = "OptimusComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComponentSourceBinding
    {
        static constexpr std::string_view Name = "OptimusComponentSourceBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingName = 0x28;
            static constexpr std::uintptr_t ComponentType = 0x30;
            static constexpr std::uintptr_t ComponentTags = 0x38;
            static constexpr std::uintptr_t bIsPrimaryBinding = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BindingName", 0x28, "NameProperty"},
            {"ComponentType", 0x30, "ClassProperty"},
            {"ComponentTags", 0x38, "ArrayProperty"},
            {"bIsPrimaryBinding", 0x48, "BoolProperty"},
        }};
    };

    struct OptimusComponentSourceBindingContainer
    {
        static constexpr std::string_view Name = "OptimusComponentSourceBindingContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Bindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bindings", 0x28, "ArrayProperty"},
        }};
    };

    struct OptimusCompoundAction
    {
        static constexpr std::string_view Name = "OptimusCompoundAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComputeDataInterface
    {
        static constexpr std::string_view Name = "OptimusComputeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComputeGraph
    {
        static constexpr std::string_view Name = "OptimusComputeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelToNode = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KernelToNode", 0xC0, "ArrayProperty"},
        }};
    };

    struct OptimusComputeGraphInfo
    {
        static constexpr std::string_view Name = "OptimusComputeGraphInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphType = 0x0;
            static constexpr std::uintptr_t GraphName = 0x4;
            static constexpr std::uintptr_t ComputeGraph = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GraphType", 0x0, "EnumProperty"},
            {"GraphName", 0x4, "NameProperty"},
            {"ComputeGraph", 0x8, "ObjectProperty"},
        }};
    };

    struct OptimusComputeKernelDataInterface
    {
        static constexpr std::string_view Name = "OptimusComputeKernelDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusComputeKernelProvider
    {
        static constexpr std::string_view Name = "OptimusComputeKernelProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusConnectivityDataInterface
    {
        static constexpr std::string_view Name = "OptimusConnectivityDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusConnectivityDataProvider
    {
        static constexpr std::string_view Name = "OptimusConnectivityDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusConstant
    {
        static constexpr std::string_view Name = "OptimusConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x0;
            static constexpr std::uintptr_t Definition = 0x10;
            static constexpr std::uintptr_t ComponentBindingIndex = 0x30;
            static constexpr std::uintptr_t Type = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Identifier", 0x0, "StructProperty"},
            {"Definition", 0x10, "StructProperty"},
            {"ComponentBindingIndex", 0x30, "IntProperty"},
            {"Type", 0x34, "EnumProperty"},
        }};
    };

    struct OptimusConstantContainer
    {
        static constexpr std::string_view Name = "OptimusConstantContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelContainers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KernelContainers", 0x0, "ArrayProperty"},
        }};
    };

    struct OptimusConstantDefinition
    {
        static constexpr std::string_view Name = "OptimusConstantDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferencedConstant = 0x0;
            static constexpr std::uintptr_t Expression = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReferencedConstant", 0x0, "StructProperty"},
            {"Expression", 0x10, "StrProperty"},
        }};
    };

    struct OptimusConstantIdentifier
    {
        static constexpr std::string_view Name = "OptimusConstantIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodePath = 0x0;
            static constexpr std::uintptr_t GroupName = 0x4;
            static constexpr std::uintptr_t ConstantName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NodePath", 0x0, "NameProperty"},
            {"GroupName", 0x4, "NameProperty"},
            {"ConstantName", 0x8, "NameProperty"},
        }};
    };

    struct OptimusConstantIndex
    {
        static constexpr std::string_view Name = "OptimusConstantIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelIndex = 0x0;
            static constexpr std::uintptr_t Type = 0x4;
            static constexpr std::uintptr_t ConstantIndex = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KernelIndex", 0x0, "IntProperty"},
            {"Type", 0x4, "EnumProperty"},
            {"ConstantIndex", 0x8, "IntProperty"},
        }};
    };

    struct OptimusCopyKernelDataInterface
    {
        static constexpr std::string_view Name = "OptimusCopyKernelDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentSourceBinding = 0x30;
            static constexpr std::uintptr_t NumThreadsExpression = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentSourceBinding", 0x30, "WeakObjectProperty"},
            {"NumThreadsExpression", 0x38, "StrProperty"},
        }};
    };

    struct OptimusCopyKernelDataProvider
    {
        static constexpr std::string_view Name = "OptimusCopyKernelDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusCustomComputeKernelDataInterface
    {
        static constexpr std::string_view Name = "OptimusCustomComputeKernelDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentSourceBinding = 0x30;
            static constexpr std::uintptr_t NumThreadsExpression = 0x38;
            static constexpr std::uintptr_t ExecutionDomainConstantIdentifier = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentSourceBinding", 0x30, "WeakObjectProperty"},
            {"NumThreadsExpression", 0x38, "StrProperty"},
            {"ExecutionDomainConstantIdentifier", 0x48, "StructProperty"},
        }};
    };

    struct OptimusCustomComputeKernelDataProvider
    {
        static constexpr std::string_view Name = "OptimusCustomComputeKernelDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDataDomain
    {
        static constexpr std::string_view Name = "OptimusDataDomain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t DimensionNames = 0x8;
            static constexpr std::uintptr_t Multiplier = 0x18;
            static constexpr std::uintptr_t Expression = 0x20;
            static constexpr std::uintptr_t LevelNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"DimensionNames", 0x8, "ArrayProperty"},
            {"Multiplier", 0x18, "IntProperty"},
            {"Expression", 0x20, "StrProperty"},
            {"LevelNames", 0x30, "ArrayProperty"},
        }};
    };

    struct OptimusDataInterfacePropertyOverrideInfo
    {
        static constexpr std::string_view Name = "OptimusDataInterfacePropertyOverrideInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PinNameToValueIdMap = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PinNameToValueIdMap", 0x0, "MapProperty"},
        }};
    };

    struct OptimusDataInterfaceProvider
    {
        static constexpr std::string_view Name = "OptimusDataInterfaceProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDataType
    {
        static constexpr std::string_view Name = "OptimusDataType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeName = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t ShaderValueType = 0x18;
            static constexpr std::uintptr_t ShaderValueSize = 0x20;
            static constexpr std::uintptr_t TypeCategory = 0x24;
            static constexpr std::uintptr_t TypeObject = 0x28;
            static constexpr std::uintptr_t bHasCustomPinColor = 0x30;
            static constexpr std::uintptr_t CustomPinColor = 0x34;
            static constexpr std::uintptr_t UsageFlags = 0x44;
            static constexpr std::uintptr_t TypeFlags = 0x45;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TypeName", 0x0, "NameProperty"},
            {"DisplayName", 0x8, "TextProperty"},
            {"ShaderValueType", 0x18, "StructProperty"},
            {"ShaderValueSize", 0x20, "IntProperty"},
            {"TypeCategory", 0x24, "NameProperty"},
            {"TypeObject", 0x28, "WeakObjectProperty"},
            {"bHasCustomPinColor", 0x30, "BoolProperty"},
            {"CustomPinColor", 0x34, "StructProperty"},
            {"UsageFlags", 0x44, "EnumProperty"},
            {"TypeFlags", 0x45, "EnumProperty"},
        }};
    };

    struct OptimusDataTypeRef
    {
        static constexpr std::string_view Name = "OptimusDataTypeRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeName = 0x0;
            static constexpr std::uintptr_t TypeObject = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TypeName", 0x0, "NameProperty"},
            {"TypeObject", 0x8, "SoftObjectProperty"},
        }};
    };

    struct OptimusDebugDrawDataInterface
    {
        static constexpr std::string_view Name = "OptimusDebugDrawDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSupported = 0x28;
            static constexpr std::uintptr_t DebugDrawParameters = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsSupported", 0x28, "BoolProperty"},
            {"DebugDrawParameters", 0x2C, "StructProperty"},
        }};
    };

    struct OptimusDebugDrawDataProvider
    {
        static constexpr std::string_view Name = "OptimusDebugDrawDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDebugDrawParameters
    {
        static constexpr std::string_view Name = "OptimusDebugDrawParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceEnable = 0x0;
            static constexpr std::uintptr_t MaxLineCount = 0x4;
            static constexpr std::uintptr_t MaxTriangleCount = 0x8;
            static constexpr std::uintptr_t MaxCharacterCount = 0xC;
            static constexpr std::uintptr_t FontSize = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bForceEnable", 0x0, "BoolProperty"},
            {"MaxLineCount", 0x4, "IntProperty"},
            {"MaxTriangleCount", 0x8, "IntProperty"},
            {"MaxCharacterCount", 0xC, "IntProperty"},
            {"FontSize", 0x10, "IntProperty"},
        }};
    };

    struct OptimusDeformer
    {
        static constexpr std::string_view Name = "OptimusDeformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDeformer";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x50;
            static constexpr std::uintptr_t ComputeGraphs = 0x58;
            static constexpr std::uintptr_t DataInterfacePropertyOverrideMap = 0x68;
            static constexpr std::uintptr_t ValueMap = 0x78;
            static constexpr std::uintptr_t ActionStack = 0x88;
            static constexpr std::uintptr_t Status = 0x90;
            static constexpr std::uintptr_t Graphs = 0x98;
            static constexpr std::uintptr_t Bindings = 0xA8;
            static constexpr std::uintptr_t Variables = 0xB0;
            static constexpr std::uintptr_t Resources = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Mesh", 0x50, "ObjectProperty"},
            {"ComputeGraphs", 0x58, "ArrayProperty"},
            {"DataInterfacePropertyOverrideMap", 0x68, "MapProperty"},
            {"ValueMap", 0x78, "MapProperty"},
            {"ActionStack", 0x88, "ObjectProperty"},
            {"Status", 0x90, "EnumProperty"},
            {"Graphs", 0x98, "ArrayProperty"},
            {"Bindings", 0xA8, "ObjectProperty"},
            {"Variables", 0xB0, "ObjectProperty"},
            {"Resources", 0xB8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetComponentBindings",
            "GetPrimaryComponentBinding",
            "GetResources",
            "GetVariables",
        }};
    };

    struct OptimusDeformerAssetPathAccessor
    {
        static constexpr std::string_view Name = "OptimusDeformerAssetPathAccessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDeformerDynamicInstanceManager
    {
        static constexpr std::string_view Name = "OptimusDeformerDynamicInstanceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDeformerInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInstance = 0x28;
            static constexpr std::uintptr_t GuidToRigDeformerInstanceMap = 0x30;
            static constexpr std::uintptr_t GuidToInstanceMap = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultInstance", 0x28, "ObjectProperty"},
            {"GuidToRigDeformerInstanceMap", 0x30, "MapProperty"},
            {"GuidToInstanceMap", 0x40, "MapProperty"},
        }};
    };

    struct OptimusDeformerGeometryReadbackProvider
    {
        static constexpr std::string_view Name = "OptimusDeformerGeometryReadbackProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDeformerInstance
    {
        static constexpr std::string_view Name = "OptimusDeformerInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDeformerInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x30;
            static constexpr std::uintptr_t InstanceSettings = 0x38;
            static constexpr std::uintptr_t ComputeGraphExecInfos = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshComponent", 0x30, "WeakObjectProperty"},
            {"InstanceSettings", 0x38, "WeakObjectProperty"},
            {"ComputeGraphExecInfos", 0x40, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 29> FunctionNames{{
            "EnqueueTriggerGraph",
            "SetBoolArrayVariable",
            "SetBoolVariable",
            "SetFloatArrayVariable",
            "SetFloatVariable",
            "SetInt2ArrayVariable",
            "SetInt2Variable",
            "SetInt3ArrayVariable",
            "SetInt3Variable",
            "SetInt4ArrayVariable",
            "SetInt4Variable",
            "SetIntArrayVariable",
            "SetIntVariable",
            "SetLinearColorArrayVariable",
            "SetLinearColorVariable",
            "SetNameArrayVariable",
            "SetNameVariable",
            "SetQuatArrayVariable",
            "SetQuatVariable",
            "SetRotatorArrayVariable",
            "SetRotatorVariable",
            "SetTransformArrayVariable",
            "SetTransformVariable",
            "SetVector2ArrayVariable",
            "SetVector2Variable",
            "SetVector4ArrayVariable",
            "SetVector4Variable",
            "SetVectorArrayVariable",
            "SetVectorVariable",
        }};
    };

    struct OptimusDeformerInstanceAccessor
    {
        static constexpr std::string_view Name = "OptimusDeformerInstanceAccessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDeformerInstanceComponentBinding
    {
        static constexpr std::string_view Name = "OptimusDeformerInstanceComponentBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProviderName = 0x0;
            static constexpr std::uintptr_t ComponentName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProviderName", 0x0, "NameProperty"},
            {"ComponentName", 0x4, "NameProperty"},
        }};
    };

    struct OptimusDeformerInstanceExecInfo
    {
        static constexpr std::string_view Name = "OptimusDeformerInstanceExecInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphName = 0x0;
            static constexpr std::uintptr_t GraphType = 0x4;
            static constexpr std::uintptr_t ComputeGraph = 0x8;
            static constexpr std::uintptr_t ComputeGraphInstance = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GraphName", 0x0, "NameProperty"},
            {"GraphType", 0x4, "EnumProperty"},
            {"ComputeGraph", 0x8, "ObjectProperty"},
            {"ComputeGraphInstance", 0x10, "StructProperty"},
        }};
    };

    struct OptimusDeformerInstanceSettings
    {
        static constexpr std::string_view Name = "OptimusDeformerInstanceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDeformerInstanceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Deformer = 0x28;
            static constexpr std::uintptr_t Bindings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Deformer", 0x28, "WeakObjectProperty"},
            {"Bindings", 0x30, "ArrayProperty"},
        }};
    };

    struct OptimusDeprecatedExecutionDataInterface
    {
        static constexpr std::string_view Name = "OptimusDeprecatedExecutionDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDuplicateVerticesDataInterface
    {
        static constexpr std::string_view Name = "OptimusDuplicateVerticesDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusDuplicateVerticesDataProvider
    {
        static constexpr std::string_view Name = "OptimusDuplicateVerticesDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusExecutionDomain
    {
        static constexpr std::string_view Name = "OptimusExecutionDomain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t Expression = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Name", 0x4, "NameProperty"},
            {"Expression", 0x8, "StrProperty"},
        }};
    };

    struct OptimusExecutionDomainProvider
    {
        static constexpr std::string_view Name = "OptimusExecutionDomainProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusFunctionGraphIdentifier
    {
        static constexpr std::string_view Name = "OptimusFunctionGraphIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x0;
            static constexpr std::uintptr_t Guid = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Asset", 0x0, "ObjectProperty"},
            {"Guid", 0x8, "StructProperty"},
        }};
    };

    struct OptimusFunctionNodeGraph
    {
        static constexpr std::string_view Name = "OptimusFunctionNodeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNodeSubGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x148;
            static constexpr std::uintptr_t AccessSpecifier = 0x14C;
            static constexpr std::uintptr_t Guid = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Category", 0x148, "NameProperty"},
            {"AccessSpecifier", 0x14C, "NameProperty"},
            {"Guid", 0x150, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetAccessSpecifierOptions",
        }};
    };

    struct OptimusFunctionNodeGraphHeader
    {
        static constexpr std::string_view Name = "OptimusFunctionNodeGraphHeader";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphPath = 0x0;
            static constexpr std::uintptr_t FunctionName = 0x20;
            static constexpr std::uintptr_t Category = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GraphPath", 0x0, "SoftObjectProperty"},
            {"FunctionName", 0x20, "NameProperty"},
            {"Category", 0x24, "NameProperty"},
        }};
    };

    struct OptimusFunctionNodeGraphHeaderArray
    {
        static constexpr std::string_view Name = "OptimusFunctionNodeGraphHeaderArray";
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

    struct OptimusFunctionNodeGraphHeaderWithGuid
    {
        static constexpr std::string_view Name = "OptimusFunctionNodeGraphHeaderWithGuid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionGraphGuid = 0x0;
            static constexpr std::uintptr_t FunctionName = 0x10;
            static constexpr std::uintptr_t Category = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FunctionGraphGuid", 0x0, "StructProperty"},
            {"FunctionName", 0x10, "NameProperty"},
            {"Category", 0x14, "NameProperty"},
        }};
    };

    struct OptimusFunctionNodeGraphHeaderWithGuidArray
    {
        static constexpr std::string_view Name = "OptimusFunctionNodeGraphHeaderWithGuidArray";
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

    struct OptimusFunctionReferenceData
    {
        static constexpr std::string_view Name = "OptimusFunctionReferenceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionReferences = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FunctionReferences", 0x0, "MapProperty"},
        }};
    };

    struct OptimusFunctionReferenceNodeSet
    {
        static constexpr std::string_view Name = "OptimusFunctionReferenceNodeSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Nodes", 0x0, "SetProperty"},
        }};
    };

    struct OptimusGeneratedClassDefiner
    {
        static constexpr std::string_view Name = "OptimusGeneratedClassDefiner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGraphDataInterface
    {
        static constexpr std::string_view Name = "OptimusGraphDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Variables = 0x28;
            static constexpr std::uintptr_t ParameterBufferSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variables", 0x28, "ArrayProperty"},
            {"ParameterBufferSize", 0x38, "IntProperty"},
        }};
    };

    struct OptimusGraphDataProvider
    {
        static constexpr std::string_view Name = "OptimusGraphDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Variables = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Variables", 0x30, "ArrayProperty"},
        }};
    };

    struct OptimusGraphVariableDescription
    {
        static constexpr std::string_view Name = "OptimusGraphVariableDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ValueType = 0x10;
            static constexpr std::uintptr_t ValueId = 0x18;
            static constexpr std::uintptr_t Offset = 0x20;
            static constexpr std::uintptr_t Value = 0x28;
            static constexpr std::uintptr_t ShaderValue = 0x38;
            static constexpr std::uintptr_t SourceObject = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"ValueType", 0x10, "StructProperty"},
            {"ValueId", 0x18, "StructProperty"},
            {"Offset", 0x20, "IntProperty"},
            {"Value", 0x28, "ArrayProperty"},
            {"ShaderValue", 0x38, "StructProperty"},
            {"SourceObject", 0x58, "SoftObjectProperty"},
        }};
    };

    struct OptimusHalfEdgeDataInterface
    {
        static constexpr std::string_view Name = "OptimusHalfEdgeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusHalfEdgeDataProvider
    {
        static constexpr std::string_view Name = "OptimusHalfEdgeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusImplicitPersistentBufferDataInterface
    {
        static constexpr std::string_view Name = "OptimusImplicitPersistentBufferDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bZeroInitForAtomicWrites = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bZeroInitForAtomicWrites", 0x88, "BoolProperty"},
        }};
    };

    struct OptimusImplicitPersistentBufferDataProvider
    {
        static constexpr std::string_view Name = "OptimusImplicitPersistentBufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusKernelConstantContainer
    {
        static constexpr std::string_view Name = "OptimusKernelConstantContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputConstants = 0x0;
            static constexpr std::uintptr_t OutputConstants = 0x10;
            static constexpr std::uintptr_t GroupNameToBindingIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputConstants", 0x0, "ArrayProperty"},
            {"OutputConstants", 0x10, "ArrayProperty"},
            {"GroupNameToBindingIndex", 0x20, "MapProperty"},
        }};
    };

    struct OptimusKernelSource
    {
        static constexpr std::string_view Name = "OptimusKernelSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeKernelSource";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryPoint = 0x28;
            static constexpr std::uintptr_t GroupSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntryPoint", 0x28, "StrProperty"},
            {"GroupSize", 0x38, "StructProperty"},
        }};
    };

    struct OptimusLoopTerminalDataInterface
    {
        static constexpr std::string_view Name = "OptimusLoopTerminalDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x28;
            static constexpr std::uintptr_t Count = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Index", 0x28, "UInt32Property"},
            {"Count", 0x2C, "UInt32Property"},
        }};
    };

    struct OptimusLoopTerminalDataProvider
    {
        static constexpr std::string_view Name = "OptimusLoopTerminalDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusLoopTerminalInfo
    {
        static constexpr std::string_view Name = "OptimusLoopTerminalInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Count = 0x0;
            static constexpr std::uintptr_t Bindings = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Count", 0x0, "IntProperty"},
            {"Bindings", 0x8, "StructProperty"},
        }};
    };

    struct OptimusMorphTargetDataInterface
    {
        static constexpr std::string_view Name = "OptimusMorphTargetDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusMorphTargetDataProvider
    {
        static constexpr std::string_view Name = "OptimusMorphTargetDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNode
    {
        static constexpr std::string_view Name = "OptimusNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t GraphPosition = 0x40;
            static constexpr std::uintptr_t Pins = 0x50;
            static constexpr std::uintptr_t ExpandedPins = 0x60;
            static constexpr std::uintptr_t DiagnosticLevel = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
            {"GraphPosition", 0x40, "StructProperty"},
            {"Pins", 0x50, "ArrayProperty"},
            {"ExpandedPins", 0x60, "SetProperty"},
            {"DiagnosticLevel", 0x70, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetDisplayName",
            "GetGraphPosition",
            "GetNodeCategory",
            "GetNodeName",
            "SetGraphPosition",
        }};
    };

    struct OptimusNodeAction_AddGroupingPin
    {
        static constexpr std::string_view Name = "OptimusNodeAction_AddGroupingPin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeAction_AddRemovePin";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_AddPin
    {
        static constexpr std::string_view Name = "OptimusNodeAction_AddPin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeAction_AddRemovePin";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_AddRemovePin
    {
        static constexpr std::string_view Name = "OptimusNodeAction_AddRemovePin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_MoveNode
    {
        static constexpr std::string_view Name = "OptimusNodeAction_MoveNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_MovePin
    {
        static constexpr std::string_view Name = "OptimusNodeAction_MovePin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_RemovePin
    {
        static constexpr std::string_view Name = "OptimusNodeAction_RemovePin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeAction_AddRemovePin";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_RenameNode
    {
        static constexpr std::string_view Name = "OptimusNodeAction_RenameNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_SetPinDataDomain
    {
        static constexpr std::string_view Name = "OptimusNodeAction_SetPinDataDomain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_SetPinName
    {
        static constexpr std::string_view Name = "OptimusNodeAction_SetPinName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_SetPinType
    {
        static constexpr std::string_view Name = "OptimusNodeAction_SetPinType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAction_SetPinValue
    {
        static constexpr std::string_view Name = "OptimusNodeAction_SetPinValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeAdderPinProvider
    {
        static constexpr std::string_view Name = "OptimusNodeAdderPinProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeFunctionLibraryOwner
    {
        static constexpr std::string_view Name = "OptimusNodeFunctionLibraryOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraph
    {
        static constexpr std::string_view Name = "OptimusNodeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphType = 0x30;
            static constexpr std::uintptr_t Nodes = 0x38;
            static constexpr std::uintptr_t Links = 0x48;
            static constexpr std::uintptr_t NodePairs = 0x58;
            static constexpr std::uintptr_t SubGraphs = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GraphType", 0x30, "EnumProperty"},
            {"Nodes", 0x38, "ArrayProperty"},
            {"Links", 0x48, "ArrayProperty"},
            {"NodePairs", 0x58, "ArrayProperty"},
            {"SubGraphs", 0x68, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 37> FunctionNames{{
            "AddCommentNode",
            "AddComponentBindingGetNode",
            "AddDataInterfaceNode",
            "AddFunctionReferenceNode",
            "AddLink",
            "AddLoopTerminalNodes",
            "AddNode",
            "AddResourceGetNode",
            "AddResourceNode",
            "AddResourceSetNode",
            "AddValueNode",
            "AddVariableGetNode",
            "CollapseNodesToFunction",
            "CollapseNodesToSubGraph",
            "ConvertCustomKernelToFunction",
            "ConvertFunctionToCustomKernel",
            "ConvertToFunction",
            "ConvertToSubGraph",
            "DuplicateNode",
            "DuplicateNodes",
            "ExpandCollapsedNodes",
            "GetGraphIndex",
            "GetGraphType",
            "GetGraphs",
            "IsCustomKernel",
            "IsExecutionGraph",
            "IsFunctionGraph",
            "IsFunctionReference",
            "IsKernelFunction",
            "IsSubGraphReference",
            "MoveGraphDirect",
            "RemoveAllLinks",
            "RemoveLink",
            "RemoveNode",
            "RemoveNodes",
            "RenameGraph",
            "RenameGraphDirect",
        }};
    };

    struct OptimusNodeGraphAction_AddGraph
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_AddLink
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeGraphAction_AddRemoveLink";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_AddNode
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_AddNodePair
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddNodePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeGraphAction_AddRemoveNodePair";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_AddRemoveLink
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddRemoveLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_AddRemoveNodePair
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_AddRemoveNodePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_ConnectAdderPin
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_ConnectAdderPin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeGraphAction_AddRemoveLink";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_DuplicateNode
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_DuplicateNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_PackageKernelFunction
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_PackageKernelFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_RemoveGraph
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_RemoveGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_RemoveLink
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_RemoveLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeGraphAction_AddRemoveLink";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_RemoveNode
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_RemoveNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_RemoveNodePair
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_RemoveNodePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusNodeGraphAction_AddRemoveNodePair";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_RenameGraph
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_RenameGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphAction_UnpackageKernelFunction
    {
        static constexpr std::string_view Name = "OptimusNodeGraphAction_UnpackageKernelFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphCollectionOwner
    {
        static constexpr std::string_view Name = "OptimusNodeGraphCollectionOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeGraphProvider
    {
        static constexpr std::string_view Name = "OptimusNodeGraphProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeLink
    {
        static constexpr std::string_view Name = "OptimusNodeLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeOutputPin = 0x28;
            static constexpr std::uintptr_t NodeInputPin = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeOutputPin", 0x28, "ObjectProperty"},
            {"NodeInputPin", 0x30, "ObjectProperty"},
        }};
    };

    struct OptimusNodePair
    {
        static constexpr std::string_view Name = "OptimusNodePair";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t First = 0x28;
            static constexpr std::uintptr_t Second = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"First", 0x28, "ObjectProperty"},
            {"Second", 0x30, "ObjectProperty"},
        }};
    };

    struct OptimusNodePairProvider
    {
        static constexpr std::string_view Name = "OptimusNodePairProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodePin
    {
        static constexpr std::string_view Name = "OptimusNodePin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsGroupingPin = 0x28;
            static constexpr std::uintptr_t Direction = 0x29;
            static constexpr std::uintptr_t StorageType = 0x2A;
            static constexpr std::uintptr_t DataDomain = 0x30;
            static constexpr std::uintptr_t DataType = 0x70;
            static constexpr std::uintptr_t SubPins = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsGroupingPin", 0x28, "BoolProperty"},
            {"Direction", 0x29, "EnumProperty"},
            {"StorageType", 0x2A, "EnumProperty"},
            {"DataDomain", 0x30, "StructProperty"},
            {"DataType", 0x70, "StructProperty"},
            {"SubPins", 0x98, "ArrayProperty"},
        }};
    };

    struct OptimusNodePinRouter
    {
        static constexpr std::string_view Name = "OptimusNodePinRouter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNodeSubGraph
    {
        static constexpr std::string_view Name = "OptimusNodeSubGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNodeGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t InputBindings = 0x98;
            static constexpr std::uintptr_t OutputBindings = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputBindings", 0x98, "StructProperty"},
            {"OutputBindings", 0xA8, "StructProperty"},
        }};
    };

    struct OptimusNodeSubGraphReferencer
    {
        static constexpr std::string_view Name = "OptimusNodeSubGraphReferencer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNode_AnimAttributeDataInterface
    {
        static constexpr std::string_view Name = "OptimusNode_AnimAttributeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_DataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DataInterfaceClass = 0xA8;
            static constexpr std::uintptr_t DataInterfaceData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataInterfaceClass", 0xA8, "ClassProperty"},
            {"DataInterfaceData", 0xB0, "ObjectProperty"},
        }};
    };

    struct OptimusNode_Comment
    {
        static constexpr std::string_view Name = "OptimusNode_Comment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CommentColor = 0x88;
            static constexpr std::uintptr_t FontSize = 0x98;
            static constexpr std::uintptr_t Comment = 0xA0;
            static constexpr std::uintptr_t bBubbleVisible = 0xB0;
            static constexpr std::uintptr_t bColorBubble = 0xB1;
            static constexpr std::uintptr_t Size = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CommentColor", 0x88, "StructProperty"},
            {"FontSize", 0x98, "IntProperty"},
            {"Comment", 0xA0, "StrProperty"},
            {"bBubbleVisible", 0xB0, "BoolProperty"},
            {"bColorBubble", 0xB1, "BoolProperty"},
            {"Size", 0xB4, "StructProperty"},
        }};
    };

    struct OptimusNode_ComponentSource
    {
        static constexpr std::string_view Name = "OptimusNode_ComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x98;
            static constexpr std::uintptr_t DuplicationInfo = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Binding", 0x98, "ObjectProperty"},
            {"DuplicationInfo", 0xA0, "StructProperty"},
        }};
    };

    struct OptimusNode_ComponentSource_DuplicationInfo
    {
        static constexpr std::string_view Name = "OptimusNode_ComponentSource_DuplicationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingName = 0x0;
            static constexpr std::uintptr_t ComponentType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BindingName", 0x0, "NameProperty"},
            {"ComponentType", 0x8, "ClassProperty"},
        }};
    };

    struct OptimusNode_ComputeKernelBase
    {
        static constexpr std::string_view Name = "OptimusNode_ComputeKernelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t GraphPosition = 0x40;
            static constexpr std::uintptr_t Pins = 0x50;
            static constexpr std::uintptr_t ExpandedPins = 0x60;
            static constexpr std::uintptr_t DiagnosticLevel = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
            {"GraphPosition", 0x40, "StructProperty"},
            {"Pins", 0x50, "ArrayProperty"},
            {"ExpandedPins", 0x60, "SetProperty"},
            {"DiagnosticLevel", 0x70, "EnumProperty"},
        }};
    };

    struct OptimusNode_ComputeKernelFunction
    {
        static constexpr std::string_view Name = "OptimusNode_ComputeKernelFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_ComputeKernelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t GraphPosition = 0x40;
            static constexpr std::uintptr_t Pins = 0x50;
            static constexpr std::uintptr_t ExpandedPins = 0x60;
            static constexpr std::uintptr_t DiagnosticLevel = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
            {"GraphPosition", 0x40, "StructProperty"},
            {"Pins", 0x50, "ArrayProperty"},
            {"ExpandedPins", 0x60, "SetProperty"},
            {"DiagnosticLevel", 0x70, "EnumProperty"},
        }};
    };

    struct OptimusNode_ComputeKernelFunctionGeneratorClass
    {
        static constexpr std::string_view Name = "OptimusNode_ComputeKernelFunctionGeneratorClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x198;
            static constexpr std::uintptr_t KernelName = 0x19C;
            static constexpr std::uintptr_t ExecutionDomain = 0x1A0;
            static constexpr std::uintptr_t GroupSize = 0x1B8;
            static constexpr std::uintptr_t InputBindings = 0x1C8;
            static constexpr std::uintptr_t OutputBindings = 0x1D8;
            static constexpr std::uintptr_t ShaderSource = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Category", 0x198, "NameProperty"},
            {"KernelName", 0x19C, "NameProperty"},
            {"ExecutionDomain", 0x1A0, "StructProperty"},
            {"GroupSize", 0x1B8, "StructProperty"},
            {"InputBindings", 0x1C8, "ArrayProperty"},
            {"OutputBindings", 0x1D8, "ArrayProperty"},
            {"ShaderSource", 0x1E8, "StrProperty"},
        }};
    };

    struct OptimusNode_ConstantValue
    {
        static constexpr std::string_view Name = "OptimusNode_ConstantValue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t GraphPosition = 0x40;
            static constexpr std::uintptr_t Pins = 0x50;
            static constexpr std::uintptr_t ExpandedPins = 0x60;
            static constexpr std::uintptr_t DiagnosticLevel = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
            {"GraphPosition", 0x40, "StructProperty"},
            {"Pins", 0x50, "ArrayProperty"},
            {"ExpandedPins", 0x60, "SetProperty"},
            {"DiagnosticLevel", 0x70, "EnumProperty"},
        }};
    };

    struct OptimusNode_ConstantValueGeneratorClass
    {
        static constexpr std::string_view Name = "OptimusNode_ConstantValueGeneratorClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t DataType = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataType", 0x198, "StructProperty"},
        }};
    };

    struct OptimusNode_CustomComputeKernel
    {
        static constexpr std::string_view Name = "OptimusNode_CustomComputeKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_ComputeKernelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0xB0;
            static constexpr std::uintptr_t KernelName = 0xB4;
            static constexpr std::uintptr_t ExecutionDomain = 0xB8;
            static constexpr std::uintptr_t GroupSize = 0xD0;
            static constexpr std::uintptr_t Parameters = 0xE0;
            static constexpr std::uintptr_t InputBindings = 0xF0;
            static constexpr std::uintptr_t OutputBindings = 0x100;
            static constexpr std::uintptr_t InputBindingArray = 0x110;
            static constexpr std::uintptr_t OutputBindingArray = 0x120;
            static constexpr std::uintptr_t SecondaryInputBindingGroups = 0x130;
            static constexpr std::uintptr_t AdditionalSources = 0x140;
            static constexpr std::uintptr_t ShaderSource = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Category", 0xB0, "NameProperty"},
            {"KernelName", 0xB4, "StructProperty"},
            {"ExecutionDomain", 0xB8, "StructProperty"},
            {"GroupSize", 0xD0, "StructProperty"},
            {"Parameters", 0xE0, "ArrayProperty"},
            {"InputBindings", 0xF0, "ArrayProperty"},
            {"OutputBindings", 0x100, "ArrayProperty"},
            {"InputBindingArray", 0x110, "StructProperty"},
            {"OutputBindingArray", 0x120, "StructProperty"},
            {"SecondaryInputBindingGroups", 0x130, "ArrayProperty"},
            {"AdditionalSources", 0x140, "ArrayProperty"},
            {"ShaderSource", 0x150, "StructProperty"},
        }};
    };

    struct OptimusNode_DataInterface
    {
        static constexpr std::string_view Name = "OptimusNode_DataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DataInterfaceClass = 0xA8;
            static constexpr std::uintptr_t DataInterfaceData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataInterfaceClass", 0xA8, "ClassProperty"},
            {"DataInterfaceData", 0xB0, "ObjectProperty"},
        }};
    };

    struct OptimusNode_FunctionReference
    {
        static constexpr std::string_view Name = "OptimusNode_FunctionReference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionGraphIdentifier = 0xA0;
            static constexpr std::uintptr_t DefaultComponentPin = 0xB8;
            static constexpr std::uintptr_t ResolvedFunctionGraph = 0xC0;
            static constexpr std::uintptr_t FunctionGraph = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FunctionGraphIdentifier", 0xA0, "StructProperty"},
            {"DefaultComponentPin", 0xB8, "WeakObjectProperty"},
            {"ResolvedFunctionGraph", 0xC0, "WeakObjectProperty"},
            {"FunctionGraph", 0xC8, "SoftObjectProperty"},
        }};
    };

    struct OptimusNode_GetResource
    {
        static constexpr std::string_view Name = "OptimusNode_GetResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_ResourceAccessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceDesc = 0xA8;
            static constexpr std::uintptr_t WriteType = 0xB0;
            static constexpr std::uintptr_t DuplicationInfo = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceDesc", 0xA8, "WeakObjectProperty"},
            {"WriteType", 0xB0, "EnumProperty"},
            {"DuplicationInfo", 0xB8, "StructProperty"},
        }};
    };

    struct OptimusNode_GetVariable
    {
        static constexpr std::string_view Name = "OptimusNode_GetVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableDesc = 0xA0;
            static constexpr std::uintptr_t DuplicationInfo = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableDesc", 0xA0, "WeakObjectProperty"},
            {"DuplicationInfo", 0xA8, "StructProperty"},
        }};
    };

    struct OptimusNode_GetVariable_DuplicationInfo
    {
        static constexpr std::string_view Name = "OptimusNode_GetVariable_DuplicationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x0;
            static constexpr std::uintptr_t DataType = 0x8;
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VariableName", 0x0, "NameProperty"},
            {"DataType", 0x8, "StructProperty"},
            {"DefaultValue", 0x30, "StrProperty"},
        }};
    };

    struct OptimusNode_GraphTerminal
    {
        static constexpr std::string_view Name = "OptimusNode_GraphTerminal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TerminalType = 0xA8;
            static constexpr std::uintptr_t DefaultComponentPin = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TerminalType", 0xA8, "EnumProperty"},
            {"DefaultComponentPin", 0xAC, "WeakObjectProperty"},
        }};
    };

    struct OptimusNode_LoopTerminal
    {
        static constexpr std::string_view Name = "OptimusNode_LoopTerminal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TerminalType = 0xB0;
            static constexpr std::uintptr_t LoopInfo = 0xB8;
            static constexpr std::uintptr_t IndexPin = 0xD0;
            static constexpr std::uintptr_t CountPin = 0xD8;
            static constexpr std::uintptr_t PinPairInfos = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TerminalType", 0xB0, "EnumProperty"},
            {"LoopInfo", 0xB8, "StructProperty"},
            {"IndexPin", 0xD0, "ObjectProperty"},
            {"CountPin", 0xD8, "ObjectProperty"},
            {"PinPairInfos", 0xE0, "ArrayProperty"},
        }};
    };

    struct OptimusNode_Resource
    {
        static constexpr std::string_view Name = "OptimusNode_Resource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_ResourceAccessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceDesc = 0xA8;
            static constexpr std::uintptr_t WriteType = 0xB0;
            static constexpr std::uintptr_t DuplicationInfo = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceDesc", 0xA8, "WeakObjectProperty"},
            {"WriteType", 0xB0, "EnumProperty"},
            {"DuplicationInfo", 0xB8, "StructProperty"},
        }};
    };

    struct OptimusNode_ResourceAccessorBase
    {
        static constexpr std::string_view Name = "OptimusNode_ResourceAccessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceDesc = 0xA8;
            static constexpr std::uintptr_t WriteType = 0xB0;
            static constexpr std::uintptr_t DuplicationInfo = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceDesc", 0xA8, "WeakObjectProperty"},
            {"WriteType", 0xB0, "EnumProperty"},
            {"DuplicationInfo", 0xB8, "StructProperty"},
        }};
    };

    struct OptimusNode_ResourceAccessorBase_DuplicationInfo
    {
        static constexpr std::string_view Name = "OptimusNode_ResourceAccessorBase_DuplicationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceName = 0x0;
            static constexpr std::uintptr_t DataType = 0x8;
            static constexpr std::uintptr_t DataDomain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceName", 0x0, "NameProperty"},
            {"DataType", 0x8, "StructProperty"},
            {"DataDomain", 0x30, "StructProperty"},
        }};
    };

    struct OptimusNode_SetResource
    {
        static constexpr std::string_view Name = "OptimusNode_SetResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode_ResourceAccessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceDesc = 0xA8;
            static constexpr std::uintptr_t WriteType = 0xB0;
            static constexpr std::uintptr_t DuplicationInfo = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceDesc", 0xA8, "WeakObjectProperty"},
            {"WriteType", 0xB0, "EnumProperty"},
            {"DuplicationInfo", 0xB8, "StructProperty"},
        }};
    };

    struct OptimusNode_SubGraphReference
    {
        static constexpr std::string_view Name = "OptimusNode_SubGraphReference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SubGraphName = 0xA0;
            static constexpr std::uintptr_t DefaultComponentPin = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubGraphName", 0xA0, "NameProperty"},
            {"DefaultComponentPin", 0xA4, "WeakObjectProperty"},
        }};
    };

    struct OptimusNonCollapsibleNode
    {
        static constexpr std::string_view Name = "OptimusNonCollapsibleNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusNonCopyableNode
    {
        static constexpr std::string_view Name = "OptimusNonCopyableNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusOutputBufferWriter
    {
        static constexpr std::string_view Name = "OptimusOutputBufferWriter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusParameterBinding
    {
        static constexpr std::string_view Name = "OptimusParameterBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DataType = 0x8;
            static constexpr std::uintptr_t DataDomain = 0x30;
            static constexpr std::uintptr_t bSupportAtomicIfCompatibleDataType = 0x70;
            static constexpr std::uintptr_t bSupportRead = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "StructProperty"},
            {"DataType", 0x8, "StructProperty"},
            {"DataDomain", 0x30, "StructProperty"},
            {"bSupportAtomicIfCompatibleDataType", 0x70, "BoolProperty"},
            {"bSupportRead", 0x71, "BoolProperty"},
        }};
    };

    struct OptimusParameterBindingArray
    {
        static constexpr std::string_view Name = "OptimusParameterBindingArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerArray = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerArray", 0x0, "ArrayProperty"},
        }};
    };

    struct OptimusParameterBindingProvider
    {
        static constexpr std::string_view Name = "OptimusParameterBindingProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusPathResolver
    {
        static constexpr std::string_view Name = "OptimusPathResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusPersistentBufferDataInterface
    {
        static constexpr std::string_view Name = "OptimusPersistentBufferDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceName = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResourceName", 0x88, "NameProperty"},
        }};
    };

    struct OptimusPersistentBufferDataProvider
    {
        static constexpr std::string_view Name = "OptimusPersistentBufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusPersistentBufferProvider
    {
        static constexpr std::string_view Name = "OptimusPersistentBufferProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusPinMutabilityDefiner
    {
        static constexpr std::string_view Name = "OptimusPinMutabilityDefiner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusPinPairInfo
    {
        static constexpr std::string_view Name = "OptimusPinPairInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPinPath = 0x0;
            static constexpr std::uintptr_t OutputPinPath = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputPinPath", 0x0, "ArrayProperty"},
            {"OutputPinPath", 0x10, "ArrayProperty"},
        }};
    };

    struct OptimusPropertyPinProvider
    {
        static constexpr std::string_view Name = "OptimusPropertyPinProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusRawBufferDataInterface
    {
        static constexpr std::string_view Name = "OptimusRawBufferDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueType = 0x28;
            static constexpr std::uintptr_t DataDomain = 0x30;
            static constexpr std::uintptr_t ComponentSourceBinding = 0x70;
            static constexpr std::uintptr_t DomainConstantIdentifier = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ValueType", 0x28, "StructProperty"},
            {"DataDomain", 0x30, "StructProperty"},
            {"ComponentSourceBinding", 0x70, "WeakObjectProperty"},
            {"DomainConstantIdentifier", 0x78, "StructProperty"},
        }};
    };

    struct OptimusRawBufferDataProvider
    {
        static constexpr std::string_view Name = "OptimusRawBufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceAction_AddResource
    {
        static constexpr std::string_view Name = "OptimusResourceAction_AddResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceAction_RemoveResource
    {
        static constexpr std::string_view Name = "OptimusResourceAction_RemoveResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceAction_RenameResource
    {
        static constexpr std::string_view Name = "OptimusResourceAction_RenameResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceAction_SetDataDomain
    {
        static constexpr std::string_view Name = "OptimusResourceAction_SetDataDomain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceAction_SetDataType
    {
        static constexpr std::string_view Name = "OptimusResourceAction_SetDataType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusResourceContainer
    {
        static constexpr std::string_view Name = "OptimusResourceContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptions", 0x28, "ArrayProperty"},
        }};
    };

    struct OptimusResourceDescription
    {
        static constexpr std::string_view Name = "OptimusResourceDescription";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceName = 0x28;
            static constexpr std::uintptr_t DataType = 0x30;
            static constexpr std::uintptr_t ComponentBinding = 0x58;
            static constexpr std::uintptr_t DataDomain = 0x60;
            static constexpr std::uintptr_t DataInterface = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ResourceName", 0x28, "NameProperty"},
            {"DataType", 0x30, "StructProperty"},
            {"ComponentBinding", 0x58, "WeakObjectProperty"},
            {"DataDomain", 0x60, "StructProperty"},
            {"DataInterface", 0xA0, "ObjectProperty"},
        }};
    };

    struct OptimusSceneComponentDataInterface
    {
        static constexpr std::string_view Name = "OptimusSceneComponentDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSceneComponentDataProvider
    {
        static constexpr std::string_view Name = "OptimusSceneComponentDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSceneComponentSource
    {
        static constexpr std::string_view Name = "OptimusSceneComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSceneDataInterface
    {
        static constexpr std::string_view Name = "OptimusSceneDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSceneDataProvider
    {
        static constexpr std::string_view Name = "OptimusSceneDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSecondaryInputBindingsGroup
    {
        static constexpr std::string_view Name = "OptimusSecondaryInputBindingsGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupName = 0x0;
            static constexpr std::uintptr_t BindingArray = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupName", 0x0, "StructProperty"},
            {"BindingArray", 0x8, "StructProperty"},
        }};
    };

    struct OptimusShaderText
    {
        static constexpr std::string_view Name = "OptimusShaderText";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Declarations = 0x0;
            static constexpr std::uintptr_t ShaderText = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Declarations", 0x0, "StrProperty"},
            {"ShaderText", 0x10, "StrProperty"},
        }};
    };

    struct OptimusShaderTextProvider
    {
        static constexpr std::string_view Name = "OptimusShaderTextProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkeletalMeshComponentSource
    {
        static constexpr std::string_view Name = "OptimusSkeletalMeshComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusSkinnedMeshComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkeletonDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkeletonDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkeletonDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkeletonDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinWeightsAsVertexMaskDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinWeightsAsVertexMaskDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SkinWeightProfile = 0x28;
            static constexpr std::uintptr_t BoneNames = 0x30;
            static constexpr std::uintptr_t ExpandTowardsRoot = 0x40;
            static constexpr std::uintptr_t ExpandTowardsLeaf = 0x44;
            static constexpr std::uintptr_t bDebugDrawIncludedBones = 0x48;
            static constexpr std::uintptr_t DebugDrawColor = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SkinWeightProfile", 0x28, "NameProperty"},
            {"BoneNames", 0x30, "ArrayProperty"},
            {"ExpandTowardsRoot", 0x40, "IntProperty"},
            {"ExpandTowardsLeaf", 0x44, "IntProperty"},
            {"bDebugDrawIncludedBones", 0x48, "BoolProperty"},
            {"DebugDrawColor", 0x4C, "StructProperty"},
        }};
    };

    struct OptimusSkinWeightsAsVertexMaskDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkinWeightsAsVertexMaskDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshComponentSource
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshExecDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshExecDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Domain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Domain", 0x30, "EnumProperty"},
        }};
    };

    struct OptimusSkinnedMeshReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshVertexAttributeDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshVertexAttributeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0x28;
            static constexpr std::uintptr_t DefaultValue = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeName", 0x28, "NameProperty"},
            {"DefaultValue", 0x2C, "FloatProperty"},
        }};
    };

    struct OptimusSkinnedMeshVertexAttributeDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshVertexAttributeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0x38;
            static constexpr std::uintptr_t DefaultValue = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeName", 0x38, "NameProperty"},
            {"DefaultValue", 0x3C, "FloatProperty"},
        }};
    };

    struct OptimusSkinnedMeshWriteDataInterface
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshWriteDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSkinnedMeshWriteDataProvider
    {
        static constexpr std::string_view Name = "OptimusSkinnedMeshWriteDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusSource
    {
        static constexpr std::string_view Name = "OptimusSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeSource";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceText = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SourceText", 0x40, "StrProperty"},
        }};
    };

    struct OptimusTransientBufferDataInterface
    {
        static constexpr std::string_view Name = "OptimusTransientBufferDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bZeroInitForAtomicWrites = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bZeroInitForAtomicWrites", 0x88, "BoolProperty"},
        }};
    };

    struct OptimusTransientBufferDataProvider
    {
        static constexpr std::string_view Name = "OptimusTransientBufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusRawBufferDataProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusUnnamedNodePinProvider
    {
        static constexpr std::string_view Name = "OptimusUnnamedNodePinProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusValidatedName
    {
        static constexpr std::string_view Name = "OptimusValidatedName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct OptimusValueContainer
    {
        static constexpr std::string_view Name = "OptimusValueContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusValueContainerGeneratorClass
    {
        static constexpr std::string_view Name = "OptimusValueContainerGeneratorClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t DataType = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataType", 0x198, "StructProperty"},
        }};
    };

    struct OptimusValueContainerStruct
    {
        static constexpr std::string_view Name = "OptimusValueContainerStruct";
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

    struct OptimusValueDescription
    {
        static constexpr std::string_view Name = "OptimusValueDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataType = 0x0;
            static constexpr std::uintptr_t ValueUsage = 0x28;
            static constexpr std::uintptr_t Value = 0x30;
            static constexpr std::uintptr_t ShaderValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DataType", 0x0, "StructProperty"},
            {"ValueUsage", 0x28, "EnumProperty"},
            {"Value", 0x30, "StructProperty"},
            {"ShaderValue", 0x40, "StructProperty"},
        }};
    };

    struct OptimusValueIdentifier
    {
        static constexpr std::string_view Name = "OptimusValueIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Name", 0x4, "NameProperty"},
        }};
    };

    struct OptimusValueProvider
    {
        static constexpr std::string_view Name = "OptimusValueProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusVariableAction_AddVariable
    {
        static constexpr std::string_view Name = "OptimusVariableAction_AddVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusVariableAction_RemoveVariable
    {
        static constexpr std::string_view Name = "OptimusVariableAction_RemoveVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusVariableAction_RenameVariable
    {
        static constexpr std::string_view Name = "OptimusVariableAction_RenameVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusVariableAction_SetDataType
    {
        static constexpr std::string_view Name = "OptimusVariableAction_SetDataType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OptimusAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusVariableContainer
    {
        static constexpr std::string_view Name = "OptimusVariableContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptions", 0x28, "ArrayProperty"},
        }};
    };

    struct OptimusVariableDescription
    {
        static constexpr std::string_view Name = "OptimusVariableDescription";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x28;
            static constexpr std::uintptr_t VariableName = 0x38;
            static constexpr std::uintptr_t DataType = 0x40;
            static constexpr std::uintptr_t DefaultValueStruct = 0x68;
            static constexpr std::uintptr_t CachedShaderValue = 0x78;
            static constexpr std::uintptr_t ValueData = 0x98;
            static constexpr std::uintptr_t DefaultValue = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Guid", 0x28, "StructProperty"},
            {"VariableName", 0x38, "NameProperty"},
            {"DataType", 0x40, "StructProperty"},
            {"DefaultValueStruct", 0x68, "StructProperty"},
            {"CachedShaderValue", 0x78, "StructProperty"},
            {"ValueData", 0x98, "ArrayProperty"},
            {"DefaultValue", 0xA8, "ObjectProperty"},
        }};
    };

    struct OptimusVariableMetaDataEntry
    {
        static constexpr std::string_view Name = "OptimusVariableMetaDataEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "NameProperty"},
            {"Value", 0x8, "StrProperty"},
        }};
    };

    struct Optimus_ShaderBinding
    {
        static constexpr std::string_view Name = "Optimus_ShaderBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DataType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"DataType", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_AddOptimusDeformer
    {
        static constexpr std::string_view Name = "RigUnit_AddOptimusDeformer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformerInstanceGuid = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeformerInstanceGuid", 0x10, "StructProperty"},
        }};
    };

    struct RigVMTrait_OptimusDeformer
    {
        static constexpr std::string_view Name = "RigVMTrait_OptimusDeformer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformerGraph = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeformerGraph", 0x18, "SoftObjectProperty"},
        }};
    };

    struct RigVMTrait_OptimusDeformerSettings
    {
        static constexpr std::string_view Name = "RigVMTrait_OptimusDeformerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionPhase = 0x18;
            static constexpr std::uintptr_t ExecutionGroup = 0x1C;
            static constexpr std::uintptr_t DeformChildComponents = 0x20;
            static constexpr std::uintptr_t ExcludeChildComponentsWithTag = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExecutionPhase", 0x18, "EnumProperty"},
            {"ExecutionGroup", 0x1C, "IntProperty"},
            {"DeformChildComponents", 0x20, "BoolProperty"},
            {"ExcludeChildComponentsWithTag", 0x24, "NameProperty"},
        }};
    };

    struct RigVMTrait_OptimusVariableBase
    {
        static constexpr std::string_view Name = "RigVMTrait_OptimusVariableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x8, "StrProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerBoolArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerBoolArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerBoolVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerBoolVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "BoolProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerFloatArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerFloatArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerFloatVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerFloatVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "DoubleProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt2ArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt2ArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt2Variable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt2Variable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt3ArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt3ArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt3Variable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt3Variable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt4ArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt4ArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerInt4Variable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerInt4Variable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerIntArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerIntArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerIntVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerIntVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "IntProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerLinearColorArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerLinearColorArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerLinearColorVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerLinearColorVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerNameArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerNameArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerNameVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerNameVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "NameProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerQuatArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerQuatArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerQuatVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerQuatVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerRotatorArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerRotatorArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerRotatorVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerRotatorVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerTransformArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerTransformArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerTransformVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerTransformVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVector2ArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVector2ArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVector2Variable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVector2Variable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVector4ArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVector4ArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVector4Variable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVector4Variable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVectorArrayVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVectorArrayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_SetDeformerVectorVariable
    {
        static constexpr std::string_view Name = "RigVMTrait_SetDeformerVectorVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OptimusVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

}
