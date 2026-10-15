/**
 * decamp dumper generated SDK
 * Package: /Script/UAFControlRig
 */
#pragma once
#include "Basic.h"

// /Script/UAFControlRig.AnimNextControlRigTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextControlRigTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFControlRig.AnimNextControlRigTaskParams
// Kind: ScriptStruct; super: none
struct FAnimNextControlRigTaskParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFControlRig.ControlRigEventName
// Kind: ScriptStruct; super: none
struct FControlRigEventName
{
public:
    FName EventName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FControlRigEventName, EventName) == 0, "Offset mismatch for FControlRigEventName::EventName");

// /Script/UAFControlRig.ControlRigExposedProperty
// Kind: ScriptStruct; super: none
struct FControlRigExposedProperty
{
public:
    std::uint8_t ExposedPropertyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsVaraible; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FControlRigExposedProperty, ExposedPropertyName) == 0, "Offset mismatch for FControlRigExposedProperty::ExposedPropertyName");
static_assert(offsetof(FControlRigExposedProperty, bIsVaraible) == 4, "Offset mismatch for FControlRigExposedProperty::bIsVaraible");

// /Script/UAFControlRig.ControlRigTraitSharedData
// Kind: ScriptStruct; super: ControlRigTraitSharedDataBase
struct FControlRigTraitSharedData
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* ControlRigClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FControlRigTraitSharedData, ControlRigClass) == 168, "Offset mismatch for FControlRigTraitSharedData::ControlRigClass");

// /Script/UAFControlRig.ControlRigTraitSharedDataBase
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FControlRigTraitSharedDataBase
{
public:
    std::uint8_t Input[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* ControlRigSkeleton; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bResetInputPoseToInitial; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputPose; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputCurves; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRefPoseFromSkeleton; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferPoseInGlobalSpace; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    TArray<void*> EventQueue; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> InputMapping; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OutputMapping; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> ExposedPropertyVariableNames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExposedPropertyControlNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExposedPropertyControlTypes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExposedPropertyControlDefaultValues; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LatentProperties; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LatentPropertyMemoryLayouts; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlRigTraitSharedDataBase, Input) == 0, "Offset mismatch for FControlRigTraitSharedDataBase::Input");
static_assert(offsetof(FControlRigTraitSharedDataBase, ControlRigSkeleton) == 8, "Offset mismatch for FControlRigTraitSharedDataBase::ControlRigSkeleton");
static_assert(offsetof(FControlRigTraitSharedDataBase, bResetInputPoseToInitial) == 16, "Offset mismatch for FControlRigTraitSharedDataBase::bResetInputPoseToInitial");
static_assert(offsetof(FControlRigTraitSharedDataBase, bTransferInputPose) == 17, "Offset mismatch for FControlRigTraitSharedDataBase::bTransferInputPose");
static_assert(offsetof(FControlRigTraitSharedDataBase, bTransferInputCurves) == 18, "Offset mismatch for FControlRigTraitSharedDataBase::bTransferInputCurves");
static_assert(offsetof(FControlRigTraitSharedDataBase, bSetRefPoseFromSkeleton) == 19, "Offset mismatch for FControlRigTraitSharedDataBase::bSetRefPoseFromSkeleton");
static_assert(offsetof(FControlRigTraitSharedDataBase, bTransferPoseInGlobalSpace) == 20, "Offset mismatch for FControlRigTraitSharedDataBase::bTransferPoseInGlobalSpace");
static_assert(offsetof(FControlRigTraitSharedDataBase, EventQueue) == 24, "Offset mismatch for FControlRigTraitSharedDataBase::EventQueue");
static_assert(offsetof(FControlRigTraitSharedDataBase, InputMapping) == 40, "Offset mismatch for FControlRigTraitSharedDataBase::InputMapping");
static_assert(offsetof(FControlRigTraitSharedDataBase, OutputMapping) == 56, "Offset mismatch for FControlRigTraitSharedDataBase::OutputMapping");
static_assert(offsetof(FControlRigTraitSharedDataBase, ExposedPropertyVariableNames) == 72, "Offset mismatch for FControlRigTraitSharedDataBase::ExposedPropertyVariableNames");
static_assert(offsetof(FControlRigTraitSharedDataBase, ExposedPropertyControlNames) == 88, "Offset mismatch for FControlRigTraitSharedDataBase::ExposedPropertyControlNames");
static_assert(offsetof(FControlRigTraitSharedDataBase, ExposedPropertyControlTypes) == 104, "Offset mismatch for FControlRigTraitSharedDataBase::ExposedPropertyControlTypes");
static_assert(offsetof(FControlRigTraitSharedDataBase, ExposedPropertyControlDefaultValues) == 120, "Offset mismatch for FControlRigTraitSharedDataBase::ExposedPropertyControlDefaultValues");
static_assert(offsetof(FControlRigTraitSharedDataBase, LatentProperties) == 136, "Offset mismatch for FControlRigTraitSharedDataBase::LatentProperties");
static_assert(offsetof(FControlRigTraitSharedDataBase, LatentPropertyMemoryLayouts) == 152, "Offset mismatch for FControlRigTraitSharedDataBase::LatentPropertyMemoryLayouts");

// /Script/UAFControlRig.ControlRigTraitSharedData_v2
// Kind: ScriptStruct; super: ControlRigTraitSharedDataBase
struct FControlRigTraitSharedData_v2
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ControlRigAssetReference[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FControlRigTraitSharedData_v2, ControlRigAssetReference) == 168, "Offset mismatch for FControlRigTraitSharedData_v2::ControlRigAssetReference");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabelBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ResolveUAFLabelBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Found; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabelBase, Found) == 8, "Offset mismatch for FRigUnit_ResolveUAFLabelBase::Found");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_BoneKey
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_BoneKey
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_BoneKey, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_BoneKey::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_BoneKey, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_BoneKey::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_BoneTransform
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_BoneTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_BoneTransform, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_BoneTransform::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_BoneTransform, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_BoneTransform::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_Float
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_Float
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    float Value; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_Float, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_Float::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_Float, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_Float::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_Integer
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_Integer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::int32_t Value; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_Integer, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_Integer::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_Integer, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_Integer::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_Quaternion
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_Quaternion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_Quaternion, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_Quaternion::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_Quaternion, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_Quaternion::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_Transform
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_Transform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_Transform, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_Transform::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_Transform, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_Transform::Value");

// /Script/UAFControlRig.RigUnit_ResolveUAFLabel_Vector
// Kind: ScriptStruct; super: RigUnit_ResolveUAFLabelBase
struct FRigUnit_ResolveUAFLabel_Vector
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Label[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ResolveUAFLabel_Vector, Label) == 16, "Offset mismatch for FRigUnit_ResolveUAFLabel_Vector::Label");
static_assert(offsetof(FRigUnit_ResolveUAFLabel_Vector, Value) == 48, "Offset mismatch for FRigUnit_ResolveUAFLabel_Vector::Value");

// /Script/UAFControlRig.UAFControlRigAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFControlRigAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ControlRigReference[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    void* ControlRig; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* InputPoseDataSource; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFControlRigAnimOp, ControlRigReference) == 16, "Offset mismatch for FUAFControlRigAnimOp::ControlRigReference");
static_assert(offsetof(FUAFControlRigAnimOp, ControlRig) == 32, "Offset mismatch for FUAFControlRigAnimOp::ControlRig");
static_assert(offsetof(FUAFControlRigAnimOp, InputPoseDataSource) == 40, "Offset mismatch for FUAFControlRigAnimOp::InputPoseDataSource");

// /Script/UAFControlRig.UAFControlRigDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFControlRigDesc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlRigReference[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    TArray<void*> ExposedPropertyVariableNames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExposedPropertyControlNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExposedPropertyControlTypes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputBindings[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputDefaults[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFControlRigDesc, Input) == 16, "Offset mismatch for FUAFControlRigDesc::Input");
static_assert(offsetof(FUAFControlRigDesc, ControlRigReference) == 32, "Offset mismatch for FUAFControlRigDesc::ControlRigReference");
static_assert(offsetof(FUAFControlRigDesc, Settings) == 48, "Offset mismatch for FUAFControlRigDesc::Settings");
static_assert(offsetof(FUAFControlRigDesc, ExposedPropertyVariableNames) == 72, "Offset mismatch for FUAFControlRigDesc::ExposedPropertyVariableNames");
static_assert(offsetof(FUAFControlRigDesc, ExposedPropertyControlNames) == 88, "Offset mismatch for FUAFControlRigDesc::ExposedPropertyControlNames");
static_assert(offsetof(FUAFControlRigDesc, ExposedPropertyControlTypes) == 104, "Offset mismatch for FUAFControlRigDesc::ExposedPropertyControlTypes");
static_assert(offsetof(FUAFControlRigDesc, InputBindings) == 120, "Offset mismatch for FUAFControlRigDesc::InputBindings");
static_assert(offsetof(FUAFControlRigDesc, InputDefaults) == 136, "Offset mismatch for FUAFControlRigDesc::InputDefaults");

// /Script/UAFControlRig.UAFControlRigSettings
// Kind: ScriptStruct; super: none
struct FUAFControlRigSettings
{
public:
    std::uint8_t bResetInputPoseToInitial; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputPose; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputCurves; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRefPoseFromSkeleton; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferPoseInGlobalSpace; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> EventQueue; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFControlRigSettings, bResetInputPoseToInitial) == 0, "Offset mismatch for FUAFControlRigSettings::bResetInputPoseToInitial");
static_assert(offsetof(FUAFControlRigSettings, bTransferInputPose) == 1, "Offset mismatch for FUAFControlRigSettings::bTransferInputPose");
static_assert(offsetof(FUAFControlRigSettings, bTransferInputCurves) == 2, "Offset mismatch for FUAFControlRigSettings::bTransferInputCurves");
static_assert(offsetof(FUAFControlRigSettings, bSetRefPoseFromSkeleton) == 3, "Offset mismatch for FUAFControlRigSettings::bSetRefPoseFromSkeleton");
static_assert(offsetof(FUAFControlRigSettings, bTransferPoseInGlobalSpace) == 4, "Offset mismatch for FUAFControlRigSettings::bTransferPoseInGlobalSpace");
static_assert(offsetof(FUAFControlRigSettings, EventQueue) == 8, "Offset mismatch for FUAFControlRigSettings::EventQueue");

// /Script/UAFControlRig.UAFGraphFactoryAsset_ControlRig
// Kind: ScriptStruct; super: UAFGraphFactoryAsset
struct FUAFGraphFactoryAsset_ControlRig
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ControlRigAssetReference[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFGraphFactoryAsset_ControlRig, ControlRigAssetReference) == 8, "Offset mismatch for FUAFGraphFactoryAsset_ControlRig::ControlRigAssetReference");

// /Script/UAFControlRig.UAFSystemFactoryAsset_ControlRig
// Kind: ScriptStruct; super: UAFSystemFactoryAsset_AnimNode
struct FUAFSystemFactoryAsset_ControlRig
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t ControlRigReference[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSystemFactoryAsset_ControlRig, ControlRigReference) == 32, "Offset mismatch for FUAFSystemFactoryAsset_ControlRig::ControlRigReference");

// /Script/UAFControlRig.UAFInputPoseValueBundleDataSource
// Kind: Class; super: Object
class UUAFInputPoseValueBundleDataSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* LabelBinding; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUAFInputPoseValueBundleDataSource, LabelBinding) == 56, "Offset mismatch for UUAFInputPoseValueBundleDataSource::LabelBinding");
