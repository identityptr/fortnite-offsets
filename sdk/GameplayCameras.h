/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayCameras
 */
#pragma once
#include "Basic.h"

// /Script/GameplayCameras.BaseCameraObjectReference
// Kind: ScriptStruct; super: none
struct FBaseCameraObjectReference
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Parameters[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TArray<void*> ParameterMetaData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBaseCameraObjectReference, Parameters) == 8, "Offset mismatch for FBaseCameraObjectReference::Parameters");
static_assert(offsetof(FBaseCameraObjectReference, ParameterMetaData) == 40, "Offset mismatch for FBaseCameraObjectReference::ParameterMetaData");

// /Script/GameplayCameras.BlueprintCameraDirectorActivateParams
// Kind: ScriptStruct; super: none
struct FBlueprintCameraDirectorActivateParams
{
public:
    void* EvaluationContextOwner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBlueprintCameraDirectorActivateParams, EvaluationContextOwner) == 0, "Offset mismatch for FBlueprintCameraDirectorActivateParams::EvaluationContextOwner");

// /Script/GameplayCameras.BlueprintCameraDirectorDeactivateParams
// Kind: ScriptStruct; super: none
struct FBlueprintCameraDirectorDeactivateParams
{
public:
    void* EvaluationContextOwner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBlueprintCameraDirectorDeactivateParams, EvaluationContextOwner) == 0, "Offset mismatch for FBlueprintCameraDirectorDeactivateParams::EvaluationContextOwner");

// /Script/GameplayCameras.BlueprintCameraDirectorEvaluationParams
// Kind: ScriptStruct; super: none
struct FBlueprintCameraDirectorEvaluationParams
{
public:
    float DeltaTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* EvaluationContextOwner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBlueprintCameraDirectorEvaluationParams, DeltaTime) == 0, "Offset mismatch for FBlueprintCameraDirectorEvaluationParams::DeltaTime");
static_assert(offsetof(FBlueprintCameraDirectorEvaluationParams, EvaluationContextOwner) == 8, "Offset mismatch for FBlueprintCameraDirectorEvaluationParams::EvaluationContextOwner");

// /Script/GameplayCameras.BlueprintCameraEvaluationDataRef
// Kind: ScriptStruct; super: none
struct FBlueprintCameraEvaluationDataRef
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintCameraPose
// Kind: ScriptStruct; super: none
struct FBlueprintCameraPose
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double TargetDistance; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    float FieldOfView; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float FocalLength; // 0x003C (Size: 0x4, Type: FloatProperty)
    float FirstPersonFieldOfView; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FirstPersonScale; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float OrthographicWidth; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Aperture; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ShutterSpeed; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float FocusDistance; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float SensorWidth; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float SensorHeight; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SensorHorizontalOffset; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float SensorVerticalOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ISO; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float SqueezeFactor; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Overscan; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t DiaphragmBladeCount; // 0x0074 (Size: 0x4, Type: IntProperty)
    float NearClippingPlane; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float FarClippingPlane; // 0x007C (Size: 0x4, Type: FloatProperty)
    float PhysicalCameraBlendWeight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnableFirstPerson; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnablePhysicalCamera; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ConstrainAspectRatio; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideAspectRatioAxisConstraint; // 0x0087 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AspectRatioAxisConstraint; // 0x0088 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ProjectionMode; // 0x0089 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FBlueprintCameraPose, Location) == 0, "Offset mismatch for FBlueprintCameraPose::Location");
static_assert(offsetof(FBlueprintCameraPose, Rotation) == 24, "Offset mismatch for FBlueprintCameraPose::Rotation");
static_assert(offsetof(FBlueprintCameraPose, TargetDistance) == 48, "Offset mismatch for FBlueprintCameraPose::TargetDistance");
static_assert(offsetof(FBlueprintCameraPose, FieldOfView) == 56, "Offset mismatch for FBlueprintCameraPose::FieldOfView");
static_assert(offsetof(FBlueprintCameraPose, FocalLength) == 60, "Offset mismatch for FBlueprintCameraPose::FocalLength");
static_assert(offsetof(FBlueprintCameraPose, FirstPersonFieldOfView) == 64, "Offset mismatch for FBlueprintCameraPose::FirstPersonFieldOfView");
static_assert(offsetof(FBlueprintCameraPose, FirstPersonScale) == 68, "Offset mismatch for FBlueprintCameraPose::FirstPersonScale");
static_assert(offsetof(FBlueprintCameraPose, OrthographicWidth) == 72, "Offset mismatch for FBlueprintCameraPose::OrthographicWidth");
static_assert(offsetof(FBlueprintCameraPose, Aperture) == 76, "Offset mismatch for FBlueprintCameraPose::Aperture");
static_assert(offsetof(FBlueprintCameraPose, ShutterSpeed) == 80, "Offset mismatch for FBlueprintCameraPose::ShutterSpeed");
static_assert(offsetof(FBlueprintCameraPose, FocusDistance) == 84, "Offset mismatch for FBlueprintCameraPose::FocusDistance");
static_assert(offsetof(FBlueprintCameraPose, SensorWidth) == 88, "Offset mismatch for FBlueprintCameraPose::SensorWidth");
static_assert(offsetof(FBlueprintCameraPose, SensorHeight) == 92, "Offset mismatch for FBlueprintCameraPose::SensorHeight");
static_assert(offsetof(FBlueprintCameraPose, SensorHorizontalOffset) == 96, "Offset mismatch for FBlueprintCameraPose::SensorHorizontalOffset");
static_assert(offsetof(FBlueprintCameraPose, SensorVerticalOffset) == 100, "Offset mismatch for FBlueprintCameraPose::SensorVerticalOffset");
static_assert(offsetof(FBlueprintCameraPose, ISO) == 104, "Offset mismatch for FBlueprintCameraPose::ISO");
static_assert(offsetof(FBlueprintCameraPose, SqueezeFactor) == 108, "Offset mismatch for FBlueprintCameraPose::SqueezeFactor");
static_assert(offsetof(FBlueprintCameraPose, Overscan) == 112, "Offset mismatch for FBlueprintCameraPose::Overscan");
static_assert(offsetof(FBlueprintCameraPose, DiaphragmBladeCount) == 116, "Offset mismatch for FBlueprintCameraPose::DiaphragmBladeCount");
static_assert(offsetof(FBlueprintCameraPose, NearClippingPlane) == 120, "Offset mismatch for FBlueprintCameraPose::NearClippingPlane");
static_assert(offsetof(FBlueprintCameraPose, FarClippingPlane) == 124, "Offset mismatch for FBlueprintCameraPose::FarClippingPlane");
static_assert(offsetof(FBlueprintCameraPose, PhysicalCameraBlendWeight) == 128, "Offset mismatch for FBlueprintCameraPose::PhysicalCameraBlendWeight");
static_assert(offsetof(FBlueprintCameraPose, EnableFirstPerson) == 132, "Offset mismatch for FBlueprintCameraPose::EnableFirstPerson");
static_assert(offsetof(FBlueprintCameraPose, EnablePhysicalCamera) == 133, "Offset mismatch for FBlueprintCameraPose::EnablePhysicalCamera");
static_assert(offsetof(FBlueprintCameraPose, ConstrainAspectRatio) == 134, "Offset mismatch for FBlueprintCameraPose::ConstrainAspectRatio");
static_assert(offsetof(FBlueprintCameraPose, OverrideAspectRatioAxisConstraint) == 135, "Offset mismatch for FBlueprintCameraPose::OverrideAspectRatioAxisConstraint");
static_assert(offsetof(FBlueprintCameraPose, AspectRatioAxisConstraint) == 136, "Offset mismatch for FBlueprintCameraPose::AspectRatioAxisConstraint");
static_assert(offsetof(FBlueprintCameraPose, ProjectionMode) == 137, "Offset mismatch for FBlueprintCameraPose::ProjectionMode");

// /Script/GameplayCameras.BooleanCameraParameter
// Kind: ScriptStruct; super: none
struct FBooleanCameraParameter
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t VariableID[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBooleanCameraParameter, Value) == 0, "Offset mismatch for FBooleanCameraParameter::Value");
static_assert(offsetof(FBooleanCameraParameter, VariableID) == 4, "Offset mismatch for FBooleanCameraParameter::VariableID");
static_assert(offsetof(FBooleanCameraParameter, Variable) == 8, "Offset mismatch for FBooleanCameraParameter::Variable");

// /Script/GameplayCameras.BooleanCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FBooleanCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBooleanCameraRigParameterOverride, Value) == 56, "Offset mismatch for FBooleanCameraRigParameterOverride::Value");

// /Script/GameplayCameras.BooleanCameraVariableReference
// Kind: ScriptStruct; super: none
struct FBooleanCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBooleanCameraVariableReference, VariableID) == 0, "Offset mismatch for FBooleanCameraVariableReference::VariableID");
static_assert(offsetof(FBooleanCameraVariableReference, Variable) == 8, "Offset mismatch for FBooleanCameraVariableReference::Variable");

// /Script/GameplayCameras.CameraActionInstanceID
// Kind: ScriptStruct; super: none
struct FCameraActionInstanceID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FCameraActionInstanceID, Value) == 0, "Offset mismatch for FCameraActionInstanceID::Value");

// /Script/GameplayCameras.CameraActorAttachmentInfo
// Kind: ScriptStruct; super: none
struct FCameraActorAttachmentInfo
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SocketName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraActorAttachmentInfo, Actor) == 0, "Offset mismatch for FCameraActorAttachmentInfo::Actor");
static_assert(offsetof(FCameraActorAttachmentInfo, SocketName) == 8, "Offset mismatch for FCameraActorAttachmentInfo::SocketName");
static_assert(offsetof(FCameraActorAttachmentInfo, BoneName) == 12, "Offset mismatch for FCameraActorAttachmentInfo::BoneName");
static_assert(offsetof(FCameraActorAttachmentInfo, Weight) == 16, "Offset mismatch for FCameraActorAttachmentInfo::Weight");

// /Script/GameplayCameras.CameraActorTargetInfo
// Kind: ScriptStruct; super: none
struct FCameraActorTargetInfo
{
public:
    std::uint8_t Actor[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SocketName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetShape; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float TargetSize; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraActorTargetInfo, Actor) == 0, "Offset mismatch for FCameraActorTargetInfo::Actor");
static_assert(offsetof(FCameraActorTargetInfo, SocketName) == 32, "Offset mismatch for FCameraActorTargetInfo::SocketName");
static_assert(offsetof(FCameraActorTargetInfo, BoneName) == 36, "Offset mismatch for FCameraActorTargetInfo::BoneName");
static_assert(offsetof(FCameraActorTargetInfo, TargetShape) == 40, "Offset mismatch for FCameraActorTargetInfo::TargetShape");
static_assert(offsetof(FCameraActorTargetInfo, TargetSize) == 44, "Offset mismatch for FCameraActorTargetInfo::TargetSize");
static_assert(offsetof(FCameraActorTargetInfo, Weight) == 48, "Offset mismatch for FCameraActorTargetInfo::Weight");

// /Script/GameplayCameras.CameraAssetAllocationInfo
// Kind: ScriptStruct; super: none
struct FCameraAssetAllocationInfo
{
public:
    std::uint8_t VariableTableInfo[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ContextDataTableInfo[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraAssetAllocationInfo, VariableTableInfo) == 0, "Offset mismatch for FCameraAssetAllocationInfo::VariableTableInfo");
static_assert(offsetof(FCameraAssetAllocationInfo, ContextDataTableInfo) == 16, "Offset mismatch for FCameraAssetAllocationInfo::ContextDataTableInfo");

// /Script/GameplayCameras.CameraAssetInterface
// Kind: ScriptStruct; super: none
struct FCameraAssetInterface
{
public:
    TArray<void*> Parameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraAssetInterface, Parameters) == 0, "Offset mismatch for FCameraAssetInterface::Parameters");

// /Script/GameplayCameras.CameraAssetReference
// Kind: ScriptStruct; super: none
struct FCameraAssetReference
{
public:
    void* CameraAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Parameters[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TArray<void*> ParameterOverrideGuids; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraAssetReference, CameraAsset) == 0, "Offset mismatch for FCameraAssetReference::CameraAsset");
static_assert(offsetof(FCameraAssetReference, Parameters) == 8, "Offset mismatch for FCameraAssetReference::Parameters");
static_assert(offsetof(FCameraAssetReference, ParameterOverrideGuids) == 40, "Offset mismatch for FCameraAssetReference::ParameterOverrideGuids");

// /Script/GameplayCameras.CameraContextDataDefinition
// Kind: ScriptStruct; super: none
struct FCameraContextDataDefinition
{
public:
    std::uint8_t DataID[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t DataContainerType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    void* DataTypeObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoReset; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraContextDataDefinition, DataID) == 0, "Offset mismatch for FCameraContextDataDefinition::DataID");
static_assert(offsetof(FCameraContextDataDefinition, DataType) == 4, "Offset mismatch for FCameraContextDataDefinition::DataType");
static_assert(offsetof(FCameraContextDataDefinition, DataContainerType) == 8, "Offset mismatch for FCameraContextDataDefinition::DataContainerType");
static_assert(offsetof(FCameraContextDataDefinition, DataTypeObject) == 16, "Offset mismatch for FCameraContextDataDefinition::DataTypeObject");
static_assert(offsetof(FCameraContextDataDefinition, bAutoReset) == 24, "Offset mismatch for FCameraContextDataDefinition::bAutoReset");

// /Script/GameplayCameras.CameraContextDataID
// Kind: ScriptStruct; super: none
struct FCameraContextDataID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FCameraContextDataID, Value) == 0, "Offset mismatch for FCameraContextDataID::Value");

// /Script/GameplayCameras.CameraContextDataTableAllocationInfo
// Kind: ScriptStruct; super: none
struct FCameraContextDataTableAllocationInfo
{
public:
    TArray<void*> DataDefinitions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraContextDataTableAllocationInfo, DataDefinitions) == 0, "Offset mismatch for FCameraContextDataTableAllocationInfo::DataDefinitions");

// /Script/GameplayCameras.CameraDirectorStateTreeEvaluationData
// Kind: ScriptStruct; super: none
struct FCameraDirectorStateTreeEvaluationData
{
public:
    TArray<void*> ActiveCameraRigs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveCameraRigProxies; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraDirectorStateTreeEvaluationData, ActiveCameraRigs) == 0, "Offset mismatch for FCameraDirectorStateTreeEvaluationData::ActiveCameraRigs");
static_assert(offsetof(FCameraDirectorStateTreeEvaluationData, ActiveCameraRigProxies) == 16, "Offset mismatch for FCameraDirectorStateTreeEvaluationData::ActiveCameraRigProxies");

// /Script/GameplayCameras.CameraFramingZone
// Kind: ScriptStruct; super: none
struct FCameraFramingZone
{
public:
    double Left; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Top; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Right; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double Bottom; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FCameraFramingZone, Left) == 0, "Offset mismatch for FCameraFramingZone::Left");
static_assert(offsetof(FCameraFramingZone, Top) == 8, "Offset mismatch for FCameraFramingZone::Top");
static_assert(offsetof(FCameraFramingZone, Right) == 16, "Offset mismatch for FCameraFramingZone::Right");
static_assert(offsetof(FCameraFramingZone, Bottom) == 24, "Offset mismatch for FCameraFramingZone::Bottom");

// /Script/GameplayCameras.CameraFramingZoneParameter
// Kind: ScriptStruct; super: none
struct FCameraFramingZoneParameter
{
public:
    std::uint8_t Value[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t VariableID[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraFramingZoneParameter, Value) == 0, "Offset mismatch for FCameraFramingZoneParameter::Value");
static_assert(offsetof(FCameraFramingZoneParameter, VariableID) == 32, "Offset mismatch for FCameraFramingZoneParameter::VariableID");

// /Script/GameplayCameras.CameraNodeEvaluatorAllocationInfo
// Kind: ScriptStruct; super: none
struct FCameraNodeEvaluatorAllocationInfo
{
public:
    std::int16_t TotalSizeof; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t MaxAlignof; // 0x0002 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FCameraNodeEvaluatorAllocationInfo, TotalSizeof) == 0, "Offset mismatch for FCameraNodeEvaluatorAllocationInfo::TotalSizeof");
static_assert(offsetof(FCameraNodeEvaluatorAllocationInfo, MaxAlignof) == 2, "Offset mismatch for FCameraNodeEvaluatorAllocationInfo::MaxAlignof");

// /Script/GameplayCameras.CameraObjectAllocationInfo
// Kind: ScriptStruct; super: none
struct FCameraObjectAllocationInfo
{
public:
    std::uint8_t EvaluatorInfo[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t VariableTableInfo[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ContextDataTableInfo[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraObjectAllocationInfo, EvaluatorInfo) == 0, "Offset mismatch for FCameraObjectAllocationInfo::EvaluatorInfo");
static_assert(offsetof(FCameraObjectAllocationInfo, VariableTableInfo) == 8, "Offset mismatch for FCameraObjectAllocationInfo::VariableTableInfo");
static_assert(offsetof(FCameraObjectAllocationInfo, ContextDataTableInfo) == 24, "Offset mismatch for FCameraObjectAllocationInfo::ContextDataTableInfo");

// /Script/GameplayCameras.CameraObjectConnection
// Kind: ScriptStruct; super: none
struct FCameraObjectConnection
{
public:
    void* Source; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName SourcePropertyName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* Target; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FName TargetPropertyName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCameraObjectConnection, Source) == 0, "Offset mismatch for FCameraObjectConnection::Source");
static_assert(offsetof(FCameraObjectConnection, SourcePropertyName) == 8, "Offset mismatch for FCameraObjectConnection::SourcePropertyName");
static_assert(offsetof(FCameraObjectConnection, Target) == 16, "Offset mismatch for FCameraObjectConnection::Target");
static_assert(offsetof(FCameraObjectConnection, TargetPropertyName) == 24, "Offset mismatch for FCameraObjectConnection::TargetPropertyName");

// /Script/GameplayCameras.CameraObjectConnections
// Kind: ScriptStruct; super: none
struct FCameraObjectConnections
{
public:
    TArray<void*> Connections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraObjectConnections, Connections) == 0, "Offset mismatch for FCameraObjectConnections::Connections");

// /Script/GameplayCameras.CameraObjectInterface
// Kind: ScriptStruct; super: none
struct FCameraObjectInterface
{
public:
    TArray<void*> BlendableParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString DisplayName; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCameraObjectInterface, BlendableParameters) == 0, "Offset mismatch for FCameraObjectInterface::BlendableParameters");
static_assert(offsetof(FCameraObjectInterface, DataParameters) == 16, "Offset mismatch for FCameraObjectInterface::DataParameters");
static_assert(offsetof(FCameraObjectInterface, DisplayName) == 32, "Offset mismatch for FCameraObjectInterface::DisplayName");

// /Script/GameplayCameras.CameraObjectInterfaceParameterDefinition
// Kind: ScriptStruct; super: none
struct FCameraObjectInterfaceParameterDefinition
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParameterGuid[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParameterType; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsVisible; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0016
    std::uint8_t VariableID[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariableType; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    void* BlendableStructType; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DataID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataType; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t DataContainerType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0031
    void* DataTypeObject; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, ParameterName) == 0, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::ParameterName");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, ParameterGuid) == 4, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::ParameterGuid");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, ParameterType) == 20, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::ParameterType");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, bIsVisible) == 21, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::bIsVisible");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, VariableID) == 24, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::VariableID");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, VariableType) == 28, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::VariableType");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, BlendableStructType) == 32, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::BlendableStructType");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, DataID) == 40, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::DataID");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, DataType) == 44, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::DataType");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, DataContainerType) == 48, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::DataContainerType");
static_assert(offsetof(FCameraObjectInterfaceParameterDefinition, DataTypeObject) == 56, "Offset mismatch for FCameraObjectInterfaceParameterDefinition::DataTypeObject");

// /Script/GameplayCameras.CameraObjectInterfaceParameterMetaData
// Kind: ScriptStruct; super: none
struct FCameraObjectInterfaceParameterMetaData
{
public:
    std::uint8_t ParameterGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverrideVariableID[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t OverrideDataID[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsOverridden; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraObjectInterfaceParameterMetaData, ParameterGuid) == 0, "Offset mismatch for FCameraObjectInterfaceParameterMetaData::ParameterGuid");
static_assert(offsetof(FCameraObjectInterfaceParameterMetaData, OverrideVariableID) == 16, "Offset mismatch for FCameraObjectInterfaceParameterMetaData::OverrideVariableID");
static_assert(offsetof(FCameraObjectInterfaceParameterMetaData, OverrideDataID) == 20, "Offset mismatch for FCameraObjectInterfaceParameterMetaData::OverrideDataID");
static_assert(offsetof(FCameraObjectInterfaceParameterMetaData, bIsOverridden) == 24, "Offset mismatch for FCameraObjectInterfaceParameterMetaData::bIsOverridden");

// /Script/GameplayCameras.CameraParameterClamping
// Kind: ScriptStruct; super: none
struct FCameraParameterClamping
{
public:
    double MinValue; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double MaxValue; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bClampMin; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampMax; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraParameterClamping, MinValue) == 0, "Offset mismatch for FCameraParameterClamping::MinValue");
static_assert(offsetof(FCameraParameterClamping, MaxValue) == 8, "Offset mismatch for FCameraParameterClamping::MaxValue");
static_assert(offsetof(FCameraParameterClamping, bClampMin) == 16, "Offset mismatch for FCameraParameterClamping::bClampMin");
static_assert(offsetof(FCameraParameterClamping, bClampMax) == 17, "Offset mismatch for FCameraParameterClamping::bClampMax");

// /Script/GameplayCameras.CameraParameterNormalization
// Kind: ScriptStruct; super: none
struct FCameraParameterNormalization
{
public:
    double MaxValue; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bNormalize; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraParameterNormalization, MaxValue) == 0, "Offset mismatch for FCameraParameterNormalization::MaxValue");
static_assert(offsetof(FCameraParameterNormalization, bNormalize) == 8, "Offset mismatch for FCameraParameterNormalization::bNormalize");

// /Script/GameplayCameras.CameraPose
// Kind: ScriptStruct; super: none
struct FCameraPose
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double TargetDistance; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    float FieldOfView; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float FocalLength; // 0x003C (Size: 0x4, Type: FloatProperty)
    float FirstPersonFieldOfView; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FirstPersonScale; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float OrthographicWidth; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Aperture; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ShutterSpeed; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float FocusDistance; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float SensorWidth; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float SensorHeight; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SensorHorizontalOffset; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float SensorVerticalOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ISO; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float SqueezeFactor; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Overscan; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t DiaphragmBladeCount; // 0x0074 (Size: 0x4, Type: IntProperty)
    float NearClippingPlane; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float FarClippingPlane; // 0x007C (Size: 0x4, Type: FloatProperty)
    float PhysicalCameraBlendWeight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnableFirstPerson; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnablePhysicalCamera; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ConstrainAspectRatio; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideAspectRatioAxisConstraint; // 0x0087 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AspectRatioAxisConstraint; // 0x0088 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ProjectionMode; // 0x0089 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FCameraPose, Location) == 0, "Offset mismatch for FCameraPose::Location");
static_assert(offsetof(FCameraPose, Rotation) == 24, "Offset mismatch for FCameraPose::Rotation");
static_assert(offsetof(FCameraPose, TargetDistance) == 48, "Offset mismatch for FCameraPose::TargetDistance");
static_assert(offsetof(FCameraPose, FieldOfView) == 56, "Offset mismatch for FCameraPose::FieldOfView");
static_assert(offsetof(FCameraPose, FocalLength) == 60, "Offset mismatch for FCameraPose::FocalLength");
static_assert(offsetof(FCameraPose, FirstPersonFieldOfView) == 64, "Offset mismatch for FCameraPose::FirstPersonFieldOfView");
static_assert(offsetof(FCameraPose, FirstPersonScale) == 68, "Offset mismatch for FCameraPose::FirstPersonScale");
static_assert(offsetof(FCameraPose, OrthographicWidth) == 72, "Offset mismatch for FCameraPose::OrthographicWidth");
static_assert(offsetof(FCameraPose, Aperture) == 76, "Offset mismatch for FCameraPose::Aperture");
static_assert(offsetof(FCameraPose, ShutterSpeed) == 80, "Offset mismatch for FCameraPose::ShutterSpeed");
static_assert(offsetof(FCameraPose, FocusDistance) == 84, "Offset mismatch for FCameraPose::FocusDistance");
static_assert(offsetof(FCameraPose, SensorWidth) == 88, "Offset mismatch for FCameraPose::SensorWidth");
static_assert(offsetof(FCameraPose, SensorHeight) == 92, "Offset mismatch for FCameraPose::SensorHeight");
static_assert(offsetof(FCameraPose, SensorHorizontalOffset) == 96, "Offset mismatch for FCameraPose::SensorHorizontalOffset");
static_assert(offsetof(FCameraPose, SensorVerticalOffset) == 100, "Offset mismatch for FCameraPose::SensorVerticalOffset");
static_assert(offsetof(FCameraPose, ISO) == 104, "Offset mismatch for FCameraPose::ISO");
static_assert(offsetof(FCameraPose, SqueezeFactor) == 108, "Offset mismatch for FCameraPose::SqueezeFactor");
static_assert(offsetof(FCameraPose, Overscan) == 112, "Offset mismatch for FCameraPose::Overscan");
static_assert(offsetof(FCameraPose, DiaphragmBladeCount) == 116, "Offset mismatch for FCameraPose::DiaphragmBladeCount");
static_assert(offsetof(FCameraPose, NearClippingPlane) == 120, "Offset mismatch for FCameraPose::NearClippingPlane");
static_assert(offsetof(FCameraPose, FarClippingPlane) == 124, "Offset mismatch for FCameraPose::FarClippingPlane");
static_assert(offsetof(FCameraPose, PhysicalCameraBlendWeight) == 128, "Offset mismatch for FCameraPose::PhysicalCameraBlendWeight");
static_assert(offsetof(FCameraPose, EnableFirstPerson) == 132, "Offset mismatch for FCameraPose::EnableFirstPerson");
static_assert(offsetof(FCameraPose, EnablePhysicalCamera) == 133, "Offset mismatch for FCameraPose::EnablePhysicalCamera");
static_assert(offsetof(FCameraPose, ConstrainAspectRatio) == 134, "Offset mismatch for FCameraPose::ConstrainAspectRatio");
static_assert(offsetof(FCameraPose, OverrideAspectRatioAxisConstraint) == 135, "Offset mismatch for FCameraPose::OverrideAspectRatioAxisConstraint");
static_assert(offsetof(FCameraPose, AspectRatioAxisConstraint) == 136, "Offset mismatch for FCameraPose::AspectRatioAxisConstraint");
static_assert(offsetof(FCameraPose, ProjectionMode) == 137, "Offset mismatch for FCameraPose::ProjectionMode");

// /Script/GameplayCameras.CameraRigAssetReference
// Kind: ScriptStruct; super: BaseCameraObjectReference
struct FCameraRigAssetReference
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* CameraRig; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ParameterOverrideGuids; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ParameterOverrides[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraRigAssetReference, CameraRig) == 56, "Offset mismatch for FCameraRigAssetReference::CameraRig");
static_assert(offsetof(FCameraRigAssetReference, ParameterOverrideGuids) == 64, "Offset mismatch for FCameraRigAssetReference::ParameterOverrideGuids");
static_assert(offsetof(FCameraRigAssetReference, ParameterOverrides) == 80, "Offset mismatch for FCameraRigAssetReference::ParameterOverrides");

// /Script/GameplayCameras.CameraRigInputSlotParameters
// Kind: ScriptStruct; super: none
struct FCameraRigInputSlotParameters
{
public:
    std::uint8_t bIsAccumulated; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreBlended; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraRigInputSlotParameters, bIsAccumulated) == 0, "Offset mismatch for FCameraRigInputSlotParameters::bIsAccumulated");
static_assert(offsetof(FCameraRigInputSlotParameters, bIsPreBlended) == 1, "Offset mismatch for FCameraRigInputSlotParameters::bIsPreBlended");

// /Script/GameplayCameras.CameraRigInstanceID
// Kind: ScriptStruct; super: none
struct FCameraRigInstanceID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Layer; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCameraRigInstanceID, Value) == 0, "Offset mismatch for FCameraRigInstanceID::Value");
static_assert(offsetof(FCameraRigInstanceID, Layer) == 4, "Offset mismatch for FCameraRigInstanceID::Layer");

// /Script/GameplayCameras.CameraRigParameterOverrideBase
// Kind: ScriptStruct; super: none
struct FCameraRigParameterOverrideBase
{
public:
    std::uint8_t InterfaceParameterGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrivateVariableGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString InterfaceParameterName; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t bInvalid; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraRigParameterOverrideBase, InterfaceParameterGuid) == 0, "Offset mismatch for FCameraRigParameterOverrideBase::InterfaceParameterGuid");
static_assert(offsetof(FCameraRigParameterOverrideBase, PrivateVariableGuid) == 16, "Offset mismatch for FCameraRigParameterOverrideBase::PrivateVariableGuid");
static_assert(offsetof(FCameraRigParameterOverrideBase, InterfaceParameterName) == 32, "Offset mismatch for FCameraRigParameterOverrideBase::InterfaceParameterName");
static_assert(offsetof(FCameraRigParameterOverrideBase, bInvalid) == 48, "Offset mismatch for FCameraRigParameterOverrideBase::bInvalid");

// /Script/GameplayCameras.CameraRigParameterOverrides
// Kind: ScriptStruct; super: none
struct FCameraRigParameterOverrides
{
public:
    TArray<void*> BooleanOverrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Integer32Overrides; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatOverrides; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoubleOverrides; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2fOverrides; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2dOverrides; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3fOverrides; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector3dOverrides; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector4fOverrides; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector4dOverrides; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Rotator3fOverrides; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Rotator3dOverrides; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transform3fOverrides; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transform3dOverrides; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraRigParameterOverrides, BooleanOverrides) == 0, "Offset mismatch for FCameraRigParameterOverrides::BooleanOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Integer32Overrides) == 16, "Offset mismatch for FCameraRigParameterOverrides::Integer32Overrides");
static_assert(offsetof(FCameraRigParameterOverrides, FloatOverrides) == 32, "Offset mismatch for FCameraRigParameterOverrides::FloatOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, DoubleOverrides) == 48, "Offset mismatch for FCameraRigParameterOverrides::DoubleOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector2fOverrides) == 64, "Offset mismatch for FCameraRigParameterOverrides::Vector2fOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector2dOverrides) == 80, "Offset mismatch for FCameraRigParameterOverrides::Vector2dOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector3fOverrides) == 96, "Offset mismatch for FCameraRigParameterOverrides::Vector3fOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector3dOverrides) == 112, "Offset mismatch for FCameraRigParameterOverrides::Vector3dOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector4fOverrides) == 128, "Offset mismatch for FCameraRigParameterOverrides::Vector4fOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Vector4dOverrides) == 144, "Offset mismatch for FCameraRigParameterOverrides::Vector4dOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Rotator3fOverrides) == 160, "Offset mismatch for FCameraRigParameterOverrides::Rotator3fOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Rotator3dOverrides) == 176, "Offset mismatch for FCameraRigParameterOverrides::Rotator3dOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Transform3fOverrides) == 192, "Offset mismatch for FCameraRigParameterOverrides::Transform3fOverrides");
static_assert(offsetof(FCameraRigParameterOverrides, Transform3dOverrides) == 208, "Offset mismatch for FCameraRigParameterOverrides::Transform3dOverrides");

// /Script/GameplayCameras.CameraRigProxyRedirectTable
// Kind: ScriptStruct; super: none
struct FCameraRigProxyRedirectTable
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraRigProxyRedirectTable, Entries) == 0, "Offset mismatch for FCameraRigProxyRedirectTable::Entries");

// /Script/GameplayCameras.CameraRigProxyRedirectTableEntry
// Kind: ScriptStruct; super: none
struct FCameraRigProxyRedirectTableEntry
{
public:
    void* CameraRigProxy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CameraRig; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCameraRigProxyRedirectTableEntry, CameraRigProxy) == 0, "Offset mismatch for FCameraRigProxyRedirectTableEntry::CameraRigProxy");
static_assert(offsetof(FCameraRigProxyRedirectTableEntry, CameraRig) == 8, "Offset mismatch for FCameraRigProxyRedirectTableEntry::CameraRig");

// /Script/GameplayCameras.CameraRotatorCurve
// Kind: ScriptStruct; super: none
struct FCameraRotatorCurve
{
public:
    std::uint8_t Curves[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraRotatorCurve, Curves) == 0, "Offset mismatch for FCameraRotatorCurve::Curves");

// /Script/GameplayCameras.CameraShakeAssetReference
// Kind: ScriptStruct; super: BaseCameraObjectReference
struct FCameraShakeAssetReference
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* CameraShake; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCameraShakeAssetReference, CameraShake) == 56, "Offset mismatch for FCameraShakeAssetReference::CameraShake");

// /Script/GameplayCameras.CameraShakeInstanceID
// Kind: ScriptStruct; super: none
struct FCameraShakeInstanceID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FCameraShakeInstanceID, Value) == 0, "Offset mismatch for FCameraShakeInstanceID::Value");

// /Script/GameplayCameras.CameraSingleCurve
// Kind: ScriptStruct; super: none
struct FCameraSingleCurve
{
public:
    std::uint8_t Curve[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraSingleCurve, Curve) == 0, "Offset mismatch for FCameraSingleCurve::Curve");

// /Script/GameplayCameras.CameraVariableDefinition
// Kind: ScriptStruct; super: none
struct FCameraVariableDefinition
{
public:
    std::uint8_t VariableID[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariableType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* BlendableStructType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsPrivate; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInput; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoReset; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCameraVariableDefinition, VariableID) == 0, "Offset mismatch for FCameraVariableDefinition::VariableID");
static_assert(offsetof(FCameraVariableDefinition, VariableType) == 4, "Offset mismatch for FCameraVariableDefinition::VariableType");
static_assert(offsetof(FCameraVariableDefinition, BlendableStructType) == 8, "Offset mismatch for FCameraVariableDefinition::BlendableStructType");
static_assert(offsetof(FCameraVariableDefinition, bIsPrivate) == 16, "Offset mismatch for FCameraVariableDefinition::bIsPrivate");
static_assert(offsetof(FCameraVariableDefinition, bIsInput) == 17, "Offset mismatch for FCameraVariableDefinition::bIsInput");
static_assert(offsetof(FCameraVariableDefinition, bAutoReset) == 18, "Offset mismatch for FCameraVariableDefinition::bAutoReset");

// /Script/GameplayCameras.CameraVariableID
// Kind: ScriptStruct; super: none
struct FCameraVariableID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FCameraVariableID, Value) == 0, "Offset mismatch for FCameraVariableID::Value");

// /Script/GameplayCameras.CameraVariableSetterHandle
// Kind: ScriptStruct; super: none
struct FCameraVariableSetterHandle
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t SerialNumber; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FCameraVariableSetterHandle, Value) == 0, "Offset mismatch for FCameraVariableSetterHandle::Value");
static_assert(offsetof(FCameraVariableSetterHandle, SerialNumber) == 4, "Offset mismatch for FCameraVariableSetterHandle::SerialNumber");

// /Script/GameplayCameras.CameraVariableTableAllocationInfo
// Kind: ScriptStruct; super: none
struct FCameraVariableTableAllocationInfo
{
public:
    TArray<void*> VariableDefinitions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCameraVariableTableAllocationInfo, VariableDefinitions) == 0, "Offset mismatch for FCameraVariableTableAllocationInfo::VariableDefinitions");

// /Script/GameplayCameras.CameraVectorCurve
// Kind: ScriptStruct; super: none
struct FCameraVectorCurve
{
public:
    std::uint8_t Curves[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraVectorCurve, Curves) == 0, "Offset mismatch for FCameraVectorCurve::Curves");

// /Script/GameplayCameras.CustomCameraNodeBlendableParameter
// Kind: ScriptStruct; super: none
struct FCustomCameraNodeBlendableParameter
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t VariableType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* BlendableStructType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverrideVariableID[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    void* OverrideVariable; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCustomCameraNodeBlendableParameter, ParameterName) == 0, "Offset mismatch for FCustomCameraNodeBlendableParameter::ParameterName");
static_assert(offsetof(FCustomCameraNodeBlendableParameter, VariableType) == 4, "Offset mismatch for FCustomCameraNodeBlendableParameter::VariableType");
static_assert(offsetof(FCustomCameraNodeBlendableParameter, BlendableStructType) == 8, "Offset mismatch for FCustomCameraNodeBlendableParameter::BlendableStructType");
static_assert(offsetof(FCustomCameraNodeBlendableParameter, OverrideVariableID) == 16, "Offset mismatch for FCustomCameraNodeBlendableParameter::OverrideVariableID");
static_assert(offsetof(FCustomCameraNodeBlendableParameter, OverrideVariable) == 24, "Offset mismatch for FCustomCameraNodeBlendableParameter::OverrideVariable");

// /Script/GameplayCameras.CustomCameraNodeDataParameter
// Kind: ScriptStruct; super: none
struct FCustomCameraNodeDataParameter
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t DataType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t DataContainerType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    void* DataTypeObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverrideDataID[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomCameraNodeDataParameter, ParameterName) == 0, "Offset mismatch for FCustomCameraNodeDataParameter::ParameterName");
static_assert(offsetof(FCustomCameraNodeDataParameter, DataType) == 4, "Offset mismatch for FCustomCameraNodeDataParameter::DataType");
static_assert(offsetof(FCustomCameraNodeDataParameter, DataContainerType) == 8, "Offset mismatch for FCustomCameraNodeDataParameter::DataContainerType");
static_assert(offsetof(FCustomCameraNodeDataParameter, DataTypeObject) == 16, "Offset mismatch for FCustomCameraNodeDataParameter::DataTypeObject");
static_assert(offsetof(FCustomCameraNodeDataParameter, OverrideDataID) == 24, "Offset mismatch for FCustomCameraNodeDataParameter::OverrideDataID");

// /Script/GameplayCameras.CustomCameraNodeParameters
// Kind: ScriptStruct; super: none
struct FCustomCameraNodeParameters
{
public:
    TArray<void*> BlendableParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomCameraNodeParameters, BlendableParameters) == 0, "Offset mismatch for FCustomCameraNodeParameters::BlendableParameters");
static_assert(offsetof(FCustomCameraNodeParameters, DataParameters) == 16, "Offset mismatch for FCustomCameraNodeParameters::DataParameters");

// /Script/GameplayCameras.DoubleCameraParameter
// Kind: ScriptStruct; super: none
struct FDoubleCameraParameter
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t VariableID[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDoubleCameraParameter, Value) == 0, "Offset mismatch for FDoubleCameraParameter::Value");
static_assert(offsetof(FDoubleCameraParameter, VariableID) == 8, "Offset mismatch for FDoubleCameraParameter::VariableID");
static_assert(offsetof(FDoubleCameraParameter, Variable) == 16, "Offset mismatch for FDoubleCameraParameter::Variable");

// /Script/GameplayCameras.DoubleCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FDoubleCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDoubleCameraRigParameterOverride, Value) == 56, "Offset mismatch for FDoubleCameraRigParameterOverride::Value");

// /Script/GameplayCameras.DoubleCameraVariableReference
// Kind: ScriptStruct; super: none
struct FDoubleCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDoubleCameraVariableReference, VariableID) == 0, "Offset mismatch for FDoubleCameraVariableReference::VariableID");
static_assert(offsetof(FDoubleCameraVariableReference, Variable) == 8, "Offset mismatch for FDoubleCameraVariableReference::Variable");

// /Script/GameplayCameras.FloatCameraParameter
// Kind: ScriptStruct; super: none
struct FFloatCameraParameter
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VariableID[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFloatCameraParameter, Value) == 0, "Offset mismatch for FFloatCameraParameter::Value");
static_assert(offsetof(FFloatCameraParameter, VariableID) == 4, "Offset mismatch for FFloatCameraParameter::VariableID");
static_assert(offsetof(FFloatCameraParameter, Variable) == 8, "Offset mismatch for FFloatCameraParameter::Variable");

// /Script/GameplayCameras.FloatCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FFloatCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatCameraRigParameterOverride, Value) == 56, "Offset mismatch for FFloatCameraRigParameterOverride::Value");

// /Script/GameplayCameras.FloatCameraVariableReference
// Kind: ScriptStruct; super: none
struct FFloatCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFloatCameraVariableReference, VariableID) == 0, "Offset mismatch for FFloatCameraVariableReference::VariableID");
static_assert(offsetof(FFloatCameraVariableReference, Variable) == 8, "Offset mismatch for FFloatCameraVariableReference::Variable");

// /Script/GameplayCameras.GameplayCamerasActivateCameraRigTask
// Kind: ScriptStruct; super: GameplayCamerasStateTreeTask
struct FGameplayCamerasActivateCameraRigTask
{
public:
    std::uint8_t Pad_0000[0x2E]; // 0x0000
    std::uint8_t bRunOnce; // 0x002E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayCamerasActivateCameraRigTask, bRunOnce) == 46, "Offset mismatch for FGameplayCamerasActivateCameraRigTask::bRunOnce");

// /Script/GameplayCameras.GameplayCamerasActivateCameraRigTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayCamerasActivateCameraRigTaskInstanceData
{
public:
    void* CameraRig; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCamerasActivateCameraRigTaskInstanceData, CameraRig) == 0, "Offset mismatch for FGameplayCamerasActivateCameraRigTaskInstanceData::CameraRig");

// /Script/GameplayCameras.GameplayCamerasActivateCameraRigViaProxyTask
// Kind: ScriptStruct; super: GameplayCamerasStateTreeTask
struct FGameplayCamerasActivateCameraRigViaProxyTask
{
public:
    std::uint8_t Pad_0000[0x2E]; // 0x0000
    std::uint8_t bRunOnce; // 0x002E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayCamerasActivateCameraRigViaProxyTask, bRunOnce) == 46, "Offset mismatch for FGameplayCamerasActivateCameraRigViaProxyTask::bRunOnce");

// /Script/GameplayCameras.GameplayCamerasActivateCameraRigViaProxyTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData
{
public:
    void* CameraRigProxy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData, CameraRigProxy) == 0, "Offset mismatch for FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData::CameraRigProxy");

// /Script/GameplayCameras.GameplayCamerasStateTreeCondition
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FGameplayCamerasStateTreeCondition
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayCamerasStateTreeCondition, Operand) == 32, "Offset mismatch for FGameplayCamerasStateTreeCondition::Operand");
static_assert(offsetof(FGameplayCamerasStateTreeCondition, DeltaIndent) == 33, "Offset mismatch for FGameplayCamerasStateTreeCondition::DeltaIndent");
static_assert(offsetof(FGameplayCamerasStateTreeCondition, EvaluationMode) == 34, "Offset mismatch for FGameplayCamerasStateTreeCondition::EvaluationMode");

// /Script/GameplayCameras.GameplayCamerasStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FGameplayCamerasStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayCamerasStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGameplayCamerasStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGameplayCamerasStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGameplayCamerasStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGameplayCamerasStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGameplayCamerasStateTreeTask::TransitionHandlingPriority");

// /Script/GameplayCameras.InstancedOverridablePropertyBag
// Kind: ScriptStruct; super: InstancedPropertyBag
struct FInstancedOverridablePropertyBag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> OverridenPropertyIDs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedOverridablePropertyBag, OverridenPropertyIDs) == 16, "Offset mismatch for FInstancedOverridablePropertyBag::OverridenPropertyIDs");

// /Script/GameplayCameras.Integer32CameraParameter
// Kind: ScriptStruct; super: none
struct FInteger32CameraParameter
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t VariableID[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FInteger32CameraParameter, Value) == 0, "Offset mismatch for FInteger32CameraParameter::Value");
static_assert(offsetof(FInteger32CameraParameter, VariableID) == 4, "Offset mismatch for FInteger32CameraParameter::VariableID");
static_assert(offsetof(FInteger32CameraParameter, Variable) == 8, "Offset mismatch for FInteger32CameraParameter::Variable");

// /Script/GameplayCameras.Integer32CameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FInteger32CameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInteger32CameraRigParameterOverride, Value) == 56, "Offset mismatch for FInteger32CameraRigParameterOverride::Value");

// /Script/GameplayCameras.Integer32CameraVariableReference
// Kind: ScriptStruct; super: none
struct FInteger32CameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FInteger32CameraVariableReference, VariableID) == 0, "Offset mismatch for FInteger32CameraVariableReference::VariableID");
static_assert(offsetof(FInteger32CameraVariableReference, Variable) == 8, "Offset mismatch for FInteger32CameraVariableReference::Variable");

// /Script/GameplayCameras.PerlinNoiseData
// Kind: ScriptStruct; super: none
struct FPerlinNoiseData
{
public:
    float Amplitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPerlinNoiseData, Amplitude) == 0, "Offset mismatch for FPerlinNoiseData::Amplitude");
static_assert(offsetof(FPerlinNoiseData, Frequency) == 4, "Offset mismatch for FPerlinNoiseData::Frequency");

// /Script/GameplayCameras.Rotator3dCameraParameter
// Kind: ScriptStruct; super: none
struct FRotator3dCameraParameter
{
public:
    std::uint8_t Value[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRotator3dCameraParameter, Value) == 0, "Offset mismatch for FRotator3dCameraParameter::Value");
static_assert(offsetof(FRotator3dCameraParameter, VariableID) == 24, "Offset mismatch for FRotator3dCameraParameter::VariableID");
static_assert(offsetof(FRotator3dCameraParameter, Variable) == 32, "Offset mismatch for FRotator3dCameraParameter::Variable");

// /Script/GameplayCameras.Rotator3dCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FRotator3dCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRotator3dCameraRigParameterOverride, Value) == 56, "Offset mismatch for FRotator3dCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Rotator3dCameraVariableReference
// Kind: ScriptStruct; super: none
struct FRotator3dCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRotator3dCameraVariableReference, VariableID) == 0, "Offset mismatch for FRotator3dCameraVariableReference::VariableID");
static_assert(offsetof(FRotator3dCameraVariableReference, Variable) == 8, "Offset mismatch for FRotator3dCameraVariableReference::Variable");

// /Script/GameplayCameras.Rotator3fCameraParameter
// Kind: ScriptStruct; super: none
struct FRotator3fCameraParameter
{
public:
    std::uint8_t Value[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t VariableID[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    void* Variable; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRotator3fCameraParameter, Value) == 0, "Offset mismatch for FRotator3fCameraParameter::Value");
static_assert(offsetof(FRotator3fCameraParameter, VariableID) == 12, "Offset mismatch for FRotator3fCameraParameter::VariableID");
static_assert(offsetof(FRotator3fCameraParameter, Variable) == 16, "Offset mismatch for FRotator3fCameraParameter::Variable");

// /Script/GameplayCameras.Rotator3fCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FRotator3fCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRotator3fCameraRigParameterOverride, Value) == 56, "Offset mismatch for FRotator3fCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Rotator3fCameraVariableReference
// Kind: ScriptStruct; super: none
struct FRotator3fCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRotator3fCameraVariableReference, VariableID) == 0, "Offset mismatch for FRotator3fCameraVariableReference::VariableID");
static_assert(offsetof(FRotator3fCameraVariableReference, Variable) == 8, "Offset mismatch for FRotator3fCameraVariableReference::Variable");

// /Script/GameplayCameras.SplineOrbitControlPoint
// Kind: ScriptStruct; super: none
struct FSplineOrbitControlPoint
{
public:
    std::uint8_t LocationOffset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float PitchAngle; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSplineOrbitControlPoint, LocationOffset) == 0, "Offset mismatch for FSplineOrbitControlPoint::LocationOffset");
static_assert(offsetof(FSplineOrbitControlPoint, TargetOffset) == 24, "Offset mismatch for FSplineOrbitControlPoint::TargetOffset");
static_assert(offsetof(FSplineOrbitControlPoint, RotationOffset) == 48, "Offset mismatch for FSplineOrbitControlPoint::RotationOffset");
static_assert(offsetof(FSplineOrbitControlPoint, PitchAngle) == 72, "Offset mismatch for FSplineOrbitControlPoint::PitchAngle");

// /Script/GameplayCameras.Transform3dCameraParameter
// Kind: ScriptStruct; super: none
struct FTransform3dCameraParameter
{
public:
    std::uint8_t Value[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTransform3dCameraParameter, Value) == 0, "Offset mismatch for FTransform3dCameraParameter::Value");
static_assert(offsetof(FTransform3dCameraParameter, VariableID) == 96, "Offset mismatch for FTransform3dCameraParameter::VariableID");
static_assert(offsetof(FTransform3dCameraParameter, Variable) == 104, "Offset mismatch for FTransform3dCameraParameter::Variable");

// /Script/GameplayCameras.Transform3dCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FTransform3dCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransform3dCameraRigParameterOverride, Value) == 64, "Offset mismatch for FTransform3dCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Transform3dCameraVariableReference
// Kind: ScriptStruct; super: none
struct FTransform3dCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTransform3dCameraVariableReference, VariableID) == 0, "Offset mismatch for FTransform3dCameraVariableReference::VariableID");
static_assert(offsetof(FTransform3dCameraVariableReference, Variable) == 8, "Offset mismatch for FTransform3dCameraVariableReference::Variable");

// /Script/GameplayCameras.Transform3fCameraParameter
// Kind: ScriptStruct; super: none
struct FTransform3fCameraParameter
{
public:
    std::uint8_t Value[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTransform3fCameraParameter, Value) == 0, "Offset mismatch for FTransform3fCameraParameter::Value");
static_assert(offsetof(FTransform3fCameraParameter, VariableID) == 48, "Offset mismatch for FTransform3fCameraParameter::VariableID");
static_assert(offsetof(FTransform3fCameraParameter, Variable) == 56, "Offset mismatch for FTransform3fCameraParameter::Variable");

// /Script/GameplayCameras.Transform3fCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FTransform3fCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransform3fCameraRigParameterOverride, Value) == 64, "Offset mismatch for FTransform3fCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Transform3fCameraVariableReference
// Kind: ScriptStruct; super: none
struct FTransform3fCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTransform3fCameraVariableReference, VariableID) == 0, "Offset mismatch for FTransform3fCameraVariableReference::VariableID");
static_assert(offsetof(FTransform3fCameraVariableReference, Variable) == 8, "Offset mismatch for FTransform3fCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector2dCameraParameter
// Kind: ScriptStruct; super: none
struct FVector2dCameraParameter
{
public:
    std::uint8_t Value[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector2dCameraParameter, Value) == 0, "Offset mismatch for FVector2dCameraParameter::Value");
static_assert(offsetof(FVector2dCameraParameter, VariableID) == 16, "Offset mismatch for FVector2dCameraParameter::VariableID");
static_assert(offsetof(FVector2dCameraParameter, Variable) == 24, "Offset mismatch for FVector2dCameraParameter::Variable");

// /Script/GameplayCameras.Vector2dCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector2dCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector2dCameraRigParameterOverride, Value) == 56, "Offset mismatch for FVector2dCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector2dCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector2dCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector2dCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector2dCameraVariableReference::VariableID");
static_assert(offsetof(FVector2dCameraVariableReference, Variable) == 8, "Offset mismatch for FVector2dCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector2fCameraParameter
// Kind: ScriptStruct; super: none
struct FVector2fCameraParameter
{
public:
    std::uint8_t Value[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector2fCameraParameter, Value) == 0, "Offset mismatch for FVector2fCameraParameter::Value");
static_assert(offsetof(FVector2fCameraParameter, VariableID) == 8, "Offset mismatch for FVector2fCameraParameter::VariableID");
static_assert(offsetof(FVector2fCameraParameter, Variable) == 16, "Offset mismatch for FVector2fCameraParameter::Variable");

// /Script/GameplayCameras.Vector2fCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector2fCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector2fCameraRigParameterOverride, Value) == 56, "Offset mismatch for FVector2fCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector2fCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector2fCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector2fCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector2fCameraVariableReference::VariableID");
static_assert(offsetof(FVector2fCameraVariableReference, Variable) == 8, "Offset mismatch for FVector2fCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector3dCameraParameter
// Kind: ScriptStruct; super: none
struct FVector3dCameraParameter
{
public:
    std::uint8_t Value[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector3dCameraParameter, Value) == 0, "Offset mismatch for FVector3dCameraParameter::Value");
static_assert(offsetof(FVector3dCameraParameter, VariableID) == 24, "Offset mismatch for FVector3dCameraParameter::VariableID");
static_assert(offsetof(FVector3dCameraParameter, Variable) == 32, "Offset mismatch for FVector3dCameraParameter::Variable");

// /Script/GameplayCameras.Vector3dCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector3dCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector3dCameraRigParameterOverride, Value) == 56, "Offset mismatch for FVector3dCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector3dCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector3dCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector3dCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector3dCameraVariableReference::VariableID");
static_assert(offsetof(FVector3dCameraVariableReference, Variable) == 8, "Offset mismatch for FVector3dCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector3fCameraParameter
// Kind: ScriptStruct; super: none
struct FVector3fCameraParameter
{
public:
    std::uint8_t Value[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t VariableID[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    void* Variable; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector3fCameraParameter, Value) == 0, "Offset mismatch for FVector3fCameraParameter::Value");
static_assert(offsetof(FVector3fCameraParameter, VariableID) == 12, "Offset mismatch for FVector3fCameraParameter::VariableID");
static_assert(offsetof(FVector3fCameraParameter, Variable) == 16, "Offset mismatch for FVector3fCameraParameter::Variable");

// /Script/GameplayCameras.Vector3fCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector3fCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector3fCameraRigParameterOverride, Value) == 56, "Offset mismatch for FVector3fCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector3fCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector3fCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector3fCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector3fCameraVariableReference::VariableID");
static_assert(offsetof(FVector3fCameraVariableReference, Variable) == 8, "Offset mismatch for FVector3fCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector4dCameraParameter
// Kind: ScriptStruct; super: none
struct FVector4dCameraParameter
{
public:
    std::uint8_t Value[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector4dCameraParameter, Value) == 0, "Offset mismatch for FVector4dCameraParameter::Value");
static_assert(offsetof(FVector4dCameraParameter, VariableID) == 32, "Offset mismatch for FVector4dCameraParameter::VariableID");
static_assert(offsetof(FVector4dCameraParameter, Variable) == 40, "Offset mismatch for FVector4dCameraParameter::Variable");

// /Script/GameplayCameras.Vector4dCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector4dCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector4dCameraRigParameterOverride, Value) == 64, "Offset mismatch for FVector4dCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector4dCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector4dCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector4dCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector4dCameraVariableReference::VariableID");
static_assert(offsetof(FVector4dCameraVariableReference, Variable) == 8, "Offset mismatch for FVector4dCameraVariableReference::Variable");

// /Script/GameplayCameras.Vector4fCameraParameter
// Kind: ScriptStruct; super: none
struct FVector4fCameraParameter
{
public:
    std::uint8_t Value[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t VariableID[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector4fCameraParameter, Value) == 0, "Offset mismatch for FVector4fCameraParameter::Value");
static_assert(offsetof(FVector4fCameraParameter, VariableID) == 16, "Offset mismatch for FVector4fCameraParameter::VariableID");
static_assert(offsetof(FVector4fCameraParameter, Variable) == 24, "Offset mismatch for FVector4fCameraParameter::Variable");

// /Script/GameplayCameras.Vector4fCameraRigParameterOverride
// Kind: ScriptStruct; super: CameraRigParameterOverrideBase
struct FVector4fCameraRigParameterOverride
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector4fCameraRigParameterOverride, Value) == 64, "Offset mismatch for FVector4fCameraRigParameterOverride::Value");

// /Script/GameplayCameras.Vector4fCameraVariableReference
// Kind: ScriptStruct; super: none
struct FVector4fCameraVariableReference
{
public:
    std::uint8_t VariableID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Variable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVector4fCameraVariableReference, VariableID) == 0, "Offset mismatch for FVector4fCameraVariableReference::VariableID");
static_assert(offsetof(FVector4fCameraVariableReference, Variable) == 8, "Offset mismatch for FVector4fCameraVariableReference::Variable");

// /Script/GameplayCameras.AccelerationDecelerationValueInterpolator
// Kind: Class; super: CameraValueInterpolator
class UAccelerationDecelerationValueInterpolator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Acceleration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAccelerationDecelerationValueInterpolator, Acceleration) == 40, "Offset mismatch for UAccelerationDecelerationValueInterpolator::Acceleration");
static_assert(offsetof(UAccelerationDecelerationValueInterpolator, MaxSpeed) == 44, "Offset mismatch for UAccelerationDecelerationValueInterpolator::MaxSpeed");
static_assert(offsetof(UAccelerationDecelerationValueInterpolator, Deceleration) == 48, "Offset mismatch for UAccelerationDecelerationValueInterpolator::Deceleration");

// /Script/GameplayCameras.ActivateCameraRigFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UActivateCameraRigFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.AimAtActorCameraAction
// Kind: Class; super: BaseAimAtCameraAction
class UAimAtActorCameraAction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* TargetActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetSocketName[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    FName TargetBoneName; // 0x005C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAimAtActorCameraAction, TargetActor) == 80, "Offset mismatch for UAimAtActorCameraAction::TargetActor");
static_assert(offsetof(UAimAtActorCameraAction, TargetSocketName) == 88, "Offset mismatch for UAimAtActorCameraAction::TargetSocketName");
static_assert(offsetof(UAimAtActorCameraAction, TargetBoneName) == 92, "Offset mismatch for UAimAtActorCameraAction::TargetBoneName");

// /Script/GameplayCameras.AimAtCameraAction
// Kind: Class; super: BaseAimAtCameraAction
class UAimAtCameraAction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t TargetLocation[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAimAtCameraAction, TargetLocation) == 80, "Offset mismatch for UAimAtCameraAction::TargetLocation");

// /Script/GameplayCameras.ArrayCameraNode
// Kind: Class; super: CameraNode
class UArrayCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Children; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UArrayCameraNode, Children) == 56, "Offset mismatch for UArrayCameraNode::Children");

// /Script/GameplayCameras.AssetReferenceCameraNode
// Kind: Class; super: Interface
class UAssetReferenceCameraNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.AttachToActorCameraNode
// Kind: Class; super: CameraNode
class UAttachToActorCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Attachment[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachmentDataID[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t AttachToLocation[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t AttachToRotation[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAttachToActorCameraNode, Attachment) == 56, "Offset mismatch for UAttachToActorCameraNode::Attachment");
static_assert(offsetof(UAttachToActorCameraNode, AttachmentDataID) == 80, "Offset mismatch for UAttachToActorCameraNode::AttachmentDataID");
static_assert(offsetof(UAttachToActorCameraNode, AttachToLocation) == 88, "Offset mismatch for UAttachToActorCameraNode::AttachToLocation");
static_assert(offsetof(UAttachToActorCameraNode, AttachToRotation) == 104, "Offset mismatch for UAttachToActorCameraNode::AttachToRotation");

// /Script/GameplayCameras.AttachToActorGroupCameraNode
// Kind: Class; super: CameraNode
class UAttachToActorGroupCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Attachments; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AttachmentsDataID[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAttachToActorGroupCameraNode, Attachments) == 56, "Offset mismatch for UAttachToActorGroupCameraNode::Attachments");
static_assert(offsetof(UAttachToActorGroupCameraNode, AttachmentsDataID) == 72, "Offset mismatch for UAttachToActorGroupCameraNode::AttachmentsDataID");

// /Script/GameplayCameras.AttachToPlayerPawnCameraNode
// Kind: Class; super: CameraNode
class UAttachToPlayerPawnCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AttachToLocation[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t AttachToRotation[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SocketName[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    FName BoneName; // 0x005C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAttachToPlayerPawnCameraNode, AttachToLocation) == 56, "Offset mismatch for UAttachToPlayerPawnCameraNode::AttachToLocation");
static_assert(offsetof(UAttachToPlayerPawnCameraNode, AttachToRotation) == 72, "Offset mismatch for UAttachToPlayerPawnCameraNode::AttachToRotation");
static_assert(offsetof(UAttachToPlayerPawnCameraNode, SocketName) == 88, "Offset mismatch for UAttachToPlayerPawnCameraNode::SocketName");
static_assert(offsetof(UAttachToPlayerPawnCameraNode, BoneName) == 92, "Offset mismatch for UAttachToPlayerPawnCameraNode::BoneName");

// /Script/GameplayCameras.AutoFocusCameraNode
// Kind: Class; super: CameraNode
class UAutoFocusCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EnableAutoFocus[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t AutoFocusDampingFactor[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAutoFocusCameraNode, EnableAutoFocus) == 56, "Offset mismatch for UAutoFocusCameraNode::EnableAutoFocus");
static_assert(offsetof(UAutoFocusCameraNode, AutoFocusDampingFactor) == 72, "Offset mismatch for UAutoFocusCameraNode::AutoFocusDampingFactor");

// /Script/GameplayCameras.AutoRotateInput2DCameraNode
// Kind: Class; super: Input2DCameraNode
class UAutoRotateInput2DCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Direction; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t DirectionVector[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t WaitTime[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t DeactivationThreshold[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    void* Interpolator; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FreezeControlRotation[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnableAutoRotate[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t AutoRotateYaw[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t AutoRotatePitch[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    void* InputNode; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAutoRotateInput2DCameraNode, Direction) == 56, "Offset mismatch for UAutoRotateInput2DCameraNode::Direction");
static_assert(offsetof(UAutoRotateInput2DCameraNode, DirectionVector) == 64, "Offset mismatch for UAutoRotateInput2DCameraNode::DirectionVector");
static_assert(offsetof(UAutoRotateInput2DCameraNode, WaitTime) == 80, "Offset mismatch for UAutoRotateInput2DCameraNode::WaitTime");
static_assert(offsetof(UAutoRotateInput2DCameraNode, DeactivationThreshold) == 96, "Offset mismatch for UAutoRotateInput2DCameraNode::DeactivationThreshold");
static_assert(offsetof(UAutoRotateInput2DCameraNode, Interpolator) == 112, "Offset mismatch for UAutoRotateInput2DCameraNode::Interpolator");
static_assert(offsetof(UAutoRotateInput2DCameraNode, FreezeControlRotation) == 120, "Offset mismatch for UAutoRotateInput2DCameraNode::FreezeControlRotation");
static_assert(offsetof(UAutoRotateInput2DCameraNode, EnableAutoRotate) == 136, "Offset mismatch for UAutoRotateInput2DCameraNode::EnableAutoRotate");
static_assert(offsetof(UAutoRotateInput2DCameraNode, AutoRotateYaw) == 152, "Offset mismatch for UAutoRotateInput2DCameraNode::AutoRotateYaw");
static_assert(offsetof(UAutoRotateInput2DCameraNode, AutoRotatePitch) == 168, "Offset mismatch for UAutoRotateInput2DCameraNode::AutoRotatePitch");
static_assert(offsetof(UAutoRotateInput2DCameraNode, InputNode) == 184, "Offset mismatch for UAutoRotateInput2DCameraNode::InputNode");

// /Script/GameplayCameras.BaseAimAtCameraAction
// Kind: Class; super: CameraAction
class UBaseAimAtCameraAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Interpolator; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float LockOnAngleTolerance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LockOnPolicy; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::uint8_t TargetFraming[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBaseAimAtCameraAction, Interpolator) == 48, "Offset mismatch for UBaseAimAtCameraAction::Interpolator");
static_assert(offsetof(UBaseAimAtCameraAction, LockOnAngleTolerance) == 56, "Offset mismatch for UBaseAimAtCameraAction::LockOnAngleTolerance");
static_assert(offsetof(UBaseAimAtCameraAction, LockOnPolicy) == 60, "Offset mismatch for UBaseAimAtCameraAction::LockOnPolicy");
static_assert(offsetof(UBaseAimAtCameraAction, TargetFraming) == 64, "Offset mismatch for UBaseAimAtCameraAction::TargetFraming");

// /Script/GameplayCameras.BaseCameraObject
// Kind: Class; super: Object
class UBaseCameraObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Interface[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t Connections[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t AllocationInfo[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t Guid[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultParameters[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterDefinitions; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBaseCameraObject, Interface) == 40, "Offset mismatch for UBaseCameraObject::Interface");
static_assert(offsetof(UBaseCameraObject, Connections) == 88, "Offset mismatch for UBaseCameraObject::Connections");
static_assert(offsetof(UBaseCameraObject, AllocationInfo) == 112, "Offset mismatch for UBaseCameraObject::AllocationInfo");
static_assert(offsetof(UBaseCameraObject, Guid) == 152, "Offset mismatch for UBaseCameraObject::Guid");
static_assert(offsetof(UBaseCameraObject, DefaultParameters) == 168, "Offset mismatch for UBaseCameraObject::DefaultParameters");
static_assert(offsetof(UBaseCameraObject, ParameterDefinitions) == 184, "Offset mismatch for UBaseCameraObject::ParameterDefinitions");

// /Script/GameplayCameras.BaseFramingCameraNode
// Kind: Class; super: CameraNode
class UBaseFramingCameraNode
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t TargetLocation[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> TargetInfos; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetInfosDataID[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t SetTargetDistance[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t InitializeWithIdealFraming[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t IdealFramingLocation[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    std::uint8_t ReframeDampingFactor[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t LowReframeDampingFactor[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReengageTime[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DisengageTime[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetMovementAnticipationTime[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DeadZone[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftZone[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInfo[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBaseFramingCameraNode, TargetLocation) == 64, "Offset mismatch for UBaseFramingCameraNode::TargetLocation");
static_assert(offsetof(UBaseFramingCameraNode, TargetInfos) == 80, "Offset mismatch for UBaseFramingCameraNode::TargetInfos");
static_assert(offsetof(UBaseFramingCameraNode, TargetInfosDataID) == 96, "Offset mismatch for UBaseFramingCameraNode::TargetInfosDataID");
static_assert(offsetof(UBaseFramingCameraNode, SetTargetDistance) == 104, "Offset mismatch for UBaseFramingCameraNode::SetTargetDistance");
static_assert(offsetof(UBaseFramingCameraNode, InitializeWithIdealFraming) == 120, "Offset mismatch for UBaseFramingCameraNode::InitializeWithIdealFraming");
static_assert(offsetof(UBaseFramingCameraNode, IdealFramingLocation) == 136, "Offset mismatch for UBaseFramingCameraNode::IdealFramingLocation");
static_assert(offsetof(UBaseFramingCameraNode, ReframeDampingFactor) == 168, "Offset mismatch for UBaseFramingCameraNode::ReframeDampingFactor");
static_assert(offsetof(UBaseFramingCameraNode, LowReframeDampingFactor) == 184, "Offset mismatch for UBaseFramingCameraNode::LowReframeDampingFactor");
static_assert(offsetof(UBaseFramingCameraNode, ReengageTime) == 200, "Offset mismatch for UBaseFramingCameraNode::ReengageTime");
static_assert(offsetof(UBaseFramingCameraNode, DisengageTime) == 216, "Offset mismatch for UBaseFramingCameraNode::DisengageTime");
static_assert(offsetof(UBaseFramingCameraNode, TargetMovementAnticipationTime) == 232, "Offset mismatch for UBaseFramingCameraNode::TargetMovementAnticipationTime");
static_assert(offsetof(UBaseFramingCameraNode, DeadZone) == 248, "Offset mismatch for UBaseFramingCameraNode::DeadZone");
static_assert(offsetof(UBaseFramingCameraNode, SoftZone) == 288, "Offset mismatch for UBaseFramingCameraNode::SoftZone");
static_assert(offsetof(UBaseFramingCameraNode, TargetInfo) == 328, "Offset mismatch for UBaseFramingCameraNode::TargetInfo");

// /Script/GameplayCameras.BlendCameraNode
// Kind: Class; super: CameraNode
class UBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlendCameraNode, bIsEnabled) == 48, "Offset mismatch for UBlendCameraNode::bIsEnabled");

// /Script/GameplayCameras.BlendStackCameraNode
// Kind: Class; super: CameraNode
class UBlendStackCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BlendStackType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t Layer; // 0x003C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UBlendStackCameraNode, BlendStackType) == 56, "Offset mismatch for UBlendStackCameraNode::BlendStackType");
static_assert(offsetof(UBlendStackCameraNode, Layer) == 60, "Offset mismatch for UBlendStackCameraNode::Layer");

// /Script/GameplayCameras.BlendStackRootCameraNode
// Kind: Class; super: CameraNode
class UBlendStackRootCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Blend; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* RootNode; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlendStackRootCameraNode, Blend) == 56, "Offset mismatch for UBlendStackRootCameraNode::Blend");
static_assert(offsetof(UBlendStackRootCameraNode, RootNode) == 64, "Offset mismatch for UBlendStackRootCameraNode::RootNode");

// /Script/GameplayCameras.BlueprintCameraContextDataTableFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintCameraContextDataTableFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintCameraDirector
// Kind: Class; super: CameraDirector
class UBlueprintCameraDirector
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* CameraDirectorEvaluatorClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBlueprintCameraDirector, CameraDirectorEvaluatorClass) == 72, "Offset mismatch for UBlueprintCameraDirector::CameraDirectorEvaluatorClass");

// /Script/GameplayCameras.BlueprintCameraDirectorEvaluator
// Kind: Class; super: Object
class UBlueprintCameraDirectorEvaluator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintCameraEvaluationDataFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintCameraEvaluationDataFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintCameraNode
// Kind: Class; super: CameraNode
class UBlueprintCameraNode
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* CameraNodeEvaluatorTemplate; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraNodeEvaluatorOverrides[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRunInEditor; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    void* CameraNodeEvaluatorClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBlueprintCameraNode, CameraNodeEvaluatorTemplate) == 64, "Offset mismatch for UBlueprintCameraNode::CameraNodeEvaluatorTemplate");
static_assert(offsetof(UBlueprintCameraNode, CameraNodeEvaluatorOverrides) == 72, "Offset mismatch for UBlueprintCameraNode::CameraNodeEvaluatorOverrides");
static_assert(offsetof(UBlueprintCameraNode, bRunInEditor) == 104, "Offset mismatch for UBlueprintCameraNode::bRunInEditor");
static_assert(offsetof(UBlueprintCameraNode, CameraNodeEvaluatorClass) == 112, "Offset mismatch for UBlueprintCameraNode::CameraNodeEvaluatorClass");

// /Script/GameplayCameras.BlueprintCameraNodeEvaluator
// Kind: Class; super: Object
class UBlueprintCameraNodeEvaluator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsFirstFrame; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActiveCameraRig; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    void* EvaluationContextOwner; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraData[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraPose[0x90]; // 0x0050 (Size: 0x90, Type: StructProperty)
    std::uint8_t VariableTable[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlueprintCameraNodeEvaluator, bIsFirstFrame) == 40, "Offset mismatch for UBlueprintCameraNodeEvaluator::bIsFirstFrame");
static_assert(offsetof(UBlueprintCameraNodeEvaluator, bIsActiveCameraRig) == 41, "Offset mismatch for UBlueprintCameraNodeEvaluator::bIsActiveCameraRig");
static_assert(offsetof(UBlueprintCameraNodeEvaluator, EvaluationContextOwner) == 48, "Offset mismatch for UBlueprintCameraNodeEvaluator::EvaluationContextOwner");
static_assert(offsetof(UBlueprintCameraNodeEvaluator, CameraData) == 56, "Offset mismatch for UBlueprintCameraNodeEvaluator::CameraData");
static_assert(offsetof(UBlueprintCameraNodeEvaluator, CameraPose) == 80, "Offset mismatch for UBlueprintCameraNodeEvaluator::CameraPose");
static_assert(offsetof(UBlueprintCameraNodeEvaluator, VariableTable) == 224, "Offset mismatch for UBlueprintCameraNodeEvaluator::VariableTable");

// /Script/GameplayCameras.BlueprintCameraPoseFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintCameraPoseFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintCameraVariableTableFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintCameraVariableTableFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BlueprintPostProcessSettingsCollectionFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintPostProcessSettingsCollectionFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.BodyParametersCameraNode
// Kind: Class; super: CameraNode
class UBodyParametersCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ShutterSpeed[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t ISO[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBodyParametersCameraNode, ShutterSpeed) == 56, "Offset mismatch for UBodyParametersCameraNode::ShutterSpeed");
static_assert(offsetof(UBodyParametersCameraNode, ISO) == 72, "Offset mismatch for UBodyParametersCameraNode::ISO");

// /Script/GameplayCameras.BooleanCameraVariable
// Kind: Class; super: CameraVariableAsset
class UBooleanCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bDefaultValue; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBooleanCameraVariable, bDefaultValue) == 64, "Offset mismatch for UBooleanCameraVariable::bDefaultValue");

// /Script/GameplayCameras.BoomArmCameraNode
// Kind: Class; super: CameraNode
class UBoomArmCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BoomOffset[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    void* BoomLengthInterpolator; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxForwardInterpolationFactor[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxBackwardInterpolationFactor[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    void* InputSlot; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAdditiveRotation; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBoomArmCameraNode, BoomOffset) == 56, "Offset mismatch for UBoomArmCameraNode::BoomOffset");
static_assert(offsetof(UBoomArmCameraNode, BoomLengthInterpolator) == 96, "Offset mismatch for UBoomArmCameraNode::BoomLengthInterpolator");
static_assert(offsetof(UBoomArmCameraNode, MaxForwardInterpolationFactor) == 104, "Offset mismatch for UBoomArmCameraNode::MaxForwardInterpolationFactor");
static_assert(offsetof(UBoomArmCameraNode, MaxBackwardInterpolationFactor) == 128, "Offset mismatch for UBoomArmCameraNode::MaxBackwardInterpolationFactor");
static_assert(offsetof(UBoomArmCameraNode, InputSlot) == 152, "Offset mismatch for UBoomArmCameraNode::InputSlot");
static_assert(offsetof(UBoomArmCameraNode, bAdditiveRotation) == 160, "Offset mismatch for UBoomArmCameraNode::bAdditiveRotation");

// /Script/GameplayCameras.CalcCameraActorCameraNode
// Kind: Class; super: CameraNode
class UCalcCameraActorCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCalcCameraActorCameraNode, bIsEnabled) == 48, "Offset mismatch for UCalcCameraActorCameraNode::bIsEnabled");

// /Script/GameplayCameras.CameraAction
// Kind: Class; super: Object
class UCameraAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bPropagateToNewCameraRigs; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Timeout; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCameraAction, bPropagateToNewCameraRigs) == 40, "Offset mismatch for UCameraAction::bPropagateToNewCameraRigs");
static_assert(offsetof(UCameraAction, Timeout) == 44, "Offset mismatch for UCameraAction::Timeout");

// /Script/GameplayCameras.CameraActionInstanceFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UCameraActionInstanceFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraAsset
// Kind: Class; super: Object
class UCameraAsset
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Interface[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    void* CameraDirector; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EnterTransitions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExitTransitions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BuildStatus; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t DefaultParameters[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterDefinitions; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AllocationInfo[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraAsset, Interface) == 72, "Offset mismatch for UCameraAsset::Interface");
static_assert(offsetof(UCameraAsset, CameraDirector) == 88, "Offset mismatch for UCameraAsset::CameraDirector");
static_assert(offsetof(UCameraAsset, EnterTransitions) == 96, "Offset mismatch for UCameraAsset::EnterTransitions");
static_assert(offsetof(UCameraAsset, ExitTransitions) == 112, "Offset mismatch for UCameraAsset::ExitTransitions");
static_assert(offsetof(UCameraAsset, BuildStatus) == 128, "Offset mismatch for UCameraAsset::BuildStatus");
static_assert(offsetof(UCameraAsset, DefaultParameters) == 136, "Offset mismatch for UCameraAsset::DefaultParameters");
static_assert(offsetof(UCameraAsset, ParameterDefinitions) == 152, "Offset mismatch for UCameraAsset::ParameterDefinitions");
static_assert(offsetof(UCameraAsset, AllocationInfo) == 168, "Offset mismatch for UCameraAsset::AllocationInfo");

// /Script/GameplayCameras.CameraAssetInterfaceParameter
// Kind: Class; super: Object
class UCameraAssetInterfaceParameter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString InterfaceParameterName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t SourceCameraRig[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SourceParameterName[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    std::uint8_t Guid[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraAssetInterfaceParameter, InterfaceParameterName) == 40, "Offset mismatch for UCameraAssetInterfaceParameter::InterfaceParameterName");
static_assert(offsetof(UCameraAssetInterfaceParameter, SourceCameraRig) == 56, "Offset mismatch for UCameraAssetInterfaceParameter::SourceCameraRig");
static_assert(offsetof(UCameraAssetInterfaceParameter, SourceParameterName) == 88, "Offset mismatch for UCameraAssetInterfaceParameter::SourceParameterName");
static_assert(offsetof(UCameraAssetInterfaceParameter, Guid) == 92, "Offset mismatch for UCameraAssetInterfaceParameter::Guid");

// /Script/GameplayCameras.CameraComponentCameraNode
// Kind: Class; super: CameraNode
class UCameraComponentCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCameraComponentCameraNode, bIsEnabled) == 48, "Offset mismatch for UCameraComponentCameraNode::bIsEnabled");

// /Script/GameplayCameras.CameraDirector
// Kind: Class; super: Object
class UCameraDirector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CameraRigProxyRedirectTable[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRunInEditor; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* CameraRigProxyTable; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraDirector, CameraRigProxyRedirectTable) == 40, "Offset mismatch for UCameraDirector::CameraRigProxyRedirectTable");
static_assert(offsetof(UCameraDirector, bRunInEditor) == 56, "Offset mismatch for UCameraDirector::bRunInEditor");
static_assert(offsetof(UCameraDirector, CameraRigProxyTable) == 64, "Offset mismatch for UCameraDirector::CameraRigProxyTable");

// /Script/GameplayCameras.CameraDirectorStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UCameraDirectorStateTreeSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCameraDirectorStateTreeSchema, ContextDataDescs) == 40, "Offset mismatch for UCameraDirectorStateTreeSchema::ContextDataDescs");

// /Script/GameplayCameras.CameraNode
// Kind: Class; super: Object
class UCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCameraNode, bIsEnabled) == 48, "Offset mismatch for UCameraNode::bIsEnabled");

// /Script/GameplayCameras.CameraObjectInterfaceBlendableParameter
// Kind: Class; super: CameraObjectInterfaceParameterBase
class UCameraObjectInterfaceBlendableParameter
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t VariableType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* BlendableStructType; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsPreBlended; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    std::uint8_t PrivateVariableID[0x4]; // 0x0074 (Size: 0x4, Type: StructProperty)
    void* PrivateVariable; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraObjectInterfaceBlendableParameter, VariableType) == 96, "Offset mismatch for UCameraObjectInterfaceBlendableParameter::VariableType");
static_assert(offsetof(UCameraObjectInterfaceBlendableParameter, BlendableStructType) == 104, "Offset mismatch for UCameraObjectInterfaceBlendableParameter::BlendableStructType");
static_assert(offsetof(UCameraObjectInterfaceBlendableParameter, bIsPreBlended) == 112, "Offset mismatch for UCameraObjectInterfaceBlendableParameter::bIsPreBlended");
static_assert(offsetof(UCameraObjectInterfaceBlendableParameter, PrivateVariableID) == 116, "Offset mismatch for UCameraObjectInterfaceBlendableParameter::PrivateVariableID");
static_assert(offsetof(UCameraObjectInterfaceBlendableParameter, PrivateVariable) == 120, "Offset mismatch for UCameraObjectInterfaceBlendableParameter::PrivateVariable");

// /Script/GameplayCameras.CameraObjectInterfaceDataParameter
// Kind: Class; super: CameraObjectInterfaceParameterBase
class UCameraObjectInterfaceDataParameter
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t DataType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t DataContainerType; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    void* DataTypeObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrivateDataID[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraObjectInterfaceDataParameter, DataType) == 96, "Offset mismatch for UCameraObjectInterfaceDataParameter::DataType");
static_assert(offsetof(UCameraObjectInterfaceDataParameter, DataContainerType) == 100, "Offset mismatch for UCameraObjectInterfaceDataParameter::DataContainerType");
static_assert(offsetof(UCameraObjectInterfaceDataParameter, DataTypeObject) == 104, "Offset mismatch for UCameraObjectInterfaceDataParameter::DataTypeObject");
static_assert(offsetof(UCameraObjectInterfaceDataParameter, PrivateDataID) == 112, "Offset mismatch for UCameraObjectInterfaceDataParameter::PrivateDataID");

// /Script/GameplayCameras.CameraObjectInterfaceParameterBase
// Kind: Class; super: Object
class UCameraObjectInterfaceParameterBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString InterfaceParameterName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsVisible; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t Guid[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    void* Target; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    FName TargetPropertyName; // 0x0058 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UCameraObjectInterfaceParameterBase, InterfaceParameterName) == 40, "Offset mismatch for UCameraObjectInterfaceParameterBase::InterfaceParameterName");
static_assert(offsetof(UCameraObjectInterfaceParameterBase, bIsVisible) == 56, "Offset mismatch for UCameraObjectInterfaceParameterBase::bIsVisible");
static_assert(offsetof(UCameraObjectInterfaceParameterBase, Guid) == 60, "Offset mismatch for UCameraObjectInterfaceParameterBase::Guid");
static_assert(offsetof(UCameraObjectInterfaceParameterBase, Target) == 80, "Offset mismatch for UCameraObjectInterfaceParameterBase::Target");
static_assert(offsetof(UCameraObjectInterfaceParameterBase, TargetPropertyName) == 88, "Offset mismatch for UCameraObjectInterfaceParameterBase::TargetPropertyName");

// /Script/GameplayCameras.CameraObjectInterfaceParameterGetter
// Kind: Class; super: Object
class UCameraObjectInterfaceParameterGetter
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ParameterGuid[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t GraphNodePos[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraObjectInterfaceParameterGetter, ParameterGuid) == 48, "Offset mismatch for UCameraObjectInterfaceParameterGetter::ParameterGuid");
static_assert(offsetof(UCameraObjectInterfaceParameterGetter, GraphNodePos) == 64, "Offset mismatch for UCameraObjectInterfaceParameterGetter::GraphNodePos");

// /Script/GameplayCameras.CameraRigAsset
// Kind: Class; super: BaseCameraObject
class UCameraRigAsset
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* RootNode; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayTags[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    TArray<void*> EnterTransitions; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExitTransitions; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitialOrientation; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0139
    std::uint8_t BuildStatus; // 0x013C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCameraRigAsset, RootNode) == 240, "Offset mismatch for UCameraRigAsset::RootNode");
static_assert(offsetof(UCameraRigAsset, GameplayTags) == 248, "Offset mismatch for UCameraRigAsset::GameplayTags");
static_assert(offsetof(UCameraRigAsset, EnterTransitions) == 280, "Offset mismatch for UCameraRigAsset::EnterTransitions");
static_assert(offsetof(UCameraRigAsset, ExitTransitions) == 296, "Offset mismatch for UCameraRigAsset::ExitTransitions");
static_assert(offsetof(UCameraRigAsset, InitialOrientation) == 312, "Offset mismatch for UCameraRigAsset::InitialOrientation");
static_assert(offsetof(UCameraRigAsset, BuildStatus) == 316, "Offset mismatch for UCameraRigAsset::BuildStatus");

// /Script/GameplayCameras.CameraRigCameraNode
// Kind: Class; super: CameraNode
class UCameraRigCameraNode
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CameraRigReference[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraRigCameraNode, CameraRigReference) == 72, "Offset mismatch for UCameraRigCameraNode::CameraRigReference");

// /Script/GameplayCameras.CameraRigInput1DSlot
// Kind: Class; super: Input1DCameraNode
class UCameraRigInput1DSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t clamp[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normalize[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t RevertAxis[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t Speed[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t BuiltInVariable; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    std::uint8_t CustomVariable[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPreBlended; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputSlotParameters[0x3]; // 0x00A1 (Size: 0x3, Type: StructProperty)
    std::uint8_t SpeedVariableID[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariableID[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraRigInput1DSlot, clamp) == 56, "Offset mismatch for UCameraRigInput1DSlot::clamp");
static_assert(offsetof(UCameraRigInput1DSlot, Normalize) == 80, "Offset mismatch for UCameraRigInput1DSlot::Normalize");
static_assert(offsetof(UCameraRigInput1DSlot, RevertAxis) == 96, "Offset mismatch for UCameraRigInput1DSlot::RevertAxis");
static_assert(offsetof(UCameraRigInput1DSlot, Speed) == 112, "Offset mismatch for UCameraRigInput1DSlot::Speed");
static_assert(offsetof(UCameraRigInput1DSlot, BuiltInVariable) == 136, "Offset mismatch for UCameraRigInput1DSlot::BuiltInVariable");
static_assert(offsetof(UCameraRigInput1DSlot, CustomVariable) == 144, "Offset mismatch for UCameraRigInput1DSlot::CustomVariable");
static_assert(offsetof(UCameraRigInput1DSlot, bIsPreBlended) == 160, "Offset mismatch for UCameraRigInput1DSlot::bIsPreBlended");
static_assert(offsetof(UCameraRigInput1DSlot, InputSlotParameters) == 161, "Offset mismatch for UCameraRigInput1DSlot::InputSlotParameters");
static_assert(offsetof(UCameraRigInput1DSlot, SpeedVariableID) == 164, "Offset mismatch for UCameraRigInput1DSlot::SpeedVariableID");
static_assert(offsetof(UCameraRigInput1DSlot, VariableID) == 168, "Offset mismatch for UCameraRigInput1DSlot::VariableID");

// /Script/GameplayCameras.CameraRigInput2DSlot
// Kind: Class; super: Input2DCameraNode
class UCameraRigInput2DSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ClampX[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClampY[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t NormalizeX[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t NormalizeY[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t RevertAxisX[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t RevertAxisY[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t Speed[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t BuiltInVariable; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t CustomVariable[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPreBlended; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputSlotParameters[0x3]; // 0x00E1 (Size: 0x3, Type: StructProperty)
    std::uint8_t SpeedVariableID[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariableID[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraRigInput2DSlot, ClampX) == 56, "Offset mismatch for UCameraRigInput2DSlot::ClampX");
static_assert(offsetof(UCameraRigInput2DSlot, ClampY) == 80, "Offset mismatch for UCameraRigInput2DSlot::ClampY");
static_assert(offsetof(UCameraRigInput2DSlot, NormalizeX) == 104, "Offset mismatch for UCameraRigInput2DSlot::NormalizeX");
static_assert(offsetof(UCameraRigInput2DSlot, NormalizeY) == 120, "Offset mismatch for UCameraRigInput2DSlot::NormalizeY");
static_assert(offsetof(UCameraRigInput2DSlot, RevertAxisX) == 136, "Offset mismatch for UCameraRigInput2DSlot::RevertAxisX");
static_assert(offsetof(UCameraRigInput2DSlot, RevertAxisY) == 152, "Offset mismatch for UCameraRigInput2DSlot::RevertAxisY");
static_assert(offsetof(UCameraRigInput2DSlot, Speed) == 168, "Offset mismatch for UCameraRigInput2DSlot::Speed");
static_assert(offsetof(UCameraRigInput2DSlot, BuiltInVariable) == 200, "Offset mismatch for UCameraRigInput2DSlot::BuiltInVariable");
static_assert(offsetof(UCameraRigInput2DSlot, CustomVariable) == 208, "Offset mismatch for UCameraRigInput2DSlot::CustomVariable");
static_assert(offsetof(UCameraRigInput2DSlot, bIsPreBlended) == 224, "Offset mismatch for UCameraRigInput2DSlot::bIsPreBlended");
static_assert(offsetof(UCameraRigInput2DSlot, InputSlotParameters) == 225, "Offset mismatch for UCameraRigInput2DSlot::InputSlotParameters");
static_assert(offsetof(UCameraRigInput2DSlot, SpeedVariableID) == 228, "Offset mismatch for UCameraRigInput2DSlot::SpeedVariableID");
static_assert(offsetof(UCameraRigInput2DSlot, VariableID) == 232, "Offset mismatch for UCameraRigInput2DSlot::VariableID");

// /Script/GameplayCameras.CameraRigInstanceFunctions
// Kind: Class; super: BlueprintFunctionLibrary
class UCameraRigInstanceFunctions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraRigParameterInterop
// Kind: Class; super: BlueprintFunctionLibrary
class UCameraRigParameterInterop
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraRigParameterInteropLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCameraRigParameterInteropLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraRigProxyAsset
// Kind: Class; super: Object
class UCameraRigProxyAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Guid[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraRigProxyAsset, Guid) == 40, "Offset mismatch for UCameraRigProxyAsset::Guid");

// /Script/GameplayCameras.CameraRigProxyTable
// Kind: Class; super: Object
class UCameraRigProxyTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Entries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCameraRigProxyTable, Entries) == 40, "Offset mismatch for UCameraRigProxyTable::Entries");

// /Script/GameplayCameras.CameraRigTransition
// Kind: Class; super: Object
class UCameraRigTransition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Conditions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* Blend; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitialOrientation; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t bOverrideInitialOrientation; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFreezePreviousCameraRigs; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCameraRigMerging; // 0x004E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCameraRigTransition, Conditions) == 48, "Offset mismatch for UCameraRigTransition::Conditions");
static_assert(offsetof(UCameraRigTransition, Blend) == 64, "Offset mismatch for UCameraRigTransition::Blend");
static_assert(offsetof(UCameraRigTransition, InitialOrientation) == 72, "Offset mismatch for UCameraRigTransition::InitialOrientation");
static_assert(offsetof(UCameraRigTransition, bOverrideInitialOrientation) == 76, "Offset mismatch for UCameraRigTransition::bOverrideInitialOrientation");
static_assert(offsetof(UCameraRigTransition, bFreezePreviousCameraRigs) == 77, "Offset mismatch for UCameraRigTransition::bFreezePreviousCameraRigs");
static_assert(offsetof(UCameraRigTransition, bAllowCameraRigMerging) == 78, "Offset mismatch for UCameraRigTransition::bAllowCameraRigMerging");

// /Script/GameplayCameras.CameraRigTransitionCondition
// Kind: Class; super: Object
class UCameraRigTransitionCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraShakeAsset
// Kind: Class; super: BaseCameraObject
class UCameraShakeAsset
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* RootNode; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* BlendIn; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* BlendOut; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsSingleInstance; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BuildStatus; // 0x0101 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCameraShakeAsset, RootNode) == 232, "Offset mismatch for UCameraShakeAsset::RootNode");
static_assert(offsetof(UCameraShakeAsset, BlendIn) == 240, "Offset mismatch for UCameraShakeAsset::BlendIn");
static_assert(offsetof(UCameraShakeAsset, BlendOut) == 248, "Offset mismatch for UCameraShakeAsset::BlendOut");
static_assert(offsetof(UCameraShakeAsset, bIsSingleInstance) == 256, "Offset mismatch for UCameraShakeAsset::bIsSingleInstance");
static_assert(offsetof(UCameraShakeAsset, BuildStatus) == 257, "Offset mismatch for UCameraShakeAsset::BuildStatus");

// /Script/GameplayCameras.CameraShakeCameraNode
// Kind: Class; super: CameraNode
class UCameraShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t CameraShakeReference[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t EvaluationMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCameraShakeCameraNode, CameraShakeReference) == 64, "Offset mismatch for UCameraShakeCameraNode::CameraShakeReference");
static_assert(offsetof(UCameraShakeCameraNode, EvaluationMode) == 128, "Offset mismatch for UCameraShakeCameraNode::EvaluationMode");

// /Script/GameplayCameras.CameraShakeInstanceFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCameraShakeInstanceFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraShakeServiceCameraNode
// Kind: Class; super: CameraNode
class UCameraShakeServiceCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCameraShakeServiceCameraNode, bIsEnabled) == 48, "Offset mismatch for UCameraShakeServiceCameraNode::bIsEnabled");

// /Script/GameplayCameras.CameraValueInterpolator
// Kind: Class; super: Object
class UCameraValueInterpolator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.CameraVariableAsset
// Kind: Class; super: Object
class UCameraVariableAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoReset; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreBlended; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPrivate; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    std::uint8_t Guid[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraVariableAsset, bAutoReset) == 40, "Offset mismatch for UCameraVariableAsset::bAutoReset");
static_assert(offsetof(UCameraVariableAsset, bIsPreBlended) == 41, "Offset mismatch for UCameraVariableAsset::bIsPreBlended");
static_assert(offsetof(UCameraVariableAsset, bIsPrivate) == 42, "Offset mismatch for UCameraVariableAsset::bIsPrivate");
static_assert(offsetof(UCameraVariableAsset, Guid) == 44, "Offset mismatch for UCameraVariableAsset::Guid");

// /Script/GameplayCameras.CameraVariableCollection
// Kind: Class; super: Object
class UCameraVariableCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Variables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCameraVariableCollection, Variables) == 40, "Offset mismatch for UCameraVariableCollection::Variables");

// /Script/GameplayCameras.ClippingPlanesCameraNode
// Kind: Class; super: CameraNode
class UClippingPlanesCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t NearPlane[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t FarPlane[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UClippingPlanesCameraNode, NearPlane) == 56, "Offset mismatch for UClippingPlanesCameraNode::NearPlane");
static_assert(offsetof(UClippingPlanesCameraNode, FarPlane) == 80, "Offset mismatch for UClippingPlanesCameraNode::FarPlane");

// /Script/GameplayCameras.CollisionPushCameraNode
// Kind: Class; super: CameraNode
class UCollisionPushCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SafePosition; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t CustomSafePosition[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t SafePositionOffset[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t SafePositionOffsetSpace; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t EnableCollision[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t CollisionSphereRadius[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t CollisionChannel; // 0x00A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A1
    void* PushInterpolator; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* PullInterpolator; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRunAsyncCollision; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCollisionPushCameraNode, SafePosition) == 56, "Offset mismatch for UCollisionPushCameraNode::SafePosition");
static_assert(offsetof(UCollisionPushCameraNode, CustomSafePosition) == 64, "Offset mismatch for UCollisionPushCameraNode::CustomSafePosition");
static_assert(offsetof(UCollisionPushCameraNode, SafePositionOffset) == 80, "Offset mismatch for UCollisionPushCameraNode::SafePositionOffset");
static_assert(offsetof(UCollisionPushCameraNode, SafePositionOffsetSpace) == 120, "Offset mismatch for UCollisionPushCameraNode::SafePositionOffsetSpace");
static_assert(offsetof(UCollisionPushCameraNode, EnableCollision) == 128, "Offset mismatch for UCollisionPushCameraNode::EnableCollision");
static_assert(offsetof(UCollisionPushCameraNode, CollisionSphereRadius) == 144, "Offset mismatch for UCollisionPushCameraNode::CollisionSphereRadius");
static_assert(offsetof(UCollisionPushCameraNode, CollisionChannel) == 160, "Offset mismatch for UCollisionPushCameraNode::CollisionChannel");
static_assert(offsetof(UCollisionPushCameraNode, PushInterpolator) == 168, "Offset mismatch for UCollisionPushCameraNode::PushInterpolator");
static_assert(offsetof(UCollisionPushCameraNode, PullInterpolator) == 176, "Offset mismatch for UCollisionPushCameraNode::PullInterpolator");
static_assert(offsetof(UCollisionPushCameraNode, bRunAsyncCollision) == 184, "Offset mismatch for UCollisionPushCameraNode::bRunAsyncCollision");

// /Script/GameplayCameras.CombinedCameraRigsCameraNode
// Kind: Class; super: CameraNode
class UCombinedCameraRigsCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> CameraRigReferences; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCombinedCameraRigsCameraNode, CameraRigReferences) == 56, "Offset mismatch for UCombinedCameraRigsCameraNode::CameraRigReferences");

// /Script/GameplayCameras.CompositeShakeCameraNode
// Kind: Class; super: ShakeCameraNode
class UCompositeShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Shakes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompositeShakeCameraNode, Shakes) == 56, "Offset mismatch for UCompositeShakeCameraNode::Shakes");

// /Script/GameplayCameras.ControllerGameplayCameraEvaluationComponent
// Kind: Class; super: ActorComponent
class UControllerGameplayCameraEvaluationComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TScriptInterface<void> CameraSystemHost; // 0x00E0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UControllerGameplayCameraEvaluationComponent, CameraSystemHost) == 224, "Offset mismatch for UControllerGameplayCameraEvaluationComponent::CameraSystemHost");

// /Script/GameplayCameras.CriticalDamperValueInterpolator
// Kind: Class; super: CameraValueInterpolator
class UCriticalDamperValueInterpolator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float DampingFactor; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCriticalDamperValueInterpolator, DampingFactor) == 40, "Offset mismatch for UCriticalDamperValueInterpolator::DampingFactor");

// /Script/GameplayCameras.CustomCameraNodeParameterProvider
// Kind: Class; super: Interface
class UCustomCameraNodeParameterProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.DampenPositionCameraNode
// Kind: Class; super: CameraNode
class UDampenPositionCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ForwardDampingFactor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t LateralDampingFactor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t VerticalDampingFactor[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t DampenSpace; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDampenPositionCameraNode, ForwardDampingFactor) == 56, "Offset mismatch for UDampenPositionCameraNode::ForwardDampingFactor");
static_assert(offsetof(UDampenPositionCameraNode, LateralDampingFactor) == 72, "Offset mismatch for UDampenPositionCameraNode::LateralDampingFactor");
static_assert(offsetof(UDampenPositionCameraNode, VerticalDampingFactor) == 88, "Offset mismatch for UDampenPositionCameraNode::VerticalDampingFactor");
static_assert(offsetof(UDampenPositionCameraNode, DampenSpace) == 104, "Offset mismatch for UDampenPositionCameraNode::DampenSpace");

// /Script/GameplayCameras.DampenRotationCameraNode
// Kind: Class; super: CameraNode
class UDampenRotationCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t YawDampingFactor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchDampingFactor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t RollDampingFactor[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDampenRotationCameraNode, YawDampingFactor) == 56, "Offset mismatch for UDampenRotationCameraNode::YawDampingFactor");
static_assert(offsetof(UDampenRotationCameraNode, PitchDampingFactor) == 72, "Offset mismatch for UDampenRotationCameraNode::PitchDampingFactor");
static_assert(offsetof(UDampenRotationCameraNode, RollDampingFactor) == 88, "Offset mismatch for UDampenRotationCameraNode::RollDampingFactor");

// /Script/GameplayCameras.DefaultRootCameraNode
// Kind: Class; super: RootCameraNode
class UDefaultRootCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* BaseLayer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MainLayer; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* GlobalLayer; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* VisualLayer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDefaultRootCameraNode, BaseLayer) == 56, "Offset mismatch for UDefaultRootCameraNode::BaseLayer");
static_assert(offsetof(UDefaultRootCameraNode, MainLayer) == 64, "Offset mismatch for UDefaultRootCameraNode::MainLayer");
static_assert(offsetof(UDefaultRootCameraNode, GlobalLayer) == 72, "Offset mismatch for UDefaultRootCameraNode::GlobalLayer");
static_assert(offsetof(UDefaultRootCameraNode, VisualLayer) == 80, "Offset mismatch for UDefaultRootCameraNode::VisualLayer");

// /Script/GameplayCameras.DollyFramingCameraNode
// Kind: Class; super: BaseFramingCameraNode
class UDollyFramingCameraNode
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t CanMoveLaterally[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t CanMoveVertically[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDollyFramingCameraNode, CanMoveLaterally) == 384, "Offset mismatch for UDollyFramingCameraNode::CanMoveLaterally");
static_assert(offsetof(UDollyFramingCameraNode, CanMoveVertically) == 400, "Offset mismatch for UDollyFramingCameraNode::CanMoveVertically");

// /Script/GameplayCameras.DoubleCameraVariable
// Kind: Class; super: CameraVariableAsset
class UDoubleCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    double DefaultValue; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UDoubleCameraVariable, DefaultValue) == 64, "Offset mismatch for UDoubleCameraVariable::DefaultValue");

// /Script/GameplayCameras.DoubleIIRValueInterpolator
// Kind: Class; super: CameraValueInterpolator
class UDoubleIIRValueInterpolator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float PrimarySpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float IntermediateSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFixedStep; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDoubleIIRValueInterpolator, PrimarySpeed) == 40, "Offset mismatch for UDoubleIIRValueInterpolator::PrimarySpeed");
static_assert(offsetof(UDoubleIIRValueInterpolator, IntermediateSpeed) == 44, "Offset mismatch for UDoubleIIRValueInterpolator::IntermediateSpeed");
static_assert(offsetof(UDoubleIIRValueInterpolator, bUseFixedStep) == 48, "Offset mismatch for UDoubleIIRValueInterpolator::bUseFixedStep");

// /Script/GameplayCameras.DrivenControlRotationCameraNode
// Kind: Class; super: Input2DCameraNode
class UDrivenControlRotationCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDrivenControlRotationCameraNode, bIsEnabled) == 48, "Offset mismatch for UDrivenControlRotationCameraNode::bIsEnabled");

// /Script/GameplayCameras.EasingBlendCameraNode
// Kind: Class; super: SimpleFixedTimeBlendCameraNode
class UEasingBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t BlendType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t BlendTypeDataID[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEasingBlendCameraNode, BlendType) == 72, "Offset mismatch for UEasingBlendCameraNode::BlendType");
static_assert(offsetof(UEasingBlendCameraNode, BlendTypeDataID) == 76, "Offset mismatch for UEasingBlendCameraNode::BlendTypeDataID");

// /Script/GameplayCameras.EnvelopeShakeCameraNode
// Kind: Class; super: ShakeCameraNode
class UEnvelopeShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EaseInTime[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t EaseOutTime[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t TotalTime[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    void* Shake; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEnvelopeShakeCameraNode, EaseInTime) == 56, "Offset mismatch for UEnvelopeShakeCameraNode::EaseInTime");
static_assert(offsetof(UEnvelopeShakeCameraNode, EaseOutTime) == 72, "Offset mismatch for UEnvelopeShakeCameraNode::EaseOutTime");
static_assert(offsetof(UEnvelopeShakeCameraNode, TotalTime) == 88, "Offset mismatch for UEnvelopeShakeCameraNode::TotalTime");
static_assert(offsetof(UEnvelopeShakeCameraNode, Shake) == 104, "Offset mismatch for UEnvelopeShakeCameraNode::Shake");

// /Script/GameplayCameras.FieldOfViewCameraNode
// Kind: Class; super: CameraNode
class UFieldOfViewCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t FieldOfView[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFieldOfViewCameraNode, FieldOfView) == 56, "Offset mismatch for UFieldOfViewCameraNode::FieldOfView");

// /Script/GameplayCameras.FilmbackCameraNode
// Kind: Class; super: CameraNode
class UFilmbackCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SensorWidth[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t SensorHeight[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SensorHorizontalOffset[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t SensorVerticalOffset[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t Overscan[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConstrainAspectRatio[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverrideAspectRatioAxisConstraint[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t AspectRatioAxisConstraint; // 0x00A8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFilmbackCameraNode, SensorWidth) == 56, "Offset mismatch for UFilmbackCameraNode::SensorWidth");
static_assert(offsetof(UFilmbackCameraNode, SensorHeight) == 72, "Offset mismatch for UFilmbackCameraNode::SensorHeight");
static_assert(offsetof(UFilmbackCameraNode, SensorHorizontalOffset) == 88, "Offset mismatch for UFilmbackCameraNode::SensorHorizontalOffset");
static_assert(offsetof(UFilmbackCameraNode, SensorVerticalOffset) == 104, "Offset mismatch for UFilmbackCameraNode::SensorVerticalOffset");
static_assert(offsetof(UFilmbackCameraNode, Overscan) == 120, "Offset mismatch for UFilmbackCameraNode::Overscan");
static_assert(offsetof(UFilmbackCameraNode, ConstrainAspectRatio) == 136, "Offset mismatch for UFilmbackCameraNode::ConstrainAspectRatio");
static_assert(offsetof(UFilmbackCameraNode, OverrideAspectRatioAxisConstraint) == 152, "Offset mismatch for UFilmbackCameraNode::OverrideAspectRatioAxisConstraint");
static_assert(offsetof(UFilmbackCameraNode, AspectRatioAxisConstraint) == 168, "Offset mismatch for UFilmbackCameraNode::AspectRatioAxisConstraint");

// /Script/GameplayCameras.FirstPersonCameraNode
// Kind: Class; super: CameraNode
class UFirstPersonCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EnableFirstPerson[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t FirstPersonFieldOfView[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t FirstPersonScale[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnableFirstPersonFieldOfView; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFirstPersonScale; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFirstPersonCameraNode, EnableFirstPerson) == 56, "Offset mismatch for UFirstPersonCameraNode::EnableFirstPerson");
static_assert(offsetof(UFirstPersonCameraNode, FirstPersonFieldOfView) == 72, "Offset mismatch for UFirstPersonCameraNode::FirstPersonFieldOfView");
static_assert(offsetof(UFirstPersonCameraNode, FirstPersonScale) == 88, "Offset mismatch for UFirstPersonCameraNode::FirstPersonScale");
static_assert(offsetof(UFirstPersonCameraNode, bEnableFirstPersonFieldOfView) == 104, "Offset mismatch for UFirstPersonCameraNode::bEnableFirstPersonFieldOfView");
static_assert(offsetof(UFirstPersonCameraNode, bEnableFirstPersonScale) == 105, "Offset mismatch for UFirstPersonCameraNode::bEnableFirstPersonScale");

// /Script/GameplayCameras.FixedTestCameraDirector
// Kind: Class; super: CameraDirector
class UFixedTestCameraDirector
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> CameraRigs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraRigNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFixedTestCameraDirector, CameraRigs) == 72, "Offset mismatch for UFixedTestCameraDirector::CameraRigs");
static_assert(offsetof(UFixedTestCameraDirector, CameraRigNames) == 88, "Offset mismatch for UFixedTestCameraDirector::CameraRigNames");

// /Script/GameplayCameras.FloatCameraVariable
// Kind: Class; super: CameraVariableAsset
class UFloatCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float DefaultValue; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFloatCameraVariable, DefaultValue) == 64, "Offset mismatch for UFloatCameraVariable::DefaultValue");

// /Script/GameplayCameras.GameplayCameraActor
// Kind: Class; super: GameplayCameraActorBase
class UGameplayCameraActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CameraComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* OutputCameraComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCameraActor, CameraComponent) == 624, "Offset mismatch for UGameplayCameraActor::CameraComponent");
static_assert(offsetof(UGameplayCameraActor, OutputCameraComponent) == 632, "Offset mismatch for UGameplayCameraActor::OutputCameraComponent");

// /Script/GameplayCameras.GameplayCameraActorBase
// Kind: Class; super: Actor
class UGameplayCameraActorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayCameraActorBase, PrimaryActorTick) == 40, "Offset mismatch for UGameplayCameraActorBase::PrimaryActorTick");
static_assert(offsetof(UGameplayCameraActorBase, bAlwaysRelevant) == 88, "Offset mismatch for UGameplayCameraActorBase::bAlwaysRelevant");
static_assert(offsetof(UGameplayCameraActorBase, bExchangedRoles) == 89, "Offset mismatch for UGameplayCameraActorBase::bExchangedRoles");
static_assert(offsetof(UGameplayCameraActorBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UGameplayCameraActorBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UGameplayCameraActorBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UGameplayCameraActorBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UGameplayCameraActorBase, bActorEnableCollision) == 93, "Offset mismatch for UGameplayCameraActorBase::bActorEnableCollision");
static_assert(offsetof(UGameplayCameraActorBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UGameplayCameraActorBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UGameplayCameraActorBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UGameplayCameraActorBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UGameplayCameraActorBase, RemoteRole) == 96, "Offset mismatch for UGameplayCameraActorBase::RemoteRole");
static_assert(offsetof(UGameplayCameraActorBase, InitialLifeSpan) == 100, "Offset mismatch for UGameplayCameraActorBase::InitialLifeSpan");
static_assert(offsetof(UGameplayCameraActorBase, CustomTimeDilation) == 104, "Offset mismatch for UGameplayCameraActorBase::CustomTimeDilation");
static_assert(offsetof(UGameplayCameraActorBase, RayTracingGroupId) == 108, "Offset mismatch for UGameplayCameraActorBase::RayTracingGroupId");
static_assert(offsetof(UGameplayCameraActorBase, AttachmentReplication) == 112, "Offset mismatch for UGameplayCameraActorBase::AttachmentReplication");
static_assert(offsetof(UGameplayCameraActorBase, ReplicatedMovement) == 208, "Offset mismatch for UGameplayCameraActorBase::ReplicatedMovement");
static_assert(offsetof(UGameplayCameraActorBase, Owner) == 344, "Offset mismatch for UGameplayCameraActorBase::Owner");
static_assert(offsetof(UGameplayCameraActorBase, NetDriverName) == 352, "Offset mismatch for UGameplayCameraActorBase::NetDriverName");
static_assert(offsetof(UGameplayCameraActorBase, Role) == 356, "Offset mismatch for UGameplayCameraActorBase::Role");
static_assert(offsetof(UGameplayCameraActorBase, NetDormancy) == 357, "Offset mismatch for UGameplayCameraActorBase::NetDormancy");
static_assert(offsetof(UGameplayCameraActorBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UGameplayCameraActorBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(UGameplayCameraActorBase, AutoReceiveInput) == 359, "Offset mismatch for UGameplayCameraActorBase::AutoReceiveInput");
static_assert(offsetof(UGameplayCameraActorBase, InputPriority) == 360, "Offset mismatch for UGameplayCameraActorBase::InputPriority");
static_assert(offsetof(UGameplayCameraActorBase, InputComponent) == 368, "Offset mismatch for UGameplayCameraActorBase::InputComponent");
static_assert(offsetof(UGameplayCameraActorBase, NetTag) == 376, "Offset mismatch for UGameplayCameraActorBase::NetTag");
static_assert(offsetof(UGameplayCameraActorBase, NetCullDistanceSquared) == 380, "Offset mismatch for UGameplayCameraActorBase::NetCullDistanceSquared");
static_assert(offsetof(UGameplayCameraActorBase, NetUpdateFrequency) == 384, "Offset mismatch for UGameplayCameraActorBase::NetUpdateFrequency");
static_assert(offsetof(UGameplayCameraActorBase, MinNetUpdateFrequency) == 388, "Offset mismatch for UGameplayCameraActorBase::MinNetUpdateFrequency");
static_assert(offsetof(UGameplayCameraActorBase, NetPriority) == 392, "Offset mismatch for UGameplayCameraActorBase::NetPriority");
static_assert(offsetof(UGameplayCameraActorBase, PhysicsReplicationMode) == 396, "Offset mismatch for UGameplayCameraActorBase::PhysicsReplicationMode");
static_assert(offsetof(UGameplayCameraActorBase, Instigator) == 408, "Offset mismatch for UGameplayCameraActorBase::Instigator");
static_assert(offsetof(UGameplayCameraActorBase, Children) == 416, "Offset mismatch for UGameplayCameraActorBase::Children");
static_assert(offsetof(UGameplayCameraActorBase, RootComponent) == 432, "Offset mismatch for UGameplayCameraActorBase::RootComponent");
static_assert(offsetof(UGameplayCameraActorBase, HLODLayer) == 448, "Offset mismatch for UGameplayCameraActorBase::HLODLayer");
static_assert(offsetof(UGameplayCameraActorBase, Layers) == 456, "Offset mismatch for UGameplayCameraActorBase::Layers");
static_assert(offsetof(UGameplayCameraActorBase, ParentComponent) == 472, "Offset mismatch for UGameplayCameraActorBase::ParentComponent");
static_assert(offsetof(UGameplayCameraActorBase, Tags) == 496, "Offset mismatch for UGameplayCameraActorBase::Tags");
static_assert(offsetof(UGameplayCameraActorBase, OnTakeAnyDamage) == 512, "Offset mismatch for UGameplayCameraActorBase::OnTakeAnyDamage");
static_assert(offsetof(UGameplayCameraActorBase, OnTakePointDamage) == 513, "Offset mismatch for UGameplayCameraActorBase::OnTakePointDamage");
static_assert(offsetof(UGameplayCameraActorBase, OnTakeRadialDamage) == 514, "Offset mismatch for UGameplayCameraActorBase::OnTakeRadialDamage");
static_assert(offsetof(UGameplayCameraActorBase, OnActorBeginOverlap) == 515, "Offset mismatch for UGameplayCameraActorBase::OnActorBeginOverlap");
static_assert(offsetof(UGameplayCameraActorBase, OnActorEndOverlap) == 516, "Offset mismatch for UGameplayCameraActorBase::OnActorEndOverlap");
static_assert(offsetof(UGameplayCameraActorBase, OnBeginCursorOver) == 517, "Offset mismatch for UGameplayCameraActorBase::OnBeginCursorOver");
static_assert(offsetof(UGameplayCameraActorBase, OnEndCursorOver) == 518, "Offset mismatch for UGameplayCameraActorBase::OnEndCursorOver");
static_assert(offsetof(UGameplayCameraActorBase, OnClicked) == 519, "Offset mismatch for UGameplayCameraActorBase::OnClicked");
static_assert(offsetof(UGameplayCameraActorBase, OnReleased) == 520, "Offset mismatch for UGameplayCameraActorBase::OnReleased");
static_assert(offsetof(UGameplayCameraActorBase, OnInputTouchBegin) == 521, "Offset mismatch for UGameplayCameraActorBase::OnInputTouchBegin");
static_assert(offsetof(UGameplayCameraActorBase, OnInputTouchEnd) == 522, "Offset mismatch for UGameplayCameraActorBase::OnInputTouchEnd");
static_assert(offsetof(UGameplayCameraActorBase, OnInputTouchEnter) == 523, "Offset mismatch for UGameplayCameraActorBase::OnInputTouchEnter");
static_assert(offsetof(UGameplayCameraActorBase, OnInputTouchLeave) == 524, "Offset mismatch for UGameplayCameraActorBase::OnInputTouchLeave");
static_assert(offsetof(UGameplayCameraActorBase, OnActorHit) == 525, "Offset mismatch for UGameplayCameraActorBase::OnActorHit");
static_assert(offsetof(UGameplayCameraActorBase, OnDestroyed) == 526, "Offset mismatch for UGameplayCameraActorBase::OnDestroyed");
static_assert(offsetof(UGameplayCameraActorBase, OnEndPlay) == 527, "Offset mismatch for UGameplayCameraActorBase::OnEndPlay");
static_assert(offsetof(UGameplayCameraActorBase, InstanceComponents) == 592, "Offset mismatch for UGameplayCameraActorBase::InstanceComponents");
static_assert(offsetof(UGameplayCameraActorBase, BlueprintCreatedComponents) == 608, "Offset mismatch for UGameplayCameraActorBase::BlueprintCreatedComponents");

// /Script/GameplayCameras.GameplayCameraComponent
// Kind: Class; super: GameplayCameraComponentBase
class UGameplayCameraComponent
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    std::uint8_t CameraReference[0x38]; // 0x0290 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedParameterOverrides[0x10]; // 0x02C8 (Size: 0x10, Type: StructProperty)
    void* Camera; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCameraComponent, CameraReference) == 656, "Offset mismatch for UGameplayCameraComponent::CameraReference");
static_assert(offsetof(UGameplayCameraComponent, CachedParameterOverrides) == 712, "Offset mismatch for UGameplayCameraComponent::CachedParameterOverrides");
static_assert(offsetof(UGameplayCameraComponent, Camera) == 728, "Offset mismatch for UGameplayCameraComponent::Camera");

// /Script/GameplayCameras.GameplayCameraComponentBase
// Kind: Class; super: SceneComponent
class UGameplayCameraComponentBase
{
public:
    std::uint8_t Pad_0000[0x258]; // 0x0000
    std::uint8_t DefaultPlayer; // 0x0258 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRunStandaloneCameraSystem; // 0x0259 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetControlRotationWhenViewTarget; // 0x025A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackMode; // 0x025B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x025C
    void* OutputCameraComponent; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsOwnedOutputCameraComponent; // 0x0268 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayCameraComponentBase, DefaultPlayer) == 600, "Offset mismatch for UGameplayCameraComponentBase::DefaultPlayer");
static_assert(offsetof(UGameplayCameraComponentBase, bRunStandaloneCameraSystem) == 601, "Offset mismatch for UGameplayCameraComponentBase::bRunStandaloneCameraSystem");
static_assert(offsetof(UGameplayCameraComponentBase, bSetControlRotationWhenViewTarget) == 602, "Offset mismatch for UGameplayCameraComponentBase::bSetControlRotationWhenViewTarget");
static_assert(offsetof(UGameplayCameraComponentBase, bPlaybackMode) == 603, "Offset mismatch for UGameplayCameraComponentBase::bPlaybackMode");
static_assert(offsetof(UGameplayCameraComponentBase, OutputCameraComponent) == 608, "Offset mismatch for UGameplayCameraComponentBase::OutputCameraComponent");
static_assert(offsetof(UGameplayCameraComponentBase, bIsOwnedOutputCameraComponent) == 616, "Offset mismatch for UGameplayCameraComponentBase::bIsOwnedOutputCameraComponent");

// /Script/GameplayCameras.GameplayCameraParameterSetterComponent
// Kind: Class; super: ActorComponent
class UGameplayCameraParameterSetterComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CameraRigReference[0x130]; // 0x00C0 (Size: 0x130, Type: StructProperty)
    float BlendInTime; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendType; // 0x01F8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UGameplayCameraParameterSetterComponent, CameraRigReference) == 192, "Offset mismatch for UGameplayCameraParameterSetterComponent::CameraRigReference");
static_assert(offsetof(UGameplayCameraParameterSetterComponent, BlendInTime) == 496, "Offset mismatch for UGameplayCameraParameterSetterComponent::BlendInTime");
static_assert(offsetof(UGameplayCameraParameterSetterComponent, BlendOutTime) == 500, "Offset mismatch for UGameplayCameraParameterSetterComponent::BlendOutTime");
static_assert(offsetof(UGameplayCameraParameterSetterComponent, BlendType) == 504, "Offset mismatch for UGameplayCameraParameterSetterComponent::BlendType");

// /Script/GameplayCameras.GameplayCameraRigActor
// Kind: Class; super: GameplayCameraActorBase
class UGameplayCameraRigActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CameraRigComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* OutputCameraComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCameraRigActor, CameraRigComponent) == 624, "Offset mismatch for UGameplayCameraRigActor::CameraRigComponent");
static_assert(offsetof(UGameplayCameraRigActor, OutputCameraComponent) == 632, "Offset mismatch for UGameplayCameraRigActor::OutputCameraComponent");

// /Script/GameplayCameras.GameplayCameraRigComponent
// Kind: Class; super: GameplayCameraComponentBase
class UGameplayCameraRigComponent
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    std::uint8_t CameraRigReference[0x130]; // 0x0290 (Size: 0x130, Type: StructProperty)
    void* GeneratedCameraAsset; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedParameterOverrides[0x1]; // 0x03C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayCameraRigComponent, CameraRigReference) == 656, "Offset mismatch for UGameplayCameraRigComponent::CameraRigReference");
static_assert(offsetof(UGameplayCameraRigComponent, GeneratedCameraAsset) == 960, "Offset mismatch for UGameplayCameraRigComponent::GeneratedCameraAsset");
static_assert(offsetof(UGameplayCameraRigComponent, CachedParameterOverrides) == 968, "Offset mismatch for UGameplayCameraRigComponent::CachedParameterOverrides");

// /Script/GameplayCameras.GameplayCameraSystemActor
// Kind: Class; super: Actor
class UGameplayCameraSystemActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CameraSystemComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCameraSystemActor, CameraSystemComponent) == 624, "Offset mismatch for UGameplayCameraSystemActor::CameraSystemComponent");

// /Script/GameplayCameras.GameplayCameraSystemComponent
// Kind: Class; super: SceneComponent
class UGameplayCameraSystemComponent
{
public:
    std::uint8_t Pad_0000[0x258]; // 0x0000
    std::uint8_t AutoActivateForPlayer; // 0x0258 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bSetPlayerControllerRotation; // 0x0259 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x025A
    TWeakObjectPtr<void> WeakPlayerController; // 0x025C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGameplayCameraSystemComponent, AutoActivateForPlayer) == 600, "Offset mismatch for UGameplayCameraSystemComponent::AutoActivateForPlayer");
static_assert(offsetof(UGameplayCameraSystemComponent, bSetPlayerControllerRotation) == 601, "Offset mismatch for UGameplayCameraSystemComponent::bSetPlayerControllerRotation");
static_assert(offsetof(UGameplayCameraSystemComponent, WeakPlayerController) == 604, "Offset mismatch for UGameplayCameraSystemComponent::WeakPlayerController");

// /Script/GameplayCameras.GameplayCameraSystemHost
// Kind: Class; super: Interface
class UGameplayCameraSystemHost
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.GameplayCamerasPlayerCameraManager
// Kind: Class; super: PlayerCameraManager
class UGameplayCamerasPlayerCameraManager
{
public:
    std::uint8_t Pad_0000[0x28F8]; // 0x0000
    std::uint8_t ViewRotationMode; // 0x28F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x28F9
    std::uint8_t bOverrideViewRotationMode; // 0x28FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x28FD
    void* OriginalCameraManager; // 0x2900 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCamerasPlayerCameraManager, ViewRotationMode) == 10488, "Offset mismatch for UGameplayCamerasPlayerCameraManager::ViewRotationMode");
static_assert(offsetof(UGameplayCamerasPlayerCameraManager, bOverrideViewRotationMode) == 10492, "Offset mismatch for UGameplayCamerasPlayerCameraManager::bOverrideViewRotationMode");
static_assert(offsetof(UGameplayCamerasPlayerCameraManager, OriginalCameraManager) == 10496, "Offset mismatch for UGameplayCamerasPlayerCameraManager::OriginalCameraManager");

// /Script/GameplayCameras.GameplayCamerasSettings
// Kind: Class; super: DeveloperSettings
class UGameplayCamerasSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bAutoBuildInPIE; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t DefaultViewRotationMode; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    std::int32_t CombinedCameraRigNumThreshold; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxUsageSearchDistance; // 0x003C (Size: 0x4, Type: IntProperty)
    double DefaultIKAimingAngleTolerance; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double DefaultIKAimingDistanceTolerance; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DefaultIKAimingMaxIterations; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0051
    double DefaultIKAimingMinDistance; // 0x0058 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UGameplayCamerasSettings, bAutoBuildInPIE) == 48, "Offset mismatch for UGameplayCamerasSettings::bAutoBuildInPIE");
static_assert(offsetof(UGameplayCamerasSettings, DefaultViewRotationMode) == 52, "Offset mismatch for UGameplayCamerasSettings::DefaultViewRotationMode");
static_assert(offsetof(UGameplayCamerasSettings, CombinedCameraRigNumThreshold) == 56, "Offset mismatch for UGameplayCamerasSettings::CombinedCameraRigNumThreshold");
static_assert(offsetof(UGameplayCamerasSettings, MaxUsageSearchDistance) == 60, "Offset mismatch for UGameplayCamerasSettings::MaxUsageSearchDistance");
static_assert(offsetof(UGameplayCamerasSettings, DefaultIKAimingAngleTolerance) == 64, "Offset mismatch for UGameplayCamerasSettings::DefaultIKAimingAngleTolerance");
static_assert(offsetof(UGameplayCamerasSettings, DefaultIKAimingDistanceTolerance) == 72, "Offset mismatch for UGameplayCamerasSettings::DefaultIKAimingDistanceTolerance");
static_assert(offsetof(UGameplayCamerasSettings, DefaultIKAimingMaxIterations) == 80, "Offset mismatch for UGameplayCamerasSettings::DefaultIKAimingMaxIterations");
static_assert(offsetof(UGameplayCamerasSettings, DefaultIKAimingMinDistance) == 88, "Offset mismatch for UGameplayCamerasSettings::DefaultIKAimingMinDistance");

// /Script/GameplayCameras.GameplayControlRotationComponent
// Kind: Class; super: ActorComponent
class UGameplayControlRotationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AxisActions; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    float AxisActionAngularSpeedThreshold; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float AxisActionMagnitudeThreshold; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoActivateForPlayer; // 0x00D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    void* PlayerController; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> CameraSystemHost; // 0x00E8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UGameplayControlRotationComponent, AxisActions) == 192, "Offset mismatch for UGameplayControlRotationComponent::AxisActions");
static_assert(offsetof(UGameplayControlRotationComponent, AxisActionAngularSpeedThreshold) == 208, "Offset mismatch for UGameplayControlRotationComponent::AxisActionAngularSpeedThreshold");
static_assert(offsetof(UGameplayControlRotationComponent, AxisActionMagnitudeThreshold) == 212, "Offset mismatch for UGameplayControlRotationComponent::AxisActionMagnitudeThreshold");
static_assert(offsetof(UGameplayControlRotationComponent, AutoActivateForPlayer) == 216, "Offset mismatch for UGameplayControlRotationComponent::AutoActivateForPlayer");
static_assert(offsetof(UGameplayControlRotationComponent, PlayerController) == 224, "Offset mismatch for UGameplayControlRotationComponent::PlayerController");
static_assert(offsetof(UGameplayControlRotationComponent, CameraSystemHost) == 232, "Offset mismatch for UGameplayControlRotationComponent::CameraSystemHost");

// /Script/GameplayCameras.GameplayTagTransitionCondition
// Kind: Class; super: CameraRigTransitionCondition
class UGameplayTagTransitionCondition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PreviousGameplayTagQuery[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t NextGameplayTagQuery[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayTagTransitionCondition, PreviousGameplayTagQuery) == 48, "Offset mismatch for UGameplayTagTransitionCondition::PreviousGameplayTagQuery");
static_assert(offsetof(UGameplayTagTransitionCondition, NextGameplayTagQuery) == 120, "Offset mismatch for UGameplayTagTransitionCondition::NextGameplayTagQuery");

// /Script/GameplayCameras.HasCameraBuildStatus
// Kind: Class; super: Interface
class UHasCameraBuildStatus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.IIRValueInterpolator
// Kind: Class; super: CameraValueInterpolator
class UIIRValueInterpolator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Speed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFixedStep; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UIIRValueInterpolator, Speed) == 40, "Offset mismatch for UIIRValueInterpolator::Speed");
static_assert(offsetof(UIIRValueInterpolator, bUseFixedStep) == 44, "Offset mismatch for UIIRValueInterpolator::bUseFixedStep");

// /Script/GameplayCameras.Input1DCameraNode
// Kind: Class; super: CameraNode
class UInput1DCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInput1DCameraNode, bIsEnabled) == 48, "Offset mismatch for UInput1DCameraNode::bIsEnabled");

// /Script/GameplayCameras.Input2DCameraNode
// Kind: Class; super: CameraNode
class UInput2DCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInput2DCameraNode, bIsEnabled) == 48, "Offset mismatch for UInput2DCameraNode::bIsEnabled");

// /Script/GameplayCameras.InputAccumulator2DCameraNode
// Kind: Class; super: CameraRigInput2DSlot
class UInputAccumulator2DCameraNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* InputSlot; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputAccumulator2DCameraNode, InputSlot) == 240, "Offset mismatch for UInputAccumulator2DCameraNode::InputSlot");

// /Script/GameplayCameras.InputAxisBinding2DCameraNode
// Kind: Class; super: CameraRigInput2DSlot
class UInputAxisBinding2DCameraNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TArray<void*> AxisActions; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Multiplier[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsAccumulated; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputAxisBinding2DCameraNode, AxisActions) == 240, "Offset mismatch for UInputAxisBinding2DCameraNode::AxisActions");
static_assert(offsetof(UInputAxisBinding2DCameraNode, Multiplier) == 256, "Offset mismatch for UInputAxisBinding2DCameraNode::Multiplier");
static_assert(offsetof(UInputAxisBinding2DCameraNode, bIsAccumulated) == 288, "Offset mismatch for UInputAxisBinding2DCameraNode::bIsAccumulated");

// /Script/GameplayCameras.Integer32CameraVariable
// Kind: Class; super: CameraVariableAsset
class UInteger32CameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::int32_t DefaultValue; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UInteger32CameraVariable, DefaultValue) == 64, "Offset mismatch for UInteger32CameraVariable::DefaultValue");

// /Script/GameplayCameras.IsCameraRigTransitionCondition
// Kind: Class; super: CameraRigTransitionCondition
class UIsCameraRigTransitionCondition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* PreviousCameraRig; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* NextCameraRig; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIsCameraRigTransitionCondition, PreviousCameraRig) == 48, "Offset mismatch for UIsCameraRigTransitionCondition::PreviousCameraRig");
static_assert(offsetof(UIsCameraRigTransitionCondition, NextCameraRig) == 56, "Offset mismatch for UIsCameraRigTransitionCondition::NextCameraRig");

// /Script/GameplayCameras.LensParametersCameraNode
// Kind: Class; super: CameraNode
class ULensParametersCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t FocalLength[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t Aperture[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t FocusDistance[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnablePhysicalCamera[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnableFocalLength; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAperture; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFocusDistance; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULensParametersCameraNode, FocalLength) == 56, "Offset mismatch for ULensParametersCameraNode::FocalLength");
static_assert(offsetof(ULensParametersCameraNode, Aperture) == 72, "Offset mismatch for ULensParametersCameraNode::Aperture");
static_assert(offsetof(ULensParametersCameraNode, FocusDistance) == 88, "Offset mismatch for ULensParametersCameraNode::FocusDistance");
static_assert(offsetof(ULensParametersCameraNode, EnablePhysicalCamera) == 104, "Offset mismatch for ULensParametersCameraNode::EnablePhysicalCamera");
static_assert(offsetof(ULensParametersCameraNode, bEnableFocalLength) == 120, "Offset mismatch for ULensParametersCameraNode::bEnableFocalLength");
static_assert(offsetof(ULensParametersCameraNode, bEnableAperture) == 121, "Offset mismatch for ULensParametersCameraNode::bEnableAperture");
static_assert(offsetof(ULensParametersCameraNode, bEnableFocusDistance) == 122, "Offset mismatch for ULensParametersCameraNode::bEnableFocusDistance");

// /Script/GameplayCameras.LinearBlendCameraNode
// Kind: Class; super: SimpleFixedTimeBlendCameraNode
class ULinearBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BlendTime[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULinearBlendCameraNode, BlendTime) == 56, "Offset mismatch for ULinearBlendCameraNode::BlendTime");

// /Script/GameplayCameras.LocationRotationBlendCameraNode
// Kind: Class; super: BlendCameraNode
class ULocationRotationBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* LocationBlend; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* RotationBlend; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* OtherBlend; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULocationRotationBlendCameraNode, LocationBlend) == 56, "Offset mismatch for ULocationRotationBlendCameraNode::LocationBlend");
static_assert(offsetof(ULocationRotationBlendCameraNode, RotationBlend) == 64, "Offset mismatch for ULocationRotationBlendCameraNode::RotationBlend");
static_assert(offsetof(ULocationRotationBlendCameraNode, OtherBlend) == 72, "Offset mismatch for ULocationRotationBlendCameraNode::OtherBlend");

// /Script/GameplayCameras.MovieSceneCameraFramingZonePropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneCameraFramingZonePropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCameraFramingZonePropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneCameraFramingZonePropertySystem::InstantiatorSystem");

// /Script/GameplayCameras.MovieSceneCameraFramingZoneSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCameraFramingZoneSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t LeftMarginCurve[0xD8]; // 0x0148 (Size: 0xD8, Type: StructProperty)
    std::uint8_t TopMarginCurve[0xD8]; // 0x0220 (Size: 0xD8, Type: StructProperty)
    std::uint8_t RightMarginCurve[0xD8]; // 0x02F8 (Size: 0xD8, Type: StructProperty)
    std::uint8_t BottomMarginCurve[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneCameraFramingZoneSection, LeftMarginCurve) == 328, "Offset mismatch for UMovieSceneCameraFramingZoneSection::LeftMarginCurve");
static_assert(offsetof(UMovieSceneCameraFramingZoneSection, TopMarginCurve) == 544, "Offset mismatch for UMovieSceneCameraFramingZoneSection::TopMarginCurve");
static_assert(offsetof(UMovieSceneCameraFramingZoneSection, RightMarginCurve) == 760, "Offset mismatch for UMovieSceneCameraFramingZoneSection::RightMarginCurve");
static_assert(offsetof(UMovieSceneCameraFramingZoneSection, BottomMarginCurve) == 976, "Offset mismatch for UMovieSceneCameraFramingZoneSection::BottomMarginCurve");

// /Script/GameplayCameras.MovieSceneCameraFramingZoneTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneCameraFramingZoneTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCameraFramingZoneTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneCameraFramingZoneTrack::SectionToKey");
static_assert(offsetof(UMovieSceneCameraFramingZoneTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneCameraFramingZoneTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneCameraFramingZoneTrack, Sections) == 272, "Offset mismatch for UMovieSceneCameraFramingZoneTrack::Sections");

// /Script/GameplayCameras.ObjectTreeGraphComment
// Kind: Class; super: Object
class UObjectTreeGraphComment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.ObjectTreeGraphObject
// Kind: Class; super: Interface
class UObjectTreeGraphObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.ObjectTreeGraphRootObject
// Kind: Class; super: Interface
class UObjectTreeGraphRootObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.OcclusionMaterialCameraNode
// Kind: Class; super: CameraNode
class UOcclusionMaterialCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OcclusionTransparencyMaterial; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OcclusionSphereRadius[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t OcclusionChannel; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t OcclusionTargetPosition; // 0x0051 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OcclusionTargetOffsetSpace; // 0x0052 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0053
    std::uint8_t OcclusionTargetOffset[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionTransparencyMaterial) == 56, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionTransparencyMaterial");
static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionSphereRadius) == 64, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionSphereRadius");
static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionChannel) == 80, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionChannel");
static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionTargetPosition) == 81, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionTargetPosition");
static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionTargetOffsetSpace) == 82, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionTargetOffsetSpace");
static_assert(offsetof(UOcclusionMaterialCameraNode, OcclusionTargetOffset) == 88, "Offset mismatch for UOcclusionMaterialCameraNode::OcclusionTargetOffset");

// /Script/GameplayCameras.OffsetCameraNode
// Kind: Class; super: CameraNode
class UOffsetCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t TranslationOffset[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationOffset[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffsetSpace; // 0x0088 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOffsetCameraNode, TranslationOffset) == 56, "Offset mismatch for UOffsetCameraNode::TranslationOffset");
static_assert(offsetof(UOffsetCameraNode, RotationOffset) == 96, "Offset mismatch for UOffsetCameraNode::RotationOffset");
static_assert(offsetof(UOffsetCameraNode, OffsetSpace) == 136, "Offset mismatch for UOffsetCameraNode::OffsetSpace");

// /Script/GameplayCameras.OrbitBlendCameraNode
// Kind: Class; super: BlendCameraNode
class UOrbitBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DrivingBlend; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOrbitBlendCameraNode, DrivingBlend) == 56, "Offset mismatch for UOrbitBlendCameraNode::DrivingBlend");

// /Script/GameplayCameras.OrthographicCameraNode
// Kind: Class; super: CameraNode
class UOrthographicCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EnableOrthographicMode[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t OrthographicWidth[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOrthographicCameraNode, EnableOrthographicMode) == 56, "Offset mismatch for UOrthographicCameraNode::EnableOrthographicMode");
static_assert(offsetof(UOrthographicCameraNode, OrthographicWidth) == 72, "Offset mismatch for UOrthographicCameraNode::OrthographicWidth");

// /Script/GameplayCameras.PanningFramingCameraNode
// Kind: Class; super: BaseFramingCameraNode
class UPanningFramingCameraNode
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t CanPanLaterally[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t CanPanVertically[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPanningFramingCameraNode, CanPanLaterally) == 384, "Offset mismatch for UPanningFramingCameraNode::CanPanLaterally");
static_assert(offsetof(UPanningFramingCameraNode, CanPanVertically) == 400, "Offset mismatch for UPanningFramingCameraNode::CanPanVertically");

// /Script/GameplayCameras.PerlinNoiseLocationShakeCameraNode
// Kind: Class; super: ShakeCameraNode
class UPerlinNoiseLocationShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AmplitudeMultiplier[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrequencyMultiplier[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t Octaves[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t X[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t Z[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, AmplitudeMultiplier) == 56, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::AmplitudeMultiplier");
static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, FrequencyMultiplier) == 72, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::FrequencyMultiplier");
static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, Octaves) == 88, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::Octaves");
static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, X) == 104, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::X");
static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, Y) == 112, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::Y");
static_assert(offsetof(UPerlinNoiseLocationShakeCameraNode, Z) == 120, "Offset mismatch for UPerlinNoiseLocationShakeCameraNode::Z");

// /Script/GameplayCameras.PerlinNoiseRotationShakeCameraNode
// Kind: Class; super: ShakeCameraNode
class UPerlinNoiseRotationShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AmplitudeMultiplier[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrequencyMultiplier[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t Octaves[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t Yaw[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t Pitch[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t Roll[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, AmplitudeMultiplier) == 56, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::AmplitudeMultiplier");
static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, FrequencyMultiplier) == 72, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::FrequencyMultiplier");
static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, Octaves) == 88, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::Octaves");
static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, Yaw) == 104, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::Yaw");
static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, Pitch) == 112, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::Pitch");
static_assert(offsetof(UPerlinNoiseRotationShakeCameraNode, Roll) == 120, "Offset mismatch for UPerlinNoiseRotationShakeCameraNode::Roll");

// /Script/GameplayCameras.PopBlendCameraNode
// Kind: Class; super: BlendCameraNode
class UPopBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPopBlendCameraNode, bIsEnabled) == 48, "Offset mismatch for UPopBlendCameraNode::bIsEnabled");

// /Script/GameplayCameras.PopValueInterpolator
// Kind: Class; super: CameraValueInterpolator
class UPopValueInterpolator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayCameras.PostProcessCameraNode
// Kind: Class; super: CameraNode
class UPostProcessCameraNode
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t PostProcessSettings[0x7B0]; // 0x0040 (Size: 0x7B0, Type: StructProperty)
    std::uint8_t PostProcessSettingsDataID[0x1]; // 0x07F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPostProcessCameraNode, PostProcessSettings) == 64, "Offset mismatch for UPostProcessCameraNode::PostProcessSettings");
static_assert(offsetof(UPostProcessCameraNode, PostProcessSettingsDataID) == 2032, "Offset mismatch for UPostProcessCameraNode::PostProcessSettingsDataID");

// /Script/GameplayCameras.PriorityQueueCameraDirector
// Kind: Class; super: CameraDirector
class UPriorityQueueCameraDirector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CameraRigProxyRedirectTable[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRunInEditor; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* CameraRigProxyTable; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPriorityQueueCameraDirector, CameraRigProxyRedirectTable) == 40, "Offset mismatch for UPriorityQueueCameraDirector::CameraRigProxyRedirectTable");
static_assert(offsetof(UPriorityQueueCameraDirector, bRunInEditor) == 56, "Offset mismatch for UPriorityQueueCameraDirector::bRunInEditor");
static_assert(offsetof(UPriorityQueueCameraDirector, CameraRigProxyTable) == 64, "Offset mismatch for UPriorityQueueCameraDirector::CameraRigProxyTable");

// /Script/GameplayCameras.RawInputAxisBinding2DCameraNode
// Kind: Class; super: Input2DCameraNode
class URawInputAxisBinding2DCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> AxisActions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Multiplier[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URawInputAxisBinding2DCameraNode, AxisActions) == 56, "Offset mismatch for URawInputAxisBinding2DCameraNode::AxisActions");
static_assert(offsetof(URawInputAxisBinding2DCameraNode, Multiplier) == 72, "Offset mismatch for URawInputAxisBinding2DCameraNode::Multiplier");

// /Script/GameplayCameras.RootCameraNode
// Kind: Class; super: CameraNode
class URootCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URootCameraNode, bIsEnabled) == 48, "Offset mismatch for URootCameraNode::bIsEnabled");

// /Script/GameplayCameras.Rotator3dCameraVariable
// Kind: Class; super: CameraVariableAsset
class URotator3dCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URotator3dCameraVariable, DefaultValue) == 64, "Offset mismatch for URotator3dCameraVariable::DefaultValue");

// /Script/GameplayCameras.Rotator3fCameraVariable
// Kind: Class; super: CameraVariableAsset
class URotator3fCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URotator3fCameraVariable, DefaultValue) == 64, "Offset mismatch for URotator3fCameraVariable::DefaultValue");

// /Script/GameplayCameras.SetLocationCameraNode
// Kind: Class; super: CameraNode
class USetLocationCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Location[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffsetSpace; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USetLocationCameraNode, Location) == 56, "Offset mismatch for USetLocationCameraNode::Location");
static_assert(offsetof(USetLocationCameraNode, OffsetSpace) == 96, "Offset mismatch for USetLocationCameraNode::OffsetSpace");

// /Script/GameplayCameras.SetRotationCameraNode
// Kind: Class; super: CameraNode
class USetRotationCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Rotation[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffsetSpace; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USetRotationCameraNode, Rotation) == 56, "Offset mismatch for USetRotationCameraNode::Rotation");
static_assert(offsetof(USetRotationCameraNode, OffsetSpace) == 96, "Offset mismatch for USetRotationCameraNode::OffsetSpace");

// /Script/GameplayCameras.ShakeCameraNode
// Kind: Class; super: CameraNode
class UShakeCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UShakeCameraNode, bIsEnabled) == 48, "Offset mismatch for UShakeCameraNode::bIsEnabled");

// /Script/GameplayCameras.SimpleBlendCameraNode
// Kind: Class; super: BlendCameraNode
class USimpleBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USimpleBlendCameraNode, bIsEnabled) == 48, "Offset mismatch for USimpleBlendCameraNode::bIsEnabled");

// /Script/GameplayCameras.SimpleFixedTimeBlendCameraNode
// Kind: Class; super: SimpleBlendCameraNode
class USimpleFixedTimeBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BlendTime[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USimpleFixedTimeBlendCameraNode, BlendTime) == 56, "Offset mismatch for USimpleFixedTimeBlendCameraNode::BlendTime");

// /Script/GameplayCameras.SingleCameraDirector
// Kind: Class; super: CameraDirector
class USingleCameraDirector
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* CameraRig; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USingleCameraDirector, CameraRig) == 72, "Offset mismatch for USingleCameraDirector::CameraRig");

// /Script/GameplayCameras.SmoothBlendCameraNode
// Kind: Class; super: SimpleFixedTimeBlendCameraNode
class USmoothBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t BlendType; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USmoothBlendCameraNode, BlendType) == 72, "Offset mismatch for USmoothBlendCameraNode::BlendType");

// /Script/GameplayCameras.SplineFieldOfViewCameraNode
// Kind: Class; super: CameraNode
class USplineFieldOfViewCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SplineInput[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t FieldOfViewSpline[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USplineFieldOfViewCameraNode, SplineInput) == 56, "Offset mismatch for USplineFieldOfViewCameraNode::SplineInput");
static_assert(offsetof(USplineFieldOfViewCameraNode, FieldOfViewSpline) == 72, "Offset mismatch for USplineFieldOfViewCameraNode::FieldOfViewSpline");

// /Script/GameplayCameras.SplineOffsetCameraNode
// Kind: Class; super: CameraNode
class USplineOffsetCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SplineInput[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t TranslationOffsetSpline[0xC0]; // 0x0048 (Size: 0xC0, Type: StructProperty)
    std::uint8_t RotationOffsetSpline[0xC0]; // 0x0108 (Size: 0xC0, Type: StructProperty)
    std::uint8_t OffsetSpace; // 0x01C8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USplineOffsetCameraNode, SplineInput) == 56, "Offset mismatch for USplineOffsetCameraNode::SplineInput");
static_assert(offsetof(USplineOffsetCameraNode, TranslationOffsetSpline) == 72, "Offset mismatch for USplineOffsetCameraNode::TranslationOffsetSpline");
static_assert(offsetof(USplineOffsetCameraNode, RotationOffsetSpline) == 264, "Offset mismatch for USplineOffsetCameraNode::RotationOffsetSpline");
static_assert(offsetof(USplineOffsetCameraNode, OffsetSpace) == 456, "Offset mismatch for USplineOffsetCameraNode::OffsetSpace");

// /Script/GameplayCameras.SplineOrbitCameraNode
// Kind: Class; super: CameraNode
class USplineOrbitCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t LocationOffsetSpline[0xC0]; // 0x0038 (Size: 0xC0, Type: StructProperty)
    std::uint8_t TargetOffsetSpline[0xC0]; // 0x00F8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t RotationOffsetSpline[0xC0]; // 0x01B8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t LocationOffsetMultiplier[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetOffsetSpace; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    void* InputSlot; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USplineOrbitCameraNode, LocationOffsetSpline) == 56, "Offset mismatch for USplineOrbitCameraNode::LocationOffsetSpline");
static_assert(offsetof(USplineOrbitCameraNode, TargetOffsetSpline) == 248, "Offset mismatch for USplineOrbitCameraNode::TargetOffsetSpline");
static_assert(offsetof(USplineOrbitCameraNode, RotationOffsetSpline) == 440, "Offset mismatch for USplineOrbitCameraNode::RotationOffsetSpline");
static_assert(offsetof(USplineOrbitCameraNode, LocationOffsetMultiplier) == 632, "Offset mismatch for USplineOrbitCameraNode::LocationOffsetMultiplier");
static_assert(offsetof(USplineOrbitCameraNode, TargetOffsetSpace) == 648, "Offset mismatch for USplineOrbitCameraNode::TargetOffsetSpace");
static_assert(offsetof(USplineOrbitCameraNode, InputSlot) == 656, "Offset mismatch for USplineOrbitCameraNode::InputSlot");

// /Script/GameplayCameras.StateTreeCameraDirector
// Kind: Class; super: CameraDirector
class UStateTreeCameraDirector
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t StateTreeReference[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStateTreeCameraDirector, StateTreeReference) == 72, "Offset mismatch for UStateTreeCameraDirector::StateTreeReference");

// /Script/GameplayCameras.TargetRayCastCameraNode
// Kind: Class; super: CameraNode
class UTargetRayCastCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t TraceChannel; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t AutoFocus[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetRayCastCameraNode, TraceChannel) == 56, "Offset mismatch for UTargetRayCastCameraNode::TraceChannel");
static_assert(offsetof(UTargetRayCastCameraNode, AutoFocus) == 64, "Offset mismatch for UTargetRayCastCameraNode::AutoFocus");

// /Script/GameplayCameras.Transform3dCameraVariable
// Kind: Class; super: CameraVariableAsset
class UTransform3dCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransform3dCameraVariable, DefaultValue) == 64, "Offset mismatch for UTransform3dCameraVariable::DefaultValue");

// /Script/GameplayCameras.Transform3fCameraVariable
// Kind: Class; super: CameraVariableAsset
class UTransform3fCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransform3fCameraVariable, DefaultValue) == 64, "Offset mismatch for UTransform3fCameraVariable::DefaultValue");

// /Script/GameplayCameras.UpdateTrackerCameraAction
// Kind: Class; super: CameraAction
class UUpdateTrackerCameraAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t NumUpdates; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UUpdateTrackerCameraAction, NumUpdates) == 48, "Offset mismatch for UUpdateTrackerCameraAction::NumUpdates");

// /Script/GameplayCameras.UpdateTrackerCameraNode
// Kind: Class; super: CameraNode
class UUpdateTrackerCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DoubleParameter[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t VectorParameter[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUpdateTrackerCameraNode, DoubleParameter) == 56, "Offset mismatch for UUpdateTrackerCameraNode::DoubleParameter");
static_assert(offsetof(UUpdateTrackerCameraNode, VectorParameter) == 80, "Offset mismatch for UUpdateTrackerCameraNode::VectorParameter");

// /Script/GameplayCameras.Vector2dCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector2dCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector2dCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector2dCameraVariable::DefaultValue");

// /Script/GameplayCameras.Vector2fCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector2fCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector2fCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector2fCameraVariable::DefaultValue");

// /Script/GameplayCameras.Vector3dCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector3dCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector3dCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector3dCameraVariable::DefaultValue");

// /Script/GameplayCameras.Vector3fCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector3fCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector3fCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector3fCameraVariable::DefaultValue");

// /Script/GameplayCameras.Vector4dCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector4dCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector4dCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector4dCameraVariable::DefaultValue");

// /Script/GameplayCameras.Vector4fCameraVariable
// Kind: Class; super: CameraVariableAsset
class UVector4fCameraVariable
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVector4fCameraVariable, DefaultValue) == 64, "Offset mismatch for UVector4fCameraVariable::DefaultValue");

// /Script/GameplayCameras.ViewTargetTransitionParamsBlendCameraNode
// Kind: Class; super: SimpleBlendCameraNode
class UViewTargetTransitionParamsBlendCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t TransitionParams[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UViewTargetTransitionParamsBlendCameraNode, TransitionParams) == 56, "Offset mismatch for UViewTargetTransitionParamsBlendCameraNode::TransitionParams");
