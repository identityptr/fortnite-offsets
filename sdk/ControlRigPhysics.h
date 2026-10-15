/**
 * decamp dumper generated SDK
 * Package: /Script/ControlRigPhysics
 */
#pragma once
#include "Basic.h"

// /Script/ControlRigPhysics.RigPhysicsBodyComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigPhysicsBodyComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BodySolverSettings[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t Dynamics[0x70]; // 0x0060 (Size: 0x70, Type: StructProperty)
    std::uint8_t Collision[0x50]; // 0x00D0 (Size: 0x50, Type: StructProperty)
    std::uint8_t BodyData[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t KinematicTarget[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    TArray<void*> NoCollisionBodies; // 0x0190 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigPhysicsBodyComponent, BodySolverSettings) == 56, "Offset mismatch for FRigPhysicsBodyComponent::BodySolverSettings");
static_assert(offsetof(FRigPhysicsBodyComponent, Dynamics) == 96, "Offset mismatch for FRigPhysicsBodyComponent::Dynamics");
static_assert(offsetof(FRigPhysicsBodyComponent, Collision) == 208, "Offset mismatch for FRigPhysicsBodyComponent::Collision");
static_assert(offsetof(FRigPhysicsBodyComponent, BodyData) == 288, "Offset mismatch for FRigPhysicsBodyComponent::BodyData");
static_assert(offsetof(FRigPhysicsBodyComponent, KinematicTarget) == 304, "Offset mismatch for FRigPhysicsBodyComponent::KinematicTarget");
static_assert(offsetof(FRigPhysicsBodyComponent, NoCollisionBodies) == 400, "Offset mismatch for FRigPhysicsBodyComponent::NoCollisionBodies");

// /Script/ControlRigPhysics.RigPhysicsBodySolverSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsBodySolverSettings
{
public:
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseAutomaticSolver; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t SourceBone[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetBone[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeInChecksForReset; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigPhysicsBodySolverSettings, PhysicsSolverComponentKey) == 0, "Offset mismatch for FRigPhysicsBodySolverSettings::PhysicsSolverComponentKey");
static_assert(offsetof(FRigPhysicsBodySolverSettings, bUseAutomaticSolver) == 12, "Offset mismatch for FRigPhysicsBodySolverSettings::bUseAutomaticSolver");
static_assert(offsetof(FRigPhysicsBodySolverSettings, SourceBone) == 16, "Offset mismatch for FRigPhysicsBodySolverSettings::SourceBone");
static_assert(offsetof(FRigPhysicsBodySolverSettings, TargetBone) == 24, "Offset mismatch for FRigPhysicsBodySolverSettings::TargetBone");
static_assert(offsetof(FRigPhysicsBodySolverSettings, bIncludeInChecksForReset) == 32, "Offset mismatch for FRigPhysicsBodySolverSettings::bIncludeInChecksForReset");

// /Script/ControlRigPhysics.RigPhysicsCollision
// Kind: ScriptStruct; super: none
struct FRigPhysicsCollision
{
public:
    TArray<void*> Boxes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Spheres; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Capsules; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Convexes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Material[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsCollision, Boxes) == 0, "Offset mismatch for FRigPhysicsCollision::Boxes");
static_assert(offsetof(FRigPhysicsCollision, Spheres) == 16, "Offset mismatch for FRigPhysicsCollision::Spheres");
static_assert(offsetof(FRigPhysicsCollision, Capsules) == 32, "Offset mismatch for FRigPhysicsCollision::Capsules");
static_assert(offsetof(FRigPhysicsCollision, Convexes) == 48, "Offset mismatch for FRigPhysicsCollision::Convexes");
static_assert(offsetof(FRigPhysicsCollision, Material) == 64, "Offset mismatch for FRigPhysicsCollision::Material");

// /Script/ControlRigPhysics.RigPhysicsCollisionBox
// Kind: ScriptStruct; super: RigPhysicsCollisionShape
struct FRigPhysicsCollisionBox
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extents[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsCollisionBox, TM) == 16, "Offset mismatch for FRigPhysicsCollisionBox::TM");
static_assert(offsetof(FRigPhysicsCollisionBox, Extents) == 112, "Offset mismatch for FRigPhysicsCollisionBox::Extents");

// /Script/ControlRigPhysics.RigPhysicsCollisionCapsule
// Kind: ScriptStruct; super: RigPhysicsCollisionShape
struct FRigPhysicsCollisionCapsule
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float Radius; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsCollisionCapsule, TM) == 16, "Offset mismatch for FRigPhysicsCollisionCapsule::TM");
static_assert(offsetof(FRigPhysicsCollisionCapsule, Radius) == 112, "Offset mismatch for FRigPhysicsCollisionCapsule::Radius");
static_assert(offsetof(FRigPhysicsCollisionCapsule, Length) == 116, "Offset mismatch for FRigPhysicsCollisionCapsule::Length");

// /Script/ControlRigPhysics.RigPhysicsCollisionConvex
// Kind: ScriptStruct; super: RigPhysicsCollisionShape
struct FRigPhysicsCollisionConvex
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> VertexData; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigPhysicsCollisionConvex, TM) == 16, "Offset mismatch for FRigPhysicsCollisionConvex::TM");
static_assert(offsetof(FRigPhysicsCollisionConvex, VertexData) == 112, "Offset mismatch for FRigPhysicsCollisionConvex::VertexData");

// /Script/ControlRigPhysics.RigPhysicsCollisionShape
// Kind: ScriptStruct; super: none
struct FRigPhysicsCollisionShape
{
public:
    float RestOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bContributeToMass; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigPhysicsCollisionShape, RestOffset) == 0, "Offset mismatch for FRigPhysicsCollisionShape::RestOffset");
static_assert(offsetof(FRigPhysicsCollisionShape, Name) == 4, "Offset mismatch for FRigPhysicsCollisionShape::Name");
static_assert(offsetof(FRigPhysicsCollisionShape, bContributeToMass) == 8, "Offset mismatch for FRigPhysicsCollisionShape::bContributeToMass");

// /Script/ControlRigPhysics.RigPhysicsCollisionSphere
// Kind: ScriptStruct; super: RigPhysicsCollisionShape
struct FRigPhysicsCollisionSphere
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float Radius; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsCollisionSphere, TM) == 16, "Offset mismatch for FRigPhysicsCollisionSphere::TM");
static_assert(offsetof(FRigPhysicsCollisionSphere, Radius) == 112, "Offset mismatch for FRigPhysicsCollisionSphere::Radius");

// /Script/ControlRigPhysics.RigPhysicsConeLimit
// Kind: ScriptStruct; super: none
struct FRigPhysicsConeLimit
{
public:
    std::uint8_t ConeConstraint[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsConeLimit, ConeConstraint) == 0, "Offset mismatch for FRigPhysicsConeLimit::ConeConstraint");

// /Script/ControlRigPhysics.RigPhysicsControlComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigPhysicsControlComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ParentBodyComponentKey[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseParentBodyAsDefault; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    std::uint8_t ChildBodyComponentKey[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlData[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x70]; // 0x00A8 (Size: 0x70, Type: StructProperty)
    std::uint8_t ControlTarget[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsControlComponent, ParentBodyComponentKey) == 56, "Offset mismatch for FRigPhysicsControlComponent::ParentBodyComponentKey");
static_assert(offsetof(FRigPhysicsControlComponent, bUseParentBodyAsDefault) == 68, "Offset mismatch for FRigPhysicsControlComponent::bUseParentBodyAsDefault");
static_assert(offsetof(FRigPhysicsControlComponent, ChildBodyComponentKey) == 72, "Offset mismatch for FRigPhysicsControlComponent::ChildBodyComponentKey");
static_assert(offsetof(FRigPhysicsControlComponent, ControlData) == 88, "Offset mismatch for FRigPhysicsControlComponent::ControlData");
static_assert(offsetof(FRigPhysicsControlComponent, ControlMultiplier) == 168, "Offset mismatch for FRigPhysicsControlComponent::ControlMultiplier");
static_assert(offsetof(FRigPhysicsControlComponent, ControlTarget) == 280, "Offset mismatch for FRigPhysicsControlComponent::ControlTarget");

// /Script/ControlRigPhysics.RigPhysicsDriveData
// Kind: ScriptStruct; super: none
struct FRigPhysicsDriveData
{
public:
    std::uint8_t LinearDriveConstraint[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t AngularDriveConstraint[0x68]; // 0x0068 (Size: 0x68, Type: StructProperty)
    std::uint8_t bUseSkeletalAnimation; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00D1
    float SkeletalAnimationVelocityMultiplier; // 0x00D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsDriveData, LinearDriveConstraint) == 0, "Offset mismatch for FRigPhysicsDriveData::LinearDriveConstraint");
static_assert(offsetof(FRigPhysicsDriveData, AngularDriveConstraint) == 104, "Offset mismatch for FRigPhysicsDriveData::AngularDriveConstraint");
static_assert(offsetof(FRigPhysicsDriveData, bUseSkeletalAnimation) == 208, "Offset mismatch for FRigPhysicsDriveData::bUseSkeletalAnimation");
static_assert(offsetof(FRigPhysicsDriveData, SkeletalAnimationVelocityMultiplier) == 212, "Offset mismatch for FRigPhysicsDriveData::SkeletalAnimationVelocityMultiplier");

// /Script/ControlRigPhysics.RigPhysicsDynamics
// Kind: ScriptStruct; super: none
struct FRigPhysicsDynamics
{
public:
    float Density; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MassOverride; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideCentreOfMass; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t CentreOfMassOverride[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t CentreOfMassNudge[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideMomentsOfInertia; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t MomentsOfInertiaOverride[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float LinearDamping; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleDampingByInverseMass; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigPhysicsDynamics, Density) == 0, "Offset mismatch for FRigPhysicsDynamics::Density");
static_assert(offsetof(FRigPhysicsDynamics, MassOverride) == 4, "Offset mismatch for FRigPhysicsDynamics::MassOverride");
static_assert(offsetof(FRigPhysicsDynamics, bOverrideCentreOfMass) == 8, "Offset mismatch for FRigPhysicsDynamics::bOverrideCentreOfMass");
static_assert(offsetof(FRigPhysicsDynamics, CentreOfMassOverride) == 16, "Offset mismatch for FRigPhysicsDynamics::CentreOfMassOverride");
static_assert(offsetof(FRigPhysicsDynamics, CentreOfMassNudge) == 40, "Offset mismatch for FRigPhysicsDynamics::CentreOfMassNudge");
static_assert(offsetof(FRigPhysicsDynamics, bOverrideMomentsOfInertia) == 64, "Offset mismatch for FRigPhysicsDynamics::bOverrideMomentsOfInertia");
static_assert(offsetof(FRigPhysicsDynamics, MomentsOfInertiaOverride) == 72, "Offset mismatch for FRigPhysicsDynamics::MomentsOfInertiaOverride");
static_assert(offsetof(FRigPhysicsDynamics, LinearDamping) == 96, "Offset mismatch for FRigPhysicsDynamics::LinearDamping");
static_assert(offsetof(FRigPhysicsDynamics, AngularDamping) == 100, "Offset mismatch for FRigPhysicsDynamics::AngularDamping");
static_assert(offsetof(FRigPhysicsDynamics, bScaleDampingByInverseMass) == 104, "Offset mismatch for FRigPhysicsDynamics::bScaleDampingByInverseMass");

// /Script/ControlRigPhysics.RigPhysicsInertialForceSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsInertialForceSettings
{
public:
    float Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LinearEulerAmount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularEulerAmount; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CentrifugalAmount; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CoriolisAmount; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsInertialForceSettings, Amount) == 0, "Offset mismatch for FRigPhysicsInertialForceSettings::Amount");
static_assert(offsetof(FRigPhysicsInertialForceSettings, LinearEulerAmount) == 4, "Offset mismatch for FRigPhysicsInertialForceSettings::LinearEulerAmount");
static_assert(offsetof(FRigPhysicsInertialForceSettings, AngularEulerAmount) == 8, "Offset mismatch for FRigPhysicsInertialForceSettings::AngularEulerAmount");
static_assert(offsetof(FRigPhysicsInertialForceSettings, CentrifugalAmount) == 12, "Offset mismatch for FRigPhysicsInertialForceSettings::CentrifugalAmount");
static_assert(offsetof(FRigPhysicsInertialForceSettings, CoriolisAmount) == 16, "Offset mismatch for FRigPhysicsInertialForceSettings::CoriolisAmount");

// /Script/ControlRigPhysics.RigPhysicsJointComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigPhysicsJointComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ParentBodyComponentKey[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildBodyComponentKey[0xC]; // 0x0044 (Size: 0xC, Type: StructProperty)
    std::uint8_t JointData[0x150]; // 0x0050 (Size: 0x150, Type: StructProperty)
    std::uint8_t DriveData[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsJointComponent, ParentBodyComponentKey) == 56, "Offset mismatch for FRigPhysicsJointComponent::ParentBodyComponentKey");
static_assert(offsetof(FRigPhysicsJointComponent, ChildBodyComponentKey) == 68, "Offset mismatch for FRigPhysicsJointComponent::ChildBodyComponentKey");
static_assert(offsetof(FRigPhysicsJointComponent, JointData) == 80, "Offset mismatch for FRigPhysicsJointComponent::JointData");
static_assert(offsetof(FRigPhysicsJointComponent, DriveData) == 416, "Offset mismatch for FRigPhysicsJointComponent::DriveData");

// /Script/ControlRigPhysics.RigPhysicsJointData
// Kind: ScriptStruct; super: none
struct FRigPhysicsJointData
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCalculateParentOffset; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xE]; // 0x0002
    std::uint8_t ExtraParentOffset[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAutoCalculateChildOffset; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0071
    std::uint8_t ExtraChildOffset[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t LinearConstraint[0x1C]; // 0x00E0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ConeConstraint[0x20]; // 0x00FC (Size: 0x20, Type: StructProperty)
    std::uint8_t TwistConstraint[0x1C]; // 0x011C (Size: 0x1C, Type: StructProperty)
    std::uint8_t bDisableCollision; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    float LinearProjectionAmount; // 0x013C (Size: 0x4, Type: FloatProperty)
    float AngularProjectionAmount; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float ParentInverseMassScale; // 0x0144 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsJointData, bEnabled) == 0, "Offset mismatch for FRigPhysicsJointData::bEnabled");
static_assert(offsetof(FRigPhysicsJointData, bAutoCalculateParentOffset) == 1, "Offset mismatch for FRigPhysicsJointData::bAutoCalculateParentOffset");
static_assert(offsetof(FRigPhysicsJointData, ExtraParentOffset) == 16, "Offset mismatch for FRigPhysicsJointData::ExtraParentOffset");
static_assert(offsetof(FRigPhysicsJointData, bAutoCalculateChildOffset) == 112, "Offset mismatch for FRigPhysicsJointData::bAutoCalculateChildOffset");
static_assert(offsetof(FRigPhysicsJointData, ExtraChildOffset) == 128, "Offset mismatch for FRigPhysicsJointData::ExtraChildOffset");
static_assert(offsetof(FRigPhysicsJointData, LinearConstraint) == 224, "Offset mismatch for FRigPhysicsJointData::LinearConstraint");
static_assert(offsetof(FRigPhysicsJointData, ConeConstraint) == 252, "Offset mismatch for FRigPhysicsJointData::ConeConstraint");
static_assert(offsetof(FRigPhysicsJointData, TwistConstraint) == 284, "Offset mismatch for FRigPhysicsJointData::TwistConstraint");
static_assert(offsetof(FRigPhysicsJointData, bDisableCollision) == 312, "Offset mismatch for FRigPhysicsJointData::bDisableCollision");
static_assert(offsetof(FRigPhysicsJointData, LinearProjectionAmount) == 316, "Offset mismatch for FRigPhysicsJointData::LinearProjectionAmount");
static_assert(offsetof(FRigPhysicsJointData, AngularProjectionAmount) == 320, "Offset mismatch for FRigPhysicsJointData::AngularProjectionAmount");
static_assert(offsetof(FRigPhysicsJointData, ParentInverseMassScale) == 324, "Offset mismatch for FRigPhysicsJointData::ParentInverseMassScale");

// /Script/ControlRigPhysics.RigPhysicsLinearLimit
// Kind: ScriptStruct; super: none
struct FRigPhysicsLinearLimit
{
public:
    std::uint8_t LinearConstraint[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsLinearLimit, LinearConstraint) == 0, "Offset mismatch for FRigPhysicsLinearLimit::LinearConstraint");

// /Script/ControlRigPhysics.RigPhysicsMaterial
// Kind: ScriptStruct; super: none
struct FRigPhysicsMaterial
{
public:
    float Friction; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Restitution; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrictionCombineMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RestitutionCombineMode; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigPhysicsMaterial, Friction) == 0, "Offset mismatch for FRigPhysicsMaterial::Friction");
static_assert(offsetof(FRigPhysicsMaterial, Restitution) == 4, "Offset mismatch for FRigPhysicsMaterial::Restitution");
static_assert(offsetof(FRigPhysicsMaterial, FrictionCombineMode) == 8, "Offset mismatch for FRigPhysicsMaterial::FrictionCombineMode");
static_assert(offsetof(FRigPhysicsMaterial, RestitutionCombineMode) == 9, "Offset mismatch for FRigPhysicsMaterial::RestitutionCombineMode");

// /Script/ControlRigPhysics.RigPhysicsSimulationDragSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsSimulationDragSettings
{
public:
    float LinearDragMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AngularDragMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalLinearDrag[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalVelocitySpace; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t ExternalLinearVelocity[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsSimulationDragSettings, LinearDragMultiplier) == 0, "Offset mismatch for FRigPhysicsSimulationDragSettings::LinearDragMultiplier");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, AngularDragMultiplier) == 4, "Offset mismatch for FRigPhysicsSimulationDragSettings::AngularDragMultiplier");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, ExternalLinearDrag) == 8, "Offset mismatch for FRigPhysicsSimulationDragSettings::ExternalLinearDrag");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, ExternalVelocitySpace) == 32, "Offset mismatch for FRigPhysicsSimulationDragSettings::ExternalVelocitySpace");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, ExternalLinearVelocity) == 40, "Offset mismatch for FRigPhysicsSimulationDragSettings::ExternalLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, ExternalAngularVelocity) == 64, "Offset mismatch for FRigPhysicsSimulationDragSettings::ExternalAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationDragSettings, ExternalTurbulenceVelocity) == 88, "Offset mismatch for FRigPhysicsSimulationDragSettings::ExternalTurbulenceVelocity");

// /Script/ControlRigPhysics.RigPhysicsSimulationSpaceMotion
// Kind: ScriptStruct; super: none
struct FRigPhysicsSimulationSpaceMotion
{
public:
    std::uint8_t ScaleAndClampingSpace; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t LinearMotionScale[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bClampLinearVelocity; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t MaxLinearVelocityClamp[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bClampLinearAcceleration; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t MaxLinearAccelerationClamp[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float AngularMotionScale; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampAngularVelocity; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0065
    float MaxAngularVelocityClamp; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampAngularAcceleration; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x006D
    float MaxAngularAccelerationClamp; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxLinearVelocity; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MaxLinearAcceleration; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaxAngularVelocity; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxAngularAcceleration; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float VerticalMotionScale; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InertialForces[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t Drag[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, ScaleAndClampingSpace) == 0, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::ScaleAndClampingSpace");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, LinearMotionScale) == 8, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::LinearMotionScale");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, bClampLinearVelocity) == 32, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::bClampLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxLinearVelocityClamp) == 40, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxLinearVelocityClamp");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, bClampLinearAcceleration) == 64, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::bClampLinearAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxLinearAccelerationClamp) == 72, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxLinearAccelerationClamp");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, AngularMotionScale) == 96, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::AngularMotionScale");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, bClampAngularVelocity) == 100, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::bClampAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxAngularVelocityClamp) == 104, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxAngularVelocityClamp");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, bClampAngularAcceleration) == 108, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::bClampAngularAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxAngularAccelerationClamp) == 112, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxAngularAccelerationClamp");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxLinearVelocity) == 116, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxLinearAcceleration) == 120, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxLinearAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxAngularVelocity) == 124, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, MaxAngularAcceleration) == 128, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::MaxAngularAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, VerticalMotionScale) == 132, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::VerticalMotionScale");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, InertialForces) == 136, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::InertialForces");
static_assert(offsetof(FRigPhysicsSimulationSpaceMotion, Drag) == 160, "Offset mismatch for FRigPhysicsSimulationSpaceMotion::Drag");

// /Script/ControlRigPhysics.RigPhysicsSimulationSpaceSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsSimulationSpaceSettings
{
public:
    float SpaceMovementAmount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VelocityScaleZ; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampLinearVelocity; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float MaxLinearVelocity; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampAngularVelocity; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float MaxAngularVelocity; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampLinearAcceleration; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    float MaxLinearAcceleration; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampAngularAcceleration; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0021
    float MaxAngularAcceleration; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float LinearAccelerationThresholdForTeleport; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AngularAccelerationThresholdForTeleport; // 0x002C (Size: 0x4, Type: FloatProperty)
    float PositionChangeThresholdForTeleport; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float OrientationChangeThresholdForTeleport; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float LinearDragMultiplier; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float AngularDragMultiplier; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalLinearDrag[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalLinearVelocity[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, SpaceMovementAmount) == 0, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::SpaceMovementAmount");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, VelocityScaleZ) == 4, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::VelocityScaleZ");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, bClampLinearVelocity) == 8, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::bClampLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, MaxLinearVelocity) == 12, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::MaxLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, bClampAngularVelocity) == 16, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::bClampAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, MaxAngularVelocity) == 20, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::MaxAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, bClampLinearAcceleration) == 24, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::bClampLinearAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, MaxLinearAcceleration) == 28, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::MaxLinearAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, bClampAngularAcceleration) == 32, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::bClampAngularAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, MaxAngularAcceleration) == 36, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::MaxAngularAcceleration");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, LinearAccelerationThresholdForTeleport) == 40, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::LinearAccelerationThresholdForTeleport");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, AngularAccelerationThresholdForTeleport) == 44, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::AngularAccelerationThresholdForTeleport");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, PositionChangeThresholdForTeleport) == 48, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::PositionChangeThresholdForTeleport");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, OrientationChangeThresholdForTeleport) == 52, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::OrientationChangeThresholdForTeleport");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, LinearDragMultiplier) == 56, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::LinearDragMultiplier");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, AngularDragMultiplier) == 60, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::AngularDragMultiplier");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, ExternalLinearDrag) == 64, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::ExternalLinearDrag");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, ExternalLinearVelocity) == 88, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::ExternalLinearVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, ExternalAngularVelocity) == 112, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::ExternalAngularVelocity");
static_assert(offsetof(FRigPhysicsSimulationSpaceSettings, ExternalTurbulenceVelocity) == 136, "Offset mismatch for FRigPhysicsSimulationSpaceSettings::ExternalTurbulenceVelocity");

// /Script/ControlRigPhysics.RigPhysicsSolver
// Kind: ScriptStruct; super: none
struct FRigPhysicsSolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigPhysics.RigPhysicsSolverComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigPhysicsSolverComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SolverSettings[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t SpaceMotion[0x110]; // 0x0108 (Size: 0x110, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x0218 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsSolverComponent, SolverSettings) == 56, "Offset mismatch for FRigPhysicsSolverComponent::SolverSettings");
static_assert(offsetof(FRigPhysicsSolverComponent, SpaceMotion) == 264, "Offset mismatch for FRigPhysicsSolverComponent::SpaceMotion");
static_assert(offsetof(FRigPhysicsSolverComponent, TeleportDetection) == 536, "Offset mismatch for FRigPhysicsSolverComponent::TeleportDetection");

// /Script/ControlRigPhysics.RigPhysicsSolverSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsSolverSettings
{
public:
    std::uint8_t bAutomaticallyAddPhysicsBodyComponents; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SimulationSpace; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionSpace; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::uint8_t SpaceBone[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t Collision[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    std::uint8_t Gravity[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldCollisionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWorldCollisionIncludePhysics; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldCollisionIncludeQuery; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldCollisionIncludeProbe; // 0x007B (Size: 0x1, Type: BoolProperty)
    float WorldCollisionBoundsExpansion; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t PositionIterations; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t VelocityIterations; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t ProjectionIterations; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumRollingAverageStepTimes; // 0x008C (Size: 0x4, Type: IntProperty)
    float CollisionBoundsExpansion; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float BoundsVelocityMultiplier; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MaxVelocityBoundsExpansion; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float MaxDepenetrationVelocity; // 0x009C (Size: 0x4, Type: FloatProperty)
    float FixedTimeStep; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxTimeSteps; // 0x00A4 (Size: 0x4, Type: IntProperty)
    float MaxDeltaTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseLinearJointSolver; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSolveJointPositionsLast; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseManifolds; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCCD; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetFromPosition; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    float PositionThresholdForReset; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetFromKinematicSpeed; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B9
    float KinematicSpeedThresholdForReset; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetFromKinematicAcceleration; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00C1
    float KinematicAccelerationThresholdForReset; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetFromEvaluationInterval; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00C9
    float EvaluationIntervalThresholdForReset; // 0x00CC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsSolverSettings, bAutomaticallyAddPhysicsBodyComponents) == 0, "Offset mismatch for FRigPhysicsSolverSettings::bAutomaticallyAddPhysicsBodyComponents");
static_assert(offsetof(FRigPhysicsSolverSettings, SimulationSpace) == 1, "Offset mismatch for FRigPhysicsSolverSettings::SimulationSpace");
static_assert(offsetof(FRigPhysicsSolverSettings, CollisionSpace) == 2, "Offset mismatch for FRigPhysicsSolverSettings::CollisionSpace");
static_assert(offsetof(FRigPhysicsSolverSettings, SpaceBone) == 4, "Offset mismatch for FRigPhysicsSolverSettings::SpaceBone");
static_assert(offsetof(FRigPhysicsSolverSettings, Collision) == 16, "Offset mismatch for FRigPhysicsSolverSettings::Collision");
static_assert(offsetof(FRigPhysicsSolverSettings, Gravity) == 96, "Offset mismatch for FRigPhysicsSolverSettings::Gravity");
static_assert(offsetof(FRigPhysicsSolverSettings, WorldCollisionType) == 120, "Offset mismatch for FRigPhysicsSolverSettings::WorldCollisionType");
static_assert(offsetof(FRigPhysicsSolverSettings, bWorldCollisionIncludePhysics) == 121, "Offset mismatch for FRigPhysicsSolverSettings::bWorldCollisionIncludePhysics");
static_assert(offsetof(FRigPhysicsSolverSettings, bWorldCollisionIncludeQuery) == 122, "Offset mismatch for FRigPhysicsSolverSettings::bWorldCollisionIncludeQuery");
static_assert(offsetof(FRigPhysicsSolverSettings, bWorldCollisionIncludeProbe) == 123, "Offset mismatch for FRigPhysicsSolverSettings::bWorldCollisionIncludeProbe");
static_assert(offsetof(FRigPhysicsSolverSettings, WorldCollisionBoundsExpansion) == 124, "Offset mismatch for FRigPhysicsSolverSettings::WorldCollisionBoundsExpansion");
static_assert(offsetof(FRigPhysicsSolverSettings, PositionIterations) == 128, "Offset mismatch for FRigPhysicsSolverSettings::PositionIterations");
static_assert(offsetof(FRigPhysicsSolverSettings, VelocityIterations) == 132, "Offset mismatch for FRigPhysicsSolverSettings::VelocityIterations");
static_assert(offsetof(FRigPhysicsSolverSettings, ProjectionIterations) == 136, "Offset mismatch for FRigPhysicsSolverSettings::ProjectionIterations");
static_assert(offsetof(FRigPhysicsSolverSettings, MaxNumRollingAverageStepTimes) == 140, "Offset mismatch for FRigPhysicsSolverSettings::MaxNumRollingAverageStepTimes");
static_assert(offsetof(FRigPhysicsSolverSettings, CollisionBoundsExpansion) == 144, "Offset mismatch for FRigPhysicsSolverSettings::CollisionBoundsExpansion");
static_assert(offsetof(FRigPhysicsSolverSettings, BoundsVelocityMultiplier) == 148, "Offset mismatch for FRigPhysicsSolverSettings::BoundsVelocityMultiplier");
static_assert(offsetof(FRigPhysicsSolverSettings, MaxVelocityBoundsExpansion) == 152, "Offset mismatch for FRigPhysicsSolverSettings::MaxVelocityBoundsExpansion");
static_assert(offsetof(FRigPhysicsSolverSettings, MaxDepenetrationVelocity) == 156, "Offset mismatch for FRigPhysicsSolverSettings::MaxDepenetrationVelocity");
static_assert(offsetof(FRigPhysicsSolverSettings, FixedTimeStep) == 160, "Offset mismatch for FRigPhysicsSolverSettings::FixedTimeStep");
static_assert(offsetof(FRigPhysicsSolverSettings, MaxTimeSteps) == 164, "Offset mismatch for FRigPhysicsSolverSettings::MaxTimeSteps");
static_assert(offsetof(FRigPhysicsSolverSettings, MaxDeltaTime) == 168, "Offset mismatch for FRigPhysicsSolverSettings::MaxDeltaTime");
static_assert(offsetof(FRigPhysicsSolverSettings, bUseLinearJointSolver) == 172, "Offset mismatch for FRigPhysicsSolverSettings::bUseLinearJointSolver");
static_assert(offsetof(FRigPhysicsSolverSettings, bSolveJointPositionsLast) == 173, "Offset mismatch for FRigPhysicsSolverSettings::bSolveJointPositionsLast");
static_assert(offsetof(FRigPhysicsSolverSettings, bUseManifolds) == 174, "Offset mismatch for FRigPhysicsSolverSettings::bUseManifolds");
static_assert(offsetof(FRigPhysicsSolverSettings, bAllowCCD) == 175, "Offset mismatch for FRigPhysicsSolverSettings::bAllowCCD");
static_assert(offsetof(FRigPhysicsSolverSettings, bResetFromPosition) == 176, "Offset mismatch for FRigPhysicsSolverSettings::bResetFromPosition");
static_assert(offsetof(FRigPhysicsSolverSettings, PositionThresholdForReset) == 180, "Offset mismatch for FRigPhysicsSolverSettings::PositionThresholdForReset");
static_assert(offsetof(FRigPhysicsSolverSettings, bResetFromKinematicSpeed) == 184, "Offset mismatch for FRigPhysicsSolverSettings::bResetFromKinematicSpeed");
static_assert(offsetof(FRigPhysicsSolverSettings, KinematicSpeedThresholdForReset) == 188, "Offset mismatch for FRigPhysicsSolverSettings::KinematicSpeedThresholdForReset");
static_assert(offsetof(FRigPhysicsSolverSettings, bResetFromKinematicAcceleration) == 192, "Offset mismatch for FRigPhysicsSolverSettings::bResetFromKinematicAcceleration");
static_assert(offsetof(FRigPhysicsSolverSettings, KinematicAccelerationThresholdForReset) == 196, "Offset mismatch for FRigPhysicsSolverSettings::KinematicAccelerationThresholdForReset");
static_assert(offsetof(FRigPhysicsSolverSettings, bResetFromEvaluationInterval) == 200, "Offset mismatch for FRigPhysicsSolverSettings::bResetFromEvaluationInterval");
static_assert(offsetof(FRigPhysicsSolverSettings, EvaluationIntervalThresholdForReset) == 204, "Offset mismatch for FRigPhysicsSolverSettings::EvaluationIntervalThresholdForReset");

// /Script/ControlRigPhysics.RigPhysicsTeleportDetectionSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsTeleportDetectionSettings
{
public:
    std::uint8_t bFromPositionChange; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float PositionChangeThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFromLinearAcceleration; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float LinearAccelerationThreshold; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFromOrientationChange; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float OrientationChangeThreshold; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFromAngularAcceleration; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0019
    float AngularAccelerationThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, bFromPositionChange) == 0, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::bFromPositionChange");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, PositionChangeThreshold) == 4, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::PositionChangeThreshold");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, bFromLinearAcceleration) == 8, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::bFromLinearAcceleration");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, LinearAccelerationThreshold) == 12, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::LinearAccelerationThreshold");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, bFromOrientationChange) == 16, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::bFromOrientationChange");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, OrientationChangeThreshold) == 20, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::OrientationChangeThreshold");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, bFromAngularAcceleration) == 24, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::bFromAngularAcceleration");
static_assert(offsetof(FRigPhysicsTeleportDetectionSettings, AngularAccelerationThreshold) == 28, "Offset mismatch for FRigPhysicsTeleportDetectionSettings::AngularAccelerationThreshold");

// /Script/ControlRigPhysics.RigPhysicsTwistLimit
// Kind: ScriptStruct; super: none
struct FRigPhysicsTwistLimit
{
public:
    std::uint8_t TwistConstraint[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsTwistLimit, TwistConstraint) == 0, "Offset mismatch for FRigPhysicsTwistLimit::TwistConstraint");

// /Script/ControlRigPhysics.RigPhysicsVisualizationSettings
// Kind: ScriptStruct; super: none
struct FRigPhysicsVisualizationSettings
{
public:
    std::uint8_t bEnableVisualization; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LineThickness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t ShapeSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ShapeDetail; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowBodies; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCentreOfMass; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowJoints; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowControls; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWorldObjects; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWorldOverlapBox; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowActiveContacts; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInactiveContacts; // 0x0017 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigPhysicsVisualizationSettings, bEnableVisualization) == 0, "Offset mismatch for FRigPhysicsVisualizationSettings::bEnableVisualization");
static_assert(offsetof(FRigPhysicsVisualizationSettings, LineThickness) == 4, "Offset mismatch for FRigPhysicsVisualizationSettings::LineThickness");
static_assert(offsetof(FRigPhysicsVisualizationSettings, ShapeSize) == 8, "Offset mismatch for FRigPhysicsVisualizationSettings::ShapeSize");
static_assert(offsetof(FRigPhysicsVisualizationSettings, ShapeDetail) == 12, "Offset mismatch for FRigPhysicsVisualizationSettings::ShapeDetail");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowBodies) == 16, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowBodies");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowCentreOfMass) == 17, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowCentreOfMass");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowJoints) == 18, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowJoints");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowControls) == 19, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowControls");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowWorldObjects) == 20, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowWorldObjects");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowWorldOverlapBox) == 21, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowWorldOverlapBox");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowActiveContacts) == 22, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowActiveContacts");
static_assert(offsetof(FRigPhysicsVisualizationSettings, bShowInactiveContacts) == 23, "Offset mismatch for FRigPhysicsVisualizationSettings::bShowInactiveContacts");

// /Script/ControlRigPhysics.RigPhysicsVisualizationSettings1
// Kind: ScriptStruct; super: none
struct FRigPhysicsVisualizationSettings1
{
public:
    float LineThickness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t ShapeSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ShapeDetail; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowBodies; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCentreOfMass; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowJoints; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowControls; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWorldObjects; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWorldOverlapBox; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowActiveContacts; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInactiveContacts; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigPhysicsVisualizationSettings1, LineThickness) == 0, "Offset mismatch for FRigPhysicsVisualizationSettings1::LineThickness");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, ShapeSize) == 4, "Offset mismatch for FRigPhysicsVisualizationSettings1::ShapeSize");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, ShapeDetail) == 8, "Offset mismatch for FRigPhysicsVisualizationSettings1::ShapeDetail");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowBodies) == 12, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowBodies");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowCentreOfMass) == 13, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowCentreOfMass");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowJoints) == 14, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowJoints");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowControls) == 15, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowControls");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowWorldObjects) == 16, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowWorldObjects");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowWorldOverlapBox) == 17, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowWorldOverlapBox");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowActiveContacts) == 18, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowActiveContacts");
static_assert(offsetof(FRigPhysicsVisualizationSettings1, bShowInactiveContacts) == 19, "Offset mismatch for FRigPhysicsVisualizationSettings1::bShowInactiveContacts");

// /Script/ControlRigPhysics.RigUnit_AddPhysicsBody
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_AddPhysicsBody
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t Solver[0x24]; // 0x0024 (Size: 0x24, Type: StructProperty)
    std::uint8_t Dynamics[0x70]; // 0x0048 (Size: 0x70, Type: StructProperty)
    std::uint8_t Collision[0x50]; // 0x00B8 (Size: 0x50, Type: StructProperty)
    std::uint8_t BodyData[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddPhysicsBody, Owner) == 16, "Offset mismatch for FRigUnit_AddPhysicsBody::Owner");
static_assert(offsetof(FRigUnit_AddPhysicsBody, PhysicsBodyComponentKey) == 24, "Offset mismatch for FRigUnit_AddPhysicsBody::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsBody, Solver) == 36, "Offset mismatch for FRigUnit_AddPhysicsBody::Solver");
static_assert(offsetof(FRigUnit_AddPhysicsBody, Dynamics) == 72, "Offset mismatch for FRigUnit_AddPhysicsBody::Dynamics");
static_assert(offsetof(FRigUnit_AddPhysicsBody, Collision) == 184, "Offset mismatch for FRigUnit_AddPhysicsBody::Collision");
static_assert(offsetof(FRigUnit_AddPhysicsBody, BodyData) == 264, "Offset mismatch for FRigUnit_AddPhysicsBody::BodyData");

// /Script/ControlRigPhysics.RigUnit_AddPhysicsComponents
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_AddPhysicsComponents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAddJoint; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSimSpaceControl; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddParentSpaceControl; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x001C (Size: 0xC, Type: StructProperty)
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t SimSpaceControlComponentKey[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParentSpaceControlComponentKey[0xC]; // 0x0040 (Size: 0xC, Type: StructProperty)
    std::uint8_t Solver[0x24]; // 0x004C (Size: 0x24, Type: StructProperty)
    std::uint8_t Dynamics[0x70]; // 0x0070 (Size: 0x70, Type: StructProperty)
    std::uint8_t Collision[0x50]; // 0x00E0 (Size: 0x50, Type: StructProperty)
    std::uint8_t BodyData[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t JointData[0x150]; // 0x0140 (Size: 0x150, Type: StructProperty)
    std::uint8_t DriveData[0xD8]; // 0x0290 (Size: 0xD8, Type: StructProperty)
    std::uint8_t SimSpaceControlData[0x50]; // 0x0368 (Size: 0x50, Type: StructProperty)
    std::uint8_t ParentSpaceControlData[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddPhysicsComponents, Owner) == 16, "Offset mismatch for FRigUnit_AddPhysicsComponents::Owner");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, bAddJoint) == 24, "Offset mismatch for FRigUnit_AddPhysicsComponents::bAddJoint");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, bAddSimSpaceControl) == 25, "Offset mismatch for FRigUnit_AddPhysicsComponents::bAddSimSpaceControl");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, bAddParentSpaceControl) == 26, "Offset mismatch for FRigUnit_AddPhysicsComponents::bAddParentSpaceControl");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, PhysicsBodyComponentKey) == 28, "Offset mismatch for FRigUnit_AddPhysicsComponents::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, PhysicsJointComponentKey) == 40, "Offset mismatch for FRigUnit_AddPhysicsComponents::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, SimSpaceControlComponentKey) == 52, "Offset mismatch for FRigUnit_AddPhysicsComponents::SimSpaceControlComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, ParentSpaceControlComponentKey) == 64, "Offset mismatch for FRigUnit_AddPhysicsComponents::ParentSpaceControlComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, Solver) == 76, "Offset mismatch for FRigUnit_AddPhysicsComponents::Solver");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, Dynamics) == 112, "Offset mismatch for FRigUnit_AddPhysicsComponents::Dynamics");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, Collision) == 224, "Offset mismatch for FRigUnit_AddPhysicsComponents::Collision");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, BodyData) == 304, "Offset mismatch for FRigUnit_AddPhysicsComponents::BodyData");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, JointData) == 320, "Offset mismatch for FRigUnit_AddPhysicsComponents::JointData");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, DriveData) == 656, "Offset mismatch for FRigUnit_AddPhysicsComponents::DriveData");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, SimSpaceControlData) == 872, "Offset mismatch for FRigUnit_AddPhysicsComponents::SimSpaceControlData");
static_assert(offsetof(FRigUnit_AddPhysicsComponents, ParentSpaceControlData) == 952, "Offset mismatch for FRigUnit_AddPhysicsComponents::ParentSpaceControlData");

// /Script/ControlRigPhysics.RigUnit_AddPhysicsControl
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_AddPhysicsControl
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ControlComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParentBodyComponentKey[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseParentBodyAsDefault; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t ChildBodyComponentKey[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    std::uint8_t ControlData[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x70]; // 0x0090 (Size: 0x70, Type: StructProperty)
    std::uint8_t ControlTarget[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddPhysicsControl, Owner) == 16, "Offset mismatch for FRigUnit_AddPhysicsControl::Owner");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ControlComponentKey) == 24, "Offset mismatch for FRigUnit_AddPhysicsControl::ControlComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ParentBodyComponentKey) == 36, "Offset mismatch for FRigUnit_AddPhysicsControl::ParentBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsControl, bUseParentBodyAsDefault) == 48, "Offset mismatch for FRigUnit_AddPhysicsControl::bUseParentBodyAsDefault");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ChildBodyComponentKey) == 52, "Offset mismatch for FRigUnit_AddPhysicsControl::ChildBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ControlData) == 64, "Offset mismatch for FRigUnit_AddPhysicsControl::ControlData");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ControlMultiplier) == 144, "Offset mismatch for FRigUnit_AddPhysicsControl::ControlMultiplier");
static_assert(offsetof(FRigUnit_AddPhysicsControl, ControlTarget) == 256, "Offset mismatch for FRigUnit_AddPhysicsControl::ControlTarget");

// /Script/ControlRigPhysics.RigUnit_AddPhysicsJoint
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_AddPhysicsJoint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParentBodyComponentKey[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildBodyComponentKey[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t JointData[0x150]; // 0x0040 (Size: 0x150, Type: StructProperty)
    std::uint8_t DriveData[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddPhysicsJoint, Owner) == 16, "Offset mismatch for FRigUnit_AddPhysicsJoint::Owner");
static_assert(offsetof(FRigUnit_AddPhysicsJoint, PhysicsJointComponentKey) == 24, "Offset mismatch for FRigUnit_AddPhysicsJoint::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsJoint, ParentBodyComponentKey) == 36, "Offset mismatch for FRigUnit_AddPhysicsJoint::ParentBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsJoint, ChildBodyComponentKey) == 48, "Offset mismatch for FRigUnit_AddPhysicsJoint::ChildBodyComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsJoint, JointData) == 64, "Offset mismatch for FRigUnit_AddPhysicsJoint::JointData");
static_assert(offsetof(FRigUnit_AddPhysicsJoint, DriveData) == 400, "Offset mismatch for FRigUnit_AddPhysicsJoint::DriveData");

// /Script/ControlRigPhysics.RigUnit_AddPhysicsSolver
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_AddPhysicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SolverSettings[0xD0]; // 0x0028 (Size: 0xD0, Type: StructProperty)
    std::uint8_t SimulationSpaceSettings[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddPhysicsSolver, Owner) == 16, "Offset mismatch for FRigUnit_AddPhysicsSolver::Owner");
static_assert(offsetof(FRigUnit_AddPhysicsSolver, PhysicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_AddPhysicsSolver::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_AddPhysicsSolver, SolverSettings) == 40, "Offset mismatch for FRigUnit_AddPhysicsSolver::SolverSettings");
static_assert(offsetof(FRigUnit_AddPhysicsSolver, SimulationSpaceSettings) == 248, "Offset mismatch for FRigUnit_AddPhysicsSolver::SimulationSpaceSettings");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsBodyExists
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsBodyExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsBodyExists, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsBodyExists::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsBodyExists, bExists) == 20, "Offset mismatch for FRigUnit_GetPhysicsBodyExists::bExists");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsControlExists
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsControlExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsControlExists, PhysicsControlComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsControlExists::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsControlExists, bExists) == 20, "Offset mismatch for FRigUnit_GetPhysicsControlExists::bExists");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsJointExists
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsJointExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsJointExists, PhysicsJointComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsJointExists::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsJointExists, bExists) == 20, "Offset mismatch for FRigUnit_GetPhysicsJointExists::bExists");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsSolverExists
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsSolverExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsSolverExists, PhysicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsSolverExists::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsSolverExists, bExists) == 20, "Offset mismatch for FRigUnit_GetPhysicsSolverExists::bExists");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsSolverSimulationSpaceSettings
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsSolverSimulationSpaceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SimulationSpaceSettings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsSolverSimulationSpaceSettings, PhysicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsSolverSimulationSpaceSettings::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSimulationSpaceSettings, SimulationSpaceSettings) == 24, "Offset mismatch for FRigUnit_GetPhysicsSolverSimulationSpaceSettings::SimulationSpaceSettings");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsSolverSpaceData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsSolverSpaceData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t LinearVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearAcceleration[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularAcceleration[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t Gravity[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, PhysicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, LinearVelocity) == 24, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::LinearVelocity");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, AngularVelocity) == 48, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::AngularVelocity");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, LinearAcceleration) == 72, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::LinearAcceleration");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, AngularAcceleration) == 96, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::AngularAcceleration");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceData, Gravity) == 120, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceData::Gravity");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsSolverSpaceMotion
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsSolverSpaceMotion
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpaceMotion[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceMotion, PhysicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceMotion::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsSolverSpaceMotion, SpaceMotion) == 24, "Offset mismatch for FRigUnit_GetPhysicsSolverSpaceMotion::SpaceMotion");

// /Script/ControlRigPhysics.RigUnit_GetPhysicsSolverTeleportDetection
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_GetPhysicsSolverTeleportDetection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetPhysicsSolverTeleportDetection, PhysicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetPhysicsSolverTeleportDetection::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetPhysicsSolverTeleportDetection, TeleportDetection) == 20, "Offset mismatch for FRigUnit_GetPhysicsSolverTeleportDetection::TeleportDetection");

// /Script/ControlRigPhysics.RigUnit_HierarchyAddPhysicsBodyForce
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyAddPhysicsBodyForce
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForceAndTorque[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    FName Name; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddPhysicsBodyForce, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyAddPhysicsBodyForce::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyAddPhysicsBodyForce, ForceAndTorque) == 32, "Offset mismatch for FRigUnit_HierarchyAddPhysicsBodyForce::ForceAndTorque");
static_assert(offsetof(FRigUnit_HierarchyAddPhysicsBodyForce, Name) == 112, "Offset mismatch for FRigUnit_HierarchyAddPhysicsBodyForce::Name");

// /Script/ControlRigPhysics.RigUnit_HierarchyAutoCalculateCollision
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyAutoCalculateCollision
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float MinAspectRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinSize; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAutoCalculateCollision, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyAutoCalculateCollision::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyAutoCalculateCollision, MinAspectRatio) == 28, "Offset mismatch for FRigUnit_HierarchyAutoCalculateCollision::MinAspectRatio");
static_assert(offsetof(FRigUnit_HierarchyAutoCalculateCollision, MinSize) == 32, "Offset mismatch for FRigUnit_HierarchyAutoCalculateCollision::MinSize");

// /Script/ControlRigPhysics.RigUnit_HierarchyDisableCollisionBetween
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyDisableCollisionBetween
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey1[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t PhysicsBodyComponentKey2[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyDisableCollisionBetween, PhysicsBodyComponentKey1) == 16, "Offset mismatch for FRigUnit_HierarchyDisableCollisionBetween::PhysicsBodyComponentKey1");
static_assert(offsetof(FRigUnit_HierarchyDisableCollisionBetween, PhysicsBodyComponentKey2) == 28, "Offset mismatch for FRigUnit_HierarchyDisableCollisionBetween::PhysicsBodyComponentKey2");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetControlData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetControlData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetControlData, PhysicsControlComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetControlData::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetControlData, ControlData) == 24, "Offset mismatch for FRigUnit_HierarchyGetControlData::ControlData");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetJointData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetJointData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t JointData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetJointData, PhysicsJointComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetJointData::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetJointData, JointData) == 32, "Offset mismatch for FRigUnit_HierarchyGetJointData::JointData");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetJointDriveData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetJointDriveData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t DriveData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetJointDriveData, PhysicsJointComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetJointDriveData::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetJointDriveData, DriveData) == 24, "Offset mismatch for FRigUnit_HierarchyGetJointDriveData::DriveData");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetPhysicsBodyAngularVelocity
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetPhysicsBodyAngularVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t AngularVelocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyAngularVelocity, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyAngularVelocity::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyAngularVelocity, AngularVelocity) == 24, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyAngularVelocity::AngularVelocity");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetPhysicsBodyCoMTransform
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetPhysicsBodyCoMTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t CoMTransform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyCoMTransform, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyCoMTransform::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyCoMTransform, CoMTransform) == 32, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyCoMTransform::CoMTransform");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetPhysicsBodyLinearVelocity
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetPhysicsBodyLinearVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t LinearVelocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyLinearVelocity, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyLinearVelocity::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyLinearVelocity, LinearVelocity) == 24, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyLinearVelocity::LinearVelocity");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetPhysicsBodyPointVelocity
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetPhysicsBodyPointVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Velocity[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyPointVelocity, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyPointVelocity::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyPointVelocity, Position) == 24, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyPointVelocity::Position");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyPointVelocity, Space) == 48, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyPointVelocity::Space");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyPointVelocity, Velocity) == 56, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyPointVelocity::Velocity");

// /Script/ControlRigPhysics.RigUnit_HierarchyGetPhysicsBodyTransform
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_HierarchyGetPhysicsBodyTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyTransform, PhysicsBodyComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyTransform::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetPhysicsBodyTransform, Transform) == 32, "Offset mismatch for FRigUnit_HierarchyGetPhysicsBodyTransform::Transform");

// /Script/ControlRigPhysics.RigUnit_HierarchyImportCollisionFromPhysicsAsset
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyImportCollisionFromPhysicsAsset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseAutomaticSolver; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    void* PhysicsAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BonesToUse; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Namespace[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t Owner[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    TArray<void*> BoneKeys; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PhysicsBodyComponentKeys; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, bUseAutomaticSolver) == 28, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::bUseAutomaticSolver");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, PhysicsAsset) == 32, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::PhysicsAsset");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, BonesToUse) == 40, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::BonesToUse");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, Namespace) == 56, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::Namespace");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, Owner) == 60, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::Owner");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, BoneKeys) == 72, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::BoneKeys");
static_assert(offsetof(FRigUnit_HierarchyImportCollisionFromPhysicsAsset, PhysicsBodyComponentKeys) == 88, "Offset mismatch for FRigUnit_HierarchyImportCollisionFromPhysicsAsset::PhysicsBodyComponentKeys");

// /Script/ControlRigPhysics.RigUnit_HierarchyInstantiateFromPhysicsAsset
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyInstantiateFromPhysicsAsset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseAutomaticSolver; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    void* PhysicsAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    FName ConstraintProfileName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> BonesToUse; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableJoints; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDrives; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSimSpaceControl; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddParentSpaceControl; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMakeHelperBodies; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t SimSpaceControlData[0x50]; // 0x0048 (Size: 0x50, Type: StructProperty)
    std::uint8_t ParentSpaceControlData[0x50]; // 0x0098 (Size: 0x50, Type: StructProperty)
    TArray<void*> PhysicsBodyComponentKeys; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PhysicsJointComponentKeys; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimSpaceControlComponentKeys; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentSpaceControlComponentKeys; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bUseAutomaticSolver) == 28, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bUseAutomaticSolver");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, PhysicsAsset) == 32, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::PhysicsAsset");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, ConstraintProfileName) == 40, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::ConstraintProfileName");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, BonesToUse) == 48, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::BonesToUse");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bEnableJoints) == 64, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bEnableJoints");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bEnableDrives) == 65, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bEnableDrives");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bAddSimSpaceControl) == 66, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bAddSimSpaceControl");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bAddParentSpaceControl) == 67, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bAddParentSpaceControl");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, bMakeHelperBodies) == 68, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::bMakeHelperBodies");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, SimSpaceControlData) == 72, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::SimSpaceControlData");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, ParentSpaceControlData) == 152, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::ParentSpaceControlData");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, PhysicsBodyComponentKeys) == 232, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::PhysicsBodyComponentKeys");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, PhysicsJointComponentKeys) == 248, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::PhysicsJointComponentKeys");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, SimSpaceControlComponentKeys) == 264, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::SimSpaceControlComponentKeys");
static_assert(offsetof(FRigUnit_HierarchyInstantiateFromPhysicsAsset, ParentSpaceControlComponentKeys) == 280, "Offset mismatch for FRigUnit_HierarchyInstantiateFromPhysicsAsset::ParentSpaceControlComponentKeys");

// /Script/ControlRigPhysics.RigUnit_HierarchyRemovePhysicsBodyForce
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyRemovePhysicsBodyForce
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_HierarchyRemovePhysicsBodyForce, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyRemovePhysicsBodyForce::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchyRemovePhysicsBodyForce, Name) == 28, "Offset mismatch for FRigUnit_HierarchyRemovePhysicsBodyForce::Name");

// /Script/ControlRigPhysics.RigUnit_HierarchySetBodySolverSettings
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetBodySolverSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t BodySolverSettings[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetBodySolverSettings, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetBodySolverSettings::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetBodySolverSettings, BodySolverSettings) == 28, "Offset mismatch for FRigUnit_HierarchySetBodySolverSettings::BodySolverSettings");

// /Script/ControlRigPhysics.RigUnit_HierarchySetCollision
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetCollision
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Collision[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetCollision, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetCollision::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetCollision, Collision) == 32, "Offset mismatch for FRigUnit_HierarchySetCollision::Collision");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlAngularDampingRatio
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlAngularDampingRatio
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlAngularDampingRatio, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlAngularDampingRatio::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlAngularDampingRatio, DampingRatio) == 28, "Offset mismatch for FRigUnit_HierarchySetControlAngularDampingRatio::DampingRatio");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlAngularStrength
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlAngularStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlAngularStrength, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlAngularStrength::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlAngularStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetControlAngularStrength::Strength");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlCustomControlPoint
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlCustomControlPoint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomControlPoint[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseCustomControlPoint; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlCustomControlPoint, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlCustomControlPoint::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlCustomControlPoint, CustomControlPoint) == 32, "Offset mismatch for FRigUnit_HierarchySetControlCustomControlPoint::CustomControlPoint");
static_assert(offsetof(FRigUnit_HierarchySetControlCustomControlPoint, bUseCustomControlPoint) == 56, "Offset mismatch for FRigUnit_HierarchySetControlCustomControlPoint::bUseCustomControlPoint");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlData
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlData, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlData::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlData, ControlData) == 32, "Offset mismatch for FRigUnit_HierarchySetControlData::ControlData");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlDataAndMultiplier
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlDataAndMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlData[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlDataAndMultiplier, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlDataAndMultiplier::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlDataAndMultiplier, ControlData) == 32, "Offset mismatch for FRigUnit_HierarchySetControlDataAndMultiplier::ControlData");
static_assert(offsetof(FRigUnit_HierarchySetControlDataAndMultiplier, ControlMultiplier) == 112, "Offset mismatch for FRigUnit_HierarchySetControlDataAndMultiplier::ControlMultiplier");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlEnabled
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlEnabled
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnabled; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlEnabled, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlEnabled::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlEnabled, bEnabled) == 28, "Offset mismatch for FRigUnit_HierarchySetControlEnabled::bEnabled");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlLinearDampingRatio
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlLinearDampingRatio
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlLinearDampingRatio, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlLinearDampingRatio::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlLinearDampingRatio, DampingRatio) == 28, "Offset mismatch for FRigUnit_HierarchySetControlLinearDampingRatio::DampingRatio");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlLinearStrength
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlLinearStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlLinearStrength, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlLinearStrength::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlLinearStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetControlLinearStrength::Strength");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlMultiplier
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlMultiplier, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlMultiplier::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlMultiplier, ControlMultiplier) == 32, "Offset mismatch for FRigUnit_HierarchySetControlMultiplier::ControlMultiplier");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlTarget
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlTarget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlTarget[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlTarget, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlTarget::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlTarget, ControlTarget) == 32, "Offset mismatch for FRigUnit_HierarchySetControlTarget::ControlTarget");

// /Script/ControlRigPhysics.RigUnit_HierarchySetControlTargetVelocityMultipliers
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetControlTargetVelocityMultipliers
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float LinearTargetVelocityMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
    float AngularTargetVelocityMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetControlTargetVelocityMultipliers, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetControlTargetVelocityMultipliers::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetControlTargetVelocityMultipliers, LinearTargetVelocityMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetControlTargetVelocityMultipliers::LinearTargetVelocityMultiplier");
static_assert(offsetof(FRigUnit_HierarchySetControlTargetVelocityMultipliers, AngularTargetVelocityMultiplier) == 32, "Offset mismatch for FRigUnit_HierarchySetControlTargetVelocityMultipliers::AngularTargetVelocityMultiplier");

// /Script/ControlRigPhysics.RigUnit_HierarchySetDynamics
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetDynamics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Dynamics[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamics, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamics::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamics, Dynamics) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamics::Dynamics");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointConeLimit
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointConeLimit
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConeLimit[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointConeLimit, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointConeLimit::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointConeLimit, ConeLimit) == 28, "Offset mismatch for FRigUnit_HierarchySetJointConeLimit::ConeLimit");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointData
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t JointData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointData, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointData::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointData, JointData) == 32, "Offset mismatch for FRigUnit_HierarchySetJointData::JointData");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointDriveData
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointDriveData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DriveData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointDriveData, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointDriveData::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointDriveData, DriveData) == 32, "Offset mismatch for FRigUnit_HierarchySetJointDriveData::DriveData");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointDriveUseSkeletalAnimation
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointDriveUseSkeletalAnimation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseSkeletalAnimation; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointDriveUseSkeletalAnimation, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointDriveUseSkeletalAnimation::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointDriveUseSkeletalAnimation, bUseSkeletalAnimation) == 28, "Offset mismatch for FRigUnit_HierarchySetJointDriveUseSkeletalAnimation::bUseSkeletalAnimation");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointEnabled
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointEnabled
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnabled; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointEnabled, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointEnabled::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointEnabled, bEnabled) == 28, "Offset mismatch for FRigUnit_HierarchySetJointEnabled::bEnabled");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointLinearLimit
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointLinearLimit
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t LinearLimit[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointLinearLimit, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointLinearLimit::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointLinearLimit, LinearLimit) == 28, "Offset mismatch for FRigUnit_HierarchySetJointLinearLimit::LinearLimit");

// /Script/ControlRigPhysics.RigUnit_HierarchySetJointTwistLimit
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetJointTwistLimit
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsJointComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t TwistLimit[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetJointTwistLimit, PhysicsJointComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetJointTwistLimit::PhysicsJointComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetJointTwistLimit, TwistLimit) == 28, "Offset mismatch for FRigUnit_HierarchySetJointTwistLimit::TwistLimit");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyCollisionType
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyCollisionType
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t CollisionType; // 0x001C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyCollisionType, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyCollisionType::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyCollisionType, CollisionType) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyCollisionType::CollisionType");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyDamping
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyDamping
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float LinearDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyDamping, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyDamping::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyDamping, LinearDamping) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyDamping::LinearDamping");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyDamping, AngularDamping) == 32, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyDamping::AngularDamping");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyEnableCCD
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyEnableCCD
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnableCCD; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyEnableCCD, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyEnableCCD::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyEnableCCD, bEnableCCD) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyEnableCCD::bEnableCCD");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyGravityMultiplier
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyGravityMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float GravityMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyGravityMultiplier, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyGravityMultiplier::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyGravityMultiplier, GravityMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyGravityMultiplier::GravityMultiplier");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bInclude; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset, bInclude) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyIncludeInChecksForReset::bInclude");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyKinematicTarget
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyKinematicTarget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t KinematicTarget[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyKinematicTarget, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyKinematicTarget::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyKinematicTarget, KinematicTarget) == 32, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyKinematicTarget::KinematicTarget");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyKinematicTargetSpace
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t KinematicTargetSpace; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace, KinematicTargetSpace) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyKinematicTargetSpace::KinematicTargetSpace");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyMaterial
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyMaterial
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Material[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyMaterial, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyMaterial::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyMaterial, Material) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyMaterial::Material");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyMovementType
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyMovementType
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t MovementType; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyMovementType, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyMovementType::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyMovementType, MovementType) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyMovementType::MovementType");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float PhysicsBlendWeight; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight, PhysicsBlendWeight) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyPhysicsBlendWeight::PhysicsBlendWeight");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodySourceBone
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodySourceBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t SourceBone[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodySourceBone, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodySourceBone::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodySourceBone, SourceBone) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodySourceBone::SourceBone");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodySparseData
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodySparseData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Data[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodySparseData, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodySparseData::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodySparseData, Data) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodySparseData::Data");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyTargetBone
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyTargetBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetBone[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyTargetBone, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyTargetBone::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyTargetBone, TargetBone) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyTargetBone::TargetBone");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsBodyComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUpdateKinematicFromSimulation; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation, PhysicsBodyComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation::PhysicsBodyComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation, bUpdateKinematicFromSimulation) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsBodyUpdateKinematicFromSimulation::bUpdateKinematicFromSimulation");

// /Script/ControlRigPhysics.RigUnit_HierarchySetPhysicsSolverAllowCCD
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchySetPhysicsSolverAllowCCD
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAllowCCD; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPhysicsSolverAllowCCD, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetPhysicsSolverAllowCCD::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetPhysicsSolverAllowCCD, bAllowCCD) == 28, "Offset mismatch for FRigUnit_HierarchySetPhysicsSolverAllowCCD::bAllowCCD");

// /Script/ControlRigPhysics.RigUnit_HierarchyUpdateControlTarget
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_HierarchyUpdateControlTarget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsControlComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetPosition[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float DeltaTime; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyUpdateControlTarget, PhysicsControlComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyUpdateControlTarget::PhysicsControlComponentKey");
static_assert(offsetof(FRigUnit_HierarchyUpdateControlTarget, TargetPosition) == 32, "Offset mismatch for FRigUnit_HierarchyUpdateControlTarget::TargetPosition");
static_assert(offsetof(FRigUnit_HierarchyUpdateControlTarget, TargetOrientation) == 56, "Offset mismatch for FRigUnit_HierarchyUpdateControlTarget::TargetOrientation");
static_assert(offsetof(FRigUnit_HierarchyUpdateControlTarget, DeltaTime) == 80, "Offset mismatch for FRigUnit_HierarchyUpdateControlTarget::DeltaTime");

// /Script/ControlRigPhysics.RigUnit_InstantiatePhysics
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_InstantiatePhysics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_InstantiatePhysics, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_InstantiatePhysics::PhysicsSolverComponentKey");

// /Script/ControlRigPhysics.RigUnit_MakeArticulationDriveData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_MakeArticulationDriveData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnableAngularDrive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AngularDriveMode; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float AngularStrength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatio; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SkeletalAnimationVelocityMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    std::uint8_t DriveData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MakeArticulationDriveData, bEnableAngularDrive) == 8, "Offset mismatch for FRigUnit_MakeArticulationDriveData::bEnableAngularDrive");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, AngularDriveMode) == 9, "Offset mismatch for FRigUnit_MakeArticulationDriveData::AngularDriveMode");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, AngularStrength) == 12, "Offset mismatch for FRigUnit_MakeArticulationDriveData::AngularStrength");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, AngularDampingRatio) == 16, "Offset mismatch for FRigUnit_MakeArticulationDriveData::AngularDampingRatio");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, AngularExtraDamping) == 20, "Offset mismatch for FRigUnit_MakeArticulationDriveData::AngularExtraDamping");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, SkeletalAnimationVelocityMultiplier) == 24, "Offset mismatch for FRigUnit_MakeArticulationDriveData::SkeletalAnimationVelocityMultiplier");
static_assert(offsetof(FRigUnit_MakeArticulationDriveData, DriveData) == 32, "Offset mismatch for FRigUnit_MakeArticulationDriveData::DriveData");

// /Script/ControlRigPhysics.RigUnit_MakeArticulationJointData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_MakeArticulationJointData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AngularLimit[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoftStrength[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoftDampingRatio[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t JointData[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MakeArticulationJointData, AngularLimit) == 8, "Offset mismatch for FRigUnit_MakeArticulationJointData::AngularLimit");
static_assert(offsetof(FRigUnit_MakeArticulationJointData, SoftStrength) == 32, "Offset mismatch for FRigUnit_MakeArticulationJointData::SoftStrength");
static_assert(offsetof(FRigUnit_MakeArticulationJointData, SoftDampingRatio) == 56, "Offset mismatch for FRigUnit_MakeArticulationJointData::SoftDampingRatio");
static_assert(offsetof(FRigUnit_MakeArticulationJointData, JointData) == 80, "Offset mismatch for FRigUnit_MakeArticulationJointData::JointData");

// /Script/ControlRigPhysics.RigUnit_MakeDriveData
// Kind: ScriptStruct; super: RigUnit_PhysicsBase
struct FRigUnit_MakeDriveData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnableLinearDrive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float LinearStrength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LinearDampingRatio; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LinearExtraDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAngularDrive; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AngularDriveMode; // 0x0019 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x001A
    float AngularStrength; // 0x001C (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatio; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDamping; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SkeletalAnimationVelocityMultiplier; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x002C
    std::uint8_t DriveData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MakeDriveData, bEnableLinearDrive) == 8, "Offset mismatch for FRigUnit_MakeDriveData::bEnableLinearDrive");
static_assert(offsetof(FRigUnit_MakeDriveData, LinearStrength) == 12, "Offset mismatch for FRigUnit_MakeDriveData::LinearStrength");
static_assert(offsetof(FRigUnit_MakeDriveData, LinearDampingRatio) == 16, "Offset mismatch for FRigUnit_MakeDriveData::LinearDampingRatio");
static_assert(offsetof(FRigUnit_MakeDriveData, LinearExtraDamping) == 20, "Offset mismatch for FRigUnit_MakeDriveData::LinearExtraDamping");
static_assert(offsetof(FRigUnit_MakeDriveData, bEnableAngularDrive) == 24, "Offset mismatch for FRigUnit_MakeDriveData::bEnableAngularDrive");
static_assert(offsetof(FRigUnit_MakeDriveData, AngularDriveMode) == 25, "Offset mismatch for FRigUnit_MakeDriveData::AngularDriveMode");
static_assert(offsetof(FRigUnit_MakeDriveData, AngularStrength) == 28, "Offset mismatch for FRigUnit_MakeDriveData::AngularStrength");
static_assert(offsetof(FRigUnit_MakeDriveData, AngularDampingRatio) == 32, "Offset mismatch for FRigUnit_MakeDriveData::AngularDampingRatio");
static_assert(offsetof(FRigUnit_MakeDriveData, AngularExtraDamping) == 36, "Offset mismatch for FRigUnit_MakeDriveData::AngularExtraDamping");
static_assert(offsetof(FRigUnit_MakeDriveData, SkeletalAnimationVelocityMultiplier) == 40, "Offset mismatch for FRigUnit_MakeDriveData::SkeletalAnimationVelocityMultiplier");
static_assert(offsetof(FRigUnit_MakeDriveData, DriveData) == 48, "Offset mismatch for FRigUnit_MakeDriveData::DriveData");

// /Script/ControlRigPhysics.RigUnit_PhysicsBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PhysicsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigPhysics.RigUnit_PhysicsBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_PhysicsBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PhysicsBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_PhysicsBaseMutable::ExecutePin");

// /Script/ControlRigPhysics.RigUnit_SetPhysicsSolverExternalVelocity
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_SetPhysicsSolverExternalVelocity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalLinearVelocity[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetPhysicsSolverExternalVelocity, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_SetPhysicsSolverExternalVelocity::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SetPhysicsSolverExternalVelocity, ExternalLinearVelocity) == 32, "Offset mismatch for FRigUnit_SetPhysicsSolverExternalVelocity::ExternalLinearVelocity");
static_assert(offsetof(FRigUnit_SetPhysicsSolverExternalVelocity, ExternalAngularVelocity) == 56, "Offset mismatch for FRigUnit_SetPhysicsSolverExternalVelocity::ExternalAngularVelocity");
static_assert(offsetof(FRigUnit_SetPhysicsSolverExternalVelocity, ExternalTurbulenceVelocity) == 80, "Offset mismatch for FRigUnit_SetPhysicsSolverExternalVelocity::ExternalTurbulenceVelocity");

// /Script/ControlRigPhysics.RigUnit_SetPhysicsSolverSimulationSpaceSettings
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_SetPhysicsSolverSimulationSpaceSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SimulationSpaceSettings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetPhysicsSolverSimulationSpaceSettings, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_SetPhysicsSolverSimulationSpaceSettings::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SetPhysicsSolverSimulationSpaceSettings, SimulationSpaceSettings) == 32, "Offset mismatch for FRigUnit_SetPhysicsSolverSimulationSpaceSettings::SimulationSpaceSettings");

// /Script/ControlRigPhysics.RigUnit_SetPhysicsSolverSpaceMotion
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_SetPhysicsSolverSpaceMotion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpaceMotion[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetPhysicsSolverSpaceMotion, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_SetPhysicsSolverSpaceMotion::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SetPhysicsSolverSpaceMotion, SpaceMotion) == 32, "Offset mismatch for FRigUnit_SetPhysicsSolverSpaceMotion::SpaceMotion");

// /Script/ControlRigPhysics.RigUnit_SetPhysicsSolverTeleportDetection
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_SetPhysicsSolverTeleportDetection
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetPhysicsSolverTeleportDetection, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_SetPhysicsSolverTeleportDetection::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SetPhysicsSolverTeleportDetection, TeleportDetection) == 28, "Offset mismatch for FRigUnit_SetPhysicsSolverTeleportDetection::TeleportDetection");

// /Script/ControlRigPhysics.RigUnit_SpawnPhysicsSolver
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_SpawnPhysicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t PhysicsSolverComponentKey[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SolverSettings[0xD0]; // 0x0028 (Size: 0xD0, Type: StructProperty)
    std::uint8_t TeleportDetection[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpaceMotion[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnPhysicsSolver, Owner) == 16, "Offset mismatch for FRigUnit_SpawnPhysicsSolver::Owner");
static_assert(offsetof(FRigUnit_SpawnPhysicsSolver, PhysicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnPhysicsSolver::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnPhysicsSolver, SolverSettings) == 40, "Offset mismatch for FRigUnit_SpawnPhysicsSolver::SolverSettings");
static_assert(offsetof(FRigUnit_SpawnPhysicsSolver, TeleportDetection) == 248, "Offset mismatch for FRigUnit_SpawnPhysicsSolver::TeleportDetection");
static_assert(offsetof(FRigUnit_SpawnPhysicsSolver, SpaceMotion) == 280, "Offset mismatch for FRigUnit_SpawnPhysicsSolver::SpaceMotion");

// /Script/ControlRigPhysics.RigUnit_StepPhysicsSolver
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_StepPhysicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DeltaTimeOverride; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SimulationSpaceDeltaTimeOverride; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VisualizationSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_StepPhysicsSolver, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_StepPhysicsSolver::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_StepPhysicsSolver, DeltaTimeOverride) == 28, "Offset mismatch for FRigUnit_StepPhysicsSolver::DeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepPhysicsSolver, SimulationSpaceDeltaTimeOverride) == 32, "Offset mismatch for FRigUnit_StepPhysicsSolver::SimulationSpaceDeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepPhysicsSolver, Alpha) == 36, "Offset mismatch for FRigUnit_StepPhysicsSolver::Alpha");
static_assert(offsetof(FRigUnit_StepPhysicsSolver, VisualizationSettings) == 40, "Offset mismatch for FRigUnit_StepPhysicsSolver::VisualizationSettings");

// /Script/ControlRigPhysics.RigUnit_StepPhysicsSolver1
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_StepPhysicsSolver1
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DeltaTimeOverride; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SimulationSpaceDeltaTimeOverride; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTrackVelocitiesDuringPassThrough; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t VisualizationSettings[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_StepPhysicsSolver1, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_StepPhysicsSolver1::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_StepPhysicsSolver1, DeltaTimeOverride) == 28, "Offset mismatch for FRigUnit_StepPhysicsSolver1::DeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepPhysicsSolver1, SimulationSpaceDeltaTimeOverride) == 32, "Offset mismatch for FRigUnit_StepPhysicsSolver1::SimulationSpaceDeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepPhysicsSolver1, Alpha) == 36, "Offset mismatch for FRigUnit_StepPhysicsSolver1::Alpha");
static_assert(offsetof(FRigUnit_StepPhysicsSolver1, bTrackVelocitiesDuringPassThrough) == 40, "Offset mismatch for FRigUnit_StepPhysicsSolver1::bTrackVelocitiesDuringPassThrough");
static_assert(offsetof(FRigUnit_StepPhysicsSolver1, VisualizationSettings) == 44, "Offset mismatch for FRigUnit_StepPhysicsSolver1::VisualizationSettings");

// /Script/ControlRigPhysics.RigUnit_TrackInputPose
// Kind: ScriptStruct; super: RigUnit_PhysicsBaseMutable
struct FRigUnit_TrackInputPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PhysicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::int32_t NumberOfFrames; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceNumberOfFrames; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_TrackInputPose, PhysicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_TrackInputPose::PhysicsSolverComponentKey");
static_assert(offsetof(FRigUnit_TrackInputPose, NumberOfFrames) == 28, "Offset mismatch for FRigUnit_TrackInputPose::NumberOfFrames");
static_assert(offsetof(FRigUnit_TrackInputPose, bForceNumberOfFrames) == 32, "Offset mismatch for FRigUnit_TrackInputPose::bForceNumberOfFrames");
