#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UAF
{
    struct AbstractSkeletonLabelBinding
    {
        static constexpr std::string_view Name = "AbstractSkeletonLabelBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelCollections = 0x28;
            static constexpr std::uintptr_t skeleton = 0x38;
            static constexpr std::uintptr_t LabelBindings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LabelCollections", 0x28, "ArrayProperty"},
            {"skeleton", 0x38, "ObjectProperty"},
            {"LabelBindings", 0x40, "ArrayProperty"},
        }};
    };

    struct AbstractSkeletonLabelCollection
    {
        static constexpr std::string_view Name = "AbstractSkeletonLabelCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TypedLabels = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TypedLabels", 0x28, "ArrayProperty"},
        }};
    };

    struct AbstractSkeletonSetBinding
    {
        static constexpr std::string_view Name = "AbstractSkeletonSetBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SetCollection = 0x28;
            static constexpr std::uintptr_t skeleton = 0x30;
            static constexpr std::uintptr_t BoneBindings = 0x38;
            static constexpr std::uintptr_t AttributeBindings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SetCollection", 0x28, "ObjectProperty"},
            {"skeleton", 0x30, "ObjectProperty"},
            {"BoneBindings", 0x38, "ArrayProperty"},
            {"AttributeBindings", 0x48, "ArrayProperty"},
        }};
    };

    struct AbstractSkeletonSetCollection
    {
        static constexpr std::string_view Name = "AbstractSkeletonSetCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SetHierarchy = 0x28;
            static constexpr std::uintptr_t Sets = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetHierarchy", 0x28, "ArrayProperty"},
            {"Sets", 0x38, "ArrayProperty"},
        }};
    };

    struct AbstractSkeleton_AttributeBinding
    {
        static constexpr std::string_view Name = "AbstractSkeleton_AttributeBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetGuid = 0x0;
            static constexpr std::uintptr_t AttributeName = 0x10;
            static constexpr std::uintptr_t AttributeTypePath = 0x18;
            static constexpr std::uintptr_t AttributeType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SetGuid", 0x0, "StructProperty"},
            {"AttributeName", 0x10, "NameProperty"},
            {"AttributeTypePath", 0x18, "StructProperty"},
            {"AttributeType", 0x30, "ObjectProperty"},
        }};
    };

    struct AbstractSkeleton_BoneBinding
    {
        static constexpr std::string_view Name = "AbstractSkeleton_BoneBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetGuid = 0x0;
            static constexpr std::uintptr_t BoneName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetGuid", 0x0, "StructProperty"},
            {"BoneName", 0x10, "NameProperty"},
        }};
    };

    struct AbstractSkeleton_LabelBinding
    {
        static constexpr std::string_view Name = "AbstractSkeleton_LabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t AttributeName = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Label", 0x0, "StructProperty"},
            {"AttributeName", 0x18, "NameProperty"},
        }};
    };

    struct AnimNextActorComponentReferenceComponent
    {
        static constexpr std::string_view Name = "AnimNextActorComponentReferenceComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x10;
            static constexpr std::uintptr_t ComponentType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Component", 0x10, "ObjectProperty"},
            {"ComponentType", 0x18, "ClassProperty"},
        }};
    };

    struct AnimNextActorLocatorFragment
    {
        static constexpr std::string_view Name = "AnimNextActorLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextActorTransformComponent
    {
        static constexpr std::string_view Name = "AnimNextActorTransformComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextAddDependencyMenuContext
    {
        static constexpr std::string_view Name = "AnimNextAddDependencyMenuContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextComponentLocatorFragment
    {
        static constexpr std::string_view Name = "AnimNextComponentLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StructProperty"},
        }};
    };

    struct AnimNextConfig
    {
        static constexpr std::string_view Name = "AnimNextConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetAllowedAssetClasses",
        }};
    };

    struct AnimNextEntryPoint
    {
        static constexpr std::string_view Name = "AnimNextEntryPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNextTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextExecuteContext
    {
        static constexpr std::string_view Name = "AnimNextExecuteContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMExecuteContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextFieldPath
    {
        static constexpr std::string_view Name = "AnimNextFieldPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldPath = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldPath", 0x0, "FieldPathProperty"},
        }};
    };

    struct AnimNextFunctionReference
    {
        static constexpr std::string_view Name = "AnimNextFunctionReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionGuid = 0x0;
            static constexpr std::uintptr_t Object = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FunctionGuid", 0x0, "StructProperty"},
            {"Object", 0x10, "ObjectProperty"},
        }};
    };

    struct AnimNextGraphLODPose
    {
        static constexpr std::string_view Name = "AnimNextGraphLODPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextGraphReferencePose
    {
        static constexpr std::string_view Name = "AnimNextGraphReferencePose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextGraphState
    {
        static constexpr std::string_view Name = "AnimNextGraphState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x0;
            static constexpr std::uintptr_t PublicParameterStartIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"State", 0x0, "StructProperty"},
            {"PublicParameterStartIndex", 0x10, "IntProperty"},
        }};
    };

    struct AnimNextLODPose
    {
        static constexpr std::string_view Name = "AnimNextLODPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextModuleContextData
    {
        static constexpr std::string_view Name = "AnimNextModuleContextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFAssetContextData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextModuleInstance
    {
        static constexpr std::string_view Name = "AnimNextModuleInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFAssetInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Object", 0xA0, "ObjectProperty"},
        }};
    };

    struct AnimNextNativeDataInterface
    {
        static constexpr std::string_view Name = "AnimNextNativeDataInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextObjectCastLocatorFragment
    {
        static constexpr std::string_view Name = "AnimNextObjectCastLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StructProperty"},
        }};
    };

    struct AnimNextObjectFunctionLocatorFragment
    {
        static constexpr std::string_view Name = "AnimNextObjectFunctionLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StructProperty"},
        }};
    };

    struct AnimNextObjectPropertyLocatorFragment
    {
        static constexpr std::string_view Name = "AnimNextObjectPropertyLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "ArrayProperty"},
        }};
    };

    struct AnimNextOverrideVariablesMenuContext
    {
        static constexpr std::string_view Name = "AnimNextOverrideVariablesMenuContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextOverrideVariablesWorkData
    {
        static constexpr std::string_view Name = "AnimNextOverrideVariablesWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextParamType
    {
        static constexpr std::string_view Name = "AnimNextParamType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueTypeObject = 0x0;
            static constexpr std::uintptr_t ValueType = 0x8;
            static constexpr std::uintptr_t ContainerType = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ValueTypeObject", 0x0, "ObjectProperty"},
            {"ValueType", 0x8, "EnumProperty"},
            {"ContainerType", 0x9, "EnumProperty"},
        }};
    };

    struct AnimNextReferencePose
    {
        static constexpr std::string_view Name = "AnimNextReferencePose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextRigVMFunctionData
    {
        static constexpr std::string_view Name = "AnimNextRigVMFunctionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionGuid = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t EventName = 0x14;
            static constexpr std::uintptr_t bIsPublic = 0x18;
            static constexpr std::uintptr_t ArgumentIndexAndDirections = 0x20;
            static constexpr std::uintptr_t ArgNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FunctionGuid", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"EventName", 0x14, "NameProperty"},
            {"bIsPublic", 0x18, "BoolProperty"},
            {"ArgumentIndexAndDirections", 0x20, "ArrayProperty"},
            {"ArgNames", 0x30, "ArrayProperty"},
        }};
    };

    struct AnimNextScope
    {
        static constexpr std::string_view Name = "AnimNextScope";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNextTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextSkeletalMeshComponentReferenceComponent
    {
        static constexpr std::string_view Name = "AnimNextSkeletalMeshComponentReferenceComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNextActorComponentReferenceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x10;
            static constexpr std::uintptr_t ComponentType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Component", 0x10, "ObjectProperty"},
            {"ComponentType", 0x18, "ClassProperty"},
        }};
    };

    struct AnimNextSoftFunctionPtr
    {
        static constexpr std::string_view Name = "AnimNextSoftFunctionPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftObjectPtr = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftObjectPtr", 0x0, "SoftObjectProperty"},
        }};
    };

    struct AnimNextTag
    {
        static constexpr std::string_view Name = "AnimNextTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextTraitEvent
    {
        static constexpr std::string_view Name = "AnimNextTraitEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextVariableOverrideInfo
    {
        static constexpr std::string_view Name = "AnimNextVariableOverrideInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Type = 0x8;
            static constexpr std::uintptr_t DefaultValue = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Type", 0x8, "StructProperty"},
            {"DefaultValue", 0x18, "StrProperty"},
        }};
    };

    struct AnimNextVariableOverridesCollection
    {
        static constexpr std::string_view Name = "AnimNextVariableOverridesCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextVariableReference
    {
        static constexpr std::string_view Name = "AnimNextVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Object = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Object", 0x8, "ObjectProperty"},
        }};
    };

    struct AnimNextWorldLibrary
    {
        static constexpr std::string_view Name = "AnimNextWorldLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetDeltaSeconds",
            "GetRealTimeSeconds",
            "GetTimeSeconds",
            "GetUnpausedTimeSeconds",
        }};
    };

    struct BindableBool
    {
        static constexpr std::string_view Name = "BindableBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "BoolProperty"},
        }};
    };

    struct BindableByte
    {
        static constexpr std::string_view Name = "BindableByte";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "ByteProperty"},
        }};
    };

    struct BindableContainer
    {
        static constexpr std::string_view Name = "BindableContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ContainerType = 0x18;
            static constexpr std::uintptr_t ValueType = 0x19;
            static constexpr std::uintptr_t ValueTypeObject = 0x20;
            static constexpr std::uintptr_t ConstantValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ContainerType", 0x18, "EnumProperty"},
            {"ValueType", 0x19, "EnumProperty"},
            {"ValueTypeObject", 0x20, "ObjectProperty"},
            {"ConstantValue", 0x28, "StructProperty"},
        }};
    };

    struct BindableDouble
    {
        static constexpr std::string_view Name = "BindableDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "DoubleProperty"},
        }};
    };

    struct BindableEnum
    {
        static constexpr std::string_view Name = "BindableEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumClass = 0x8;
            static constexpr std::uintptr_t ConstantValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnumClass", 0x8, "ObjectProperty"},
            {"ConstantValue", 0x10, "IntProperty"},
        }};
    };

    struct BindableFloat
    {
        static constexpr std::string_view Name = "BindableFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "FloatProperty"},
        }};
    };

    struct BindableInt32
    {
        static constexpr std::string_view Name = "BindableInt32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "IntProperty"},
        }};
    };

    struct BindableInt64
    {
        static constexpr std::string_view Name = "BindableInt64";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "Int64Property"},
        }};
    };

    struct BindableName
    {
        static constexpr std::string_view Name = "BindableName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "NameProperty"},
        }};
    };

    struct BindableObject
    {
        static constexpr std::string_view Name = "BindableObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectClass = 0x8;
            static constexpr std::uintptr_t ConstantValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectClass", 0x8, "ClassProperty"},
            {"ConstantValue", 0x10, "ObjectProperty"},
        }};
    };

    struct BindableOutputBase
    {
        static constexpr std::string_view Name = "BindableOutputBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputBool
    {
        static constexpr std::string_view Name = "BindableOutputBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputByte
    {
        static constexpr std::string_view Name = "BindableOutputByte";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputDouble
    {
        static constexpr std::string_view Name = "BindableOutputDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputEnum
    {
        static constexpr std::string_view Name = "BindableOutputEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnumClass", 0x10, "ObjectProperty"},
        }};
    };

    struct BindableOutputFloat
    {
        static constexpr std::string_view Name = "BindableOutputFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputInt32
    {
        static constexpr std::string_view Name = "BindableOutputInt32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputInt64
    {
        static constexpr std::string_view Name = "BindableOutputInt64";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputName
    {
        static constexpr std::string_view Name = "BindableOutputName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputObject
    {
        static constexpr std::string_view Name = "BindableOutputObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectClass", 0x10, "ClassProperty"},
        }};
    };

    struct BindableOutputQuat
    {
        static constexpr std::string_view Name = "BindableOutputQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputStruct
    {
        static constexpr std::string_view Name = "BindableOutputStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StructClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StructClass", 0x10, "ObjectProperty"},
        }};
    };

    struct BindableOutputTransform
    {
        static constexpr std::string_view Name = "BindableOutputTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableOutputVector
    {
        static constexpr std::string_view Name = "BindableOutputVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableOutputBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x0, "StructProperty"},
        }};
    };

    struct BindableQuat
    {
        static constexpr std::string_view Name = "BindableQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x10, "StructProperty"},
        }};
    };

    struct BindableStruct
    {
        static constexpr std::string_view Name = "BindableStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StructClass = 0x8;
            static constexpr std::uintptr_t ConstantValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StructClass", 0x8, "ObjectProperty"},
            {"ConstantValue", 0x10, "StructProperty"},
        }};
    };

    struct BindableTransform
    {
        static constexpr std::string_view Name = "BindableTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x10, "StructProperty"},
        }};
    };

    struct BindableValueBase
    {
        static constexpr std::string_view Name = "BindableValueBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BindableVector
    {
        static constexpr std::string_view Name = "BindableVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BindableValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstantValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstantValue", 0x8, "StructProperty"},
        }};
    };

    struct BoneRemapping
    {
        static constexpr std::string_view Name = "BoneRemapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BoneTransformAnimationAttribute
    {
        static constexpr std::string_view Name = "BoneTransformAnimationAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TransformAnimationAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct RemapPoseData
    {
        static constexpr std::string_view Name = "RemapPoseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemappedBone
    {
        static constexpr std::string_view Name = "RemappedBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RetargetPoseData
    {
        static constexpr std::string_view Name = "RetargetPoseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_AnimNextBase
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_AnimNextBeginExecution
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextBeginExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextExecuteBindings_GT
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextExecuteBindings_GT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextExecuteBindings_WT
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextExecuteBindings_WT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextInitializeEvent
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextInitializeEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextModuleAddDependencies
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextModuleAddDependencies";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleDependenciesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextModuleDependenciesBase
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextModuleDependenciesBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextModuleEventBase
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextModuleEventBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextModuleRemoveDependencies
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextModuleRemoveDependencies";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleDependenciesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextNotifyEventBase
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextNotifyEventBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Payload = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Payload", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextParameterBase
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextParameterBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_AnimNextParameterBeginExecution
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextParameterBeginExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t EntryPoint = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"EntryPoint", 0x120, "NameProperty"},
        }};
    };

    struct RigUnit_AnimNextPostPhysicsEvent
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextPostPhysicsEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextUserEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x120;
            static constexpr std::uintptr_t SortOrder = 0x124;
            static constexpr std::uintptr_t TickGroup = 0x128;
            static constexpr std::uintptr_t EndTickGroup = 0x129;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x120, "NameProperty"},
            {"SortOrder", 0x124, "IntProperty"},
            {"TickGroup", 0x128, "ByteProperty"},
            {"EndTickGroup", 0x129, "ByteProperty"},
        }};
    };

    struct RigUnit_AnimNextPrePhysicsEvent
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextPrePhysicsEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextUserEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x120;
            static constexpr std::uintptr_t SortOrder = 0x124;
            static constexpr std::uintptr_t TickGroup = 0x128;
            static constexpr std::uintptr_t EndTickGroup = 0x129;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x120, "NameProperty"},
            {"SortOrder", 0x124, "IntProperty"},
            {"TickGroup", 0x128, "ByteProperty"},
            {"EndTickGroup", 0x129, "ByteProperty"},
        }};
    };

    struct RigUnit_AnimNextRemapPose
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextRemapPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t Result = 0xE8;
            static constexpr std::uintptr_t TargetAnimGraphRefPose = 0x1C8;
            static constexpr std::uintptr_t ExecuteContext = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"Result", 0xE8, "StructProperty"},
            {"TargetAnimGraphRefPose", 0x1C8, "StructProperty"},
            {"ExecuteContext", 0x1D0, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextRetargetPose
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextRetargetPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t Result = 0xE8;
            static constexpr std::uintptr_t TargetAnimGraphRefPose = 0x1C8;
            static constexpr std::uintptr_t ExecuteContext = 0x1D0;
            static constexpr std::uintptr_t RetargetPoseData = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"Result", 0xE8, "StructProperty"},
            {"TargetAnimGraphRefPose", 0x1C8, "StructProperty"},
            {"ExecuteContext", 0x1D0, "StructProperty"},
            {"RetargetPoseData", 0x2E0, "StructProperty"},
        }};
    };

    struct RigUnit_AnimNextUserEvent
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextUserEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x120;
            static constexpr std::uintptr_t SortOrder = 0x124;
            static constexpr std::uintptr_t TickGroup = 0x128;
            static constexpr std::uintptr_t EndTickGroup = 0x129;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x120, "NameProperty"},
            {"SortOrder", 0x124, "IntProperty"},
            {"TickGroup", 0x128, "ByteProperty"},
            {"EndTickGroup", 0x129, "ByteProperty"},
        }};
    };

    struct RigUnit_AnimNextWriteSkeletalMeshComponentPose
    {
        static constexpr std::string_view Name = "RigUnit_AnimNextWriteSkeletalMeshComponentPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0xE8;
            static constexpr std::uintptr_t ExecuteContext = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"SkeletalMeshComponent", 0xE8, "ObjectProperty"},
            {"ExecuteContext", 0xF0, "StructProperty"},
        }};
    };

    struct RigUnit_CopyModuleProxyVariables
    {
        static constexpr std::string_view Name = "RigUnit_CopyModuleProxyVariables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_GetActorTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetActorTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_GetMeshTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetMeshTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_GetSocketTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetSocketTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComponent = 0x8;
            static constexpr std::uintptr_t SocketName = 0x10;
            static constexpr std::uintptr_t TransformSpace = 0x14;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SceneComponent", 0x8, "ObjectProperty"},
            {"SocketName", 0x10, "NameProperty"},
            {"TransformSpace", 0x14, "ByteProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HandleNotify
    {
        static constexpr std::string_view Name = "RigUnit_HandleNotify";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextNotifyEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Payload = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Payload", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_HandleNotifyBegin
    {
        static constexpr std::string_view Name = "RigUnit_HandleNotifyBegin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextNotifyEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Payload = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Payload", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_HandleNotifyEnd
    {
        static constexpr std::string_view Name = "RigUnit_HandleNotifyEnd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextNotifyEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Payload = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Payload", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_HandleNotifyTick
    {
        static constexpr std::string_view Name = "RigUnit_HandleNotifyTick";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextNotifyEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t Payload = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"Payload", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_IsAnimBPDriven
    {
        static constexpr std::string_view Name = "RigUnit_IsAnimBPDriven";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshComponent", 0x8, "ObjectProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_IsRecentlyRendered
    {
        static constexpr std::string_view Name = "RigUnit_IsRecentlyRendered";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshComponent", 0x8, "ObjectProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_MakeReferencePoseFromSkeletalMeshComponent
    {
        static constexpr std::string_view Name = "RigUnit_MakeReferencePoseFromSkeletalMeshComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferencePose = 0x8;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x10;
            static constexpr std::uintptr_t ExecuteContext = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReferencePose", 0x8, "StructProperty"},
            {"SkeletalMeshComponent", 0x10, "ObjectProperty"},
            {"ExecuteContext", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_OverrideVariables
    {
        static constexpr std::string_view Name = "RigUnit_OverrideVariables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x8;
            static constexpr std::uintptr_t WorkData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Overrides", 0x8, "StructProperty"},
            {"WorkData", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_ResolveUniversalObjectLocator
    {
        static constexpr std::string_view Name = "RigUnit_ResolveUniversalObjectLocator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Locator = 0x8;
            static constexpr std::uintptr_t Object = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Locator", 0x8, "StructProperty"},
            {"Object", 0x18, "ObjectProperty"},
        }};
    };

    struct RigUnit_UAFGetIncomingPose
    {
        static constexpr std::string_view Name = "RigUnit_UAFGetIncomingPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_UAFWriteInstancedSkinnedMeshPose
    {
        static constexpr std::string_view Name = "RigUnit_UAFWriteInstancedSkinnedMeshPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t SkinnedMeshComponent = 0xE8;
            static constexpr std::uintptr_t ExecuteContext = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"SkinnedMeshComponent", 0xE8, "ObjectProperty"},
            {"ExecuteContext", 0xF0, "StructProperty"},
        }};
    };

    struct RigUnit_UAFWriteSystemOutput
    {
        static constexpr std::string_view Name = "RigUnit_UAFWriteSystemOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_AnimNextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t ExecuteContext = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"ExecuteContext", 0x20, "StructProperty"},
        }};
    };

    struct RigVMDispatch_CallHoistedAccessorFunctionBase
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallHoistedAccessorFunctionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CallHoistedAccessorFunctionNative
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallHoistedAccessorFunctionNative";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CallHoistedAccessorFunctionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CallHoistedAccessorFunctionScript
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallHoistedAccessorFunctionScript";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CallHoistedAccessorFunctionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CallObjectAccessorFunctionBase
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallObjectAccessorFunctionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CallObjectAccessorFunctionNative
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallObjectAccessorFunctionNative";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CallObjectAccessorFunctionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_CallObjectAccessorFunctionScript
    {
        static constexpr std::string_view Name = "RigVMDispatch_CallObjectAccessorFunctionScript";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_CallObjectAccessorFunctionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetLayerParameter
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetLayerParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetObjectProperty
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetObjectProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetParameter
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetScopedParameter
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetScopedParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFBoneTransformLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFBoneTransformLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFFloatLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFFloatLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFIntegerLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFIntegerLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFQuaternionLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFQuaternionLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFTransformLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFTransformLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_GetUAFVectorLabelValue
    {
        static constexpr std::string_view Name = "RigVMDispatch_GetUAFVectorLabelValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatch_GetUAFLabelValue";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMDispatch_SetLayerParameter
    {
        static constexpr std::string_view Name = "RigVMDispatch_SetLayerParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigVMTrait_AnimNextPublicVariables
    {
        static constexpr std::string_view Name = "RigVMTrait_AnimNextPublicVariables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalAsset = 0x18;
            static constexpr std::uintptr_t InternalVariableNames = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InternalAsset", 0x18, "ObjectProperty"},
            {"InternalVariableNames", 0x20, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_ModuleEventDependency
    {
        static constexpr std::string_view Name = "RigVMTrait_ModuleEventDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t Ordering = 0x18;
            static constexpr std::uintptr_t EventName = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Ordering", 0x18, "EnumProperty"},
            {"EventName", 0x1C, "NameProperty"},
        }};
    };

    struct RigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction
    {
        static constexpr std::string_view Name = "RigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_ModuleEventDependency";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentClass", 0x20, "ClassProperty"},
        }};
    };

    struct RigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction
    {
        static constexpr std::string_view Name = "RigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_ModuleEventDependency";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Component", 0x20, "ObjectProperty"},
        }};
    };

    struct RigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction
    {
        static constexpr std::string_view Name = "RigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_ModuleEventDependency";
        struct Offsets
        {
            static constexpr std::uintptr_t Ordering = 0x18;
            static constexpr std::uintptr_t EventName = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Ordering", 0x18, "EnumProperty"},
            {"EventName", 0x1C, "NameProperty"},
        }};
    };

    struct RigVMTrait_OverrideVariables
    {
        static constexpr std::string_view Name = "RigVMTrait_OverrideVariables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_OverrideVariablesForAsset
    {
        static constexpr std::string_view Name = "RigVMTrait_OverrideVariablesForAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OverrideVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x28, "ObjectProperty"},
        }};
    };

    struct RigVMTrait_OverrideVariablesForStruct
    {
        static constexpr std::string_view Name = "RigVMTrait_OverrideVariablesForStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait_OverrideVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Struct", 0x28, "ObjectProperty"},
        }};
    };

    struct RigVMTrait_UAFEventParameters
    {
        static constexpr std::string_view Name = "RigVMTrait_UAFEventParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVMTrait_UAFNotifyParameters
    {
        static constexpr std::string_view Name = "RigVMTrait_UAFNotifyParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyClass = 0x18;
            static constexpr std::uintptr_t Parameters = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NotifyClass", 0x18, "SoftClassProperty"},
            {"Parameters", 0x38, "ArrayProperty"},
        }};
    };

    struct UAFAbstractBlendMask
    {
        static constexpr std::string_view Name = "UAFAbstractBlendMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFBlendMask";
        struct Offsets
        {
            static constexpr std::uintptr_t SetCollection = 0x28;
            static constexpr std::uintptr_t SetWeights = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetCollection", 0x28, "ObjectProperty"},
            {"SetWeights", 0x30, "ArrayProperty"},
        }};
    };

    struct UAFAbstractSkeletonBindingComponent
    {
        static constexpr std::string_view Name = "UAFAbstractSkeletonBindingComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelBinding = 0x10;
            static constexpr std::uintptr_t SetBinding = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelBinding", 0x10, "ObjectProperty"},
            {"SetBinding", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFAnimNotify
    {
        static constexpr std::string_view Name = "UAFAnimNotify";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t Handler = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handler", 0x38, "ObjectProperty"},
        }};
    };

    struct UAFAnimNotifyState
    {
        static constexpr std::string_view Name = "UAFAnimNotifyState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t Handler = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handler", 0x30, "ObjectProperty"},
        }};
    };

    struct UAFAssetContextData
    {
        static constexpr std::string_view Name = "UAFAssetContextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFScriptContextData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFAssetData
    {
        static constexpr std::string_view Name = "UAFAssetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFAssetInstance
    {
        static constexpr std::string_view Name = "UAFAssetInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Components = 0x0;
            static constexpr std::uintptr_t Variables = 0x10;
            static constexpr std::uintptr_t Asset = 0x80;
            static constexpr std::uintptr_t ScriptStruct = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Components", 0x0, "ArrayProperty"},
            {"Variables", 0x10, "StructProperty"},
            {"Asset", 0x80, "ObjectProperty"},
            {"ScriptStruct", 0x88, "ObjectProperty"},
        }};
    };

    struct UAFAssetInstanceComponent
    {
        static constexpr std::string_view Name = "UAFAssetInstanceComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFAttributeSchema
    {
        static constexpr std::string_view Name = "UAFAttributeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferencedAttributeTypes = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReferencedAttributeTypes", 0xA0, "ArrayProperty"},
        }};
    };

    struct UAFBlendMask
    {
        static constexpr std::string_view Name = "UAFBlendMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFBlendProfile
    {
        static constexpr std::string_view Name = "UAFBlendProfile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x28;
            static constexpr std::uintptr_t CachedBlendProfileData = 0x30;
            static constexpr std::uintptr_t skeleton = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x28, "EnumProperty"},
            {"CachedBlendProfileData", 0x30, "StructProperty"},
            {"skeleton", 0x98, "ObjectProperty"},
        }};
    };

    struct UAFBoneTransformLabelBinding
    {
        static constexpr std::string_view Name = "UAFBoneTransformLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFComponent
    {
        static constexpr std::string_view Name = "UAFComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetData = 0xC8;
            static constexpr std::uintptr_t Inputs = 0xD8;
            static constexpr std::uintptr_t OutputComponent = 0xE8;
            static constexpr std::uintptr_t SkeletalMeshComponentOutputMode = 0x110;
            static constexpr std::uintptr_t CachedSkeletalMeshComponent = 0x118;
            static constexpr std::uintptr_t InputToComponentMappings = 0x140;
            static constexpr std::uintptr_t InitMethod = 0x154;
            static constexpr std::uintptr_t bSetupCharacterMovementDependency = 0x155;
            static constexpr std::uintptr_t bShowDebugDrawing = 0x155;
            static constexpr std::uintptr_t SetBinding = 0x158;
            static constexpr std::uintptr_t LabelBinding = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AssetData", 0xC8, "StructProperty"},
            {"Inputs", 0xD8, "ArrayProperty"},
            {"OutputComponent", 0xE8, "StructProperty"},
            {"SkeletalMeshComponentOutputMode", 0x110, "EnumProperty"},
            {"CachedSkeletalMeshComponent", 0x118, "ObjectProperty"},
            {"InputToComponentMappings", 0x140, "MapProperty"},
            {"InitMethod", 0x154, "EnumProperty"},
            {"bSetupCharacterMovementDependency", 0x155, "BoolProperty"},
            {"bShowDebugDrawing", 0x155, "BoolProperty"},
            {"SetBinding", 0x158, "ObjectProperty"},
            {"LabelBinding", 0x160, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "AddComponentPrerequisite",
            "AddComponentSubsequent",
            "AddModuleEventPrerequisite",
            "AddModuleEventSubsequent",
            "BlueprintGetOutputVariableReference",
            "BlueprintGetVariableReference",
            "BlueprintSetInputBinding",
            "BlueprintSetVariable",
            "BlueprintSetVariableReference",
            "GetSystemReference",
            "RemoveComponentPrerequisite",
            "RemoveComponentSubsequent",
            "RemoveModuleEventPrerequisite",
            "RemoveModuleEventSubsequent",
            "ShowDebugDrawing",
        }};
    };

    struct UAFComponentInputDesc
    {
        static constexpr std::string_view Name = "UAFComponentInputDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x0;
            static constexpr std::uintptr_t Input = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Component", 0x0, "StructProperty"},
            {"Input", 0x28, "StructProperty"},
        }};
    };

    struct UAFEngineSubsystem
    {
        static constexpr std::string_view Name = "UAFEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFEventParameterInfo
    {
        static constexpr std::string_view Name = "UAFEventParameterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Type = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Type", 0x8, "StructProperty"},
        }};
    };

    struct UAFFloatLabelBinding
    {
        static constexpr std::string_view Name = "UAFFloatLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFGraphFactoryAsset
    {
        static constexpr std::string_view Name = "UAFGraphFactoryAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFSystemFactoryAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFIncomingPoseComponent
    {
        static constexpr std::string_view Name = "UAFIncomingPoseComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFInputVariableReference
    {
        static constexpr std::string_view Name = "UAFInputVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNextVariableReference";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Object = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Object", 0x8, "ObjectProperty"},
        }};
    };

    struct UAFInstanceVariableContainer
    {
        static constexpr std::string_view Name = "UAFInstanceVariableContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFInstanceVariableData
    {
        static constexpr std::string_view Name = "UAFInstanceVariableData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AllSharedVariableContainersMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllSharedVariableContainersMap", 0x30, "MapProperty"},
        }};
    };

    struct UAFIntegerLabelBinding
    {
        static constexpr std::string_view Name = "UAFIntegerLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFLabel
    {
        static constexpr std::string_view Name = "UAFLabel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Label = 0x10;
            static constexpr std::uintptr_t TypePath = 0x18;
            static constexpr std::uintptr_t TypeStruct = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Label", 0x10, "NameProperty"},
            {"TypePath", 0x18, "StructProperty"},
            {"TypeStruct", 0x30, "ObjectProperty"},
        }};
    };

    struct UAFLabelBinding
    {
        static constexpr std::string_view Name = "UAFLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFLabelGuid
    {
        static constexpr std::string_view Name = "UAFLabelGuid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Guid", 0x0, "StructProperty"},
        }};
    };

    struct UAFLabelReference
    {
        static constexpr std::string_view Name = "UAFLabelReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelCollection = 0x0;
            static constexpr std::uintptr_t LabelGuid = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelCollection", 0x0, "ObjectProperty"},
            {"LabelGuid", 0x8, "StructProperty"},
        }};
    };

    struct UAFMeshTransformComponent
    {
        static constexpr std::string_view Name = "UAFMeshTransformComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshTransform = 0x10;
            static constexpr std::uintptr_t WorldTransformDataSource = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshTransform", 0x10, "StructProperty"},
            {"WorldTransformDataSource", 0x70, "ObjectProperty"},
        }};
    };

    struct UAFModuleInstanceComponent
    {
        static constexpr std::string_view Name = "UAFModuleInstanceComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFAssetInstanceComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFNamedSetWeight
    {
        static constexpr std::string_view Name = "UAFNamedSetWeight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetGuid = 0x0;
            static constexpr std::uintptr_t ParentSetGuid = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t bIsOverridden = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SetGuid", 0x0, "StructProperty"},
            {"ParentSetGuid", 0x10, "StructProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"bIsOverridden", 0x24, "BoolProperty"},
        }};
    };

    struct UAFNotifyDispatchEntry
    {
        static constexpr std::string_view Name = "UAFNotifyDispatchEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ref = 0x0;
            static constexpr std::uintptr_t Weight = 0x38;
            static constexpr std::uintptr_t bIsBlendingOut = 0x3C;
            static constexpr std::uintptr_t SourceAnim = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Ref", 0x0, "StructProperty"},
            {"Weight", 0x38, "FloatProperty"},
            {"bIsBlendingOut", 0x3C, "BoolProperty"},
            {"SourceAnim", 0x40, "ObjectProperty"},
        }};
    };

    struct UAFNotifyDispatcherComponent
    {
        static constexpr std::string_view Name = "UAFNotifyDispatcherComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyQueue = 0x10;
            static constexpr std::uintptr_t CurrentAnimNotifySpans = 0x48;
            static constexpr std::uintptr_t PreviousAnimNotifySpans = 0x58;
            static constexpr std::uintptr_t PredictedAnimNotifySpans = 0x68;
            static constexpr std::uintptr_t PredictedAnimNotifyPoints = 0x78;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x88;
            static constexpr std::uintptr_t PendingModifierSpawns = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NotifyQueue", 0x10, "StructProperty"},
            {"CurrentAnimNotifySpans", 0x48, "ArrayProperty"},
            {"PreviousAnimNotifySpans", 0x58, "ArrayProperty"},
            {"PredictedAnimNotifySpans", 0x68, "ArrayProperty"},
            {"PredictedAnimNotifyPoints", 0x78, "ArrayProperty"},
            {"SkeletalMeshComponent", 0x88, "ObjectProperty"},
            {"PendingModifierSpawns", 0xA8, "ArrayProperty"},
        }};
    };

    struct UAFNotifyHandler
    {
        static constexpr std::string_view Name = "UAFNotifyHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFSharedVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyClass = 0x5A0;
            static constexpr std::uintptr_t FilterMode = 0x5C0;
            static constexpr std::uintptr_t DebounceTime = 0x5C4;
            static constexpr std::uintptr_t StateSwitchBehavior = 0x5C8;
            static constexpr std::uintptr_t bShouldPredictNotify = 0x5C9;
            static constexpr std::uintptr_t bImmediateNotify = 0x5CA;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NotifyClass", 0x5A0, "SoftClassProperty"},
            {"FilterMode", 0x5C0, "EnumProperty"},
            {"DebounceTime", 0x5C4, "FloatProperty"},
            {"StateSwitchBehavior", 0x5C8, "EnumProperty"},
            {"bShouldPredictNotify", 0x5C9, "BoolProperty"},
            {"bImmediateNotify", 0x5CA, "BoolProperty"},
        }};
    };

    struct UAFNotifyModifierSpawnRequest
    {
        static constexpr std::string_view Name = "UAFNotifyModifierSpawnRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SiteTag = 0x0;
            static constexpr std::uintptr_t NodeDesc = 0x8;
            static constexpr std::uintptr_t SpanIdentity = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SiteTag", 0x0, "StructProperty"},
            {"NodeDesc", 0x8, "StructProperty"},
            {"SpanIdentity", 0x18, "StructProperty"},
        }};
    };

    struct UAFNotifyParameterInfo
    {
        static constexpr std::string_view Name = "UAFNotifyParameterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Type = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Type", 0x8, "StructProperty"},
        }};
    };

    struct UAFNotifyPayload
    {
        static constexpr std::string_view Name = "UAFNotifyPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStartTime = 0x0;
            static constexpr std::uintptr_t NotifyTotalDuration = 0x4;
            static constexpr std::uintptr_t NotifyActiveTime = 0x8;
            static constexpr std::uintptr_t CurrentWeight = 0xC;
            static constexpr std::uintptr_t DeltaTime = 0x10;
            static constexpr std::uintptr_t Animation = 0x18;
            static constexpr std::uintptr_t NotifyInstance = 0x20;
            static constexpr std::uintptr_t EventReference = 0x28;
            static constexpr std::uintptr_t HostComponent = 0x60;
            static constexpr std::uintptr_t bIsBlendingOut = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NotifyStartTime", 0x0, "FloatProperty"},
            {"NotifyTotalDuration", 0x4, "FloatProperty"},
            {"NotifyActiveTime", 0x8, "FloatProperty"},
            {"CurrentWeight", 0xC, "FloatProperty"},
            {"DeltaTime", 0x10, "FloatProperty"},
            {"Animation", 0x18, "ObjectProperty"},
            {"NotifyInstance", 0x20, "ObjectProperty"},
            {"EventReference", 0x28, "StructProperty"},
            {"HostComponent", 0x60, "ObjectProperty"},
            {"bIsBlendingOut", 0x68, "BoolProperty"},
        }};
    };

    struct UAFOutputPropertyBinding
    {
        static constexpr std::string_view Name = "UAFOutputPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetVariable = 0x0;
            static constexpr std::uintptr_t SubPropertyPath = 0x30;
            static constexpr std::uintptr_t TargetType = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetVariable", 0x0, "StructProperty"},
            {"SubPropertyPath", 0x30, "StructProperty"},
            {"TargetType", 0x40, "EnumProperty"},
        }};
    };

    struct UAFOutputVariableReference
    {
        static constexpr std::string_view Name = "UAFOutputVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNextVariableReference";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Object = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Object", 0x8, "ObjectProperty"},
        }};
    };

    struct UAFPropertyBinding
    {
        static constexpr std::string_view Name = "UAFPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceVariable = 0x0;
            static constexpr std::uintptr_t SubPropertyPath = 0x30;
            static constexpr std::uintptr_t SourceFunction = 0x40;
            static constexpr std::uintptr_t SourceType = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceVariable", 0x0, "StructProperty"},
            {"SubPropertyPath", 0x30, "StructProperty"},
            {"SourceFunction", 0x40, "StructProperty"},
            {"SourceType", 0x58, "EnumProperty"},
        }};
    };

    struct UAFQuaternionLabelBinding
    {
        static constexpr std::string_view Name = "UAFQuaternionLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFRigVMAsset
    {
        static constexpr std::string_view Name = "UAFRigVMAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMHost";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtendedExecuteContext = 0x230;
            static constexpr std::uintptr_t RigVM = 0x490;
            static constexpr std::uintptr_t VariableDefaults = 0x498;
            static constexpr std::uintptr_t InputVariableDefaults = 0x4A8;
            static constexpr std::uintptr_t ReferencedInputVariableDefaults = 0x4B8;
            static constexpr std::uintptr_t OutputVariableDefaults = 0x4C8;
            static constexpr std::uintptr_t ReferencedOutputVariableDefaults = 0x4D8;
            static constexpr std::uintptr_t VariableScopes = 0x4E8;
            static constexpr std::uintptr_t CombinedPropertyBag = 0x508;
            static constexpr std::uintptr_t ReferencedVariableAssets = 0x518;
            static constexpr std::uintptr_t ReferencedVariableStructs = 0x528;
            static constexpr std::uintptr_t ReferencedVariableRigVMAssets = 0x538;
            static constexpr std::uintptr_t FunctionData = 0x548;
            static constexpr std::uintptr_t DefaultInjectionSite = 0x558;
            static constexpr std::uintptr_t Components = 0x588;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ExtendedExecuteContext", 0x230, "StructProperty"},
            {"RigVM", 0x490, "ObjectProperty"},
            {"VariableDefaults", 0x498, "StructProperty"},
            {"InputVariableDefaults", 0x4A8, "StructProperty"},
            {"ReferencedInputVariableDefaults", 0x4B8, "StructProperty"},
            {"OutputVariableDefaults", 0x4C8, "StructProperty"},
            {"ReferencedOutputVariableDefaults", 0x4D8, "StructProperty"},
            {"VariableScopes", 0x4E8, "MapProperty"},
            {"CombinedPropertyBag", 0x508, "StructProperty"},
            {"ReferencedVariableAssets", 0x518, "ArrayProperty"},
            {"ReferencedVariableStructs", 0x528, "ArrayProperty"},
            {"ReferencedVariableRigVMAssets", 0x538, "ArrayProperty"},
            {"FunctionData", 0x548, "ArrayProperty"},
            {"DefaultInjectionSite", 0x558, "StructProperty"},
            {"Components", 0x588, "ArrayProperty"},
        }};
    };

    struct UAFRigVMComponent
    {
        static constexpr std::string_view Name = "UAFRigVMComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFScriptComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceAssetEntry = 0x20;
            static constexpr std::uintptr_t ReferencedAssetEntryIndexByAsset = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceAssetEntry", 0x20, "StructProperty"},
            {"ReferencedAssetEntryIndexByAsset", 0x2C0, "MapProperty"},
        }};
    };

    struct UAFRigVMEntry
    {
        static constexpr std::string_view Name = "UAFRigVMEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VM = 0x0;
            static constexpr std::uintptr_t ExtendedExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VM", 0x0, "ObjectProperty"},
            {"ExtendedExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct UAFScriptComponent
    {
        static constexpr std::string_view Name = "UAFScriptComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFAssetInstanceComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFScriptContextData
    {
        static constexpr std::string_view Name = "UAFScriptContextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFSet
    {
        static constexpr std::string_view Name = "UAFSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t ParentGuid = 0x10;
            static constexpr std::uintptr_t SetName = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"ParentGuid", 0x10, "StructProperty"},
            {"SetName", 0x20, "NameProperty"},
        }};
    };

    struct UAFSetGuid
    {
        static constexpr std::string_view Name = "UAFSetGuid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Guid", 0x0, "StructProperty"},
        }};
    };

    struct UAFSetReference
    {
        static constexpr std::string_view Name = "UAFSetReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetCollection = 0x0;
            static constexpr std::uintptr_t SetGuid = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetCollection", 0x0, "WeakObjectProperty"},
            {"SetGuid", 0x8, "StructProperty"},
        }};
    };

    struct UAFSharedVariables
    {
        static constexpr std::string_view Name = "UAFSharedVariables";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFRigVMAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtendedExecuteContext = 0x230;
            static constexpr std::uintptr_t RigVM = 0x490;
            static constexpr std::uintptr_t VariableDefaults = 0x498;
            static constexpr std::uintptr_t InputVariableDefaults = 0x4A8;
            static constexpr std::uintptr_t ReferencedInputVariableDefaults = 0x4B8;
            static constexpr std::uintptr_t OutputVariableDefaults = 0x4C8;
            static constexpr std::uintptr_t ReferencedOutputVariableDefaults = 0x4D8;
            static constexpr std::uintptr_t VariableScopes = 0x4E8;
            static constexpr std::uintptr_t CombinedPropertyBag = 0x508;
            static constexpr std::uintptr_t ReferencedVariableAssets = 0x518;
            static constexpr std::uintptr_t ReferencedVariableStructs = 0x528;
            static constexpr std::uintptr_t ReferencedVariableRigVMAssets = 0x538;
            static constexpr std::uintptr_t FunctionData = 0x548;
            static constexpr std::uintptr_t DefaultInjectionSite = 0x558;
            static constexpr std::uintptr_t Components = 0x588;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ExtendedExecuteContext", 0x230, "StructProperty"},
            {"RigVM", 0x490, "ObjectProperty"},
            {"VariableDefaults", 0x498, "StructProperty"},
            {"InputVariableDefaults", 0x4A8, "StructProperty"},
            {"ReferencedInputVariableDefaults", 0x4B8, "StructProperty"},
            {"OutputVariableDefaults", 0x4C8, "StructProperty"},
            {"ReferencedOutputVariableDefaults", 0x4D8, "StructProperty"},
            {"VariableScopes", 0x4E8, "MapProperty"},
            {"CombinedPropertyBag", 0x508, "StructProperty"},
            {"ReferencedVariableAssets", 0x518, "ArrayProperty"},
            {"ReferencedVariableStructs", 0x528, "ArrayProperty"},
            {"ReferencedVariableRigVMAssets", 0x538, "ArrayProperty"},
            {"FunctionData", 0x548, "ArrayProperty"},
            {"DefaultInjectionSite", 0x558, "StructProperty"},
            {"Components", 0x588, "ArrayProperty"},
        }};
    };

    struct UAFSimpleSystemBuilder
    {
        static constexpr std::string_view Name = "UAFSimpleSystemBuilder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFSystemBuilder";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentStructs = 0x10;
            static constexpr std::uintptr_t VariablesStructs = 0x20;
            static constexpr std::uintptr_t ReferencedVariableRigVMAssets = 0x30;
            static constexpr std::uintptr_t ReferencedVariableAssets = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ComponentStructs", 0x10, "ArrayProperty"},
            {"VariablesStructs", 0x20, "ArrayProperty"},
            {"ReferencedVariableRigVMAssets", 0x30, "ArrayProperty"},
            {"ReferencedVariableAssets", 0x40, "ArrayProperty"},
        }};
    };

    struct UAFSkeletonBlendMask
    {
        static constexpr std::string_view Name = "UAFSkeletonBlendMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFBlendMask";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBlendProfileData = 0x28;
            static constexpr std::uintptr_t skeleton = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedBlendProfileData", 0x28, "StructProperty"},
            {"skeleton", 0x90, "ObjectProperty"},
        }};
    };

    struct UAFSystem
    {
        static constexpr std::string_view Name = "UAFSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFSharedVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t Dependencies = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Dependencies", 0x5A0, "ArrayProperty"},
        }};
    };

    struct UAFSystemBuilder
    {
        static constexpr std::string_view Name = "UAFSystemBuilder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFSystemFactoryAsset
    {
        static constexpr std::string_view Name = "UAFSystemFactoryAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFAssetData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFSystemFactoryAsset_System
    {
        static constexpr std::string_view Name = "UAFSystemFactoryAsset_System";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFSystemFactoryAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t System = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"System", 0x8, "ObjectProperty"},
        }};
    };

    struct UAFSystemFactoryParams
    {
        static constexpr std::string_view Name = "UAFSystemFactoryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Builder = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Builder", 0x0, "StructProperty"},
        }};
    };

    struct UAFSystemOutputComponent
    {
        static constexpr std::string_view Name = "UAFSystemOutputComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFModuleInstanceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0xF0;
            static constexpr std::uintptr_t MeshComponent = 0xF8;
            static constexpr std::uintptr_t RefPose = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mesh", 0xF0, "ObjectProperty"},
            {"MeshComponent", 0xF8, "ObjectProperty"},
            {"RefPose", 0x100, "StructProperty"},
        }};
    };

    struct UAFTransformLabelBinding
    {
        static constexpr std::string_view Name = "UAFTransformLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFValueBundle
    {
        static constexpr std::string_view Name = "UAFValueBundle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFVectorLabelBinding
    {
        static constexpr std::string_view Name = "UAFVectorLabelBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UAFLabelBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelReference = 0x0;
            static constexpr std::uintptr_t LabelRequiredType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LabelReference", 0x0, "StructProperty"},
            {"LabelRequiredType", 0x18, "ObjectProperty"},
        }};
    };

    struct UAFWeakSystemReference
    {
        static constexpr std::string_view Name = "UAFWeakSystemReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
