/**
 * decamp dumper generated SDK
 * Package: /Script/UAF
 */
#pragma once
#include "Basic.h"

// /Script/UAF.AbstractSkeleton_AttributeBinding
// Kind: ScriptStruct; super: none
struct FAbstractSkeleton_AttributeBinding
{
public:
    std::uint8_t SetGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName AttributeName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t AttributeTypePath[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* AttributeType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAbstractSkeleton_AttributeBinding, SetGuid) == 0, "Offset mismatch for FAbstractSkeleton_AttributeBinding::SetGuid");
static_assert(offsetof(FAbstractSkeleton_AttributeBinding, AttributeName) == 16, "Offset mismatch for FAbstractSkeleton_AttributeBinding::AttributeName");
static_assert(offsetof(FAbstractSkeleton_AttributeBinding, AttributeTypePath) == 24, "Offset mismatch for FAbstractSkeleton_AttributeBinding::AttributeTypePath");
static_assert(offsetof(FAbstractSkeleton_AttributeBinding, AttributeType) == 48, "Offset mismatch for FAbstractSkeleton_AttributeBinding::AttributeType");

// /Script/UAF.AbstractSkeleton_BoneBinding
// Kind: ScriptStruct; super: none
struct FAbstractSkeleton_BoneBinding
{
public:
    std::uint8_t SetGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName BoneName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAbstractSkeleton_BoneBinding, SetGuid) == 0, "Offset mismatch for FAbstractSkeleton_BoneBinding::SetGuid");
static_assert(offsetof(FAbstractSkeleton_BoneBinding, BoneName) == 16, "Offset mismatch for FAbstractSkeleton_BoneBinding::BoneName");

// /Script/UAF.AbstractSkeleton_LabelBinding
// Kind: ScriptStruct; super: none
struct FAbstractSkeleton_LabelBinding
{
public:
    std::uint8_t Label[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FName AttributeName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAbstractSkeleton_LabelBinding, Label) == 0, "Offset mismatch for FAbstractSkeleton_LabelBinding::Label");
static_assert(offsetof(FAbstractSkeleton_LabelBinding, AttributeName) == 24, "Offset mismatch for FAbstractSkeleton_LabelBinding::AttributeName");

// /Script/UAF.AnimNextActorComponentReferenceComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FAnimNextActorComponentReferenceComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Component; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ComponentType; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FAnimNextActorComponentReferenceComponent, Component) == 16, "Offset mismatch for FAnimNextActorComponentReferenceComponent::Component");
static_assert(offsetof(FAnimNextActorComponentReferenceComponent, ComponentType) == 24, "Offset mismatch for FAnimNextActorComponentReferenceComponent::ComponentType");

// /Script/UAF.AnimNextActorLocatorFragment
// Kind: ScriptStruct; super: none
struct FAnimNextActorLocatorFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextActorTransformComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FAnimNextActorTransformComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextComponentLocatorFragment
// Kind: ScriptStruct; super: none
struct FAnimNextComponentLocatorFragment
{
public:
    std::uint8_t Path[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextComponentLocatorFragment, Path) == 0, "Offset mismatch for FAnimNextComponentLocatorFragment::Path");

// /Script/UAF.AnimNextEntryPoint
// Kind: ScriptStruct; super: AnimNextTag
struct FAnimNextEntryPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextExecuteContext
// Kind: ScriptStruct; super: RigVMExecuteContext
struct FAnimNextExecuteContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextFieldPath
// Kind: ScriptStruct; super: none
struct FAnimNextFieldPath
{
public:
    std::uint8_t FieldPath[0x1]; // 0x0000 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FAnimNextFieldPath, FieldPath) == 0, "Offset mismatch for FAnimNextFieldPath::FieldPath");

// /Script/UAF.AnimNextFunctionReference
// Kind: ScriptStruct; super: none
struct FAnimNextFunctionReference
{
public:
    std::uint8_t FunctionGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Object; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextFunctionReference, FunctionGuid) == 0, "Offset mismatch for FAnimNextFunctionReference::FunctionGuid");
static_assert(offsetof(FAnimNextFunctionReference, Object) == 16, "Offset mismatch for FAnimNextFunctionReference::Object");

// /Script/UAF.AnimNextGraphLODPose
// Kind: ScriptStruct; super: none
struct FAnimNextGraphLODPose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextGraphReferencePose
// Kind: ScriptStruct; super: none
struct FAnimNextGraphReferencePose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextGraphState
// Kind: ScriptStruct; super: none
struct FAnimNextGraphState
{
public:
    std::uint8_t State[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t PublicParameterStartIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNextGraphState, State) == 0, "Offset mismatch for FAnimNextGraphState::State");
static_assert(offsetof(FAnimNextGraphState, PublicParameterStartIndex) == 16, "Offset mismatch for FAnimNextGraphState::PublicParameterStartIndex");

// /Script/UAF.AnimNextLODPose
// Kind: ScriptStruct; super: none
struct FAnimNextLODPose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextModuleContextData
// Kind: ScriptStruct; super: UAFAssetContextData
struct FAnimNextModuleContextData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextModuleInstance
// Kind: ScriptStruct; super: UAFAssetInstance
struct FAnimNextModuleInstance
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* Object; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextModuleInstance, Object) == 136, "Offset mismatch for FAnimNextModuleInstance::Object");

// /Script/UAF.AnimNextNativeDataInterface
// Kind: ScriptStruct; super: none
struct FAnimNextNativeDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextObjectCastLocatorFragment
// Kind: ScriptStruct; super: none
struct FAnimNextObjectCastLocatorFragment
{
public:
    std::uint8_t Path[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextObjectCastLocatorFragment, Path) == 0, "Offset mismatch for FAnimNextObjectCastLocatorFragment::Path");

// /Script/UAF.AnimNextObjectFunctionLocatorFragment
// Kind: ScriptStruct; super: none
struct FAnimNextObjectFunctionLocatorFragment
{
public:
    std::uint8_t Path[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextObjectFunctionLocatorFragment, Path) == 0, "Offset mismatch for FAnimNextObjectFunctionLocatorFragment::Path");

// /Script/UAF.AnimNextObjectPropertyLocatorFragment
// Kind: ScriptStruct; super: none
struct FAnimNextObjectPropertyLocatorFragment
{
public:
    TArray<void*> Path; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextObjectPropertyLocatorFragment, Path) == 0, "Offset mismatch for FAnimNextObjectPropertyLocatorFragment::Path");

// /Script/UAF.AnimNextOverrideVariablesWorkData
// Kind: ScriptStruct; super: none
struct FAnimNextOverrideVariablesWorkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextParamType
// Kind: ScriptStruct; super: none
struct FAnimNextParamType
{
public:
    void* ValueTypeObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ValueType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ContainerType; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextParamType, ValueTypeObject) == 0, "Offset mismatch for FAnimNextParamType::ValueTypeObject");
static_assert(offsetof(FAnimNextParamType, ValueType) == 8, "Offset mismatch for FAnimNextParamType::ValueType");
static_assert(offsetof(FAnimNextParamType, ContainerType) == 9, "Offset mismatch for FAnimNextParamType::ContainerType");

// /Script/UAF.AnimNextReferencePose
// Kind: ScriptStruct; super: none
struct FAnimNextReferencePose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextRigVMFunctionData
// Kind: ScriptStruct; super: none
struct FAnimNextRigVMFunctionData
{
public:
    std::uint8_t FunctionGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EventName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsPublic; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    TArray<void*> ArgumentIndexAndDirections; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArgNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextRigVMFunctionData, FunctionGuid) == 0, "Offset mismatch for FAnimNextRigVMFunctionData::FunctionGuid");
static_assert(offsetof(FAnimNextRigVMFunctionData, Name) == 16, "Offset mismatch for FAnimNextRigVMFunctionData::Name");
static_assert(offsetof(FAnimNextRigVMFunctionData, EventName) == 20, "Offset mismatch for FAnimNextRigVMFunctionData::EventName");
static_assert(offsetof(FAnimNextRigVMFunctionData, bIsPublic) == 24, "Offset mismatch for FAnimNextRigVMFunctionData::bIsPublic");
static_assert(offsetof(FAnimNextRigVMFunctionData, ArgumentIndexAndDirections) == 32, "Offset mismatch for FAnimNextRigVMFunctionData::ArgumentIndexAndDirections");
static_assert(offsetof(FAnimNextRigVMFunctionData, ArgNames) == 48, "Offset mismatch for FAnimNextRigVMFunctionData::ArgNames");

// /Script/UAF.AnimNextScope
// Kind: ScriptStruct; super: AnimNextTag
struct FAnimNextScope
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextSkeletalMeshComponentReferenceComponent
// Kind: ScriptStruct; super: AnimNextActorComponentReferenceComponent
struct FAnimNextSkeletalMeshComponentReferenceComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Component; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ComponentType; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FAnimNextSkeletalMeshComponentReferenceComponent, Component) == 16, "Offset mismatch for FAnimNextSkeletalMeshComponentReferenceComponent::Component");
static_assert(offsetof(FAnimNextSkeletalMeshComponentReferenceComponent, ComponentType) == 24, "Offset mismatch for FAnimNextSkeletalMeshComponentReferenceComponent::ComponentType");

// /Script/UAF.AnimNextSoftFunctionPtr
// Kind: ScriptStruct; super: none
struct FAnimNextSoftFunctionPtr
{
public:
    TSoftObjectPtr<void> SoftObjectPtr; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FAnimNextSoftFunctionPtr, SoftObjectPtr) == 0, "Offset mismatch for FAnimNextSoftFunctionPtr::SoftObjectPtr");

// /Script/UAF.AnimNextTag
// Kind: ScriptStruct; super: none
struct FAnimNextTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextTraitEvent
// Kind: ScriptStruct; super: none
struct FAnimNextTraitEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextVariableOverrideInfo
// Kind: ScriptStruct; super: none
struct FAnimNextVariableOverrideInfo
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Type[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    FString DefaultValue; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAnimNextVariableOverrideInfo, Name) == 0, "Offset mismatch for FAnimNextVariableOverrideInfo::Name");
static_assert(offsetof(FAnimNextVariableOverrideInfo, Type) == 8, "Offset mismatch for FAnimNextVariableOverrideInfo::Type");
static_assert(offsetof(FAnimNextVariableOverrideInfo, DefaultValue) == 24, "Offset mismatch for FAnimNextVariableOverrideInfo::DefaultValue");

// /Script/UAF.AnimNextVariableOverridesCollection
// Kind: ScriptStruct; super: none
struct FAnimNextVariableOverridesCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextVariableReference
// Kind: ScriptStruct; super: none
struct FAnimNextVariableReference
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextVariableReference, Name) == 0, "Offset mismatch for FAnimNextVariableReference::Name");
static_assert(offsetof(FAnimNextVariableReference, Object) == 8, "Offset mismatch for FAnimNextVariableReference::Object");

// /Script/UAF.BindableBool
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableBool
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ConstantValue; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBindableBool, ConstantValue) == 8, "Offset mismatch for FBindableBool::ConstantValue");

// /Script/UAF.BindableByte
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableByte
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ConstantValue; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FBindableByte, ConstantValue) == 8, "Offset mismatch for FBindableByte::ConstantValue");

// /Script/UAF.BindableDouble
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableDouble
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    double ConstantValue; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBindableDouble, ConstantValue) == 8, "Offset mismatch for FBindableDouble::ConstantValue");

// /Script/UAF.BindableEnum
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableEnum
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* EnumClass; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ConstantValue; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBindableEnum, EnumClass) == 8, "Offset mismatch for FBindableEnum::EnumClass");
static_assert(offsetof(FBindableEnum, ConstantValue) == 16, "Offset mismatch for FBindableEnum::ConstantValue");

// /Script/UAF.BindableFloat
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ConstantValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBindableFloat, ConstantValue) == 8, "Offset mismatch for FBindableFloat::ConstantValue");

// /Script/UAF.BindableInt32
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableInt32
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t ConstantValue; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBindableInt32, ConstantValue) == 8, "Offset mismatch for FBindableInt32::ConstantValue");

// /Script/UAF.BindableInt64
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableInt64
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int64_t ConstantValue; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FBindableInt64, ConstantValue) == 8, "Offset mismatch for FBindableInt64::ConstantValue");

// /Script/UAF.BindableName
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName ConstantValue; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBindableName, ConstantValue) == 8, "Offset mismatch for FBindableName::ConstantValue");

// /Script/UAF.BindableObject
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableObject
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ObjectClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* ConstantValue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBindableObject, ObjectClass) == 8, "Offset mismatch for FBindableObject::ObjectClass");
static_assert(offsetof(FBindableObject, ConstantValue) == 16, "Offset mismatch for FBindableObject::ConstantValue");

// /Script/UAF.BindableQuat
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableQuat
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ConstantValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBindableQuat, ConstantValue) == 16, "Offset mismatch for FBindableQuat::ConstantValue");

// /Script/UAF.BindableStruct
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* StructClass; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConstantValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBindableStruct, StructClass) == 8, "Offset mismatch for FBindableStruct::StructClass");
static_assert(offsetof(FBindableStruct, ConstantValue) == 16, "Offset mismatch for FBindableStruct::ConstantValue");

// /Script/UAF.BindableTransform
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ConstantValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBindableTransform, ConstantValue) == 16, "Offset mismatch for FBindableTransform::ConstantValue");

// /Script/UAF.BindableValueBase
// Kind: ScriptStruct; super: none
struct FBindableValueBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.BindableVector
// Kind: ScriptStruct; super: BindableValueBase
struct FBindableVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ConstantValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBindableVector, ConstantValue) == 8, "Offset mismatch for FBindableVector::ConstantValue");

// /Script/UAF.BoneRemapping
// Kind: ScriptStruct; super: none
struct FBoneRemapping
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.BoneTransformAnimationAttribute
// Kind: ScriptStruct; super: TransformAnimationAttribute
struct FBoneTransformAnimationAttribute
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoneTransformAnimationAttribute, Value) == 0, "Offset mismatch for FBoneTransformAnimationAttribute::Value");

// /Script/UAF.RemapPoseData
// Kind: ScriptStruct; super: none
struct FRemapPoseData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RemappedBone
// Kind: ScriptStruct; super: none
struct FRemappedBone
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RetargetPoseData
// Kind: ScriptStruct; super: none
struct FRetargetPoseData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigUnit_AnimNextBase
// Kind: ScriptStruct; super: RigVMStruct
struct FRigUnit_AnimNextBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigUnit_AnimNextBeginExecution
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextBeginExecution
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextBeginExecution, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextBeginExecution::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextExecuteBindings_GT
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleEventBase
struct FRigUnit_AnimNextExecuteBindings_GT
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextExecuteBindings_GT, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextExecuteBindings_GT::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextExecuteBindings_WT
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleEventBase
struct FRigUnit_AnimNextExecuteBindings_WT
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextExecuteBindings_WT, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextExecuteBindings_WT::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextInitializeEvent
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleEventBase
struct FRigUnit_AnimNextInitializeEvent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextInitializeEvent, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextInitializeEvent::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextModuleAddDependencies
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleDependenciesBase
struct FRigUnit_AnimNextModuleAddDependencies
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextModuleAddDependencies, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextModuleAddDependencies::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextModuleDependenciesBase
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextModuleDependenciesBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextModuleDependenciesBase, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextModuleDependenciesBase::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextModuleEventBase
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextModuleEventBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextModuleEventBase, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextModuleEventBase::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextModuleRemoveDependencies
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleDependenciesBase
struct FRigUnit_AnimNextModuleRemoveDependencies
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextModuleRemoveDependencies, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextModuleRemoveDependencies::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextNotifyEventBase
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextNotifyEventBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextNotifyEventBase, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextNotifyEventBase::ExecuteContext");
static_assert(offsetof(FRigUnit_AnimNextNotifyEventBase, Payload) == 288, "Offset mismatch for FRigUnit_AnimNextNotifyEventBase::Payload");

// /Script/UAF.RigUnit_AnimNextParameterBase
// Kind: ScriptStruct; super: RigVMStruct
struct FRigUnit_AnimNextParameterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigUnit_AnimNextParameterBeginExecution
// Kind: ScriptStruct; super: RigUnit_AnimNextParameterBase
struct FRigUnit_AnimNextParameterBeginExecution
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    FName EntryPoint; // 0x0120 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_AnimNextParameterBeginExecution, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextParameterBeginExecution::ExecuteContext");
static_assert(offsetof(FRigUnit_AnimNextParameterBeginExecution, EntryPoint) == 288, "Offset mismatch for FRigUnit_AnimNextParameterBeginExecution::EntryPoint");

// /Script/UAF.RigUnit_AnimNextPostPhysicsEvent
// Kind: ScriptStruct; super: RigUnit_AnimNextUserEvent
struct FRigUnit_AnimNextPostPhysicsEvent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::int32_t SortOrder; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t TickGroup; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0129 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRigUnit_AnimNextPostPhysicsEvent, Name) == 288, "Offset mismatch for FRigUnit_AnimNextPostPhysicsEvent::Name");
static_assert(offsetof(FRigUnit_AnimNextPostPhysicsEvent, SortOrder) == 292, "Offset mismatch for FRigUnit_AnimNextPostPhysicsEvent::SortOrder");
static_assert(offsetof(FRigUnit_AnimNextPostPhysicsEvent, TickGroup) == 296, "Offset mismatch for FRigUnit_AnimNextPostPhysicsEvent::TickGroup");
static_assert(offsetof(FRigUnit_AnimNextPostPhysicsEvent, EndTickGroup) == 297, "Offset mismatch for FRigUnit_AnimNextPostPhysicsEvent::EndTickGroup");

// /Script/UAF.RigUnit_AnimNextPrePhysicsEvent
// Kind: ScriptStruct; super: RigUnit_AnimNextUserEvent
struct FRigUnit_AnimNextPrePhysicsEvent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::int32_t SortOrder; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t TickGroup; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0129 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRigUnit_AnimNextPrePhysicsEvent, Name) == 288, "Offset mismatch for FRigUnit_AnimNextPrePhysicsEvent::Name");
static_assert(offsetof(FRigUnit_AnimNextPrePhysicsEvent, SortOrder) == 292, "Offset mismatch for FRigUnit_AnimNextPrePhysicsEvent::SortOrder");
static_assert(offsetof(FRigUnit_AnimNextPrePhysicsEvent, TickGroup) == 296, "Offset mismatch for FRigUnit_AnimNextPrePhysicsEvent::TickGroup");
static_assert(offsetof(FRigUnit_AnimNextPrePhysicsEvent, EndTickGroup) == 297, "Offset mismatch for FRigUnit_AnimNextPrePhysicsEvent::EndTickGroup");

// /Script/UAF.RigUnit_AnimNextRemapPose
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextRemapPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0xE0]; // 0x0008 (Size: 0xE0, Type: StructProperty)
    std::uint8_t Result[0xE0]; // 0x00E8 (Size: 0xE0, Type: StructProperty)
    std::uint8_t TargetAnimGraphRefPose[0x8]; // 0x01C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextRemapPose, Pose) == 8, "Offset mismatch for FRigUnit_AnimNextRemapPose::Pose");
static_assert(offsetof(FRigUnit_AnimNextRemapPose, Result) == 232, "Offset mismatch for FRigUnit_AnimNextRemapPose::Result");
static_assert(offsetof(FRigUnit_AnimNextRemapPose, TargetAnimGraphRefPose) == 456, "Offset mismatch for FRigUnit_AnimNextRemapPose::TargetAnimGraphRefPose");
static_assert(offsetof(FRigUnit_AnimNextRemapPose, ExecuteContext) == 464, "Offset mismatch for FRigUnit_AnimNextRemapPose::ExecuteContext");

// /Script/UAF.RigUnit_AnimNextRetargetPose
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextRetargetPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0xE0]; // 0x0008 (Size: 0xE0, Type: StructProperty)
    std::uint8_t Result[0xE0]; // 0x00E8 (Size: 0xE0, Type: StructProperty)
    std::uint8_t TargetAnimGraphRefPose[0x8]; // 0x01C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExecuteContext[0x110]; // 0x01D0 (Size: 0x110, Type: StructProperty)
    std::uint8_t RetargetPoseData[0x1]; // 0x02E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextRetargetPose, Pose) == 8, "Offset mismatch for FRigUnit_AnimNextRetargetPose::Pose");
static_assert(offsetof(FRigUnit_AnimNextRetargetPose, Result) == 232, "Offset mismatch for FRigUnit_AnimNextRetargetPose::Result");
static_assert(offsetof(FRigUnit_AnimNextRetargetPose, TargetAnimGraphRefPose) == 456, "Offset mismatch for FRigUnit_AnimNextRetargetPose::TargetAnimGraphRefPose");
static_assert(offsetof(FRigUnit_AnimNextRetargetPose, ExecuteContext) == 464, "Offset mismatch for FRigUnit_AnimNextRetargetPose::ExecuteContext");
static_assert(offsetof(FRigUnit_AnimNextRetargetPose, RetargetPoseData) == 736, "Offset mismatch for FRigUnit_AnimNextRetargetPose::RetargetPoseData");

// /Script/UAF.RigUnit_AnimNextUserEvent
// Kind: ScriptStruct; super: RigUnit_AnimNextModuleEventBase
struct FRigUnit_AnimNextUserEvent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::int32_t SortOrder; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t TickGroup; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0129 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRigUnit_AnimNextUserEvent, Name) == 288, "Offset mismatch for FRigUnit_AnimNextUserEvent::Name");
static_assert(offsetof(FRigUnit_AnimNextUserEvent, SortOrder) == 292, "Offset mismatch for FRigUnit_AnimNextUserEvent::SortOrder");
static_assert(offsetof(FRigUnit_AnimNextUserEvent, TickGroup) == 296, "Offset mismatch for FRigUnit_AnimNextUserEvent::TickGroup");
static_assert(offsetof(FRigUnit_AnimNextUserEvent, EndTickGroup) == 297, "Offset mismatch for FRigUnit_AnimNextUserEvent::EndTickGroup");

// /Script/UAF.RigUnit_AnimNextWriteSkeletalMeshComponentPose
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextWriteSkeletalMeshComponentPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0xE0]; // 0x0008 (Size: 0xE0, Type: StructProperty)
    void* SkeletalMeshComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextWriteSkeletalMeshComponentPose, Pose) == 8, "Offset mismatch for FRigUnit_AnimNextWriteSkeletalMeshComponentPose::Pose");
static_assert(offsetof(FRigUnit_AnimNextWriteSkeletalMeshComponentPose, SkeletalMeshComponent) == 232, "Offset mismatch for FRigUnit_AnimNextWriteSkeletalMeshComponentPose::SkeletalMeshComponent");
static_assert(offsetof(FRigUnit_AnimNextWriteSkeletalMeshComponentPose, ExecuteContext) == 240, "Offset mismatch for FRigUnit_AnimNextWriteSkeletalMeshComponentPose::ExecuteContext");

// /Script/UAF.RigUnit_CopyModuleProxyVariables
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_CopyModuleProxyVariables
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CopyModuleProxyVariables, ExecuteContext) == 16, "Offset mismatch for FRigUnit_CopyModuleProxyVariables::ExecuteContext");

// /Script/UAF.RigUnit_GetActorTransform
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_GetActorTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetActorTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetActorTransform::Transform");

// /Script/UAF.RigUnit_GetMeshTransform
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_GetMeshTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetMeshTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetMeshTransform::Transform");

// /Script/UAF.RigUnit_GetSocketTransform
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_GetSocketTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SceneComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SocketName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransformSpace; // 0x0014 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0015
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetSocketTransform, SceneComponent) == 8, "Offset mismatch for FRigUnit_GetSocketTransform::SceneComponent");
static_assert(offsetof(FRigUnit_GetSocketTransform, SocketName) == 16, "Offset mismatch for FRigUnit_GetSocketTransform::SocketName");
static_assert(offsetof(FRigUnit_GetSocketTransform, TransformSpace) == 20, "Offset mismatch for FRigUnit_GetSocketTransform::TransformSpace");
static_assert(offsetof(FRigUnit_GetSocketTransform, Result) == 32, "Offset mismatch for FRigUnit_GetSocketTransform::Result");

// /Script/UAF.RigUnit_HandleNotify
// Kind: ScriptStruct; super: RigUnit_AnimNextNotifyEventBase
struct FRigUnit_HandleNotify
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HandleNotify, ExecuteContext) == 16, "Offset mismatch for FRigUnit_HandleNotify::ExecuteContext");
static_assert(offsetof(FRigUnit_HandleNotify, Payload) == 288, "Offset mismatch for FRigUnit_HandleNotify::Payload");

// /Script/UAF.RigUnit_HandleNotifyBegin
// Kind: ScriptStruct; super: RigUnit_AnimNextNotifyEventBase
struct FRigUnit_HandleNotifyBegin
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HandleNotifyBegin, ExecuteContext) == 16, "Offset mismatch for FRigUnit_HandleNotifyBegin::ExecuteContext");
static_assert(offsetof(FRigUnit_HandleNotifyBegin, Payload) == 288, "Offset mismatch for FRigUnit_HandleNotifyBegin::Payload");

// /Script/UAF.RigUnit_HandleNotifyEnd
// Kind: ScriptStruct; super: RigUnit_AnimNextNotifyEventBase
struct FRigUnit_HandleNotifyEnd
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HandleNotifyEnd, ExecuteContext) == 16, "Offset mismatch for FRigUnit_HandleNotifyEnd::ExecuteContext");
static_assert(offsetof(FRigUnit_HandleNotifyEnd, Payload) == 288, "Offset mismatch for FRigUnit_HandleNotifyEnd::Payload");

// /Script/UAF.RigUnit_HandleNotifyTick
// Kind: ScriptStruct; super: RigUnit_AnimNextNotifyEventBase
struct FRigUnit_HandleNotifyTick
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HandleNotifyTick, ExecuteContext) == 16, "Offset mismatch for FRigUnit_HandleNotifyTick::ExecuteContext");
static_assert(offsetof(FRigUnit_HandleNotifyTick, Payload) == 288, "Offset mismatch for FRigUnit_HandleNotifyTick::Payload");

// /Script/UAF.RigUnit_IsAnimBPDriven
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_IsAnimBPDriven
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MeshComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_IsAnimBPDriven, MeshComponent) == 8, "Offset mismatch for FRigUnit_IsAnimBPDriven::MeshComponent");
static_assert(offsetof(FRigUnit_IsAnimBPDriven, Result) == 16, "Offset mismatch for FRigUnit_IsAnimBPDriven::Result");

// /Script/UAF.RigUnit_IsRecentlyRendered
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_IsRecentlyRendered
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MeshComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_IsRecentlyRendered, MeshComponent) == 8, "Offset mismatch for FRigUnit_IsRecentlyRendered::MeshComponent");
static_assert(offsetof(FRigUnit_IsRecentlyRendered, Result) == 16, "Offset mismatch for FRigUnit_IsRecentlyRendered::Result");

// /Script/UAF.RigUnit_MakeReferencePoseFromSkeletalMeshComponent
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_MakeReferencePoseFromSkeletalMeshComponent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ReferencePose[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* SkeletalMeshComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t ExecuteContext[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MakeReferencePoseFromSkeletalMeshComponent, ReferencePose) == 8, "Offset mismatch for FRigUnit_MakeReferencePoseFromSkeletalMeshComponent::ReferencePose");
static_assert(offsetof(FRigUnit_MakeReferencePoseFromSkeletalMeshComponent, SkeletalMeshComponent) == 16, "Offset mismatch for FRigUnit_MakeReferencePoseFromSkeletalMeshComponent::SkeletalMeshComponent");
static_assert(offsetof(FRigUnit_MakeReferencePoseFromSkeletalMeshComponent, ExecuteContext) == 32, "Offset mismatch for FRigUnit_MakeReferencePoseFromSkeletalMeshComponent::ExecuteContext");

// /Script/UAF.RigUnit_OverrideVariables
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_OverrideVariables
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Overrides[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_OverrideVariables, Overrides) == 8, "Offset mismatch for FRigUnit_OverrideVariables::Overrides");
static_assert(offsetof(FRigUnit_OverrideVariables, WorkData) == 24, "Offset mismatch for FRigUnit_OverrideVariables::WorkData");

// /Script/UAF.RigUnit_ResolveUniversalObjectLocator
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_ResolveUniversalObjectLocator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Locator[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* Object; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigUnit_ResolveUniversalObjectLocator, Locator) == 8, "Offset mismatch for FRigUnit_ResolveUniversalObjectLocator::Locator");
static_assert(offsetof(FRigUnit_ResolveUniversalObjectLocator, Object) == 24, "Offset mismatch for FRigUnit_ResolveUniversalObjectLocator::Object");

// /Script/UAF.RigUnit_UAFGetIncomingPose
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFGetIncomingPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFGetIncomingPose, Value) == 8, "Offset mismatch for FRigUnit_UAFGetIncomingPose::Value");

// /Script/UAF.RigUnit_UAFWriteInstancedSkinnedMeshPose
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFWriteInstancedSkinnedMeshPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0xE0]; // 0x0008 (Size: 0xE0, Type: StructProperty)
    void* SkinnedMeshComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFWriteInstancedSkinnedMeshPose, Pose) == 8, "Offset mismatch for FRigUnit_UAFWriteInstancedSkinnedMeshPose::Pose");
static_assert(offsetof(FRigUnit_UAFWriteInstancedSkinnedMeshPose, SkinnedMeshComponent) == 232, "Offset mismatch for FRigUnit_UAFWriteInstancedSkinnedMeshPose::SkinnedMeshComponent");
static_assert(offsetof(FRigUnit_UAFWriteInstancedSkinnedMeshPose, ExecuteContext) == 240, "Offset mismatch for FRigUnit_UAFWriteInstancedSkinnedMeshPose::ExecuteContext");

// /Script/UAF.RigUnit_UAFWriteSystemOutput
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFWriteSystemOutput
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFWriteSystemOutput, Value) == 8, "Offset mismatch for FRigUnit_UAFWriteSystemOutput::Value");
static_assert(offsetof(FRigUnit_UAFWriteSystemOutput, ExecuteContext) == 32, "Offset mismatch for FRigUnit_UAFWriteSystemOutput::ExecuteContext");

// /Script/UAF.RigVMDispatch_CallHoistedAccessorFunctionBase
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_CallHoistedAccessorFunctionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_CallHoistedAccessorFunctionNative
// Kind: ScriptStruct; super: RigVMDispatch_CallHoistedAccessorFunctionBase
struct FRigVMDispatch_CallHoistedAccessorFunctionNative
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_CallHoistedAccessorFunctionScript
// Kind: ScriptStruct; super: RigVMDispatch_CallHoistedAccessorFunctionBase
struct FRigVMDispatch_CallHoistedAccessorFunctionScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_CallObjectAccessorFunctionBase
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_CallObjectAccessorFunctionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_CallObjectAccessorFunctionNative
// Kind: ScriptStruct; super: RigVMDispatch_CallObjectAccessorFunctionBase
struct FRigVMDispatch_CallObjectAccessorFunctionNative
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_CallObjectAccessorFunctionScript
// Kind: ScriptStruct; super: RigVMDispatch_CallObjectAccessorFunctionBase
struct FRigVMDispatch_CallObjectAccessorFunctionScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetLayerParameter
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_GetLayerParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetObjectProperty
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_GetObjectProperty
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetParameter
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_GetParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetScopedParameter
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_GetScopedParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFBoneTransformLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFBoneTransformLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFFloatLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFFloatLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFIntegerLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFIntegerLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFLabelValue
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_GetUAFLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFQuaternionLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFQuaternionLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFTransformLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFTransformLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_GetUAFVectorLabelValue
// Kind: ScriptStruct; super: RigVMDispatch_GetUAFLabelValue
struct FRigVMDispatch_GetUAFVectorLabelValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMDispatch_SetLayerParameter
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigVMDispatch_SetLayerParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.RigVMTrait_AnimNextPublicVariables
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_AnimNextPublicVariables
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* InternalAsset; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InternalVariableNames; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_AnimNextPublicVariables, InternalAsset) == 24, "Offset mismatch for FRigVMTrait_AnimNextPublicVariables::InternalAsset");
static_assert(offsetof(FRigVMTrait_AnimNextPublicVariables, InternalVariableNames) == 32, "Offset mismatch for FRigVMTrait_AnimNextPublicVariables::InternalVariableNames");

// /Script/UAF.RigVMTrait_ModuleEventDependency
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_ModuleEventDependency
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Ordering; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    FName EventName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigVMTrait_ModuleEventDependency, Ordering) == 24, "Offset mismatch for FRigVMTrait_ModuleEventDependency::Ordering");
static_assert(offsetof(FRigVMTrait_ModuleEventDependency, EventName) == 28, "Offset mismatch for FRigVMTrait_ModuleEventDependency::EventName");

// /Script/UAF.RigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction
// Kind: ScriptStruct; super: RigVMTrait_ModuleEventDependency
struct FRigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* ComponentClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FRigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction, ComponentClass) == 32, "Offset mismatch for FRigVMTrait_ModuleEventDependency_ActorComponentClassPrimaryTickFunction::ComponentClass");

// /Script/UAF.RigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction
// Kind: ScriptStruct; super: RigVMTrait_ModuleEventDependency
struct FRigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* Component; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction, Component) == 32, "Offset mismatch for FRigVMTrait_ModuleEventDependency_ActorComponentPrimaryTickFunction::Component");

// /Script/UAF.RigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction
// Kind: ScriptStruct; super: RigVMTrait_ModuleEventDependency
struct FRigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Ordering; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    FName EventName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction, Ordering) == 24, "Offset mismatch for FRigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction::Ordering");
static_assert(offsetof(FRigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction, EventName) == 28, "Offset mismatch for FRigVMTrait_ModuleEventDependency_ActorPrimaryTickFunction::EventName");

// /Script/UAF.RigVMTrait_OverrideVariables
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_OverrideVariables
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Overrides; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_OverrideVariables, Overrides) == 24, "Offset mismatch for FRigVMTrait_OverrideVariables::Overrides");

// /Script/UAF.RigVMTrait_OverrideVariablesForAsset
// Kind: ScriptStruct; super: RigVMTrait_OverrideVariables
struct FRigVMTrait_OverrideVariablesForAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Asset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigVMTrait_OverrideVariablesForAsset, Asset) == 40, "Offset mismatch for FRigVMTrait_OverrideVariablesForAsset::Asset");

// /Script/UAF.RigVMTrait_OverrideVariablesForStruct
// Kind: ScriptStruct; super: RigVMTrait_OverrideVariables
struct FRigVMTrait_OverrideVariablesForStruct
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Struct; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigVMTrait_OverrideVariablesForStruct, Struct) == 40, "Offset mismatch for FRigVMTrait_OverrideVariablesForStruct::Struct");

// /Script/UAF.RigVMTrait_UAFNotifyParameters
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_UAFNotifyParameters
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t NotifyClass[0x20]; // 0x0018 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> Parameters; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_UAFNotifyParameters, NotifyClass) == 24, "Offset mismatch for FRigVMTrait_UAFNotifyParameters::NotifyClass");
static_assert(offsetof(FRigVMTrait_UAFNotifyParameters, Parameters) == 56, "Offset mismatch for FRigVMTrait_UAFNotifyParameters::Parameters");

// /Script/UAF.UAFAbstractSkeletonBindingComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFAbstractSkeletonBindingComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* LabelBinding; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* SetBinding; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFAbstractSkeletonBindingComponent, LabelBinding) == 16, "Offset mismatch for FUAFAbstractSkeletonBindingComponent::LabelBinding");
static_assert(offsetof(FUAFAbstractSkeletonBindingComponent, SetBinding) == 24, "Offset mismatch for FUAFAbstractSkeletonBindingComponent::SetBinding");

// /Script/UAF.UAFAssetContextData
// Kind: ScriptStruct; super: UAFScriptContextData
struct FUAFAssetContextData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFAssetData
// Kind: ScriptStruct; super: none
struct FUAFAssetData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFAssetInstance
// Kind: ScriptStruct; super: none
struct FUAFAssetInstance
{
public:
    TArray<void*> Components; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Variables[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    void* Asset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ScriptStruct; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFAssetInstance, Components) == 0, "Offset mismatch for FUAFAssetInstance::Components");
static_assert(offsetof(FUAFAssetInstance, Variables) == 16, "Offset mismatch for FUAFAssetInstance::Variables");
static_assert(offsetof(FUAFAssetInstance, Asset) == 96, "Offset mismatch for FUAFAssetInstance::Asset");
static_assert(offsetof(FUAFAssetInstance, ScriptStruct) == 104, "Offset mismatch for FUAFAssetInstance::ScriptStruct");

// /Script/UAF.UAFAssetInstanceComponent
// Kind: ScriptStruct; super: none
struct FUAFAssetInstanceComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFBoneTransformLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFBoneTransformLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFBoneTransformLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFBoneTransformLabelBinding::LabelReference");
static_assert(offsetof(FUAFBoneTransformLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFBoneTransformLabelBinding::LabelRequiredType");

// /Script/UAF.UAFComponentInputDesc
// Kind: ScriptStruct; super: none
struct FUAFComponentInputDesc
{
public:
    std::uint8_t Component[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t Input[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFComponentInputDesc, Component) == 0, "Offset mismatch for FUAFComponentInputDesc::Component");
static_assert(offsetof(FUAFComponentInputDesc, Input) == 40, "Offset mismatch for FUAFComponentInputDesc::Input");

// /Script/UAF.UAFFloatLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFFloatLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFFloatLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFFloatLabelBinding::LabelReference");
static_assert(offsetof(FUAFFloatLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFFloatLabelBinding::LabelRequiredType");

// /Script/UAF.UAFGraphFactoryAsset
// Kind: ScriptStruct; super: UAFSystemFactoryAsset
struct FUAFGraphFactoryAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFIncomingPoseComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFIncomingPoseComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFInputVariableReference
// Kind: ScriptStruct; super: AnimNextVariableReference
struct FUAFInputVariableReference
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFInputVariableReference, Name) == 0, "Offset mismatch for FUAFInputVariableReference::Name");
static_assert(offsetof(FUAFInputVariableReference, Object) == 8, "Offset mismatch for FUAFInputVariableReference::Object");

// /Script/UAF.UAFInstanceVariableContainer
// Kind: ScriptStruct; super: none
struct FUAFInstanceVariableContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFInstanceVariableData
// Kind: ScriptStruct; super: none
struct FUAFInstanceVariableData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> AllSharedVariableContainersMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FUAFInstanceVariableData, AllSharedVariableContainersMap) == 48, "Offset mismatch for FUAFInstanceVariableData::AllSharedVariableContainersMap");

// /Script/UAF.UAFIntegerLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFIntegerLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFIntegerLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFIntegerLabelBinding::LabelReference");
static_assert(offsetof(FUAFIntegerLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFIntegerLabelBinding::LabelRequiredType");

// /Script/UAF.UAFLabel
// Kind: ScriptStruct; super: none
struct FUAFLabel
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Label; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t TypePath[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* TypeStruct; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFLabel, Guid) == 0, "Offset mismatch for FUAFLabel::Guid");
static_assert(offsetof(FUAFLabel, Label) == 16, "Offset mismatch for FUAFLabel::Label");
static_assert(offsetof(FUAFLabel, TypePath) == 24, "Offset mismatch for FUAFLabel::TypePath");
static_assert(offsetof(FUAFLabel, TypeStruct) == 48, "Offset mismatch for FUAFLabel::TypeStruct");

// /Script/UAF.UAFLabelBinding
// Kind: ScriptStruct; super: none
struct FUAFLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFLabelBinding::LabelReference");
static_assert(offsetof(FUAFLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFLabelBinding::LabelRequiredType");

// /Script/UAF.UAFLabelGuid
// Kind: ScriptStruct; super: none
struct FUAFLabelGuid
{
public:
    std::uint8_t Guid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFLabelGuid, Guid) == 0, "Offset mismatch for FUAFLabelGuid::Guid");

// /Script/UAF.UAFLabelReference
// Kind: ScriptStruct; super: none
struct FUAFLabelReference
{
public:
    void* LabelCollection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LabelGuid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFLabelReference, LabelCollection) == 0, "Offset mismatch for FUAFLabelReference::LabelCollection");
static_assert(offsetof(FUAFLabelReference, LabelGuid) == 8, "Offset mismatch for FUAFLabelReference::LabelGuid");

// /Script/UAF.UAFMeshTransformComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFMeshTransformComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MeshTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    void* WorldTransformDataSource; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFMeshTransformComponent, MeshTransform) == 16, "Offset mismatch for FUAFMeshTransformComponent::MeshTransform");
static_assert(offsetof(FUAFMeshTransformComponent, WorldTransformDataSource) == 112, "Offset mismatch for FUAFMeshTransformComponent::WorldTransformDataSource");

// /Script/UAF.UAFModuleInstanceComponent
// Kind: ScriptStruct; super: UAFAssetInstanceComponent
struct FUAFModuleInstanceComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFNamedSetWeight
// Kind: ScriptStruct; super: none
struct FUAFNamedSetWeight
{
public:
    std::uint8_t SetGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentSetGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsOverridden; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFNamedSetWeight, SetGuid) == 0, "Offset mismatch for FUAFNamedSetWeight::SetGuid");
static_assert(offsetof(FUAFNamedSetWeight, ParentSetGuid) == 16, "Offset mismatch for FUAFNamedSetWeight::ParentSetGuid");
static_assert(offsetof(FUAFNamedSetWeight, Weight) == 32, "Offset mismatch for FUAFNamedSetWeight::Weight");
static_assert(offsetof(FUAFNamedSetWeight, bIsOverridden) == 36, "Offset mismatch for FUAFNamedSetWeight::bIsOverridden");

// /Script/UAF.UAFNotifyDispatchEntry
// Kind: ScriptStruct; super: none
struct FUAFNotifyDispatchEntry
{
public:
    std::uint8_t Ref[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsBlendingOut; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x003D
    void* SourceAnim; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFNotifyDispatchEntry, Ref) == 0, "Offset mismatch for FUAFNotifyDispatchEntry::Ref");
static_assert(offsetof(FUAFNotifyDispatchEntry, Weight) == 56, "Offset mismatch for FUAFNotifyDispatchEntry::Weight");
static_assert(offsetof(FUAFNotifyDispatchEntry, bIsBlendingOut) == 60, "Offset mismatch for FUAFNotifyDispatchEntry::bIsBlendingOut");
static_assert(offsetof(FUAFNotifyDispatchEntry, SourceAnim) == 64, "Offset mismatch for FUAFNotifyDispatchEntry::SourceAnim");

// /Script/UAF.UAFNotifyDispatcherComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFNotifyDispatcherComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t NotifyQueue[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    TArray<void*> CurrentAnimNotifySpans; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviousAnimNotifySpans; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PredictedAnimNotifySpans; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PredictedAnimNotifyPoints; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* SkeletalMeshComponent; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0090
    TArray<void*> PendingModifierSpawns; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFNotifyDispatcherComponent, NotifyQueue) == 16, "Offset mismatch for FUAFNotifyDispatcherComponent::NotifyQueue");
static_assert(offsetof(FUAFNotifyDispatcherComponent, CurrentAnimNotifySpans) == 72, "Offset mismatch for FUAFNotifyDispatcherComponent::CurrentAnimNotifySpans");
static_assert(offsetof(FUAFNotifyDispatcherComponent, PreviousAnimNotifySpans) == 88, "Offset mismatch for FUAFNotifyDispatcherComponent::PreviousAnimNotifySpans");
static_assert(offsetof(FUAFNotifyDispatcherComponent, PredictedAnimNotifySpans) == 104, "Offset mismatch for FUAFNotifyDispatcherComponent::PredictedAnimNotifySpans");
static_assert(offsetof(FUAFNotifyDispatcherComponent, PredictedAnimNotifyPoints) == 120, "Offset mismatch for FUAFNotifyDispatcherComponent::PredictedAnimNotifyPoints");
static_assert(offsetof(FUAFNotifyDispatcherComponent, SkeletalMeshComponent) == 136, "Offset mismatch for FUAFNotifyDispatcherComponent::SkeletalMeshComponent");
static_assert(offsetof(FUAFNotifyDispatcherComponent, PendingModifierSpawns) == 168, "Offset mismatch for FUAFNotifyDispatcherComponent::PendingModifierSpawns");

// /Script/UAF.UAFNotifyModifierSpawnRequest
// Kind: ScriptStruct; super: none
struct FUAFNotifyModifierSpawnRequest
{
public:
    std::uint8_t SiteTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t NodeDesc[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpanIdentity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFNotifyModifierSpawnRequest, SiteTag) == 0, "Offset mismatch for FUAFNotifyModifierSpawnRequest::SiteTag");
static_assert(offsetof(FUAFNotifyModifierSpawnRequest, NodeDesc) == 8, "Offset mismatch for FUAFNotifyModifierSpawnRequest::NodeDesc");
static_assert(offsetof(FUAFNotifyModifierSpawnRequest, SpanIdentity) == 24, "Offset mismatch for FUAFNotifyModifierSpawnRequest::SpanIdentity");

// /Script/UAF.UAFNotifyParameterInfo
// Kind: ScriptStruct; super: none
struct FUAFNotifyParameterInfo
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Type[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFNotifyParameterInfo, Name) == 0, "Offset mismatch for FUAFNotifyParameterInfo::Name");
static_assert(offsetof(FUAFNotifyParameterInfo, Type) == 8, "Offset mismatch for FUAFNotifyParameterInfo::Type");

// /Script/UAF.UAFNotifyPayload
// Kind: ScriptStruct; super: none
struct FUAFNotifyPayload
{
public:
    float NotifyStartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NotifyTotalDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float NotifyActiveTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CurrentWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DeltaTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    void* Animation; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* NotifyInstance; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EventReference[0x38]; // 0x0028 (Size: 0x38, Type: StructProperty)
    void* HostComponent; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsBlendingOut; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFNotifyPayload, NotifyStartTime) == 0, "Offset mismatch for FUAFNotifyPayload::NotifyStartTime");
static_assert(offsetof(FUAFNotifyPayload, NotifyTotalDuration) == 4, "Offset mismatch for FUAFNotifyPayload::NotifyTotalDuration");
static_assert(offsetof(FUAFNotifyPayload, NotifyActiveTime) == 8, "Offset mismatch for FUAFNotifyPayload::NotifyActiveTime");
static_assert(offsetof(FUAFNotifyPayload, CurrentWeight) == 12, "Offset mismatch for FUAFNotifyPayload::CurrentWeight");
static_assert(offsetof(FUAFNotifyPayload, DeltaTime) == 16, "Offset mismatch for FUAFNotifyPayload::DeltaTime");
static_assert(offsetof(FUAFNotifyPayload, Animation) == 24, "Offset mismatch for FUAFNotifyPayload::Animation");
static_assert(offsetof(FUAFNotifyPayload, NotifyInstance) == 32, "Offset mismatch for FUAFNotifyPayload::NotifyInstance");
static_assert(offsetof(FUAFNotifyPayload, EventReference) == 40, "Offset mismatch for FUAFNotifyPayload::EventReference");
static_assert(offsetof(FUAFNotifyPayload, HostComponent) == 96, "Offset mismatch for FUAFNotifyPayload::HostComponent");
static_assert(offsetof(FUAFNotifyPayload, bIsBlendingOut) == 104, "Offset mismatch for FUAFNotifyPayload::bIsBlendingOut");

// /Script/UAF.UAFPropertyBinding
// Kind: ScriptStruct; super: none
struct FUAFPropertyBinding
{
public:
    std::uint8_t SourceVariable[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SubPropertyPath[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceFunction[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t SourceType; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFPropertyBinding, SourceVariable) == 0, "Offset mismatch for FUAFPropertyBinding::SourceVariable");
static_assert(offsetof(FUAFPropertyBinding, SubPropertyPath) == 48, "Offset mismatch for FUAFPropertyBinding::SubPropertyPath");
static_assert(offsetof(FUAFPropertyBinding, SourceFunction) == 64, "Offset mismatch for FUAFPropertyBinding::SourceFunction");
static_assert(offsetof(FUAFPropertyBinding, SourceType) == 88, "Offset mismatch for FUAFPropertyBinding::SourceType");

// /Script/UAF.UAFQuaternionLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFQuaternionLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFQuaternionLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFQuaternionLabelBinding::LabelReference");
static_assert(offsetof(FUAFQuaternionLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFQuaternionLabelBinding::LabelRequiredType");

// /Script/UAF.UAFRigVMComponent
// Kind: ScriptStruct; super: UAFScriptComponent
struct FUAFRigVMComponent
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t InstanceAssetEntry[0x280]; // 0x0020 (Size: 0x280, Type: StructProperty)
    TMap<void*, void*> ReferencedAssetEntryIndexByAsset; // 0x02A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FUAFRigVMComponent, InstanceAssetEntry) == 32, "Offset mismatch for FUAFRigVMComponent::InstanceAssetEntry");
static_assert(offsetof(FUAFRigVMComponent, ReferencedAssetEntryIndexByAsset) == 672, "Offset mismatch for FUAFRigVMComponent::ReferencedAssetEntryIndexByAsset");

// /Script/UAF.UAFRigVMEntry
// Kind: ScriptStruct; super: none
struct FUAFRigVMEntry
{
public:
    void* VM; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t ExtendedExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFRigVMEntry, VM) == 0, "Offset mismatch for FUAFRigVMEntry::VM");
static_assert(offsetof(FUAFRigVMEntry, ExtendedExecuteContext) == 16, "Offset mismatch for FUAFRigVMEntry::ExtendedExecuteContext");

// /Script/UAF.UAFScriptComponent
// Kind: ScriptStruct; super: UAFAssetInstanceComponent
struct FUAFScriptComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFScriptContextData
// Kind: ScriptStruct; super: none
struct FUAFScriptContextData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFSet
// Kind: ScriptStruct; super: none
struct FUAFSet
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FName SetName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUAFSet, Guid) == 0, "Offset mismatch for FUAFSet::Guid");
static_assert(offsetof(FUAFSet, ParentGuid) == 16, "Offset mismatch for FUAFSet::ParentGuid");
static_assert(offsetof(FUAFSet, SetName) == 32, "Offset mismatch for FUAFSet::SetName");

// /Script/UAF.UAFSetGuid
// Kind: ScriptStruct; super: none
struct FUAFSetGuid
{
public:
    std::uint8_t Guid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSetGuid, Guid) == 0, "Offset mismatch for FUAFSetGuid::Guid");

// /Script/UAF.UAFSetReference
// Kind: ScriptStruct; super: none
struct FUAFSetReference
{
public:
    TWeakObjectPtr<void> SetCollection; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SetGuid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSetReference, SetCollection) == 0, "Offset mismatch for FUAFSetReference::SetCollection");
static_assert(offsetof(FUAFSetReference, SetGuid) == 8, "Offset mismatch for FUAFSetReference::SetGuid");

// /Script/UAF.UAFSimpleSystemBuilder
// Kind: ScriptStruct; super: UAFSystemBuilder
struct FUAFSimpleSystemBuilder
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> ComponentStructs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariablesStructs; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableRigVMAssets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableAssets; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFSimpleSystemBuilder, ComponentStructs) == 16, "Offset mismatch for FUAFSimpleSystemBuilder::ComponentStructs");
static_assert(offsetof(FUAFSimpleSystemBuilder, VariablesStructs) == 32, "Offset mismatch for FUAFSimpleSystemBuilder::VariablesStructs");
static_assert(offsetof(FUAFSimpleSystemBuilder, ReferencedVariableRigVMAssets) == 48, "Offset mismatch for FUAFSimpleSystemBuilder::ReferencedVariableRigVMAssets");
static_assert(offsetof(FUAFSimpleSystemBuilder, ReferencedVariableAssets) == 64, "Offset mismatch for FUAFSimpleSystemBuilder::ReferencedVariableAssets");

// /Script/UAF.UAFSystemBuilder
// Kind: ScriptStruct; super: none
struct FUAFSystemBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFSystemFactoryAsset
// Kind: ScriptStruct; super: UAFAssetData
struct FUAFSystemFactoryAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFSystemFactoryAsset_System
// Kind: ScriptStruct; super: UAFSystemFactoryAsset
struct FUAFSystemFactoryAsset_System
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* System; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFSystemFactoryAsset_System, System) == 8, "Offset mismatch for FUAFSystemFactoryAsset_System::System");

// /Script/UAF.UAFSystemFactoryParams
// Kind: ScriptStruct; super: none
struct FUAFSystemFactoryParams
{
public:
    std::uint8_t Builder[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSystemFactoryParams, Builder) == 0, "Offset mismatch for FUAFSystemFactoryParams::Builder");

// /Script/UAF.UAFSystemOutputComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFSystemOutputComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* Mesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MeshComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RefPose[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSystemOutputComponent, Mesh) == 240, "Offset mismatch for FUAFSystemOutputComponent::Mesh");
static_assert(offsetof(FUAFSystemOutputComponent, MeshComponent) == 248, "Offset mismatch for FUAFSystemOutputComponent::MeshComponent");
static_assert(offsetof(FUAFSystemOutputComponent, RefPose) == 256, "Offset mismatch for FUAFSystemOutputComponent::RefPose");

// /Script/UAF.UAFTransformLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFTransformLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFTransformLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFTransformLabelBinding::LabelReference");
static_assert(offsetof(FUAFTransformLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFTransformLabelBinding::LabelRequiredType");

// /Script/UAF.UAFValueBundle
// Kind: ScriptStruct; super: none
struct FUAFValueBundle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFVectorLabelBinding
// Kind: ScriptStruct; super: UAFLabelBinding
struct FUAFVectorLabelBinding
{
public:
    std::uint8_t LabelReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* LabelRequiredType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFVectorLabelBinding, LabelReference) == 0, "Offset mismatch for FUAFVectorLabelBinding::LabelReference");
static_assert(offsetof(FUAFVectorLabelBinding, LabelRequiredType) == 24, "Offset mismatch for FUAFVectorLabelBinding::LabelRequiredType");

// /Script/UAF.UAFWeakSystemReference
// Kind: ScriptStruct; super: none
struct FUAFWeakSystemReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AbstractSkeletonLabelBinding
// Kind: Class; super: Object
class UAbstractSkeletonLabelBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LabelCollections; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* skeleton; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LabelBindings; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbstractSkeletonLabelBinding, LabelCollections) == 40, "Offset mismatch for UAbstractSkeletonLabelBinding::LabelCollections");
static_assert(offsetof(UAbstractSkeletonLabelBinding, skeleton) == 56, "Offset mismatch for UAbstractSkeletonLabelBinding::skeleton");
static_assert(offsetof(UAbstractSkeletonLabelBinding, LabelBindings) == 64, "Offset mismatch for UAbstractSkeletonLabelBinding::LabelBindings");

// /Script/UAF.AbstractSkeletonLabelCollection
// Kind: Class; super: Object
class UAbstractSkeletonLabelCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TypedLabels; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbstractSkeletonLabelCollection, TypedLabels) == 40, "Offset mismatch for UAbstractSkeletonLabelCollection::TypedLabels");

// /Script/UAF.AbstractSkeletonSetBinding
// Kind: Class; super: Object
class UAbstractSkeletonSetBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SetCollection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* skeleton; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneBindings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttributeBindings; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbstractSkeletonSetBinding, SetCollection) == 40, "Offset mismatch for UAbstractSkeletonSetBinding::SetCollection");
static_assert(offsetof(UAbstractSkeletonSetBinding, skeleton) == 48, "Offset mismatch for UAbstractSkeletonSetBinding::skeleton");
static_assert(offsetof(UAbstractSkeletonSetBinding, BoneBindings) == 56, "Offset mismatch for UAbstractSkeletonSetBinding::BoneBindings");
static_assert(offsetof(UAbstractSkeletonSetBinding, AttributeBindings) == 72, "Offset mismatch for UAbstractSkeletonSetBinding::AttributeBindings");

// /Script/UAF.AbstractSkeletonSetCollection
// Kind: Class; super: Object
class UAbstractSkeletonSetCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SetHierarchy; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sets; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbstractSkeletonSetCollection, SetHierarchy) == 40, "Offset mismatch for UAbstractSkeletonSetCollection::SetHierarchy");
static_assert(offsetof(UAbstractSkeletonSetCollection, Sets) == 56, "Offset mismatch for UAbstractSkeletonSetCollection::Sets");

// /Script/UAF.AnimNextAddDependencyMenuContext
// Kind: Class; super: Object
class UAnimNextAddDependencyMenuContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextConfig
// Kind: Class; super: Object
class UAnimNextConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextOverrideVariablesMenuContext
// Kind: Class; super: Object
class UAnimNextOverrideVariablesMenuContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.AnimNextWorldLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimNextWorldLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFAbstractBlendMask
// Kind: Class; super: UAFBlendMask
class UUAFAbstractBlendMask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SetCollection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SetWeights; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFAbstractBlendMask, SetCollection) == 40, "Offset mismatch for UUAFAbstractBlendMask::SetCollection");
static_assert(offsetof(UUAFAbstractBlendMask, SetWeights) == 48, "Offset mismatch for UUAFAbstractBlendMask::SetWeights");

// /Script/UAF.UAFAnimNotify
// Kind: Class; super: AnimNotify
class UUAFAnimNotify
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Handler; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFAnimNotify, Handler) == 56, "Offset mismatch for UUAFAnimNotify::Handler");

// /Script/UAF.UAFAnimNotifyState
// Kind: Class; super: AnimNotifyState
class UUAFAnimNotifyState
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Handler; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFAnimNotifyState, Handler) == 48, "Offset mismatch for UUAFAnimNotifyState::Handler");

// /Script/UAF.UAFAttributeSchema
// Kind: Class; super: Object
class UUAFAttributeSchema
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> ReferencedAttributeTypes; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFAttributeSchema, ReferencedAttributeTypes) == 160, "Offset mismatch for UUAFAttributeSchema::ReferencedAttributeTypes");

// /Script/UAF.UAFBlendMask
// Kind: Class; super: Object
class UUAFBlendMask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFBlendProfile
// Kind: Class; super: Object
class UUAFBlendProfile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Type; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CachedBlendProfileData[0x68]; // 0x0030 (Size: 0x68, Type: StructProperty)
    void* skeleton; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFBlendProfile, Type) == 40, "Offset mismatch for UUAFBlendProfile::Type");
static_assert(offsetof(UUAFBlendProfile, CachedBlendProfileData) == 48, "Offset mismatch for UUAFBlendProfile::CachedBlendProfileData");
static_assert(offsetof(UUAFBlendProfile, skeleton) == 152, "Offset mismatch for UUAFBlendProfile::skeleton");

// /Script/UAF.UAFComponent
// Kind: Class; super: ActorComponent
class UUAFComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t AssetData[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    TArray<void*> Inputs; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OutputComponent[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkeletalMeshComponentOutputMode; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* CachedSkeletalMeshComponent; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0120
    TMap<void*, void*> InputToComponentMappings; // 0x0140 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0150
    std::uint8_t InitMethod; // 0x0154 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetupCharacterMovementDependency; // 0x0155 (Size: 0x1, Type: BoolProperty)
    // 0x0155 BoolProperty bShowDebugDrawing (shared storage)
    std::uint8_t Pad_0004[0x2]; // 0x0156
    void* SetBinding; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* LabelBinding; // 0x0160 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFComponent, AssetData) == 200, "Offset mismatch for UUAFComponent::AssetData");
static_assert(offsetof(UUAFComponent, Inputs) == 216, "Offset mismatch for UUAFComponent::Inputs");
static_assert(offsetof(UUAFComponent, OutputComponent) == 232, "Offset mismatch for UUAFComponent::OutputComponent");
static_assert(offsetof(UUAFComponent, SkeletalMeshComponentOutputMode) == 272, "Offset mismatch for UUAFComponent::SkeletalMeshComponentOutputMode");
static_assert(offsetof(UUAFComponent, CachedSkeletalMeshComponent) == 280, "Offset mismatch for UUAFComponent::CachedSkeletalMeshComponent");
static_assert(offsetof(UUAFComponent, InputToComponentMappings) == 320, "Offset mismatch for UUAFComponent::InputToComponentMappings");
static_assert(offsetof(UUAFComponent, InitMethod) == 340, "Offset mismatch for UUAFComponent::InitMethod");
static_assert(offsetof(UUAFComponent, bSetupCharacterMovementDependency) == 341, "Offset mismatch for UUAFComponent::bSetupCharacterMovementDependency");
static_assert(offsetof(UUAFComponent, SetBinding) == 344, "Offset mismatch for UUAFComponent::SetBinding");
static_assert(offsetof(UUAFComponent, LabelBinding) == 352, "Offset mismatch for UUAFComponent::LabelBinding");

// /Script/UAF.UAFEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UUAFEngineSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAF.UAFNotifyHandler
// Kind: Class; super: UAFSharedVariables
class UUAFNotifyHandler
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t NotifyClass[0x20]; // 0x0570 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t FilterMode; // 0x0590 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0591
    float DebounceTime; // 0x0594 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StateSwitchBehavior; // 0x0598 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldPredictNotify; // 0x0599 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImmediateNotify; // 0x059A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUAFNotifyHandler, NotifyClass) == 1392, "Offset mismatch for UUAFNotifyHandler::NotifyClass");
static_assert(offsetof(UUAFNotifyHandler, FilterMode) == 1424, "Offset mismatch for UUAFNotifyHandler::FilterMode");
static_assert(offsetof(UUAFNotifyHandler, DebounceTime) == 1428, "Offset mismatch for UUAFNotifyHandler::DebounceTime");
static_assert(offsetof(UUAFNotifyHandler, StateSwitchBehavior) == 1432, "Offset mismatch for UUAFNotifyHandler::StateSwitchBehavior");
static_assert(offsetof(UUAFNotifyHandler, bShouldPredictNotify) == 1433, "Offset mismatch for UUAFNotifyHandler::bShouldPredictNotify");
static_assert(offsetof(UUAFNotifyHandler, bImmediateNotify) == 1434, "Offset mismatch for UUAFNotifyHandler::bImmediateNotify");

// /Script/UAF.UAFRigVMAsset
// Kind: Class; super: RigVMHost
class UUAFRigVMAsset
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t ExtendedExecuteContext[0x250]; // 0x0230 (Size: 0x250, Type: StructProperty)
    void* RigVM; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VariableDefaults[0x10]; // 0x0488 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputVariableDefaults[0x10]; // 0x0498 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReferencedInputVariableDefaults[0x10]; // 0x04A8 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> VariableScopes; // 0x04B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04C8
    std::uint8_t CombinedPropertyBag[0x10]; // 0x04D8 (Size: 0x10, Type: StructProperty)
    TArray<void*> ReferencedVariableAssets; // 0x04E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableStructs; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableRigVMAssets; // 0x0508 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FunctionData; // 0x0518 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultInjectionSite[0x30]; // 0x0528 (Size: 0x30, Type: StructProperty)
    TArray<void*> Components; // 0x0558 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFRigVMAsset, ExtendedExecuteContext) == 560, "Offset mismatch for UUAFRigVMAsset::ExtendedExecuteContext");
static_assert(offsetof(UUAFRigVMAsset, RigVM) == 1152, "Offset mismatch for UUAFRigVMAsset::RigVM");
static_assert(offsetof(UUAFRigVMAsset, VariableDefaults) == 1160, "Offset mismatch for UUAFRigVMAsset::VariableDefaults");
static_assert(offsetof(UUAFRigVMAsset, InputVariableDefaults) == 1176, "Offset mismatch for UUAFRigVMAsset::InputVariableDefaults");
static_assert(offsetof(UUAFRigVMAsset, ReferencedInputVariableDefaults) == 1192, "Offset mismatch for UUAFRigVMAsset::ReferencedInputVariableDefaults");
static_assert(offsetof(UUAFRigVMAsset, VariableScopes) == 1208, "Offset mismatch for UUAFRigVMAsset::VariableScopes");
static_assert(offsetof(UUAFRigVMAsset, CombinedPropertyBag) == 1240, "Offset mismatch for UUAFRigVMAsset::CombinedPropertyBag");
static_assert(offsetof(UUAFRigVMAsset, ReferencedVariableAssets) == 1256, "Offset mismatch for UUAFRigVMAsset::ReferencedVariableAssets");
static_assert(offsetof(UUAFRigVMAsset, ReferencedVariableStructs) == 1272, "Offset mismatch for UUAFRigVMAsset::ReferencedVariableStructs");
static_assert(offsetof(UUAFRigVMAsset, ReferencedVariableRigVMAssets) == 1288, "Offset mismatch for UUAFRigVMAsset::ReferencedVariableRigVMAssets");
static_assert(offsetof(UUAFRigVMAsset, FunctionData) == 1304, "Offset mismatch for UUAFRigVMAsset::FunctionData");
static_assert(offsetof(UUAFRigVMAsset, DefaultInjectionSite) == 1320, "Offset mismatch for UUAFRigVMAsset::DefaultInjectionSite");
static_assert(offsetof(UUAFRigVMAsset, Components) == 1368, "Offset mismatch for UUAFRigVMAsset::Components");

// /Script/UAF.UAFSharedVariables
// Kind: Class; super: UAFRigVMAsset
class UUAFSharedVariables
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t ExtendedExecuteContext[0x250]; // 0x0230 (Size: 0x250, Type: StructProperty)
    void* RigVM; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VariableDefaults[0x10]; // 0x0488 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputVariableDefaults[0x10]; // 0x0498 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReferencedInputVariableDefaults[0x10]; // 0x04A8 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> VariableScopes; // 0x04B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04C8
    std::uint8_t CombinedPropertyBag[0x10]; // 0x04D8 (Size: 0x10, Type: StructProperty)
    TArray<void*> ReferencedVariableAssets; // 0x04E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableStructs; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableRigVMAssets; // 0x0508 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FunctionData; // 0x0518 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultInjectionSite[0x30]; // 0x0528 (Size: 0x30, Type: StructProperty)
    TArray<void*> Components; // 0x0558 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFSharedVariables, ExtendedExecuteContext) == 560, "Offset mismatch for UUAFSharedVariables::ExtendedExecuteContext");
static_assert(offsetof(UUAFSharedVariables, RigVM) == 1152, "Offset mismatch for UUAFSharedVariables::RigVM");
static_assert(offsetof(UUAFSharedVariables, VariableDefaults) == 1160, "Offset mismatch for UUAFSharedVariables::VariableDefaults");
static_assert(offsetof(UUAFSharedVariables, InputVariableDefaults) == 1176, "Offset mismatch for UUAFSharedVariables::InputVariableDefaults");
static_assert(offsetof(UUAFSharedVariables, ReferencedInputVariableDefaults) == 1192, "Offset mismatch for UUAFSharedVariables::ReferencedInputVariableDefaults");
static_assert(offsetof(UUAFSharedVariables, VariableScopes) == 1208, "Offset mismatch for UUAFSharedVariables::VariableScopes");
static_assert(offsetof(UUAFSharedVariables, CombinedPropertyBag) == 1240, "Offset mismatch for UUAFSharedVariables::CombinedPropertyBag");
static_assert(offsetof(UUAFSharedVariables, ReferencedVariableAssets) == 1256, "Offset mismatch for UUAFSharedVariables::ReferencedVariableAssets");
static_assert(offsetof(UUAFSharedVariables, ReferencedVariableStructs) == 1272, "Offset mismatch for UUAFSharedVariables::ReferencedVariableStructs");
static_assert(offsetof(UUAFSharedVariables, ReferencedVariableRigVMAssets) == 1288, "Offset mismatch for UUAFSharedVariables::ReferencedVariableRigVMAssets");
static_assert(offsetof(UUAFSharedVariables, FunctionData) == 1304, "Offset mismatch for UUAFSharedVariables::FunctionData");
static_assert(offsetof(UUAFSharedVariables, DefaultInjectionSite) == 1320, "Offset mismatch for UUAFSharedVariables::DefaultInjectionSite");
static_assert(offsetof(UUAFSharedVariables, Components) == 1368, "Offset mismatch for UUAFSharedVariables::Components");

// /Script/UAF.UAFSkeletonBlendMask
// Kind: Class; super: UAFBlendMask
class UUAFSkeletonBlendMask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CachedBlendProfileData[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    void* skeleton; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFSkeletonBlendMask, CachedBlendProfileData) == 40, "Offset mismatch for UUAFSkeletonBlendMask::CachedBlendProfileData");
static_assert(offsetof(UUAFSkeletonBlendMask, skeleton) == 144, "Offset mismatch for UUAFSkeletonBlendMask::skeleton");

// /Script/UAF.UAFSystem
// Kind: Class; super: UAFSharedVariables
class UUAFSystem
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    TArray<void*> Dependencies; // 0x0570 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFSystem, Dependencies) == 1392, "Offset mismatch for UUAFSystem::Dependencies");
