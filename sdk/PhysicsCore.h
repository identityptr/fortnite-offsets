/**
 * decamp dumper generated SDK
 * Package: /Script/PhysicsCore
 */
#pragma once
#include "Basic.h"

// /Script/PhysicsCore.BodyInstanceCore
// Kind: ScriptStruct; super: none
struct FBodyInstanceCore
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAutoWeld; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bEnableGravity (shared storage)
    // 0x0008 BoolProperty bGenerateWakeEvents (shared storage)
    // 0x0008 BoolProperty bGyroscopicTorqueEnabled (shared storage)
    // 0x0008 BoolProperty bOverrideMass (shared storage)
    // 0x0008 BoolProperty bSimulatePhysics (shared storage)
    // 0x0008 BoolProperty bStartAwake (shared storage)
    // 0x0008 BoolProperty bUpdateKinematicFromSimulation (shared storage)
    std::uint8_t bUpdateMassWhenScaleChanges; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBodyInstanceCore, bAutoWeld) == 8, "Offset mismatch for FBodyInstanceCore::bAutoWeld");
static_assert(offsetof(FBodyInstanceCore, bUpdateMassWhenScaleChanges) == 9, "Offset mismatch for FBodyInstanceCore::bUpdateMassWhenScaleChanges");

// /Script/PhysicsCore.PhysicalMaterialDamageModifier
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialDamageModifier
{
public:
    float DamageThresholdMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPhysicalMaterialDamageModifier, DamageThresholdMultiplier) == 0, "Offset mismatch for FPhysicalMaterialDamageModifier::DamageThresholdMultiplier");

// /Script/PhysicsCore.PhysicalMaterialStrength
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialStrength
{
public:
    float TensileStrength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CompressionStrength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ShearStrength; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPhysicalMaterialStrength, TensileStrength) == 0, "Offset mismatch for FPhysicalMaterialStrength::TensileStrength");
static_assert(offsetof(FPhysicalMaterialStrength, CompressionStrength) == 4, "Offset mismatch for FPhysicalMaterialStrength::CompressionStrength");
static_assert(offsetof(FPhysicalMaterialStrength, ShearStrength) == 8, "Offset mismatch for FPhysicalMaterialStrength::ShearStrength");

// /Script/PhysicsCore.BodySetupCore
// Kind: Class; super: Object
class UBodySetupCore
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BoneName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t PhysicsType; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t CollisionTraceFlag; // 0x002D (Size: 0x1, Type: ByteProperty)
    std::uint8_t CollisionReponse; // 0x002E (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBodySetupCore, BoneName) == 40, "Offset mismatch for UBodySetupCore::BoneName");
static_assert(offsetof(UBodySetupCore, PhysicsType) == 44, "Offset mismatch for UBodySetupCore::PhysicsType");
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 45, "Offset mismatch for UBodySetupCore::CollisionTraceFlag");
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 46, "Offset mismatch for UBodySetupCore::CollisionReponse");

// /Script/PhysicsCore.ChaosPhysicalMaterial
// Kind: Class; super: Object
class UChaosPhysicalMaterial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Friction; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float StaticFriction; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Restitution; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float LinearEtherDrag; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float AngularEtherDrag; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float SleepingLinearVelocityThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    float SleepingAngularVelocityThreshold; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosPhysicalMaterial, Friction) == 40, "Offset mismatch for UChaosPhysicalMaterial::Friction");
static_assert(offsetof(UChaosPhysicalMaterial, StaticFriction) == 44, "Offset mismatch for UChaosPhysicalMaterial::StaticFriction");
static_assert(offsetof(UChaosPhysicalMaterial, Restitution) == 48, "Offset mismatch for UChaosPhysicalMaterial::Restitution");
static_assert(offsetof(UChaosPhysicalMaterial, LinearEtherDrag) == 52, "Offset mismatch for UChaosPhysicalMaterial::LinearEtherDrag");
static_assert(offsetof(UChaosPhysicalMaterial, AngularEtherDrag) == 56, "Offset mismatch for UChaosPhysicalMaterial::AngularEtherDrag");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingLinearVelocityThreshold) == 60, "Offset mismatch for UChaosPhysicalMaterial::SleepingLinearVelocityThreshold");
static_assert(offsetof(UChaosPhysicalMaterial, SleepingAngularVelocityThreshold) == 64, "Offset mismatch for UChaosPhysicalMaterial::SleepingAngularVelocityThreshold");

// /Script/PhysicsCore.PhysicalMaterial
// Kind: Class; super: Object
class UPhysicalMaterial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Friction; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float StaticFriction; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrictionCombineMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideFrictionCombineMode; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    float Restitution; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RestitutionCombineMode; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideRestitutionCombineMode; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003A
    float Density; // 0x003C (Size: 0x4, Type: FloatProperty)
    float SleepLinearVelocityThreshold; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float SleepAngularVelocityThreshold; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t SleepCounterThreshold; // 0x0048 (Size: 0x4, Type: IntProperty)
    float RaiseMassToPower; // 0x004C (Size: 0x4, Type: FloatProperty)
    float DestructibleDamageThresholdScale; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0054
    void* PhysicalMaterialProperty; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SurfaceType; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0061
    std::uint8_t Strength[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t DamageModifier[0x4]; // 0x0070 (Size: 0x4, Type: StructProperty)
    std::uint8_t DebugColor[0x10]; // 0x0074 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowExperimentalProperties; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SoftCollisionMode; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0086
    float SoftCollisionThickness; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float BaseFrictionImpulse; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPhysicalMaterial, Friction) == 40, "Offset mismatch for UPhysicalMaterial::Friction");
static_assert(offsetof(UPhysicalMaterial, StaticFriction) == 44, "Offset mismatch for UPhysicalMaterial::StaticFriction");
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 48, "Offset mismatch for UPhysicalMaterial::FrictionCombineMode");
static_assert(offsetof(UPhysicalMaterial, bOverrideFrictionCombineMode) == 49, "Offset mismatch for UPhysicalMaterial::bOverrideFrictionCombineMode");
static_assert(offsetof(UPhysicalMaterial, Restitution) == 52, "Offset mismatch for UPhysicalMaterial::Restitution");
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 56, "Offset mismatch for UPhysicalMaterial::RestitutionCombineMode");
static_assert(offsetof(UPhysicalMaterial, bOverrideRestitutionCombineMode) == 57, "Offset mismatch for UPhysicalMaterial::bOverrideRestitutionCombineMode");
static_assert(offsetof(UPhysicalMaterial, Density) == 60, "Offset mismatch for UPhysicalMaterial::Density");
static_assert(offsetof(UPhysicalMaterial, SleepLinearVelocityThreshold) == 64, "Offset mismatch for UPhysicalMaterial::SleepLinearVelocityThreshold");
static_assert(offsetof(UPhysicalMaterial, SleepAngularVelocityThreshold) == 68, "Offset mismatch for UPhysicalMaterial::SleepAngularVelocityThreshold");
static_assert(offsetof(UPhysicalMaterial, SleepCounterThreshold) == 72, "Offset mismatch for UPhysicalMaterial::SleepCounterThreshold");
static_assert(offsetof(UPhysicalMaterial, RaiseMassToPower) == 76, "Offset mismatch for UPhysicalMaterial::RaiseMassToPower");
static_assert(offsetof(UPhysicalMaterial, DestructibleDamageThresholdScale) == 80, "Offset mismatch for UPhysicalMaterial::DestructibleDamageThresholdScale");
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 88, "Offset mismatch for UPhysicalMaterial::PhysicalMaterialProperty");
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 96, "Offset mismatch for UPhysicalMaterial::SurfaceType");
static_assert(offsetof(UPhysicalMaterial, Strength) == 100, "Offset mismatch for UPhysicalMaterial::Strength");
static_assert(offsetof(UPhysicalMaterial, DamageModifier) == 112, "Offset mismatch for UPhysicalMaterial::DamageModifier");
static_assert(offsetof(UPhysicalMaterial, DebugColor) == 116, "Offset mismatch for UPhysicalMaterial::DebugColor");
static_assert(offsetof(UPhysicalMaterial, bShowExperimentalProperties) == 132, "Offset mismatch for UPhysicalMaterial::bShowExperimentalProperties");
static_assert(offsetof(UPhysicalMaterial, SoftCollisionMode) == 133, "Offset mismatch for UPhysicalMaterial::SoftCollisionMode");
static_assert(offsetof(UPhysicalMaterial, SoftCollisionThickness) == 136, "Offset mismatch for UPhysicalMaterial::SoftCollisionThickness");
static_assert(offsetof(UPhysicalMaterial, BaseFrictionImpulse) == 140, "Offset mismatch for UPhysicalMaterial::BaseFrictionImpulse");

// /Script/PhysicsCore.PhysicalMaterialPropertyBase
// Kind: Class; super: Object
class UPhysicalMaterialPropertyBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PhysicsCore.PhysicsSettingsCore
// Kind: Class; super: DeveloperSettings
class UPhysicsSettingsCore
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultGravityZ; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DefaultTerminalVelocity; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DefaultFluidFriction; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t SimulateScratchMemorySize; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t RagdollAggregateThreshold; // 0x0040 (Size: 0x4, Type: IntProperty)
    float TriangleMeshTriangleMinAreaThreshold; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableEnhancedDeterminism; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableShapeSharing; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePCM; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableStabilization; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarnMissingLocks; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnable2DPhysics; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultHasComplexCollision; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x004F
    float BounceThresholdVelocity; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrictionCombineMode; // 0x0054 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RestitutionCombineMode; // 0x0055 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0056
    float MaxAngularVelocity; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxDepenetrationVelocity; // 0x005C (Size: 0x4, Type: FloatProperty)
    float ContactOffsetMultiplier; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MinContactOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float MaxContactOffset; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSimulateSkeletalMeshOnDedicatedServer; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultShapeComplexity; // 0x006D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x2]; // 0x006E
    std::uint8_t SolverOptions[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPhysicsSettingsCore, DefaultGravityZ) == 48, "Offset mismatch for UPhysicsSettingsCore::DefaultGravityZ");
static_assert(offsetof(UPhysicsSettingsCore, DefaultTerminalVelocity) == 52, "Offset mismatch for UPhysicsSettingsCore::DefaultTerminalVelocity");
static_assert(offsetof(UPhysicsSettingsCore, DefaultFluidFriction) == 56, "Offset mismatch for UPhysicsSettingsCore::DefaultFluidFriction");
static_assert(offsetof(UPhysicsSettingsCore, SimulateScratchMemorySize) == 60, "Offset mismatch for UPhysicsSettingsCore::SimulateScratchMemorySize");
static_assert(offsetof(UPhysicsSettingsCore, RagdollAggregateThreshold) == 64, "Offset mismatch for UPhysicsSettingsCore::RagdollAggregateThreshold");
static_assert(offsetof(UPhysicsSettingsCore, TriangleMeshTriangleMinAreaThreshold) == 68, "Offset mismatch for UPhysicsSettingsCore::TriangleMeshTriangleMinAreaThreshold");
static_assert(offsetof(UPhysicsSettingsCore, bEnableEnhancedDeterminism) == 72, "Offset mismatch for UPhysicsSettingsCore::bEnableEnhancedDeterminism");
static_assert(offsetof(UPhysicsSettingsCore, bEnableShapeSharing) == 73, "Offset mismatch for UPhysicsSettingsCore::bEnableShapeSharing");
static_assert(offsetof(UPhysicsSettingsCore, bEnablePCM) == 74, "Offset mismatch for UPhysicsSettingsCore::bEnablePCM");
static_assert(offsetof(UPhysicsSettingsCore, bEnableStabilization) == 75, "Offset mismatch for UPhysicsSettingsCore::bEnableStabilization");
static_assert(offsetof(UPhysicsSettingsCore, bWarnMissingLocks) == 76, "Offset mismatch for UPhysicsSettingsCore::bWarnMissingLocks");
static_assert(offsetof(UPhysicsSettingsCore, bEnable2DPhysics) == 77, "Offset mismatch for UPhysicsSettingsCore::bEnable2DPhysics");
static_assert(offsetof(UPhysicsSettingsCore, bDefaultHasComplexCollision) == 78, "Offset mismatch for UPhysicsSettingsCore::bDefaultHasComplexCollision");
static_assert(offsetof(UPhysicsSettingsCore, BounceThresholdVelocity) == 80, "Offset mismatch for UPhysicsSettingsCore::BounceThresholdVelocity");
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 84, "Offset mismatch for UPhysicsSettingsCore::FrictionCombineMode");
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 85, "Offset mismatch for UPhysicsSettingsCore::RestitutionCombineMode");
static_assert(offsetof(UPhysicsSettingsCore, MaxAngularVelocity) == 88, "Offset mismatch for UPhysicsSettingsCore::MaxAngularVelocity");
static_assert(offsetof(UPhysicsSettingsCore, MaxDepenetrationVelocity) == 92, "Offset mismatch for UPhysicsSettingsCore::MaxDepenetrationVelocity");
static_assert(offsetof(UPhysicsSettingsCore, ContactOffsetMultiplier) == 96, "Offset mismatch for UPhysicsSettingsCore::ContactOffsetMultiplier");
static_assert(offsetof(UPhysicsSettingsCore, MinContactOffset) == 100, "Offset mismatch for UPhysicsSettingsCore::MinContactOffset");
static_assert(offsetof(UPhysicsSettingsCore, MaxContactOffset) == 104, "Offset mismatch for UPhysicsSettingsCore::MaxContactOffset");
static_assert(offsetof(UPhysicsSettingsCore, bSimulateSkeletalMeshOnDedicatedServer) == 108, "Offset mismatch for UPhysicsSettingsCore::bSimulateSkeletalMeshOnDedicatedServer");
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 109, "Offset mismatch for UPhysicsSettingsCore::DefaultShapeComplexity");
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 112, "Offset mismatch for UPhysicsSettingsCore::SolverOptions");
