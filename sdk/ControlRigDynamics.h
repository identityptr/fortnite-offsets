/**
 * decamp dumper generated SDK
 * Package: /Script/ControlRigDynamics
 */
#pragma once
#include "Basic.h"

// /Script/ControlRigDynamics.ParticleChainCurves
// Kind: ScriptStruct; super: none
struct FParticleChainCurves
{
public:
    std::uint8_t RadiusMultiplier[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t MassMultiplier[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t GravityMultiplier[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::uint8_t StrengthMultiplier[0x48]; // 0x00D8 (Size: 0x48, Type: StructProperty)
    std::uint8_t DampingRatioMultiplier[0x48]; // 0x0120 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExtraDampingMultiplier[0x48]; // 0x0168 (Size: 0x48, Type: StructProperty)
    std::uint8_t DampingMultiplier[0x48]; // 0x01B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t TargetModeMultiplier[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t AngleLimitMultiplier[0x48]; // 0x0240 (Size: 0x48, Type: StructProperty)
    std::uint8_t AngleLimitStrengthMultiplier[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FParticleChainCurves, RadiusMultiplier) == 0, "Offset mismatch for FParticleChainCurves::RadiusMultiplier");
static_assert(offsetof(FParticleChainCurves, MassMultiplier) == 72, "Offset mismatch for FParticleChainCurves::MassMultiplier");
static_assert(offsetof(FParticleChainCurves, GravityMultiplier) == 144, "Offset mismatch for FParticleChainCurves::GravityMultiplier");
static_assert(offsetof(FParticleChainCurves, StrengthMultiplier) == 216, "Offset mismatch for FParticleChainCurves::StrengthMultiplier");
static_assert(offsetof(FParticleChainCurves, DampingRatioMultiplier) == 288, "Offset mismatch for FParticleChainCurves::DampingRatioMultiplier");
static_assert(offsetof(FParticleChainCurves, ExtraDampingMultiplier) == 360, "Offset mismatch for FParticleChainCurves::ExtraDampingMultiplier");
static_assert(offsetof(FParticleChainCurves, DampingMultiplier) == 432, "Offset mismatch for FParticleChainCurves::DampingMultiplier");
static_assert(offsetof(FParticleChainCurves, TargetModeMultiplier) == 504, "Offset mismatch for FParticleChainCurves::TargetModeMultiplier");
static_assert(offsetof(FParticleChainCurves, AngleLimitMultiplier) == 576, "Offset mismatch for FParticleChainCurves::AngleLimitMultiplier");
static_assert(offsetof(FParticleChainCurves, AngleLimitStrengthMultiplier) == 648, "Offset mismatch for FParticleChainCurves::AngleLimitStrengthMultiplier");

// /Script/ControlRigDynamics.RigDynamicsColliderComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsColliderComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Shapes[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsColliderComponent, Shapes) == 56, "Offset mismatch for FRigDynamicsColliderComponent::Shapes");

// /Script/ControlRigDynamics.RigDynamicsConeLimitComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsConeLimitComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t GrandparentComponentKey[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParentComponentKey[0xC]; // 0x0044 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildComponentKey[0xC]; // 0x0050 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x005C (Size: 0x4, Type: FloatProperty)
    float DampingRatio; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float Angle; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsConeLimitComponent, GrandparentComponentKey) == 56, "Offset mismatch for FRigDynamicsConeLimitComponent::GrandparentComponentKey");
static_assert(offsetof(FRigDynamicsConeLimitComponent, ParentComponentKey) == 68, "Offset mismatch for FRigDynamicsConeLimitComponent::ParentComponentKey");
static_assert(offsetof(FRigDynamicsConeLimitComponent, ChildComponentKey) == 80, "Offset mismatch for FRigDynamicsConeLimitComponent::ChildComponentKey");
static_assert(offsetof(FRigDynamicsConeLimitComponent, Strength) == 92, "Offset mismatch for FRigDynamicsConeLimitComponent::Strength");
static_assert(offsetof(FRigDynamicsConeLimitComponent, DampingRatio) == 96, "Offset mismatch for FRigDynamicsConeLimitComponent::DampingRatio");
static_assert(offsetof(FRigDynamicsConeLimitComponent, Angle) == 100, "Offset mismatch for FRigDynamicsConeLimitComponent::Angle");

// /Script/ControlRigDynamics.RigDynamicsConfinerComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsConfinerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Shapes[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    float Strength; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsConfinerComponent, Shapes) == 56, "Offset mismatch for FRigDynamicsConfinerComponent::Shapes");
static_assert(offsetof(FRigDynamicsConfinerComponent, Strength) == 104, "Offset mismatch for FRigDynamicsConfinerComponent::Strength");

// /Script/ControlRigDynamics.RigDynamicsConstraintComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsConstraintComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ParentComponentKey[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildComponentKey[0xC]; // 0x0044 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConstraintType; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    float Strength; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float DampingRatio; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float ExtraDamping; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAccelerationMode; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float LengthMultiplier; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ExtraLength; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsConstraintComponent, ParentComponentKey) == 56, "Offset mismatch for FRigDynamicsConstraintComponent::ParentComponentKey");
static_assert(offsetof(FRigDynamicsConstraintComponent, ChildComponentKey) == 68, "Offset mismatch for FRigDynamicsConstraintComponent::ChildComponentKey");
static_assert(offsetof(FRigDynamicsConstraintComponent, ConstraintType) == 80, "Offset mismatch for FRigDynamicsConstraintComponent::ConstraintType");
static_assert(offsetof(FRigDynamicsConstraintComponent, Strength) == 84, "Offset mismatch for FRigDynamicsConstraintComponent::Strength");
static_assert(offsetof(FRigDynamicsConstraintComponent, DampingRatio) == 88, "Offset mismatch for FRigDynamicsConstraintComponent::DampingRatio");
static_assert(offsetof(FRigDynamicsConstraintComponent, ExtraDamping) == 92, "Offset mismatch for FRigDynamicsConstraintComponent::ExtraDamping");
static_assert(offsetof(FRigDynamicsConstraintComponent, bAccelerationMode) == 96, "Offset mismatch for FRigDynamicsConstraintComponent::bAccelerationMode");
static_assert(offsetof(FRigDynamicsConstraintComponent, LengthMultiplier) == 100, "Offset mismatch for FRigDynamicsConstraintComponent::LengthMultiplier");
static_assert(offsetof(FRigDynamicsConstraintComponent, ExtraLength) == 104, "Offset mismatch for FRigDynamicsConstraintComponent::ExtraLength");

// /Script/ControlRigDynamics.RigDynamicsForceFieldCurves
// Kind: ScriptStruct; super: none
struct FRigDynamicsForceFieldCurves
{
public:
    std::uint8_t RadialMultiplier[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t LinearMultiplier[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t RotationalMultiplier[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsForceFieldCurves, RadialMultiplier) == 0, "Offset mismatch for FRigDynamicsForceFieldCurves::RadialMultiplier");
static_assert(offsetof(FRigDynamicsForceFieldCurves, LinearMultiplier) == 72, "Offset mismatch for FRigDynamicsForceFieldCurves::LinearMultiplier");
static_assert(offsetof(FRigDynamicsForceFieldCurves, RotationalMultiplier) == 144, "Offset mismatch for FRigDynamicsForceFieldCurves::RotationalMultiplier");

// /Script/ControlRigDynamics.RigDynamicsInertialForceSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsInertialForceSettings
{
public:
    float Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LinearEulerAmount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularEulerAmount; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CentrifugalAmount; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CoriolisAmount; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsInertialForceSettings, Amount) == 0, "Offset mismatch for FRigDynamicsInertialForceSettings::Amount");
static_assert(offsetof(FRigDynamicsInertialForceSettings, LinearEulerAmount) == 4, "Offset mismatch for FRigDynamicsInertialForceSettings::LinearEulerAmount");
static_assert(offsetof(FRigDynamicsInertialForceSettings, AngularEulerAmount) == 8, "Offset mismatch for FRigDynamicsInertialForceSettings::AngularEulerAmount");
static_assert(offsetof(FRigDynamicsInertialForceSettings, CentrifugalAmount) == 12, "Offset mismatch for FRigDynamicsInertialForceSettings::CentrifugalAmount");
static_assert(offsetof(FRigDynamicsInertialForceSettings, CoriolisAmount) == 16, "Offset mismatch for FRigDynamicsInertialForceSettings::CoriolisAmount");

// /Script/ControlRigDynamics.RigDynamicsParticleComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsParticleComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ParticleProperties[0x68]; // 0x0038 (Size: 0x68, Type: StructProperty)
    TArray<void*> PendingForces; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigDynamicsParticleComponent, ParticleProperties) == 56, "Offset mismatch for FRigDynamicsParticleComponent::ParticleProperties");
static_assert(offsetof(FRigDynamicsParticleComponent, PendingForces) == 160, "Offset mismatch for FRigDynamicsParticleComponent::PendingForces");

// /Script/ControlRigDynamics.RigDynamicsParticleForce
// Kind: ScriptStruct; super: none
struct FRigDynamicsParticleForce
{
public:
    std::uint8_t Force[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Type; // 0x0019 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigDynamicsParticleForce, Force) == 0, "Offset mismatch for FRigDynamicsParticleForce::Force");
static_assert(offsetof(FRigDynamicsParticleForce, Space) == 24, "Offset mismatch for FRigDynamicsParticleForce::Space");
static_assert(offsetof(FRigDynamicsParticleForce, Type) == 25, "Offset mismatch for FRigDynamicsParticleForce::Type");

// /Script/ControlRigDynamics.RigDynamicsParticleProperties
// Kind: ScriptStruct; super: none
struct FRigDynamicsParticleProperties
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float GravityMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DampingRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ExtraDamping; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAccelerationMode; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    float TargetVelocityInfluence; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float TargetMode; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float AngleLimit; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AngleLimitStrength; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleDampingByInverseMass; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollideWithColliders; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0036
    TArray<void*> NoCollisionColliders; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionParticles; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Confiners; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigDynamicsParticleProperties, Radius) == 0, "Offset mismatch for FRigDynamicsParticleProperties::Radius");
static_assert(offsetof(FRigDynamicsParticleProperties, Mass) == 4, "Offset mismatch for FRigDynamicsParticleProperties::Mass");
static_assert(offsetof(FRigDynamicsParticleProperties, MovementType) == 8, "Offset mismatch for FRigDynamicsParticleProperties::MovementType");
static_assert(offsetof(FRigDynamicsParticleProperties, GravityMultiplier) == 12, "Offset mismatch for FRigDynamicsParticleProperties::GravityMultiplier");
static_assert(offsetof(FRigDynamicsParticleProperties, Strength) == 16, "Offset mismatch for FRigDynamicsParticleProperties::Strength");
static_assert(offsetof(FRigDynamicsParticleProperties, DampingRatio) == 20, "Offset mismatch for FRigDynamicsParticleProperties::DampingRatio");
static_assert(offsetof(FRigDynamicsParticleProperties, ExtraDamping) == 24, "Offset mismatch for FRigDynamicsParticleProperties::ExtraDamping");
static_assert(offsetof(FRigDynamicsParticleProperties, bAccelerationMode) == 28, "Offset mismatch for FRigDynamicsParticleProperties::bAccelerationMode");
static_assert(offsetof(FRigDynamicsParticleProperties, TargetVelocityInfluence) == 32, "Offset mismatch for FRigDynamicsParticleProperties::TargetVelocityInfluence");
static_assert(offsetof(FRigDynamicsParticleProperties, TargetMode) == 36, "Offset mismatch for FRigDynamicsParticleProperties::TargetMode");
static_assert(offsetof(FRigDynamicsParticleProperties, AngleLimit) == 40, "Offset mismatch for FRigDynamicsParticleProperties::AngleLimit");
static_assert(offsetof(FRigDynamicsParticleProperties, AngleLimitStrength) == 44, "Offset mismatch for FRigDynamicsParticleProperties::AngleLimitStrength");
static_assert(offsetof(FRigDynamicsParticleProperties, Damping) == 48, "Offset mismatch for FRigDynamicsParticleProperties::Damping");
static_assert(offsetof(FRigDynamicsParticleProperties, bScaleDampingByInverseMass) == 52, "Offset mismatch for FRigDynamicsParticleProperties::bScaleDampingByInverseMass");
static_assert(offsetof(FRigDynamicsParticleProperties, bCollideWithColliders) == 53, "Offset mismatch for FRigDynamicsParticleProperties::bCollideWithColliders");
static_assert(offsetof(FRigDynamicsParticleProperties, NoCollisionColliders) == 56, "Offset mismatch for FRigDynamicsParticleProperties::NoCollisionColliders");
static_assert(offsetof(FRigDynamicsParticleProperties, CollisionParticles) == 72, "Offset mismatch for FRigDynamicsParticleProperties::CollisionParticles");
static_assert(offsetof(FRigDynamicsParticleProperties, Confiners) == 88, "Offset mismatch for FRigDynamicsParticleProperties::Confiners");

// /Script/ControlRigDynamics.RigDynamicsShapeBox
// Kind: ScriptStruct; super: none
struct FRigDynamicsShapeBox
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extents[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsShapeBox, Name) == 0, "Offset mismatch for FRigDynamicsShapeBox::Name");
static_assert(offsetof(FRigDynamicsShapeBox, TM) == 16, "Offset mismatch for FRigDynamicsShapeBox::TM");
static_assert(offsetof(FRigDynamicsShapeBox, Extents) == 112, "Offset mismatch for FRigDynamicsShapeBox::Extents");

// /Script/ControlRigDynamics.RigDynamicsShapeCapsule
// Kind: ScriptStruct; super: none
struct FRigDynamicsShapeCapsule
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float Radius; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsShapeCapsule, Name) == 0, "Offset mismatch for FRigDynamicsShapeCapsule::Name");
static_assert(offsetof(FRigDynamicsShapeCapsule, TM) == 16, "Offset mismatch for FRigDynamicsShapeCapsule::TM");
static_assert(offsetof(FRigDynamicsShapeCapsule, Radius) == 112, "Offset mismatch for FRigDynamicsShapeCapsule::Radius");
static_assert(offsetof(FRigDynamicsShapeCapsule, Length) == 116, "Offset mismatch for FRigDynamicsShapeCapsule::Length");

// /Script/ControlRigDynamics.RigDynamicsShapeCollection
// Kind: ScriptStruct; super: none
struct FRigDynamicsShapeCollection
{
public:
    TArray<void*> Boxes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Capsules; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Planes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigDynamicsShapeCollection, Boxes) == 0, "Offset mismatch for FRigDynamicsShapeCollection::Boxes");
static_assert(offsetof(FRigDynamicsShapeCollection, Capsules) == 16, "Offset mismatch for FRigDynamicsShapeCollection::Capsules");
static_assert(offsetof(FRigDynamicsShapeCollection, Planes) == 32, "Offset mismatch for FRigDynamicsShapeCollection::Planes");

// /Script/ControlRigDynamics.RigDynamicsShapeCollectionWithKey
// Kind: ScriptStruct; super: none
struct FRigDynamicsShapeCollectionWithKey
{
public:
    std::uint8_t Owner[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Shapes[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsShapeCollectionWithKey, Owner) == 0, "Offset mismatch for FRigDynamicsShapeCollectionWithKey::Owner");
static_assert(offsetof(FRigDynamicsShapeCollectionWithKey, Shapes) == 8, "Offset mismatch for FRigDynamicsShapeCollectionWithKey::Shapes");

// /Script/ControlRigDynamics.RigDynamicsShapePlane
// Kind: ScriptStruct; super: none
struct FRigDynamicsShapePlane
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TM[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extents[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsShapePlane, Name) == 0, "Offset mismatch for FRigDynamicsShapePlane::Name");
static_assert(offsetof(FRigDynamicsShapePlane, TM) == 16, "Offset mismatch for FRigDynamicsShapePlane::TM");
static_assert(offsetof(FRigDynamicsShapePlane, Extents) == 112, "Offset mismatch for FRigDynamicsShapePlane::Extents");

// /Script/ControlRigDynamics.RigDynamicsSimulationDragSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsSimulationDragSettings
{
public:
    float LinearDampingMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AngularDampingMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AdditionalDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalVelocitySpace; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t ExternalLinearVelocity[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsSimulationDragSettings, LinearDampingMultiplier) == 0, "Offset mismatch for FRigDynamicsSimulationDragSettings::LinearDampingMultiplier");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, AngularDampingMultiplier) == 4, "Offset mismatch for FRigDynamicsSimulationDragSettings::AngularDampingMultiplier");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, AdditionalDamping) == 8, "Offset mismatch for FRigDynamicsSimulationDragSettings::AdditionalDamping");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, ExternalVelocitySpace) == 12, "Offset mismatch for FRigDynamicsSimulationDragSettings::ExternalVelocitySpace");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, ExternalLinearVelocity) == 16, "Offset mismatch for FRigDynamicsSimulationDragSettings::ExternalLinearVelocity");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, ExternalAngularVelocity) == 40, "Offset mismatch for FRigDynamicsSimulationDragSettings::ExternalAngularVelocity");
static_assert(offsetof(FRigDynamicsSimulationDragSettings, ExternalTurbulenceVelocity) == 64, "Offset mismatch for FRigDynamicsSimulationDragSettings::ExternalTurbulenceVelocity");

// /Script/ControlRigDynamics.RigDynamicsSimulationSpaceMotion
// Kind: ScriptStruct; super: none
struct FRigDynamicsSimulationSpaceMotion
{
public:
    std::uint8_t ComponentTransformSource; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ScaleAndClampingSpace; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
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
    float MaxAngularVelocity; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampAngularAcceleration; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x006D
    float MaxAngularAcceleration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InertialForces[0x14]; // 0x0074 (Size: 0x14, Type: StructProperty)
    std::uint8_t Drag[0x58]; // 0x0088 (Size: 0x58, Type: StructProperty)
    float MaxLinearVelocity; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float MaxLinearAcceleration; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float VerticalMotionScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, ComponentTransformSource) == 0, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::ComponentTransformSource");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, ScaleAndClampingSpace) == 1, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::ScaleAndClampingSpace");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, LinearMotionScale) == 8, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::LinearMotionScale");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, bClampLinearVelocity) == 32, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::bClampLinearVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxLinearVelocityClamp) == 40, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxLinearVelocityClamp");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, bClampLinearAcceleration) == 64, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::bClampLinearAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxLinearAccelerationClamp) == 72, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxLinearAccelerationClamp");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, AngularMotionScale) == 96, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::AngularMotionScale");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, bClampAngularVelocity) == 100, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::bClampAngularVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxAngularVelocity) == 104, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxAngularVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, bClampAngularAcceleration) == 108, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::bClampAngularAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxAngularAcceleration) == 112, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxAngularAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, InertialForces) == 116, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::InertialForces");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, Drag) == 136, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::Drag");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxLinearVelocity) == 224, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxLinearVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, MaxLinearAcceleration) == 228, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::MaxLinearAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceMotion, VerticalMotionScale) == 232, "Offset mismatch for FRigDynamicsSimulationSpaceMotion::VerticalMotionScale");

// /Script/ControlRigDynamics.RigDynamicsSimulationSpaceSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsSimulationSpaceSettings
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
    std::uint8_t bTeleportFromLinearAcceleration; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0029
    float LinearAccelerationThresholdForTeleport; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportFromAngularAcceleration; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0031
    float AngularAccelerationThresholdForTeleport; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportFromPositionChange; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0039
    float PositionChangeThresholdForTeleport; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportFromOrientationChange; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0041
    float OrientationChangeThresholdForTeleport; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, SpaceMovementAmount) == 0, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::SpaceMovementAmount");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, VelocityScaleZ) == 4, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::VelocityScaleZ");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bClampLinearVelocity) == 8, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bClampLinearVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, MaxLinearVelocity) == 12, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::MaxLinearVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bClampAngularVelocity) == 16, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bClampAngularVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, MaxAngularVelocity) == 20, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::MaxAngularVelocity");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bClampLinearAcceleration) == 24, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bClampLinearAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, MaxLinearAcceleration) == 28, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::MaxLinearAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bClampAngularAcceleration) == 32, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bClampAngularAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, MaxAngularAcceleration) == 36, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::MaxAngularAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bTeleportFromLinearAcceleration) == 40, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bTeleportFromLinearAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, LinearAccelerationThresholdForTeleport) == 44, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::LinearAccelerationThresholdForTeleport");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bTeleportFromAngularAcceleration) == 48, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bTeleportFromAngularAcceleration");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, AngularAccelerationThresholdForTeleport) == 52, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::AngularAccelerationThresholdForTeleport");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bTeleportFromPositionChange) == 56, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bTeleportFromPositionChange");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, PositionChangeThresholdForTeleport) == 60, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::PositionChangeThresholdForTeleport");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, bTeleportFromOrientationChange) == 64, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::bTeleportFromOrientationChange");
static_assert(offsetof(FRigDynamicsSimulationSpaceSettings, OrientationChangeThresholdForTeleport) == 68, "Offset mismatch for FRigDynamicsSimulationSpaceSettings::OrientationChangeThresholdForTeleport");

// /Script/ControlRigDynamics.RigDynamicsSolverComponent
// Kind: ScriptStruct; super: RigBaseComponent
struct FRigDynamicsSolverComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Particles; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Colliders; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Constraints; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConeLimits; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Confiners; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Settings[0x50]; // 0x0088 (Size: 0x50, Type: StructProperty)
    std::uint8_t SpaceMotion[0xF0]; // 0x00D8 (Size: 0xF0, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsSolverComponent, Particles) == 56, "Offset mismatch for FRigDynamicsSolverComponent::Particles");
static_assert(offsetof(FRigDynamicsSolverComponent, Colliders) == 72, "Offset mismatch for FRigDynamicsSolverComponent::Colliders");
static_assert(offsetof(FRigDynamicsSolverComponent, Constraints) == 88, "Offset mismatch for FRigDynamicsSolverComponent::Constraints");
static_assert(offsetof(FRigDynamicsSolverComponent, ConeLimits) == 104, "Offset mismatch for FRigDynamicsSolverComponent::ConeLimits");
static_assert(offsetof(FRigDynamicsSolverComponent, Confiners) == 120, "Offset mismatch for FRigDynamicsSolverComponent::Confiners");
static_assert(offsetof(FRigDynamicsSolverComponent, Settings) == 136, "Offset mismatch for FRigDynamicsSolverComponent::Settings");
static_assert(offsetof(FRigDynamicsSolverComponent, SpaceMotion) == 216, "Offset mismatch for FRigDynamicsSolverComponent::SpaceMotion");
static_assert(offsetof(FRigDynamicsSolverComponent, TeleportDetection) == 456, "Offset mismatch for FRigDynamicsSolverComponent::TeleportDetection");

// /Script/ControlRigDynamics.RigDynamicsSolverCreationSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsSolverCreationSettings
{
public:
    std::uint8_t SolverSettings[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    std::uint8_t SpaceMotion[0xF0]; // 0x0050 (Size: 0xF0, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigDynamicsSolverCreationSettings, SolverSettings) == 0, "Offset mismatch for FRigDynamicsSolverCreationSettings::SolverSettings");
static_assert(offsetof(FRigDynamicsSolverCreationSettings, SpaceMotion) == 80, "Offset mismatch for FRigDynamicsSolverCreationSettings::SpaceMotion");
static_assert(offsetof(FRigDynamicsSolverCreationSettings, TeleportDetection) == 320, "Offset mismatch for FRigDynamicsSolverCreationSettings::TeleportDetection");

// /Script/ControlRigDynamics.RigDynamicsSolverSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsSolverSettings
{
public:
    std::uint8_t SimulationSpace; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ReferenceBone[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t Gravity[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float MaxTimeStep; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumSteps; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t NumIterations; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t NumConstraintSubIterations; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReadBoneOrientations; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReadBonePositions; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetFromPosition; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    float PositionThresholdForReset; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetFromKinematicSpeed; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float KinematicSpeedThresholdForReset; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetFromEvaluationInterval; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0049
    float EvaluationIntervalThresholdForReset; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigDynamicsSolverSettings, SimulationSpace) == 0, "Offset mismatch for FRigDynamicsSolverSettings::SimulationSpace");
static_assert(offsetof(FRigDynamicsSolverSettings, ReferenceBone) == 4, "Offset mismatch for FRigDynamicsSolverSettings::ReferenceBone");
static_assert(offsetof(FRigDynamicsSolverSettings, Gravity) == 16, "Offset mismatch for FRigDynamicsSolverSettings::Gravity");
static_assert(offsetof(FRigDynamicsSolverSettings, MaxTimeStep) == 40, "Offset mismatch for FRigDynamicsSolverSettings::MaxTimeStep");
static_assert(offsetof(FRigDynamicsSolverSettings, MaxNumSteps) == 44, "Offset mismatch for FRigDynamicsSolverSettings::MaxNumSteps");
static_assert(offsetof(FRigDynamicsSolverSettings, NumIterations) == 48, "Offset mismatch for FRigDynamicsSolverSettings::NumIterations");
static_assert(offsetof(FRigDynamicsSolverSettings, NumConstraintSubIterations) == 52, "Offset mismatch for FRigDynamicsSolverSettings::NumConstraintSubIterations");
static_assert(offsetof(FRigDynamicsSolverSettings, bReadBoneOrientations) == 56, "Offset mismatch for FRigDynamicsSolverSettings::bReadBoneOrientations");
static_assert(offsetof(FRigDynamicsSolverSettings, bReadBonePositions) == 57, "Offset mismatch for FRigDynamicsSolverSettings::bReadBonePositions");
static_assert(offsetof(FRigDynamicsSolverSettings, bResetFromPosition) == 58, "Offset mismatch for FRigDynamicsSolverSettings::bResetFromPosition");
static_assert(offsetof(FRigDynamicsSolverSettings, PositionThresholdForReset) == 60, "Offset mismatch for FRigDynamicsSolverSettings::PositionThresholdForReset");
static_assert(offsetof(FRigDynamicsSolverSettings, bResetFromKinematicSpeed) == 64, "Offset mismatch for FRigDynamicsSolverSettings::bResetFromKinematicSpeed");
static_assert(offsetof(FRigDynamicsSolverSettings, KinematicSpeedThresholdForReset) == 68, "Offset mismatch for FRigDynamicsSolverSettings::KinematicSpeedThresholdForReset");
static_assert(offsetof(FRigDynamicsSolverSettings, bResetFromEvaluationInterval) == 72, "Offset mismatch for FRigDynamicsSolverSettings::bResetFromEvaluationInterval");
static_assert(offsetof(FRigDynamicsSolverSettings, EvaluationIntervalThresholdForReset) == 76, "Offset mismatch for FRigDynamicsSolverSettings::EvaluationIntervalThresholdForReset");

// /Script/ControlRigDynamics.RigDynamicsTeleportDetectionSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsTeleportDetectionSettings
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

static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, bFromPositionChange) == 0, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::bFromPositionChange");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, PositionChangeThreshold) == 4, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::PositionChangeThreshold");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, bFromLinearAcceleration) == 8, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::bFromLinearAcceleration");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, LinearAccelerationThreshold) == 12, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::LinearAccelerationThreshold");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, bFromOrientationChange) == 16, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::bFromOrientationChange");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, OrientationChangeThreshold) == 20, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::OrientationChangeThreshold");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, bFromAngularAcceleration) == 24, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::bFromAngularAcceleration");
static_assert(offsetof(FRigDynamicsTeleportDetectionSettings, AngularAccelerationThreshold) == 28, "Offset mismatch for FRigDynamicsTeleportDetectionSettings::AngularAccelerationThreshold");

// /Script/ControlRigDynamics.RigDynamicsVisualizationSettings
// Kind: ScriptStruct; super: none
struct FRigDynamicsVisualizationSettings
{
public:
    float LineThickness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t ShapeDetail; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowParticles; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowColliders; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConfiners; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSkeletalConstraints; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowHardConstraints; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSoftConstraints; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAngleLimits; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConeLimits; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t ParticleValueDisplay; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigDynamicsVisualizationSettings, LineThickness) == 0, "Offset mismatch for FRigDynamicsVisualizationSettings::LineThickness");
static_assert(offsetof(FRigDynamicsVisualizationSettings, ShapeDetail) == 4, "Offset mismatch for FRigDynamicsVisualizationSettings::ShapeDetail");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowParticles) == 8, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowParticles");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowColliders) == 9, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowColliders");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowConfiners) == 10, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowConfiners");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowSkeletalConstraints) == 11, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowSkeletalConstraints");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowHardConstraints) == 12, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowHardConstraints");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowSoftConstraints) == 13, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowSoftConstraints");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowAngleLimits) == 14, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowAngleLimits");
static_assert(offsetof(FRigDynamicsVisualizationSettings, bShowConeLimits) == 15, "Offset mismatch for FRigDynamicsVisualizationSettings::bShowConeLimits");
static_assert(offsetof(FRigDynamicsVisualizationSettings, ParticleValueDisplay) == 16, "Offset mismatch for FRigDynamicsVisualizationSettings::ParticleValueDisplay");

// /Script/ControlRigDynamics.RigUnit_DynamicsBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_DynamicsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigDynamics.RigUnit_DynamicsBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DynamicsBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DynamicsBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_DynamicsBaseMutable::ExecutePin");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsColliderExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsColliderExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsColliderExists, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsColliderExists::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsColliderExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsColliderExists::bExists");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsConeLimitExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsConeLimitExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsConeLimitExists, DynamicsConeLimitComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsConeLimitExists::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsConeLimitExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsConeLimitExists::bExists");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsConfinerExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsConfinerExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsConfinerExists, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsConfinerExists::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsConfinerExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsConfinerExists::bExists");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsConstraintExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsConstraintExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsConstraintExists, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsConstraintExists::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsConstraintExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsConstraintExists::bExists");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsParticleExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsParticleExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsParticleExists, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsParticleExists::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsParticleExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsParticleExists::bExists");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsSolverData
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsSolverData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SimulationSpaceLinearVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimulationSpaceAngularVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimulationSpaceLinearAcceleration[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimulationSpaceAngularAcceleration[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bTeleportDetected; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKinematicSpeedResetTriggered; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPositionResetTriggered; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluationIntervalResetTriggered; // 0x007B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsSolverData, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsSolverData::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, SimulationSpaceLinearVelocity) == 24, "Offset mismatch for FRigUnit_GetDynamicsSolverData::SimulationSpaceLinearVelocity");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, SimulationSpaceAngularVelocity) == 48, "Offset mismatch for FRigUnit_GetDynamicsSolverData::SimulationSpaceAngularVelocity");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, SimulationSpaceLinearAcceleration) == 72, "Offset mismatch for FRigUnit_GetDynamicsSolverData::SimulationSpaceLinearAcceleration");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, SimulationSpaceAngularAcceleration) == 96, "Offset mismatch for FRigUnit_GetDynamicsSolverData::SimulationSpaceAngularAcceleration");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, bTeleportDetected) == 120, "Offset mismatch for FRigUnit_GetDynamicsSolverData::bTeleportDetected");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, bKinematicSpeedResetTriggered) == 121, "Offset mismatch for FRigUnit_GetDynamicsSolverData::bKinematicSpeedResetTriggered");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, bPositionResetTriggered) == 122, "Offset mismatch for FRigUnit_GetDynamicsSolverData::bPositionResetTriggered");
static_assert(offsetof(FRigUnit_GetDynamicsSolverData, bEvaluationIntervalResetTriggered) == 123, "Offset mismatch for FRigUnit_GetDynamicsSolverData::bEvaluationIntervalResetTriggered");

// /Script/ControlRigDynamics.RigUnit_GetDynamicsSolverExists
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_GetDynamicsSolverExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bExists; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetDynamicsSolverExists, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_GetDynamicsSolverExists::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_GetDynamicsSolverExists, bExists) == 20, "Offset mismatch for FRigUnit_GetDynamicsSolverExists::bExists");

// /Script/ControlRigDynamics.RigUnit_HierarchyAddDynamicsParticleForce
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyAddDynamicsParticleForce
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Force[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Type; // 0x0039 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForce, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForce::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForce, Force) == 32, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForce::Force");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForce, Space) == 56, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForce::Space");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForce, Type) == 57, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForce::Type");

// /Script/ControlRigDynamics.RigUnit_HierarchyAddDynamicsParticleForceField
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyAddDynamicsParticleForceField
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t FieldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Type; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0082
    float RadialForce; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LinearForceDirection[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    float LinearForce; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00A4
    std::uint8_t RotationalForceAxis[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    float RotationalForce; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00C4
    std::uint8_t FieldCurves[0xD8]; // 0x00C8 (Size: 0xD8, Type: StructProperty)
    std::uint8_t bDrawDebug; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01A1
    float DebugForceScale; // 0x01A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, FieldTransform) == 32, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::FieldTransform");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, Space) == 128, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::Space");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, Type) == 129, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::Type");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, RadialForce) == 132, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::RadialForce");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, LinearForceDirection) == 136, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::LinearForceDirection");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, LinearForce) == 160, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::LinearForce");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, RotationalForceAxis) == 168, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::RotationalForceAxis");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, RotationalForce) == 192, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::RotationalForce");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, FieldCurves) == 200, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::FieldCurves");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, bDrawDebug) == 416, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::bDrawDebug");
static_assert(offsetof(FRigUnit_HierarchyAddDynamicsParticleForceField, DebugForceScale) == 420, "Offset mismatch for FRigUnit_HierarchyAddDynamicsParticleForceField::DebugForceScale");

// /Script/ControlRigDynamics.RigUnit_HierarchyAllowDynamicsCollisionWithCollider
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyAllowDynamicsCollisionWithCollider
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DynamicsColliderComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAllowDynamicsCollisionWithCollider, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyAllowDynamicsCollisionWithCollider::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyAllowDynamicsCollisionWithCollider, DynamicsColliderComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyAllowDynamicsCollisionWithCollider::DynamicsColliderComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyDisableDynamicsCollisionWithCollider
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyDisableDynamicsCollisionWithCollider
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DynamicsColliderComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsCollisionWithCollider, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsCollisionWithCollider::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsCollisionWithCollider, DynamicsColliderComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsCollisionWithCollider::DynamicsColliderComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyDisableDynamicsCollisionWithParticle
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyDisableDynamicsCollisionWithParticle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t OtherDynamicsParticleComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsCollisionWithParticle, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsCollisionWithParticle::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsCollisionWithParticle, OtherDynamicsParticleComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsCollisionWithParticle::OtherDynamicsParticleComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyDisableDynamicsConfinementWithConfiner
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyDisableDynamicsConfinementWithConfiner
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DynamicsConfinerComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsConfinementWithConfiner, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsConfinementWithConfiner::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyDisableDynamicsConfinementWithConfiner, DynamicsConfinerComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyDisableDynamicsConfinementWithConfiner::DynamicsConfinerComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyEnableDynamicsCollisionWithParticle
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyEnableDynamicsCollisionWithParticle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t OtherDynamicsParticleComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyEnableDynamicsCollisionWithParticle, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyEnableDynamicsCollisionWithParticle::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyEnableDynamicsCollisionWithParticle, OtherDynamicsParticleComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyEnableDynamicsCollisionWithParticle::OtherDynamicsParticleComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyEnableDynamicsConfinementWithConfiner
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyEnableDynamicsConfinementWithConfiner
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DynamicsConfinerComponentKey[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyEnableDynamicsConfinementWithConfiner, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyEnableDynamicsConfinementWithConfiner::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyEnableDynamicsConfinementWithConfiner, DynamicsConfinerComponentKey) == 28, "Offset mismatch for FRigUnit_HierarchyEnableDynamicsConfinementWithConfiner::DynamicsConfinerComponentKey");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderBox
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderBox
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Box[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBox, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBox::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBox, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBox::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBox, Box) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBox::Box");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderBoxExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderBoxExtents
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxExtents, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxExtents::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxExtents, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxExtents::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxExtents, Extents) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderBoxTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderBoxTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxTM, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderBoxTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderBoxTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderCapsule
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderCapsule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Capsule[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsule, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsule::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsule, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsule::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsule, Capsule) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsule::Capsule");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderCapsuleLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderCapsuleLength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float Length; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleLength, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleLength::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleLength, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleLength::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleLength, Length) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleLength::Length");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderCapsuleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius, Radius) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderCapsuleTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderCapsuleTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleTM, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderCapsuleTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderCapsuleTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderPlane
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderPlane
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Plane[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlane, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlane::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlane, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlane::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlane, Plane) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlane::Plane");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderPlaneExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderPlaneExtents
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneExtents, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneExtents::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneExtents, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneExtents::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneExtents, Extents) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderPlaneTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderPlaneTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneTM, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderPlaneTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderPlaneTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsColliderShapes
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsColliderShapes
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shapes[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderShapes, DynamicsColliderComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderShapes::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsColliderShapes, Shapes) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsColliderShapes::Shapes");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConeLimitAngle
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConeLimitAngle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Angle; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitAngle, DynamicsConeLimitComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitAngle::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitAngle, Angle) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitAngle::Angle");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConeLimitDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConeLimitDampingRatio
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitDampingRatio, DynamicsConeLimitComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitDampingRatio::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitDampingRatio, DampingRatio) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConeLimitStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConeLimitStrength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitStrength, DynamicsConeLimitComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitStrength::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConeLimitStrength, Strength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConeLimitStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerBox
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerBox
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Box[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBox, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBox::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBox, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBox::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBox, Box) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBox::Box");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerBoxExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerBoxExtents
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxExtents, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxExtents::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxExtents, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxExtents::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxExtents, Extents) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerBoxTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerBoxTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxTM, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerBoxTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerBoxTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerCapsule
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerCapsule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Capsule[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsule, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsule::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsule, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsule::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsule, Capsule) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsule::Capsule");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerCapsuleLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float Length; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength, Length) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleLength::Length");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerCapsuleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius, Radius) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerCapsuleTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerCapsuleTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerPlane
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerPlane
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Plane[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlane, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlane::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlane, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlane::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlane, Plane) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlane::Plane");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerPlaneExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents, Extents) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerPlaneTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerPlaneTM
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    FName Name; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneTM, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneTM, Name) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneTM::Name");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerPlaneTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerPlaneTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerShapes
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerShapes
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shapes[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerShapes, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerShapes::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerShapes, Shapes) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerShapes::Shapes");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConfinerStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConfinerStrength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerStrength, DynamicsConfinerComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerStrength::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConfinerStrength, Strength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConfinerStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintAccelerationMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintAccelerationMode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAccelerationMode; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintAccelerationMode, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintAccelerationMode::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintAccelerationMode, bAccelerationMode) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintAccelerationMode::bAccelerationMode");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintDampingRatio
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintDampingRatio, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintDampingRatio::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintDampingRatio, DampingRatio) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintExtraDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintExtraDamping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float ExtraDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintExtraDamping, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintExtraDamping::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintExtraDamping, ExtraDamping) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintExtraDamping::ExtraDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintExtraLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintExtraLength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float ExtraLength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintExtraLength, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintExtraLength::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintExtraLength, ExtraLength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintExtraLength::ExtraLength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintLengthMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintLengthMultiplier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float LengthMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintLengthMultiplier, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintLengthMultiplier::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintLengthMultiplier, LengthMultiplier) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintLengthMultiplier::LengthMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsConstraintStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsConstraintStrength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintStrength, DynamicsConstraintComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintStrength::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsConstraintStrength, Strength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsConstraintStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleAccelerationMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleAccelerationMode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAccelerationMode; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAccelerationMode, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAccelerationMode::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAccelerationMode, bAccelerationMode) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAccelerationMode::bAccelerationMode");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleAngleLimit
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleAngleLimit
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float AngleLimit; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAngleLimit, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAngleLimit::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAngleLimit, AngleLimit) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAngleLimit::AngleLimit");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleAngleLimitStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleAngleLimitStrength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float AngleLimitStrength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAngleLimitStrength, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAngleLimitStrength::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleAngleLimitStrength, AngleLimitStrength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleAngleLimitStrength::AngleLimitStrength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleCollideWithColliders
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleCollideWithColliders
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bCollideWithColliders; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleCollideWithColliders, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleCollideWithColliders::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleCollideWithColliders, bCollideWithColliders) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleCollideWithColliders::bCollideWithColliders");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleDamping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Damping; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDamping, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDamping::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDamping, Damping) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDamping::Damping");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleDampingRatio
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDampingRatio, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDampingRatio::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDampingRatio, DampingRatio) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleDrag
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleDrag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Drag; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDrag, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDrag::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleDrag, Drag) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleDrag::Drag");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleExtraDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleExtraDamping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float ExtraDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleExtraDamping, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleExtraDamping::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleExtraDamping, ExtraDamping) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleExtraDamping::ExtraDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleGravityMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleGravityMultiplier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float GravityMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleGravityMultiplier, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleGravityMultiplier::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleGravityMultiplier, GravityMultiplier) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleGravityMultiplier::GravityMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleMass
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleMass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Mass; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleMass, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleMass::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleMass, Mass) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleMass::Mass");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleMovementType
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleMovementType
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t MovementType; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleMovementType, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleMovementType::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleMovementType, MovementType) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleMovementType::MovementType");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleNoCollisionColliders
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleNoCollisionColliders
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> NoCollisionColliders; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleNoCollisionColliders, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleNoCollisionColliders::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleNoCollisionColliders, NoCollisionColliders) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleNoCollisionColliders::NoCollisionColliders");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleRadius
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Radius; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleRadius, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleRadius::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleRadius, Radius) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bScaleDampingByInverseMass; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass, bScaleDampingByInverseMass) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleScaleDampingByInverseMass::bScaleDampingByInverseMass");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleStrength
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleStrength, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleStrength::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleStrength, Strength) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleTargetMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleTargetMode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float TargetMode; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleTargetMode, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleTargetMode::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleTargetMode, TargetMode) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleTargetMode::TargetMode");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float TargetVelocityInfluence; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence, DynamicsParticleComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence, TargetVelocityInfluence) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsParticleTargetVelocityInfluence::TargetVelocityInfluence");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDrag
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDrag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Drag[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDrag, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDrag::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDrag, Drag) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDrag::Drag");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float AdditionalDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping, AdditionalDamping) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragAdditionalDamping::AdditionalDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float AngularDampingMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier, AngularDampingMultiplier) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragAngularDampingMultiplier::AngularDampingMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity, ExternalAngularVelocity) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalAngularVelocity::ExternalAngularVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalLinearVelocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity, ExternalLinearVelocity) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalLinearVelocity::ExternalLinearVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity, ExternalTurbulenceVelocity) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalTurbulenceVelocity::ExternalTurbulenceVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t ExternalVelocitySpace; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace, ExternalVelocitySpace) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragExternalVelocitySpace::ExternalVelocitySpace");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float LinearDampingMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier, LinearDampingMultiplier) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverDragLinearDampingMultiplier::LinearDampingMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverGravity
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverGravity
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Gravity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverGravity, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverGravity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverGravity, Gravity) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverGravity::Gravity");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverMaxNumSteps
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverMaxNumSteps
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::int32_t MaxNumSteps; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverMaxNumSteps, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverMaxNumSteps::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverMaxNumSteps, MaxNumSteps) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverMaxNumSteps::MaxNumSteps");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverMaxTimeStep
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverMaxTimeStep
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float MaxTimeStep; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverMaxTimeStep, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverMaxTimeStep::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverMaxTimeStep, MaxTimeStep) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverMaxTimeStep::MaxTimeStep");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::int32_t NumConstraintSubIterations; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations, NumConstraintSubIterations) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverNumConstraintSubIterations::NumConstraintSubIterations");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverNumIterations
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverNumIterations
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::int32_t NumIterations; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverNumIterations, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverNumIterations::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverNumIterations, NumIterations) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverNumIterations::NumIterations");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSettings
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSettings, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSettings::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSettings, Settings) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSettings::Settings");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSpaceMotion
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSpaceMotion
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpaceMotion[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotion, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotion::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotion, SpaceMotion) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotion::SpaceMotion");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float AngularMotionScale; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale, AngularMotionScale) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionAngularMotionScale::AngularMotionScale");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t InertialForces[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces, InertialForces) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForces::InertialForces");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float Amount; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount, Amount) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionInertialForcesAmount::Amount");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t LinearMotionScale[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale, LinearMotionScale) == 24, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverSpaceMotionLinearMotionScale::LinearMotionScale");

// /Script/ControlRigDynamics.RigUnit_HierarchyGetDynamicsSolverTeleportDetection
// Kind: ScriptStruct; super: RigUnit_DynamicsBase
struct FRigUnit_HierarchyGetDynamicsSolverTeleportDetection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverTeleportDetection, DynamicsSolverComponentKey) == 8, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverTeleportDetection::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyGetDynamicsSolverTeleportDetection, TeleportDetection) == 20, "Offset mismatch for FRigUnit_HierarchyGetDynamicsSolverTeleportDetection::TeleportDetection");

// /Script/ControlRigDynamics.RigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t ColliderComponentName[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    void* PhysicsAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneMask; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DynamicsColliderComponentKeys; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset, ColliderComponentName) == 28, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset::ColliderComponentName");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset, PhysicsAsset) == 32, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset::PhysicsAsset");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset, BoneMask) == 40, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset::BoneMask");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset, DynamicsColliderComponentKeys) == 56, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset::DynamicsColliderComponentKeys");

// /Script/ControlRigDynamics.RigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t ColliderComponentName[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    void* PhysicsAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ElementIncludeMask; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ElementExcludeMask; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExcludeElementsWithParticles; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> DynamicsColliderComponentKeys; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, ColliderComponentName) == 28, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::ColliderComponentName");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, PhysicsAsset) == 32, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::PhysicsAsset");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, ElementIncludeMask) == 40, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::ElementIncludeMask");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, ElementExcludeMask) == 56, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::ElementExcludeMask");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, bExcludeElementsWithParticles) == 72, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::bExcludeElementsWithParticles");
static_assert(offsetof(FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1, DynamicsColliderComponentKeys) == 80, "Offset mismatch for FRigUnit_HierarchyImportDynamicsCollidersFromPhysicsAsset1::DynamicsColliderComponentKeys");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderBox
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderBox
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Box[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBox, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBox::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBox, Box) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBox::Box");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderBoxExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderBoxExtents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxExtents, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxExtents::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxExtents, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxExtents::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxExtents, Extents) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderBoxTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderBoxTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxTM, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderBoxTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderBoxTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderCapsule
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderCapsule
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Capsule[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsule, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsule::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsule, Capsule) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsule::Capsule");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderCapsuleLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderCapsuleLength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    float Length; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleLength, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleLength::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleLength, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleLength::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleLength, Length) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleLength::Length");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderCapsuleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderCapsuleRadius
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleRadius, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleRadius::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleRadius, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleRadius::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleRadius, Radius) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderCapsuleTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderCapsuleTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleTM, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderCapsuleTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderCapsuleTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderPlane
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderPlane
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Plane[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlane, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlane::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlane, Plane) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlane::Plane");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderPlaneExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderPlaneExtents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneExtents, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneExtents::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneExtents, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneExtents::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneExtents, Extents) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderPlaneTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderPlaneTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneTM, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneTM::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderPlaneTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderPlaneTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsColliderShapes
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsColliderShapes
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsColliderComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shapes[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderShapes, DynamicsColliderComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderShapes::DynamicsColliderComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsColliderShapes, Shapes) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsColliderShapes::Shapes");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConeLimitAngle
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConeLimitAngle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Angle; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitAngle, DynamicsConeLimitComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitAngle::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitAngle, Angle) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitAngle::Angle");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConeLimitDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConeLimitDampingRatio
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitDampingRatio, DynamicsConeLimitComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitDampingRatio::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitDampingRatio, DampingRatio) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConeLimitStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConeLimitStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConeLimitComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitStrength, DynamicsConeLimitComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitStrength::DynamicsConeLimitComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConeLimitStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConeLimitStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerBox
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerBox
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Box[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBox, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBox::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBox, Box) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBox::Box");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerBoxExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerBoxExtents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxExtents, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxExtents::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxExtents, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxExtents::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxExtents, Extents) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerBoxTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerBoxTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxTM, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerBoxTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerBoxTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerCapsule
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerCapsule
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Capsule[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsule, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsule::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsule, Capsule) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsule::Capsule");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerCapsuleLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerCapsuleLength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    float Length; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleLength, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleLength::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleLength, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleLength::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleLength, Length) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleLength::Length");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerCapsuleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius, Radius) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerCapsuleTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerCapsuleTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleTM, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerCapsuleTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerCapsuleTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerPlane
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerPlane
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Plane[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlane, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlane::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlane, Plane) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlane::Plane");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerPlaneExtents
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerPlaneExtents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Extents[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneExtents, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneExtents::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneExtents, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneExtents::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneExtents, Extents) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneExtents::Extents");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerPlaneTM
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerPlaneTM
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TM[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneTM, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneTM::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneTM, Name) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneTM::Name");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerPlaneTM, TM) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerPlaneTM::TM");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerShapes
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerShapes
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shapes[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerShapes, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerShapes::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerShapes, Shapes) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerShapes::Shapes");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConfinerStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConfinerStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConfinerComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerStrength, DynamicsConfinerComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerStrength::DynamicsConfinerComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConfinerStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConfinerStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintAccelerationMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintAccelerationMode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAccelerationMode; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintAccelerationMode, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintAccelerationMode::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintAccelerationMode, bAccelerationMode) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintAccelerationMode::bAccelerationMode");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintDampingRatio
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintDampingRatio, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintDampingRatio::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintDampingRatio, DampingRatio) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintExtraDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintExtraDamping
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float ExtraDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintExtraDamping, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintExtraDamping::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintExtraDamping, ExtraDamping) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintExtraDamping::ExtraDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintExtraLength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintExtraLength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float ExtraLength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintExtraLength, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintExtraLength::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintExtraLength, ExtraLength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintExtraLength::ExtraLength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintLengthMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintLengthMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float LengthMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintLengthMultiplier, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintLengthMultiplier::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintLengthMultiplier, LengthMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintLengthMultiplier::LengthMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsConstraintStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsConstraintStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsConstraintComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintStrength, DynamicsConstraintComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintStrength::DynamicsConstraintComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsConstraintStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsConstraintStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleAccelerationMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleAccelerationMode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bAccelerationMode; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAccelerationMode, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAccelerationMode::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAccelerationMode, bAccelerationMode) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAccelerationMode::bAccelerationMode");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleAngleLimit
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleAngleLimit
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float AngleLimit; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAngleLimit, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAngleLimit::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAngleLimit, AngleLimit) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAngleLimit::AngleLimit");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleAngleLimitStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleAngleLimitStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float AngleLimitStrength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAngleLimitStrength, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAngleLimitStrength::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleAngleLimitStrength, AngleLimitStrength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleAngleLimitStrength::AngleLimitStrength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleCollideWithColliders
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleCollideWithColliders
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bCollideWithColliders; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleCollideWithColliders, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleCollideWithColliders::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleCollideWithColliders, bCollideWithColliders) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleCollideWithColliders::bCollideWithColliders");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleDamping
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Damping; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDamping, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDamping::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDamping, Damping) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDamping::Damping");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleDampingRatio
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleDampingRatio
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DampingRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDampingRatio, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDampingRatio::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDampingRatio, DampingRatio) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDampingRatio::DampingRatio");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleDrag
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleDrag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Drag; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDrag, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDrag::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleDrag, Drag) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleDrag::Drag");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleExtraDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleExtraDamping
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float ExtraDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleExtraDamping, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleExtraDamping::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleExtraDamping, ExtraDamping) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleExtraDamping::ExtraDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleGravityMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleGravityMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float GravityMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleGravityMultiplier, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleGravityMultiplier::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleGravityMultiplier, GravityMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleGravityMultiplier::GravityMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleMass
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleMass
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Mass; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleMass, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleMass::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleMass, Mass) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleMass::Mass");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleMovementType
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleMovementType
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t MovementType; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleMovementType, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleMovementType::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleMovementType, MovementType) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleMovementType::MovementType");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleNoCollisionColliders
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleNoCollisionColliders
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> NoCollisionColliders; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleNoCollisionColliders, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleNoCollisionColliders::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleNoCollisionColliders, NoCollisionColliders) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleNoCollisionColliders::NoCollisionColliders");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleRadius
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleRadius
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Radius; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleRadius, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleRadius::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleRadius, Radius) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleRadius::Radius");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bScaleDampingByInverseMass; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass, bScaleDampingByInverseMass) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleScaleDampingByInverseMass::bScaleDampingByInverseMass");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleStrength
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleStrength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleStrength, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleStrength::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleStrength, Strength) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleStrength::Strength");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleTargetMode
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleTargetMode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float TargetMode; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleTargetMode, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleTargetMode::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleTargetMode, TargetMode) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleTargetMode::TargetMode");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsParticleComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float TargetVelocityInfluence; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence, DynamicsParticleComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence::DynamicsParticleComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence, TargetVelocityInfluence) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsParticleTargetVelocityInfluence::TargetVelocityInfluence");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDrag
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDrag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Drag[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDrag, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDrag::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDrag, Drag) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDrag::Drag");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragAdditionalDamping
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragAdditionalDamping
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float AdditionalDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragAdditionalDamping, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragAdditionalDamping::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragAdditionalDamping, AdditionalDamping) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragAdditionalDamping::AdditionalDamping");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float AngularDampingMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier, AngularDampingMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragAngularDampingMultiplier::AngularDampingMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity, ExternalAngularVelocity) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalAngularVelocity::ExternalAngularVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalLinearVelocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity, ExternalLinearVelocity) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalLinearVelocity::ExternalLinearVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExternalTurbulenceVelocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity, ExternalTurbulenceVelocity) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalTurbulenceVelocity::ExternalTurbulenceVelocity");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t ExternalVelocitySpace; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace, ExternalVelocitySpace) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragExternalVelocitySpace::ExternalVelocitySpace");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float LinearDampingMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier, LinearDampingMultiplier) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverDragLinearDampingMultiplier::LinearDampingMultiplier");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverGravity
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverGravity
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Gravity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverGravity, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverGravity::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverGravity, Gravity) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverGravity::Gravity");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverMaxNumSteps
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverMaxNumSteps
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::int32_t MaxNumSteps; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverMaxNumSteps, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverMaxNumSteps::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverMaxNumSteps, MaxNumSteps) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverMaxNumSteps::MaxNumSteps");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverMaxTimeStep
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverMaxTimeStep
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float MaxTimeStep; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverMaxTimeStep, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverMaxTimeStep::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverMaxTimeStep, MaxTimeStep) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverMaxTimeStep::MaxTimeStep");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::int32_t NumConstraintSubIterations; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations, NumConstraintSubIterations) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverNumConstraintSubIterations::NumConstraintSubIterations");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverNumIterations
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverNumIterations
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::int32_t NumIterations; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverNumIterations, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverNumIterations::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverNumIterations, NumIterations) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverNumIterations::NumIterations");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSettings
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSettings, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSettings::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSettings, Settings) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSettings::Settings");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSpaceMotion
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSpaceMotion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpaceMotion[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotion, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotion::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotion, SpaceMotion) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotion::SpaceMotion");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float AngularMotionScale; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale, AngularMotionScale) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionAngularMotionScale::AngularMotionScale");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t InertialForces[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces, InertialForces) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForces::InertialForces");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float Amount; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount, Amount) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionInertialForcesAmount::Amount");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t LinearMotionScale[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale, LinearMotionScale) == 32, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverSpaceMotionLinearMotionScale::LinearMotionScale");

// /Script/ControlRigDynamics.RigUnit_HierarchySetDynamicsSolverTeleportDetection
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_HierarchySetDynamicsSolverTeleportDetection
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t TeleportDetection[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverTeleportDetection, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverTeleportDetection::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_HierarchySetDynamicsSolverTeleportDetection, TeleportDetection) == 28, "Offset mismatch for FRigUnit_HierarchySetDynamicsSolverTeleportDetection::TeleportDetection");

// /Script/ControlRigDynamics.RigUnit_InstantiateDynamics
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_InstantiateDynamics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_InstantiateDynamics, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_InstantiateDynamics::DynamicsSolverComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsChains
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsChains
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> RootBones; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChainTerminatorBones; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ElementIncludeMask; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ElementExcludeMask; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtraBones; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    FName ParticleComponentName; // 0x0070 (Size: 0x8, Type: NameProperty)
    std::uint8_t ParticleProperties[0x68]; // 0x0078 (Size: 0x68, Type: StructProperty)
    std::uint8_t ChainCurves[0x2D0]; // 0x00E0 (Size: 0x2D0, Type: StructProperty)
    FName ColliderComponentName; // 0x03B0 (Size: 0x8, Type: NameProperty)
    TArray<void*> Colliders; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParticleComponentKeys; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColliderComponentKeys; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsChains, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsChains::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, RootBones) == 32, "Offset mismatch for FRigUnit_SpawnDynamicsChains::RootBones");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ChainTerminatorBones) == 48, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ChainTerminatorBones");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ElementIncludeMask) == 64, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ElementIncludeMask");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ElementExcludeMask) == 80, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ElementExcludeMask");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ExtraBones) == 96, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ExtraBones");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ParticleComponentName) == 112, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ParticleComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ParticleProperties) == 120, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ParticleProperties");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ChainCurves) == 224, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ChainCurves");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ColliderComponentName) == 944, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ColliderComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, Colliders) == 952, "Offset mismatch for FRigUnit_SpawnDynamicsChains::Colliders");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ParticleComponentKeys) == 968, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ParticleComponentKeys");
static_assert(offsetof(FRigUnit_SpawnDynamicsChains, ColliderComponentKeys) == 984, "Offset mismatch for FRigUnit_SpawnDynamicsChains::ColliderComponentKeys");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsCollider
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsCollider
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ColliderComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t Shapes[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t DynamicsColliderComponentKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsCollider, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsCollider::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsCollider, DynamicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsCollider::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsCollider, ColliderComponentName) == 36, "Offset mismatch for FRigUnit_SpawnDynamicsCollider::ColliderComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsCollider, Shapes) == 40, "Offset mismatch for FRigUnit_SpawnDynamicsCollider::Shapes");
static_assert(offsetof(FRigUnit_SpawnDynamicsCollider, DynamicsColliderComponentKey) == 88, "Offset mismatch for FRigUnit_SpawnDynamicsCollider::DynamicsColliderComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsConeLimit
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsConeLimit
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConeLimitComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t GrandparentComponentKey[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParentComponentKey[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildComponentKey[0xC]; // 0x0040 (Size: 0xC, Type: StructProperty)
    float Strength; // 0x004C (Size: 0x4, Type: FloatProperty)
    float DampingRatio; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Angle; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DynamicsConeLimitComponentKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, DynamicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, ConeLimitComponentName) == 36, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::ConeLimitComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, GrandparentComponentKey) == 40, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::GrandparentComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, ParentComponentKey) == 52, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::ParentComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, ChildComponentKey) == 64, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::ChildComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, Strength) == 76, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::Strength");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, DampingRatio) == 80, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::DampingRatio");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, Angle) == 84, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::Angle");
static_assert(offsetof(FRigUnit_SpawnDynamicsConeLimit, DynamicsConeLimitComponentKey) == 88, "Offset mismatch for FRigUnit_SpawnDynamicsConeLimit::DynamicsConeLimitComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsConfiner
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsConfiner
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConfinerComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t Shapes[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    float Strength; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    TArray<void*> ConfinedParticles; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DynamicsConfinerComponentKey[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, DynamicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, ConfinerComponentName) == 36, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::ConfinerComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, Shapes) == 40, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::Shapes");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, Strength) == 88, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::Strength");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, ConfinedParticles) == 96, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::ConfinedParticles");
static_assert(offsetof(FRigUnit_SpawnDynamicsConfiner, DynamicsConfinerComponentKey) == 112, "Offset mismatch for FRigUnit_SpawnDynamicsConfiner::DynamicsConfinerComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsConstraint
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConstraintComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentComponentKey[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChildComponentKey[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    std::uint8_t ConstraintType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float Strength; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float DampingRatio; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float ExtraDamping; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAccelerationMode; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0051
    float LengthMultiplier; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float ExtraLength; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DynamicsConstraintComponentKey[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, DynamicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ConstraintComponentName) == 36, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ConstraintComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ParentComponentKey) == 40, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ParentComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ChildComponentKey) == 52, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ChildComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ConstraintType) == 64, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ConstraintType");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, Strength) == 68, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::Strength");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, DampingRatio) == 72, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::DampingRatio");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ExtraDamping) == 76, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ExtraDamping");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, bAccelerationMode) == 80, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::bAccelerationMode");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, LengthMultiplier) == 84, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::LengthMultiplier");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, ExtraLength) == 88, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::ExtraLength");
static_assert(offsetof(FRigUnit_SpawnDynamicsConstraint, DynamicsConstraintComponentKey) == 92, "Offset mismatch for FRigUnit_SpawnDynamicsConstraint::DynamicsConstraintComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsParticle
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsParticle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParticleComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParticleProperties[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    std::uint8_t DynamicsParticleComponentKey[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsParticle, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsParticle::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsParticle, DynamicsSolverComponentKey) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsParticle::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_SpawnDynamicsParticle, ParticleComponentName) == 36, "Offset mismatch for FRigUnit_SpawnDynamicsParticle::ParticleComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsParticle, ParticleProperties) == 40, "Offset mismatch for FRigUnit_SpawnDynamicsParticle::ParticleProperties");
static_assert(offsetof(FRigUnit_SpawnDynamicsParticle, DynamicsParticleComponentKey) == 144, "Offset mismatch for FRigUnit_SpawnDynamicsParticle::DynamicsParticleComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsSolver
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FName SolverComponentName; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t Settings[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    std::uint8_t SimulationSpaceSettings[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t DragSettings[0x58]; // 0x00B8 (Size: 0x58, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, SolverComponentName) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::SolverComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, Settings) == 32, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::Settings");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, SimulationSpaceSettings) == 112, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::SimulationSpaceSettings");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, DragSettings) == 184, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::DragSettings");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver, DynamicsSolverComponentKey) == 272, "Offset mismatch for FRigUnit_SpawnDynamicsSolver::DynamicsSolverComponentKey");

// /Script/ControlRigDynamics.RigUnit_SpawnDynamicsSolver1
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_SpawnDynamicsSolver1
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Owner[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FName SolverComponentName; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t Settings[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    std::uint8_t TeleportDetection[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpaceMotion[0xF0]; // 0x0090 (Size: 0xF0, Type: StructProperty)
    std::uint8_t DynamicsSolverComponentKey[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, Owner) == 16, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::Owner");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, SolverComponentName) == 24, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::SolverComponentName");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, Settings) == 32, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::Settings");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, TeleportDetection) == 112, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::TeleportDetection");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, SpaceMotion) == 144, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::SpaceMotion");
static_assert(offsetof(FRigUnit_SpawnDynamicsSolver1, DynamicsSolverComponentKey) == 384, "Offset mismatch for FRigUnit_SpawnDynamicsSolver1::DynamicsSolverComponentKey");

// /Script/ControlRigDynamics.RigUnit_StepDynamicsSolver
// Kind: ScriptStruct; super: RigUnit_DynamicsBaseMutable
struct FRigUnit_StepDynamicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DynamicsSolverComponentKey[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float DeltaTimeOverride; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SimulationSpaceDeltaTimeOverride; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTrackVelocitiesDuringPassThrough; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t VisualizationSettings[0x14]; // 0x002C (Size: 0x14, Type: StructProperty)
    std::uint8_t CachedSolverComponent[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_StepDynamicsSolver, DynamicsSolverComponentKey) == 16, "Offset mismatch for FRigUnit_StepDynamicsSolver::DynamicsSolverComponentKey");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, DeltaTimeOverride) == 28, "Offset mismatch for FRigUnit_StepDynamicsSolver::DeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, SimulationSpaceDeltaTimeOverride) == 32, "Offset mismatch for FRigUnit_StepDynamicsSolver::SimulationSpaceDeltaTimeOverride");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, Alpha) == 36, "Offset mismatch for FRigUnit_StepDynamicsSolver::Alpha");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, bTrackVelocitiesDuringPassThrough) == 40, "Offset mismatch for FRigUnit_StepDynamicsSolver::bTrackVelocitiesDuringPassThrough");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, VisualizationSettings) == 44, "Offset mismatch for FRigUnit_StepDynamicsSolver::VisualizationSettings");
static_assert(offsetof(FRigUnit_StepDynamicsSolver, CachedSolverComponent) == 64, "Offset mismatch for FRigUnit_StepDynamicsSolver::CachedSolverComponent");
