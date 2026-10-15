/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosCloth
 */
#pragma once
#include "Basic.h"

// /Script/ChaosCloth.ChaosClothWeightedValue
// Kind: ScriptStruct; super: none
struct FChaosClothWeightedValue
{
public:
    float Low; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float High; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosClothWeightedValue, Low) == 0, "Offset mismatch for FChaosClothWeightedValue::Low");
static_assert(offsetof(FChaosClothWeightedValue, High) == 4, "Offset mismatch for FChaosClothWeightedValue::High");

// /Script/ChaosCloth.ChaosClothConfig
// Kind: Class; super: ClothConfigCommon
class UChaosClothConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MassMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float UniformMass; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TotalMass; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Density; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MinPerParticleMass; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EdgeStiffnessWeighted[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::uint8_t BendingStiffnessWeighted[0x8]; // 0x0044 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseBendingElements; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    float BucklingRatio; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BucklingStiffnessWeighted[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t FlatnessRatio[0x8]; // 0x005C (Size: 0x8, Type: StructProperty)
    std::uint8_t AreaStiffnessWeighted[0x8]; // 0x0064 (Size: 0x8, Type: StructProperty)
    float VolumeStiffness; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TetherStiffness[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t TetherScale[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseGeodesicDistance; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0081
    float ShapeTargetStiffness; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float CollisionThickness; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float FrictionCoefficient; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseCCD; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSelfCollisions; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0092
    float SelfCollisionThickness; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionFriction; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSelfIntersections; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSelfCollisionSpheres; // 0x009D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x009E
    float SelfCollisionSphereRadius; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionSphereStiffness; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionSphereRadiusCullMultiplier; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseLegacyBackstop; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00AD
    float DampingCoefficient; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float LocalDampingCoefficient; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUsePointBasedWindModel; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00B9
    std::uint8_t Drag[0x8]; // 0x00BC (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableOuterDrag; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00C5
    std::uint8_t OuterDrag[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Lift[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableOuterLift; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x00D9
    std::uint8_t OuterLift[0x8]; // 0x00DC (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseGravityOverride; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x00E5
    float GravityScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x00EC
    std::uint8_t Gravity[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Pressure[0x8]; // 0x0108 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimDriveStiffness[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimDriveDamping[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t VelocityScaleSpace; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000C[0x7]; // 0x0121
    std::uint8_t LinearVelocityScale[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableLinearVelocityClamping; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x0141
    std::uint8_t MaxLinearVelocity[0xC]; // 0x0144 (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnableLinearAccelerationClamping; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x3]; // 0x0151
    std::uint8_t MaxLinearAcceleration[0xC]; // 0x0154 (Size: 0xC, Type: StructProperty)
    float AngularVelocityScale; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAngularVelocityClamping; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x3]; // 0x0165
    float MaxAngularVelocity; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAngularAccelerationClamping; // 0x016C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x016D
    float MaxAngularAcceleration; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FictitiousForcesModel; // 0x0174 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0011[0x3]; // 0x0175
    float FictitiousAngularScale; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseTetrahedralConstraints; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseThinShellVolumeConstraints; // 0x017D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseContinuousCollisionDetection; // 0x017E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosClothConfig, MassMode) == 40, "Offset mismatch for UChaosClothConfig::MassMode");
static_assert(offsetof(UChaosClothConfig, UniformMass) == 44, "Offset mismatch for UChaosClothConfig::UniformMass");
static_assert(offsetof(UChaosClothConfig, TotalMass) == 48, "Offset mismatch for UChaosClothConfig::TotalMass");
static_assert(offsetof(UChaosClothConfig, Density) == 52, "Offset mismatch for UChaosClothConfig::Density");
static_assert(offsetof(UChaosClothConfig, MinPerParticleMass) == 56, "Offset mismatch for UChaosClothConfig::MinPerParticleMass");
static_assert(offsetof(UChaosClothConfig, EdgeStiffnessWeighted) == 60, "Offset mismatch for UChaosClothConfig::EdgeStiffnessWeighted");
static_assert(offsetof(UChaosClothConfig, BendingStiffnessWeighted) == 68, "Offset mismatch for UChaosClothConfig::BendingStiffnessWeighted");
static_assert(offsetof(UChaosClothConfig, bUseBendingElements) == 76, "Offset mismatch for UChaosClothConfig::bUseBendingElements");
static_assert(offsetof(UChaosClothConfig, BucklingRatio) == 80, "Offset mismatch for UChaosClothConfig::BucklingRatio");
static_assert(offsetof(UChaosClothConfig, BucklingStiffnessWeighted) == 84, "Offset mismatch for UChaosClothConfig::BucklingStiffnessWeighted");
static_assert(offsetof(UChaosClothConfig, FlatnessRatio) == 92, "Offset mismatch for UChaosClothConfig::FlatnessRatio");
static_assert(offsetof(UChaosClothConfig, AreaStiffnessWeighted) == 100, "Offset mismatch for UChaosClothConfig::AreaStiffnessWeighted");
static_assert(offsetof(UChaosClothConfig, VolumeStiffness) == 108, "Offset mismatch for UChaosClothConfig::VolumeStiffness");
static_assert(offsetof(UChaosClothConfig, TetherStiffness) == 112, "Offset mismatch for UChaosClothConfig::TetherStiffness");
static_assert(offsetof(UChaosClothConfig, TetherScale) == 120, "Offset mismatch for UChaosClothConfig::TetherScale");
static_assert(offsetof(UChaosClothConfig, bUseGeodesicDistance) == 128, "Offset mismatch for UChaosClothConfig::bUseGeodesicDistance");
static_assert(offsetof(UChaosClothConfig, ShapeTargetStiffness) == 132, "Offset mismatch for UChaosClothConfig::ShapeTargetStiffness");
static_assert(offsetof(UChaosClothConfig, CollisionThickness) == 136, "Offset mismatch for UChaosClothConfig::CollisionThickness");
static_assert(offsetof(UChaosClothConfig, FrictionCoefficient) == 140, "Offset mismatch for UChaosClothConfig::FrictionCoefficient");
static_assert(offsetof(UChaosClothConfig, bUseCCD) == 144, "Offset mismatch for UChaosClothConfig::bUseCCD");
static_assert(offsetof(UChaosClothConfig, bUseSelfCollisions) == 145, "Offset mismatch for UChaosClothConfig::bUseSelfCollisions");
static_assert(offsetof(UChaosClothConfig, SelfCollisionThickness) == 148, "Offset mismatch for UChaosClothConfig::SelfCollisionThickness");
static_assert(offsetof(UChaosClothConfig, SelfCollisionFriction) == 152, "Offset mismatch for UChaosClothConfig::SelfCollisionFriction");
static_assert(offsetof(UChaosClothConfig, bUseSelfIntersections) == 156, "Offset mismatch for UChaosClothConfig::bUseSelfIntersections");
static_assert(offsetof(UChaosClothConfig, bUseSelfCollisionSpheres) == 157, "Offset mismatch for UChaosClothConfig::bUseSelfCollisionSpheres");
static_assert(offsetof(UChaosClothConfig, SelfCollisionSphereRadius) == 160, "Offset mismatch for UChaosClothConfig::SelfCollisionSphereRadius");
static_assert(offsetof(UChaosClothConfig, SelfCollisionSphereStiffness) == 164, "Offset mismatch for UChaosClothConfig::SelfCollisionSphereStiffness");
static_assert(offsetof(UChaosClothConfig, SelfCollisionSphereRadiusCullMultiplier) == 168, "Offset mismatch for UChaosClothConfig::SelfCollisionSphereRadiusCullMultiplier");
static_assert(offsetof(UChaosClothConfig, bUseLegacyBackstop) == 172, "Offset mismatch for UChaosClothConfig::bUseLegacyBackstop");
static_assert(offsetof(UChaosClothConfig, DampingCoefficient) == 176, "Offset mismatch for UChaosClothConfig::DampingCoefficient");
static_assert(offsetof(UChaosClothConfig, LocalDampingCoefficient) == 180, "Offset mismatch for UChaosClothConfig::LocalDampingCoefficient");
static_assert(offsetof(UChaosClothConfig, bUsePointBasedWindModel) == 184, "Offset mismatch for UChaosClothConfig::bUsePointBasedWindModel");
static_assert(offsetof(UChaosClothConfig, Drag) == 188, "Offset mismatch for UChaosClothConfig::Drag");
static_assert(offsetof(UChaosClothConfig, bEnableOuterDrag) == 196, "Offset mismatch for UChaosClothConfig::bEnableOuterDrag");
static_assert(offsetof(UChaosClothConfig, OuterDrag) == 200, "Offset mismatch for UChaosClothConfig::OuterDrag");
static_assert(offsetof(UChaosClothConfig, Lift) == 208, "Offset mismatch for UChaosClothConfig::Lift");
static_assert(offsetof(UChaosClothConfig, bEnableOuterLift) == 216, "Offset mismatch for UChaosClothConfig::bEnableOuterLift");
static_assert(offsetof(UChaosClothConfig, OuterLift) == 220, "Offset mismatch for UChaosClothConfig::OuterLift");
static_assert(offsetof(UChaosClothConfig, bUseGravityOverride) == 228, "Offset mismatch for UChaosClothConfig::bUseGravityOverride");
static_assert(offsetof(UChaosClothConfig, GravityScale) == 232, "Offset mismatch for UChaosClothConfig::GravityScale");
static_assert(offsetof(UChaosClothConfig, Gravity) == 240, "Offset mismatch for UChaosClothConfig::Gravity");
static_assert(offsetof(UChaosClothConfig, Pressure) == 264, "Offset mismatch for UChaosClothConfig::Pressure");
static_assert(offsetof(UChaosClothConfig, AnimDriveStiffness) == 272, "Offset mismatch for UChaosClothConfig::AnimDriveStiffness");
static_assert(offsetof(UChaosClothConfig, AnimDriveDamping) == 280, "Offset mismatch for UChaosClothConfig::AnimDriveDamping");
static_assert(offsetof(UChaosClothConfig, VelocityScaleSpace) == 288, "Offset mismatch for UChaosClothConfig::VelocityScaleSpace");
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 296, "Offset mismatch for UChaosClothConfig::LinearVelocityScale");
static_assert(offsetof(UChaosClothConfig, bEnableLinearVelocityClamping) == 320, "Offset mismatch for UChaosClothConfig::bEnableLinearVelocityClamping");
static_assert(offsetof(UChaosClothConfig, MaxLinearVelocity) == 324, "Offset mismatch for UChaosClothConfig::MaxLinearVelocity");
static_assert(offsetof(UChaosClothConfig, bEnableLinearAccelerationClamping) == 336, "Offset mismatch for UChaosClothConfig::bEnableLinearAccelerationClamping");
static_assert(offsetof(UChaosClothConfig, MaxLinearAcceleration) == 340, "Offset mismatch for UChaosClothConfig::MaxLinearAcceleration");
static_assert(offsetof(UChaosClothConfig, AngularVelocityScale) == 352, "Offset mismatch for UChaosClothConfig::AngularVelocityScale");
static_assert(offsetof(UChaosClothConfig, bEnableAngularVelocityClamping) == 356, "Offset mismatch for UChaosClothConfig::bEnableAngularVelocityClamping");
static_assert(offsetof(UChaosClothConfig, MaxAngularVelocity) == 360, "Offset mismatch for UChaosClothConfig::MaxAngularVelocity");
static_assert(offsetof(UChaosClothConfig, bEnableAngularAccelerationClamping) == 364, "Offset mismatch for UChaosClothConfig::bEnableAngularAccelerationClamping");
static_assert(offsetof(UChaosClothConfig, MaxAngularAcceleration) == 368, "Offset mismatch for UChaosClothConfig::MaxAngularAcceleration");
static_assert(offsetof(UChaosClothConfig, FictitiousForcesModel) == 372, "Offset mismatch for UChaosClothConfig::FictitiousForcesModel");
static_assert(offsetof(UChaosClothConfig, FictitiousAngularScale) == 376, "Offset mismatch for UChaosClothConfig::FictitiousAngularScale");
static_assert(offsetof(UChaosClothConfig, bUseTetrahedralConstraints) == 380, "Offset mismatch for UChaosClothConfig::bUseTetrahedralConstraints");
static_assert(offsetof(UChaosClothConfig, bUseThinShellVolumeConstraints) == 381, "Offset mismatch for UChaosClothConfig::bUseThinShellVolumeConstraints");
static_assert(offsetof(UChaosClothConfig, bUseContinuousCollisionDetection) == 382, "Offset mismatch for UChaosClothConfig::bUseContinuousCollisionDetection");

// /Script/ChaosCloth.ChaosClothSharedSimConfig
// Kind: Class; super: ClothSharedConfigCommon
class UChaosClothSharedSimConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t IterationCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxIterationCount; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t SubdivisionCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseLocalSpaceSimulation; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseXPBDConstraints; // 0x0035 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosClothSharedSimConfig, IterationCount) == 40, "Offset mismatch for UChaosClothSharedSimConfig::IterationCount");
static_assert(offsetof(UChaosClothSharedSimConfig, MaxIterationCount) == 44, "Offset mismatch for UChaosClothSharedSimConfig::MaxIterationCount");
static_assert(offsetof(UChaosClothSharedSimConfig, SubdivisionCount) == 48, "Offset mismatch for UChaosClothSharedSimConfig::SubdivisionCount");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseLocalSpaceSimulation) == 52, "Offset mismatch for UChaosClothSharedSimConfig::bUseLocalSpaceSimulation");
static_assert(offsetof(UChaosClothSharedSimConfig, bUseXPBDConstraints) == 53, "Offset mismatch for UChaosClothSharedSimConfig::bUseXPBDConstraints");

// /Script/ChaosCloth.ChaosClothingInteractor
// Kind: Class; super: ClothingInteractor
class UChaosClothingInteractor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosCloth.ChaosClothingSimulationFactory
// Kind: Class; super: ClothingSimulationFactory
class UChaosClothingSimulationFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosCloth.ChaosClothingSimulationInteractor
// Kind: Class; super: ClothingSimulationInteractor
class UChaosClothingSimulationInteractor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClothingInteractors; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UChaosClothingSimulationInteractor, ClothingInteractors) == 40, "Offset mismatch for UChaosClothingSimulationInteractor::ClothingInteractors");
