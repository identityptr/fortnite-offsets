/**
 * decamp dumper generated SDK
 * Package: /Script/ClothingSystemRuntimeNv
 */
#pragma once
#include "Basic.h"

// /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Kind: ScriptStruct; super: none
struct FClothConstraintSetupNv
{
public:
    float Stiffness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StiffnessMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StretchLimit; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CompressionLimit; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClothConstraintSetupNv, Stiffness) == 0, "Offset mismatch for FClothConstraintSetupNv::Stiffness");
static_assert(offsetof(FClothConstraintSetupNv, StiffnessMultiplier) == 4, "Offset mismatch for FClothConstraintSetupNv::StiffnessMultiplier");
static_assert(offsetof(FClothConstraintSetupNv, StretchLimit) == 8, "Offset mismatch for FClothConstraintSetupNv::StretchLimit");
static_assert(offsetof(FClothConstraintSetupNv, CompressionLimit) == 12, "Offset mismatch for FClothConstraintSetupNv::CompressionLimit");

// /Script/ClothingSystemRuntimeNv.ClothConfigNv
// Kind: Class; super: ClothConfigCommon
class UClothConfigNv
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ClothingWindMethod; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t VerticalConstraint[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalConstraint[0x10]; // 0x003C (Size: 0x10, Type: StructProperty)
    std::uint8_t BendConstraint[0x10]; // 0x004C (Size: 0x10, Type: StructProperty)
    std::uint8_t ShearConstraint[0x10]; // 0x005C (Size: 0x10, Type: StructProperty)
    float SelfCollisionRadius; // 0x006C (Size: 0x4, Type: FloatProperty)
    float SelfCollisionStiffness; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionCullScale; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Damping[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    float Friction; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float WindDragCoefficient; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float WindLiftCoefficient; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t LinearDrag[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDrag[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearInertiaScale[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularInertiaScale[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CentrifugalInertiaScale[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    float SolverFrequency; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float StiffnessFrequency; // 0x011C (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0124
    std::uint8_t GravityOverride[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseGravityOverride; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0141
    float TetherStiffness; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float TetherLimit; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float CollisionThickness; // 0x014C (Size: 0x4, Type: FloatProperty)
    float AnimDriveSpringStiffness; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float AnimDriveDamperStiffness; // 0x0154 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WindMethod; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0159
    std::uint8_t VerticalConstraintConfig[0x10]; // 0x015C (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalConstraintConfig[0x10]; // 0x016C (Size: 0x10, Type: StructProperty)
    std::uint8_t BendConstraintConfig[0x10]; // 0x017C (Size: 0x10, Type: StructProperty)
    std::uint8_t ShearConstraintConfig[0x1]; // 0x018C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 40, "Offset mismatch for UClothConfigNv::ClothingWindMethod");
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 44, "Offset mismatch for UClothConfigNv::VerticalConstraint");
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 60, "Offset mismatch for UClothConfigNv::HorizontalConstraint");
static_assert(offsetof(UClothConfigNv, BendConstraint) == 76, "Offset mismatch for UClothConfigNv::BendConstraint");
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 92, "Offset mismatch for UClothConfigNv::ShearConstraint");
static_assert(offsetof(UClothConfigNv, SelfCollisionRadius) == 108, "Offset mismatch for UClothConfigNv::SelfCollisionRadius");
static_assert(offsetof(UClothConfigNv, SelfCollisionStiffness) == 112, "Offset mismatch for UClothConfigNv::SelfCollisionStiffness");
static_assert(offsetof(UClothConfigNv, SelfCollisionCullScale) == 116, "Offset mismatch for UClothConfigNv::SelfCollisionCullScale");
static_assert(offsetof(UClothConfigNv, Damping) == 120, "Offset mismatch for UClothConfigNv::Damping");
static_assert(offsetof(UClothConfigNv, Friction) == 144, "Offset mismatch for UClothConfigNv::Friction");
static_assert(offsetof(UClothConfigNv, WindDragCoefficient) == 148, "Offset mismatch for UClothConfigNv::WindDragCoefficient");
static_assert(offsetof(UClothConfigNv, WindLiftCoefficient) == 152, "Offset mismatch for UClothConfigNv::WindLiftCoefficient");
static_assert(offsetof(UClothConfigNv, LinearDrag) == 160, "Offset mismatch for UClothConfigNv::LinearDrag");
static_assert(offsetof(UClothConfigNv, AngularDrag) == 184, "Offset mismatch for UClothConfigNv::AngularDrag");
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 208, "Offset mismatch for UClothConfigNv::LinearInertiaScale");
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 232, "Offset mismatch for UClothConfigNv::AngularInertiaScale");
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 256, "Offset mismatch for UClothConfigNv::CentrifugalInertiaScale");
static_assert(offsetof(UClothConfigNv, SolverFrequency) == 280, "Offset mismatch for UClothConfigNv::SolverFrequency");
static_assert(offsetof(UClothConfigNv, StiffnessFrequency) == 284, "Offset mismatch for UClothConfigNv::StiffnessFrequency");
static_assert(offsetof(UClothConfigNv, GravityScale) == 288, "Offset mismatch for UClothConfigNv::GravityScale");
static_assert(offsetof(UClothConfigNv, GravityOverride) == 296, "Offset mismatch for UClothConfigNv::GravityOverride");
static_assert(offsetof(UClothConfigNv, bUseGravityOverride) == 320, "Offset mismatch for UClothConfigNv::bUseGravityOverride");
static_assert(offsetof(UClothConfigNv, TetherStiffness) == 324, "Offset mismatch for UClothConfigNv::TetherStiffness");
static_assert(offsetof(UClothConfigNv, TetherLimit) == 328, "Offset mismatch for UClothConfigNv::TetherLimit");
static_assert(offsetof(UClothConfigNv, CollisionThickness) == 332, "Offset mismatch for UClothConfigNv::CollisionThickness");
static_assert(offsetof(UClothConfigNv, AnimDriveSpringStiffness) == 336, "Offset mismatch for UClothConfigNv::AnimDriveSpringStiffness");
static_assert(offsetof(UClothConfigNv, AnimDriveDamperStiffness) == 340, "Offset mismatch for UClothConfigNv::AnimDriveDamperStiffness");
static_assert(offsetof(UClothConfigNv, WindMethod) == 344, "Offset mismatch for UClothConfigNv::WindMethod");
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 348, "Offset mismatch for UClothConfigNv::VerticalConstraintConfig");
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 364, "Offset mismatch for UClothConfigNv::HorizontalConstraintConfig");
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 380, "Offset mismatch for UClothConfigNv::BendConstraintConfig");
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 396, "Offset mismatch for UClothConfigNv::ShearConstraintConfig");

// /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Kind: Class; super: ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataNv_Legacy
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> MaxDistances; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BackstopDistances; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BackstopRadiuses; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimDriveMultipliers; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 160, "Offset mismatch for UClothPhysicalMeshDataNv_Legacy::MaxDistances");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 176, "Offset mismatch for UClothPhysicalMeshDataNv_Legacy::BackstopDistances");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 192, "Offset mismatch for UClothPhysicalMeshDataNv_Legacy::BackstopRadiuses");
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 208, "Offset mismatch for UClothPhysicalMeshDataNv_Legacy::AnimDriveMultipliers");

// /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Kind: Class; super: ClothingSimulationFactory
class UClothingSimulationFactoryNv
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Kind: Class; super: ClothingSimulationInteractor
class UClothingSimulationInteractorNv
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClothingInteractors; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UClothingSimulationInteractorNv, ClothingInteractors) == 40, "Offset mismatch for UClothingSimulationInteractorNv::ClothingInteractors");
