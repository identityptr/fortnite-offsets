/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarCosmetics
 */
#pragma once
#include "Basic.h"

// /Script/DelMarCosmetics.DelMarAnimNode_VehicleController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FDelMarAnimNode_VehicleController
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BouncyChassis[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t FrontLeftWheel[0x24]; // 0x00D4 (Size: 0x24, Type: StructProperty)
    std::uint8_t FrontRightWheel[0x24]; // 0x00F8 (Size: 0x24, Type: StructProperty)
    std::uint8_t BackLeftWheel[0x24]; // 0x011C (Size: 0x24, Type: StructProperty)
    std::uint8_t BackRightWheel[0x24]; // 0x0140 (Size: 0x24, Type: StructProperty)
    std::uint8_t ChassisBone[0xC]; // 0x0164 (Size: 0xC, Type: StructProperty)
    std::uint8_t VehicleInfo[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    std::uint8_t WheelInfoFR[0x1C]; // 0x0178 (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoFL[0x1C]; // 0x0194 (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoBR[0x1C]; // 0x01B0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoBL[0x1]; // 0x01CC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarAnimNode_VehicleController, BouncyChassis) == 200, "Offset mismatch for FDelMarAnimNode_VehicleController::BouncyChassis");
static_assert(offsetof(FDelMarAnimNode_VehicleController, FrontLeftWheel) == 212, "Offset mismatch for FDelMarAnimNode_VehicleController::FrontLeftWheel");
static_assert(offsetof(FDelMarAnimNode_VehicleController, FrontRightWheel) == 248, "Offset mismatch for FDelMarAnimNode_VehicleController::FrontRightWheel");
static_assert(offsetof(FDelMarAnimNode_VehicleController, BackLeftWheel) == 284, "Offset mismatch for FDelMarAnimNode_VehicleController::BackLeftWheel");
static_assert(offsetof(FDelMarAnimNode_VehicleController, BackRightWheel) == 320, "Offset mismatch for FDelMarAnimNode_VehicleController::BackRightWheel");
static_assert(offsetof(FDelMarAnimNode_VehicleController, ChassisBone) == 356, "Offset mismatch for FDelMarAnimNode_VehicleController::ChassisBone");
static_assert(offsetof(FDelMarAnimNode_VehicleController, VehicleInfo) == 368, "Offset mismatch for FDelMarAnimNode_VehicleController::VehicleInfo");
static_assert(offsetof(FDelMarAnimNode_VehicleController, WheelInfoFR) == 376, "Offset mismatch for FDelMarAnimNode_VehicleController::WheelInfoFR");
static_assert(offsetof(FDelMarAnimNode_VehicleController, WheelInfoFL) == 404, "Offset mismatch for FDelMarAnimNode_VehicleController::WheelInfoFL");
static_assert(offsetof(FDelMarAnimNode_VehicleController, WheelInfoBR) == 432, "Offset mismatch for FDelMarAnimNode_VehicleController::WheelInfoBR");
static_assert(offsetof(FDelMarAnimNode_VehicleController, WheelInfoBL) == 460, "Offset mismatch for FDelMarAnimNode_VehicleController::WheelInfoBL");

// /Script/DelMarCosmetics.DelMarBouncyChassisInstance
// Kind: ScriptStruct; super: none
struct FDelMarBouncyChassisInstance
{
public:
    std::uint8_t Spring[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarBouncyChassisInstance, Spring) == 0, "Offset mismatch for FDelMarBouncyChassisInstance::Spring");

// /Script/DelMarCosmetics.DelMarBouncyChassisSetup
// Kind: ScriptStruct; super: none
struct FDelMarBouncyChassisSetup
{
public:
    std::uint8_t PitchSpring[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float PitchMaxAngleDegrees; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RollSpring[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    float RollMaxAngleDegrees; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ZSpring[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    float ZMaxDrop; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ZMaxRaise; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MassOffset[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarBouncyChassisSetup, PitchSpring) == 0, "Offset mismatch for FDelMarBouncyChassisSetup::PitchSpring");
static_assert(offsetof(FDelMarBouncyChassisSetup, PitchMaxAngleDegrees) == 8, "Offset mismatch for FDelMarBouncyChassisSetup::PitchMaxAngleDegrees");
static_assert(offsetof(FDelMarBouncyChassisSetup, RollSpring) == 12, "Offset mismatch for FDelMarBouncyChassisSetup::RollSpring");
static_assert(offsetof(FDelMarBouncyChassisSetup, RollMaxAngleDegrees) == 20, "Offset mismatch for FDelMarBouncyChassisSetup::RollMaxAngleDegrees");
static_assert(offsetof(FDelMarBouncyChassisSetup, ZSpring) == 24, "Offset mismatch for FDelMarBouncyChassisSetup::ZSpring");
static_assert(offsetof(FDelMarBouncyChassisSetup, ZMaxDrop) == 32, "Offset mismatch for FDelMarBouncyChassisSetup::ZMaxDrop");
static_assert(offsetof(FDelMarBouncyChassisSetup, ZMaxRaise) == 36, "Offset mismatch for FDelMarBouncyChassisSetup::ZMaxRaise");
static_assert(offsetof(FDelMarBouncyChassisSetup, MaxDisplacement) == 40, "Offset mismatch for FDelMarBouncyChassisSetup::MaxDisplacement");
static_assert(offsetof(FDelMarBouncyChassisSetup, MassOffset) == 64, "Offset mismatch for FDelMarBouncyChassisSetup::MassOffset");

// /Script/DelMarCosmetics.DelMarBouncyChassisState
// Kind: ScriptStruct; super: none
struct FDelMarBouncyChassisState
{
public:
    float PitchDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RollDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslationZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarBouncyChassisState, PitchDegrees) == 0, "Offset mismatch for FDelMarBouncyChassisState::PitchDegrees");
static_assert(offsetof(FDelMarBouncyChassisState, RollDegrees) == 4, "Offset mismatch for FDelMarBouncyChassisState::RollDegrees");
static_assert(offsetof(FDelMarBouncyChassisState, TranslationZ) == 8, "Offset mismatch for FDelMarBouncyChassisState::TranslationZ");

// /Script/DelMarCosmetics.DelMarBoxSpring
// Kind: ScriptStruct; super: none
struct FDelMarBoxSpring
{
public:
    std::uint8_t Setup[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarBoxSpring, Setup) == 0, "Offset mismatch for FDelMarBoxSpring::Setup");

// /Script/DelMarCosmetics.DelMarBoxSpringSetup
// Kind: ScriptStruct; super: none
struct FDelMarBoxSpringSetup
{
public:
    std::uint8_t Strength[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Damping[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarBoxSpringSetup, Strength) == 0, "Offset mismatch for FDelMarBoxSpringSetup::Strength");
static_assert(offsetof(FDelMarBoxSpringSetup, Damping) == 24, "Offset mismatch for FDelMarBoxSpringSetup::Damping");
static_assert(offsetof(FDelMarBoxSpringSetup, MaxDisplacement) == 48, "Offset mismatch for FDelMarBoxSpringSetup::MaxDisplacement");
static_assert(offsetof(FDelMarBoxSpringSetup, MaxSpeed) == 72, "Offset mismatch for FDelMarBoxSpringSetup::MaxSpeed");
static_assert(offsetof(FDelMarBoxSpringSetup, Mass) == 76, "Offset mismatch for FDelMarBoxSpringSetup::Mass");

// /Script/DelMarCosmetics.DelMarMaterialOverrides
// Kind: ScriptStruct; super: none
struct FDelMarMaterialOverrides
{
public:
    std::int32_t MaterialInstanceDynamicIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MaterialInterface; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParameterOverrides[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarMaterialOverrides, MaterialInstanceDynamicIndex) == 0, "Offset mismatch for FDelMarMaterialOverrides::MaterialInstanceDynamicIndex");
static_assert(offsetof(FDelMarMaterialOverrides, MaterialInterface) == 8, "Offset mismatch for FDelMarMaterialOverrides::MaterialInterface");
static_assert(offsetof(FDelMarMaterialOverrides, ParameterOverrides) == 16, "Offset mismatch for FDelMarMaterialOverrides::ParameterOverrides");

// /Script/DelMarCosmetics.DelMarMaterialParameterCollection
// Kind: ScriptStruct; super: none
struct FDelMarMaterialParameterCollection
{
public:
    TArray<void*> OverrideFloatParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideVectorParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideTextureParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarMaterialParameterCollection, OverrideFloatParameters) == 0, "Offset mismatch for FDelMarMaterialParameterCollection::OverrideFloatParameters");
static_assert(offsetof(FDelMarMaterialParameterCollection, OverrideVectorParameters) == 16, "Offset mismatch for FDelMarMaterialParameterCollection::OverrideVectorParameters");
static_assert(offsetof(FDelMarMaterialParameterCollection, OverrideTextureParameters) == 32, "Offset mismatch for FDelMarMaterialParameterCollection::OverrideTextureParameters");

// /Script/DelMarCosmetics.DelMarNiagaraOverrides
// Kind: ScriptStruct; super: none
struct FDelMarNiagaraOverrides
{
public:
    std::uint8_t ParameterOverrides[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarNiagaraOverrides, ParameterOverrides) == 0, "Offset mismatch for FDelMarNiagaraOverrides::ParameterOverrides");

// /Script/DelMarCosmetics.DelMarNiagaraParameterCollection
// Kind: ScriptStruct; super: none
struct FDelMarNiagaraParameterCollection
{
public:
    void* OverrideNiagaraSystem; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverrideBoolParameters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideIntParameters; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideFloatParameters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideVectorParameters; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideColorParameters; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideTextureParameters; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideMaterialsParameters; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideStaticMeshParameters; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideActorParameters; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideNiagaraSystem) == 0, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideNiagaraSystem");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideBoolParameters) == 8, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideBoolParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideIntParameters) == 24, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideIntParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideFloatParameters) == 40, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideFloatParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideVectorParameters) == 56, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideVectorParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideColorParameters) == 72, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideColorParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideTextureParameters) == 88, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideTextureParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideMaterialsParameters) == 104, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideMaterialsParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideStaticMeshParameters) == 120, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideStaticMeshParameters");
static_assert(offsetof(FDelMarNiagaraParameterCollection, OverrideActorParameters) == 136, "Offset mismatch for FDelMarNiagaraParameterCollection::OverrideActorParameters");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Actor
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Actor
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Actor, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Actor::Name");
static_assert(offsetof(FDelMarOverrideParameter_Actor, Value) == 8, "Offset mismatch for FDelMarOverrideParameter_Actor::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Bool
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Bool
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Value; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Bool, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Bool::Name");
static_assert(offsetof(FDelMarOverrideParameter_Bool, Value) == 4, "Offset mismatch for FDelMarOverrideParameter_Bool::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Color
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Color
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Color, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Color::Name");
static_assert(offsetof(FDelMarOverrideParameter_Color, Value) == 4, "Offset mismatch for FDelMarOverrideParameter_Color::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Float
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Float
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Float, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Float::Name");
static_assert(offsetof(FDelMarOverrideParameter_Float, Value) == 4, "Offset mismatch for FDelMarOverrideParameter_Float::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Int
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Int
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Int, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Int::Name");
static_assert(offsetof(FDelMarOverrideParameter_Int, Value) == 4, "Offset mismatch for FDelMarOverrideParameter_Int::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Material
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Material
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Material, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Material::Name");
static_assert(offsetof(FDelMarOverrideParameter_Material, Value) == 8, "Offset mismatch for FDelMarOverrideParameter_Material::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_StaticMesh
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_StaticMesh
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_StaticMesh, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_StaticMesh::Name");
static_assert(offsetof(FDelMarOverrideParameter_StaticMesh, Value) == 8, "Offset mismatch for FDelMarOverrideParameter_StaticMesh::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Texture
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Texture
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Texture, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Texture::Name");
static_assert(offsetof(FDelMarOverrideParameter_Texture, Value) == 8, "Offset mismatch for FDelMarOverrideParameter_Texture::Value");

// /Script/DelMarCosmetics.DelMarOverrideParameter_Vector
// Kind: ScriptStruct; super: none
struct FDelMarOverrideParameter_Vector
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarOverrideParameter_Vector, Name) == 0, "Offset mismatch for FDelMarOverrideParameter_Vector::Name");
static_assert(offsetof(FDelMarOverrideParameter_Vector, Value) == 8, "Offset mismatch for FDelMarOverrideParameter_Vector::Value");

// /Script/DelMarCosmetics.DelMarParameterOverrides
// Kind: ScriptStruct; super: none
struct FDelMarParameterOverrides
{
public:
    TArray<void*> MaterialOverrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NiagaraOverrides; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarParameterOverrides, MaterialOverrides) == 0, "Offset mismatch for FDelMarParameterOverrides::MaterialOverrides");
static_assert(offsetof(FDelMarParameterOverrides, NiagaraOverrides) == 16, "Offset mismatch for FDelMarParameterOverrides::NiagaraOverrides");

// /Script/DelMarCosmetics.DelMarPreviewConfigs
// Kind: ScriptStruct; super: none
struct FDelMarPreviewConfigs
{
public:
    std::uint8_t bAnyWheelsOnGround; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWheelsOnGround; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float ForwardSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SideSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Throttle; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Steering; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SteerAngle; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float TargetSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BaseTargetSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float NormalizedForwardSpeed; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float NormalizedBonusSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleForwardState; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    float BonusSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float WorldAppliedBonusSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LandingData[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t bLanded; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkydiving; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DriftState; // 0x0046 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDriftControlled; // 0x0047 (Size: 0x1, Type: BoolProperty)
    float DriftAngle; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float DriftSlipAngleRatio; // 0x004C (Size: 0x4, Type: FloatProperty)
    float DriftTargetSide; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float DriftDuration; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDriftBoostInRange; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftBoostLosingAppliedBonusSpeed; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x005A
    float DriftBoostPotentialPercentage; // 0x005C (Size: 0x4, Type: FloatProperty)
    float DriftBoostAppliedBonusSpeed; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float DriftBoostQueuedBonusSpeed; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float DraftingAppliedBonusSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float DraftingMaxBonusSpeedPercentage; // 0x006C (Size: 0x4, Type: FloatProperty)
    float DraftingTargetDegrees; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float DraftingCurrentBonusSpeedPercentage; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasValidDraftingTarget; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DraftingState; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x007A
    float OversteerAccumulationPercentage; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartlineBoostActive; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFailedStartlineBoost; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0082
    float PercentageMaxBonusSpeedEarned; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float StartlineBoostAppliedBonusSpeed; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float MaxEarnedBonusSpeed; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLeftStrafe; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStrafeActive; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStrafeDisabled; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanStrafeBeActivated; // 0x0093 (Size: 0x1, Type: BoolProperty)
    float StrafeCooldownPercentage; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTurboActive; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0099
    float NumCurrentCharges; // 0x009C (Size: 0x4, Type: FloatProperty)
    float NumMaxCharges; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BonusZoneState; // 0x00A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00A5
    float PercentageTurboActiveTimeRemaining; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float RemainingTurboActiveSeconds; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float TurboAppliedBonusSpeed; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float TurboBonusZoneBonusSpeed; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float TurboAdditionalActiveSeconds; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bKickflipActive; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipLeftSide; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipSuctionActive; // 0x00BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x00BF
    float DistanceToSuctionSurface; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float KickflipDuration; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::int32_t KickflipActivationCharges; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReattachmentActive; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00CD
    std::uint8_t ReattachmentDirection[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUnderthrustActive; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x00E9
    float UnderthrustPercentageTankRemaining; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float UnderthrustActiveDuration; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bJumpActive; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirFreestyleActive; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVehicleDemolished; // 0x00F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x1]; // 0x00F7
    std::uint8_t DemolishCausedByTag[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bInvulnerabilityActive; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVehicleSpawnedThisFrame; // 0x00FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFirstVehicleForPlayer; // 0x00FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousVehicleDemolished; // 0x00FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHeadlightsActive; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarPreviewConfigs, bAnyWheelsOnGround) == 0, "Offset mismatch for FDelMarPreviewConfigs::bAnyWheelsOnGround");
static_assert(offsetof(FDelMarPreviewConfigs, bWheelsOnGround) == 1, "Offset mismatch for FDelMarPreviewConfigs::bWheelsOnGround");
static_assert(offsetof(FDelMarPreviewConfigs, ForwardSpeed) == 4, "Offset mismatch for FDelMarPreviewConfigs::ForwardSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, SideSpeed) == 8, "Offset mismatch for FDelMarPreviewConfigs::SideSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, Acceleration) == 12, "Offset mismatch for FDelMarPreviewConfigs::Acceleration");
static_assert(offsetof(FDelMarPreviewConfigs, Throttle) == 16, "Offset mismatch for FDelMarPreviewConfigs::Throttle");
static_assert(offsetof(FDelMarPreviewConfigs, Steering) == 20, "Offset mismatch for FDelMarPreviewConfigs::Steering");
static_assert(offsetof(FDelMarPreviewConfigs, SteerAngle) == 24, "Offset mismatch for FDelMarPreviewConfigs::SteerAngle");
static_assert(offsetof(FDelMarPreviewConfigs, TargetSpeed) == 28, "Offset mismatch for FDelMarPreviewConfigs::TargetSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, BaseTargetSpeed) == 32, "Offset mismatch for FDelMarPreviewConfigs::BaseTargetSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, NormalizedForwardSpeed) == 36, "Offset mismatch for FDelMarPreviewConfigs::NormalizedForwardSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, NormalizedBonusSpeed) == 40, "Offset mismatch for FDelMarPreviewConfigs::NormalizedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, VehicleForwardState) == 44, "Offset mismatch for FDelMarPreviewConfigs::VehicleForwardState");
static_assert(offsetof(FDelMarPreviewConfigs, BonusSpeed) == 48, "Offset mismatch for FDelMarPreviewConfigs::BonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, WorldAppliedBonusSpeed) == 52, "Offset mismatch for FDelMarPreviewConfigs::WorldAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, LandingData) == 56, "Offset mismatch for FDelMarPreviewConfigs::LandingData");
static_assert(offsetof(FDelMarPreviewConfigs, bLanded) == 68, "Offset mismatch for FDelMarPreviewConfigs::bLanded");
static_assert(offsetof(FDelMarPreviewConfigs, bSkydiving) == 69, "Offset mismatch for FDelMarPreviewConfigs::bSkydiving");
static_assert(offsetof(FDelMarPreviewConfigs, DriftState) == 70, "Offset mismatch for FDelMarPreviewConfigs::DriftState");
static_assert(offsetof(FDelMarPreviewConfigs, bDriftControlled) == 71, "Offset mismatch for FDelMarPreviewConfigs::bDriftControlled");
static_assert(offsetof(FDelMarPreviewConfigs, DriftAngle) == 72, "Offset mismatch for FDelMarPreviewConfigs::DriftAngle");
static_assert(offsetof(FDelMarPreviewConfigs, DriftSlipAngleRatio) == 76, "Offset mismatch for FDelMarPreviewConfigs::DriftSlipAngleRatio");
static_assert(offsetof(FDelMarPreviewConfigs, DriftTargetSide) == 80, "Offset mismatch for FDelMarPreviewConfigs::DriftTargetSide");
static_assert(offsetof(FDelMarPreviewConfigs, DriftDuration) == 84, "Offset mismatch for FDelMarPreviewConfigs::DriftDuration");
static_assert(offsetof(FDelMarPreviewConfigs, bDriftBoostInRange) == 88, "Offset mismatch for FDelMarPreviewConfigs::bDriftBoostInRange");
static_assert(offsetof(FDelMarPreviewConfigs, bDriftBoostLosingAppliedBonusSpeed) == 89, "Offset mismatch for FDelMarPreviewConfigs::bDriftBoostLosingAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, DriftBoostPotentialPercentage) == 92, "Offset mismatch for FDelMarPreviewConfigs::DriftBoostPotentialPercentage");
static_assert(offsetof(FDelMarPreviewConfigs, DriftBoostAppliedBonusSpeed) == 96, "Offset mismatch for FDelMarPreviewConfigs::DriftBoostAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, DriftBoostQueuedBonusSpeed) == 100, "Offset mismatch for FDelMarPreviewConfigs::DriftBoostQueuedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, DraftingAppliedBonusSpeed) == 104, "Offset mismatch for FDelMarPreviewConfigs::DraftingAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, DraftingMaxBonusSpeedPercentage) == 108, "Offset mismatch for FDelMarPreviewConfigs::DraftingMaxBonusSpeedPercentage");
static_assert(offsetof(FDelMarPreviewConfigs, DraftingTargetDegrees) == 112, "Offset mismatch for FDelMarPreviewConfigs::DraftingTargetDegrees");
static_assert(offsetof(FDelMarPreviewConfigs, DraftingCurrentBonusSpeedPercentage) == 116, "Offset mismatch for FDelMarPreviewConfigs::DraftingCurrentBonusSpeedPercentage");
static_assert(offsetof(FDelMarPreviewConfigs, bHasValidDraftingTarget) == 120, "Offset mismatch for FDelMarPreviewConfigs::bHasValidDraftingTarget");
static_assert(offsetof(FDelMarPreviewConfigs, DraftingState) == 121, "Offset mismatch for FDelMarPreviewConfigs::DraftingState");
static_assert(offsetof(FDelMarPreviewConfigs, OversteerAccumulationPercentage) == 124, "Offset mismatch for FDelMarPreviewConfigs::OversteerAccumulationPercentage");
static_assert(offsetof(FDelMarPreviewConfigs, bStartlineBoostActive) == 128, "Offset mismatch for FDelMarPreviewConfigs::bStartlineBoostActive");
static_assert(offsetof(FDelMarPreviewConfigs, bFailedStartlineBoost) == 129, "Offset mismatch for FDelMarPreviewConfigs::bFailedStartlineBoost");
static_assert(offsetof(FDelMarPreviewConfigs, PercentageMaxBonusSpeedEarned) == 132, "Offset mismatch for FDelMarPreviewConfigs::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FDelMarPreviewConfigs, StartlineBoostAppliedBonusSpeed) == 136, "Offset mismatch for FDelMarPreviewConfigs::StartlineBoostAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, MaxEarnedBonusSpeed) == 140, "Offset mismatch for FDelMarPreviewConfigs::MaxEarnedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, bLeftStrafe) == 144, "Offset mismatch for FDelMarPreviewConfigs::bLeftStrafe");
static_assert(offsetof(FDelMarPreviewConfigs, bStrafeActive) == 145, "Offset mismatch for FDelMarPreviewConfigs::bStrafeActive");
static_assert(offsetof(FDelMarPreviewConfigs, bStrafeDisabled) == 146, "Offset mismatch for FDelMarPreviewConfigs::bStrafeDisabled");
static_assert(offsetof(FDelMarPreviewConfigs, bCanStrafeBeActivated) == 147, "Offset mismatch for FDelMarPreviewConfigs::bCanStrafeBeActivated");
static_assert(offsetof(FDelMarPreviewConfigs, StrafeCooldownPercentage) == 148, "Offset mismatch for FDelMarPreviewConfigs::StrafeCooldownPercentage");
static_assert(offsetof(FDelMarPreviewConfigs, bTurboActive) == 152, "Offset mismatch for FDelMarPreviewConfigs::bTurboActive");
static_assert(offsetof(FDelMarPreviewConfigs, NumCurrentCharges) == 156, "Offset mismatch for FDelMarPreviewConfigs::NumCurrentCharges");
static_assert(offsetof(FDelMarPreviewConfigs, NumMaxCharges) == 160, "Offset mismatch for FDelMarPreviewConfigs::NumMaxCharges");
static_assert(offsetof(FDelMarPreviewConfigs, BonusZoneState) == 164, "Offset mismatch for FDelMarPreviewConfigs::BonusZoneState");
static_assert(offsetof(FDelMarPreviewConfigs, PercentageTurboActiveTimeRemaining) == 168, "Offset mismatch for FDelMarPreviewConfigs::PercentageTurboActiveTimeRemaining");
static_assert(offsetof(FDelMarPreviewConfigs, RemainingTurboActiveSeconds) == 172, "Offset mismatch for FDelMarPreviewConfigs::RemainingTurboActiveSeconds");
static_assert(offsetof(FDelMarPreviewConfigs, TurboAppliedBonusSpeed) == 176, "Offset mismatch for FDelMarPreviewConfigs::TurboAppliedBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, TurboBonusZoneBonusSpeed) == 180, "Offset mismatch for FDelMarPreviewConfigs::TurboBonusZoneBonusSpeed");
static_assert(offsetof(FDelMarPreviewConfigs, TurboAdditionalActiveSeconds) == 184, "Offset mismatch for FDelMarPreviewConfigs::TurboAdditionalActiveSeconds");
static_assert(offsetof(FDelMarPreviewConfigs, bKickflipActive) == 188, "Offset mismatch for FDelMarPreviewConfigs::bKickflipActive");
static_assert(offsetof(FDelMarPreviewConfigs, bKickflipLeftSide) == 189, "Offset mismatch for FDelMarPreviewConfigs::bKickflipLeftSide");
static_assert(offsetof(FDelMarPreviewConfigs, bKickflipSuctionActive) == 190, "Offset mismatch for FDelMarPreviewConfigs::bKickflipSuctionActive");
static_assert(offsetof(FDelMarPreviewConfigs, DistanceToSuctionSurface) == 192, "Offset mismatch for FDelMarPreviewConfigs::DistanceToSuctionSurface");
static_assert(offsetof(FDelMarPreviewConfigs, KickflipDuration) == 196, "Offset mismatch for FDelMarPreviewConfigs::KickflipDuration");
static_assert(offsetof(FDelMarPreviewConfigs, KickflipActivationCharges) == 200, "Offset mismatch for FDelMarPreviewConfigs::KickflipActivationCharges");
static_assert(offsetof(FDelMarPreviewConfigs, bReattachmentActive) == 204, "Offset mismatch for FDelMarPreviewConfigs::bReattachmentActive");
static_assert(offsetof(FDelMarPreviewConfigs, ReattachmentDirection) == 208, "Offset mismatch for FDelMarPreviewConfigs::ReattachmentDirection");
static_assert(offsetof(FDelMarPreviewConfigs, bUnderthrustActive) == 232, "Offset mismatch for FDelMarPreviewConfigs::bUnderthrustActive");
static_assert(offsetof(FDelMarPreviewConfigs, UnderthrustPercentageTankRemaining) == 236, "Offset mismatch for FDelMarPreviewConfigs::UnderthrustPercentageTankRemaining");
static_assert(offsetof(FDelMarPreviewConfigs, UnderthrustActiveDuration) == 240, "Offset mismatch for FDelMarPreviewConfigs::UnderthrustActiveDuration");
static_assert(offsetof(FDelMarPreviewConfigs, bJumpActive) == 244, "Offset mismatch for FDelMarPreviewConfigs::bJumpActive");
static_assert(offsetof(FDelMarPreviewConfigs, bAirFreestyleActive) == 245, "Offset mismatch for FDelMarPreviewConfigs::bAirFreestyleActive");
static_assert(offsetof(FDelMarPreviewConfigs, bVehicleDemolished) == 246, "Offset mismatch for FDelMarPreviewConfigs::bVehicleDemolished");
static_assert(offsetof(FDelMarPreviewConfigs, DemolishCausedByTag) == 248, "Offset mismatch for FDelMarPreviewConfigs::DemolishCausedByTag");
static_assert(offsetof(FDelMarPreviewConfigs, bInvulnerabilityActive) == 252, "Offset mismatch for FDelMarPreviewConfigs::bInvulnerabilityActive");
static_assert(offsetof(FDelMarPreviewConfigs, bVehicleSpawnedThisFrame) == 253, "Offset mismatch for FDelMarPreviewConfigs::bVehicleSpawnedThisFrame");
static_assert(offsetof(FDelMarPreviewConfigs, bFirstVehicleForPlayer) == 254, "Offset mismatch for FDelMarPreviewConfigs::bFirstVehicleForPlayer");
static_assert(offsetof(FDelMarPreviewConfigs, bPreviousVehicleDemolished) == 255, "Offset mismatch for FDelMarPreviewConfigs::bPreviousVehicleDemolished");
static_assert(offsetof(FDelMarPreviewConfigs, bHeadlightsActive) == 256, "Offset mismatch for FDelMarPreviewConfigs::bHeadlightsActive");

// /Script/DelMarCosmetics.DelMarPreviewCustomization
// Kind: ScriptStruct; super: none
struct FDelMarPreviewCustomization
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> CustomizationInfo; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarPreviewCustomization, SlotTag) == 0, "Offset mismatch for FDelMarPreviewCustomization::SlotTag");
static_assert(offsetof(FDelMarPreviewCustomization, CustomizationInfo) == 8, "Offset mismatch for FDelMarPreviewCustomization::CustomizationInfo");

// /Script/DelMarCosmetics.DelMarPreviousPreviewConfigs
// Kind: ScriptStruct; super: none
struct FDelMarPreviousPreviewConfigs
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarCosmetics.DelMarSpringSettings
// Kind: ScriptStruct; super: none
struct FDelMarSpringSettings
{
public:
    float Strength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarSpringSettings, Strength) == 0, "Offset mismatch for FDelMarSpringSettings::Strength");
static_assert(offsetof(FDelMarSpringSettings, Damping) == 4, "Offset mismatch for FDelMarSpringSettings::Damping");

// /Script/DelMarCosmetics.DelMarVehicleAnimInfo
// Kind: ScriptStruct; super: none
struct FDelMarVehicleAnimInfo
{
public:
    float SteerAngleDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VisualSteerAngleDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleAnimInfo, SteerAngleDegrees) == 0, "Offset mismatch for FDelMarVehicleAnimInfo::SteerAngleDegrees");
static_assert(offsetof(FDelMarVehicleAnimInfo, VisualSteerAngleDegrees) == 4, "Offset mismatch for FDelMarVehicleAnimInfo::VisualSteerAngleDegrees");

// /Script/DelMarCosmetics.DelMarVehicleBooster
// Kind: ScriptStruct; super: none
struct FDelMarVehicleBooster
{
public:
    void* BoosterSystem; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoosterSocket[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t BitFlags; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVehicleBooster, BoosterSystem) == 0, "Offset mismatch for FDelMarVehicleBooster::BoosterSystem");
static_assert(offsetof(FDelMarVehicleBooster, NiagaraComponent) == 8, "Offset mismatch for FDelMarVehicleBooster::NiagaraComponent");
static_assert(offsetof(FDelMarVehicleBooster, BoosterSocket) == 16, "Offset mismatch for FDelMarVehicleBooster::BoosterSocket");
static_assert(offsetof(FDelMarVehicleBooster, BitFlags) == 20, "Offset mismatch for FDelMarVehicleBooster::BitFlags");

// /Script/DelMarCosmetics.DelMarVehicleController_WheelData
// Kind: ScriptStruct; super: none
struct FDelMarVehicleController_WheelData
{
public:
    std::uint8_t SuspensionBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t SteeringBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t RollBone[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleController_WheelData, SuspensionBone) == 0, "Offset mismatch for FDelMarVehicleController_WheelData::SuspensionBone");
static_assert(offsetof(FDelMarVehicleController_WheelData, SteeringBone) == 12, "Offset mismatch for FDelMarVehicleController_WheelData::SteeringBone");
static_assert(offsetof(FDelMarVehicleController_WheelData, RollBone) == 24, "Offset mismatch for FDelMarVehicleController_WheelData::RollBone");

// /Script/DelMarCosmetics.DelMarVehicleCosmeticWheelInfo
// Kind: ScriptStruct; super: none
struct FDelMarVehicleCosmeticWheelInfo
{
public:
    void* ContactParticleComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ContactParticle; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ContactMaterial; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WheelIndex; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::uint8_t Setup[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarVehicleCosmeticWheelInfo, ContactParticleComponent) == 0, "Offset mismatch for FDelMarVehicleCosmeticWheelInfo::ContactParticleComponent");
static_assert(offsetof(FDelMarVehicleCosmeticWheelInfo, ContactParticle) == 8, "Offset mismatch for FDelMarVehicleCosmeticWheelInfo::ContactParticle");
static_assert(offsetof(FDelMarVehicleCosmeticWheelInfo, ContactMaterial) == 16, "Offset mismatch for FDelMarVehicleCosmeticWheelInfo::ContactMaterial");
static_assert(offsetof(FDelMarVehicleCosmeticWheelInfo, WheelIndex) == 24, "Offset mismatch for FDelMarVehicleCosmeticWheelInfo::WheelIndex");
static_assert(offsetof(FDelMarVehicleCosmeticWheelInfo, Setup) == 28, "Offset mismatch for FDelMarVehicleCosmeticWheelInfo::Setup");

// /Script/DelMarCosmetics.DelMarVehicleUnderthrustSocket
// Kind: ScriptStruct; super: none
struct FDelMarVehicleUnderthrustSocket
{
public:
    std::uint8_t SocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SideFlags; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDelMarVehicleUnderthrustSocket, SocketName) == 0, "Offset mismatch for FDelMarVehicleUnderthrustSocket::SocketName");
static_assert(offsetof(FDelMarVehicleUnderthrustSocket, SideFlags) == 4, "Offset mismatch for FDelMarVehicleUnderthrustSocket::SideFlags");

// /Script/DelMarCosmetics.DelMarVehicleUnderthrustVfxData
// Kind: ScriptStruct; super: none
struct FDelMarVehicleUnderthrustVfxData
{
public:
    void* UnderthrustVfxSystem; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NiagaraLocationArrayParam[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t NiagaraActivationsArrayParam[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> Sockets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarVehicleUnderthrustVfxData, UnderthrustVfxSystem) == 0, "Offset mismatch for FDelMarVehicleUnderthrustVfxData::UnderthrustVfxSystem");
static_assert(offsetof(FDelMarVehicleUnderthrustVfxData, NiagaraComponent) == 8, "Offset mismatch for FDelMarVehicleUnderthrustVfxData::NiagaraComponent");
static_assert(offsetof(FDelMarVehicleUnderthrustVfxData, NiagaraLocationArrayParam) == 16, "Offset mismatch for FDelMarVehicleUnderthrustVfxData::NiagaraLocationArrayParam");
static_assert(offsetof(FDelMarVehicleUnderthrustVfxData, NiagaraActivationsArrayParam) == 20, "Offset mismatch for FDelMarVehicleUnderthrustVfxData::NiagaraActivationsArrayParam");
static_assert(offsetof(FDelMarVehicleUnderthrustVfxData, Sockets) == 24, "Offset mismatch for FDelMarVehicleUnderthrustVfxData::Sockets");

// /Script/DelMarCosmetics.DelMarVehicleWheelAnimInfo
// Kind: ScriptStruct; super: none
struct FDelMarVehicleWheelAnimInfo
{
public:
    float SpringToWheelOffsetZ; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringTravelRange[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TravelDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpinSpeedDegrees; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SpinDegrees; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarVehicleWheelAnimInfo, SpringToWheelOffsetZ) == 0, "Offset mismatch for FDelMarVehicleWheelAnimInfo::SpringToWheelOffsetZ");
static_assert(offsetof(FDelMarVehicleWheelAnimInfo, SpringTravelRange) == 4, "Offset mismatch for FDelMarVehicleWheelAnimInfo::SpringTravelRange");
static_assert(offsetof(FDelMarVehicleWheelAnimInfo, WheelRadius) == 12, "Offset mismatch for FDelMarVehicleWheelAnimInfo::WheelRadius");
static_assert(offsetof(FDelMarVehicleWheelAnimInfo, TravelDistance) == 16, "Offset mismatch for FDelMarVehicleWheelAnimInfo::TravelDistance");
static_assert(offsetof(FDelMarVehicleWheelAnimInfo, SpinSpeedDegrees) == 20, "Offset mismatch for FDelMarVehicleWheelAnimInfo::SpinSpeedDegrees");
static_assert(offsetof(FDelMarVehicleWheelAnimInfo, SpinDegrees) == 24, "Offset mismatch for FDelMarVehicleWheelAnimInfo::SpinDegrees");

// /Script/DelMarCosmetics.DelMarVehicleWheelSetup
// Kind: ScriptStruct; super: none
struct FDelMarVehicleWheelSetup
{
public:
    std::uint8_t WheelSpinBone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t WheelPivotBone[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t WheelContactBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEligibleForPhysMatContactFx; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarVehicleWheelSetup, WheelSpinBone) == 0, "Offset mismatch for FDelMarVehicleWheelSetup::WheelSpinBone");
static_assert(offsetof(FDelMarVehicleWheelSetup, WheelPivotBone) == 4, "Offset mismatch for FDelMarVehicleWheelSetup::WheelPivotBone");
static_assert(offsetof(FDelMarVehicleWheelSetup, WheelContactBone) == 8, "Offset mismatch for FDelMarVehicleWheelSetup::WheelContactBone");
static_assert(offsetof(FDelMarVehicleWheelSetup, bEligibleForPhysMatContactFx) == 12, "Offset mismatch for FDelMarVehicleWheelSetup::bEligibleForPhysMatContactFx");

// /Script/DelMarCosmetics.DelMarBodyCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarBodyCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TArray<void*> FrontLeftWheelsBoneNames; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FrontRightWheelsBoneNames; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BackRightWheelsBoneNames; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BackLeftWheelsBoneNames; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LeftBoostersInfo; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightBoostersInfo; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    void* SkeletalMesh; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* AnimInstanceClass; // 0x0318 (Size: 0x8, Type: ClassProperty)
    void* BodySetup; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WheelContactFxOffset[0x1]; // 0x0328 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarBodyCosmeticActor, FrontLeftWheelsBoneNames) == 680, "Offset mismatch for UDelMarBodyCosmeticActor::FrontLeftWheelsBoneNames");
static_assert(offsetof(UDelMarBodyCosmeticActor, FrontRightWheelsBoneNames) == 696, "Offset mismatch for UDelMarBodyCosmeticActor::FrontRightWheelsBoneNames");
static_assert(offsetof(UDelMarBodyCosmeticActor, BackRightWheelsBoneNames) == 712, "Offset mismatch for UDelMarBodyCosmeticActor::BackRightWheelsBoneNames");
static_assert(offsetof(UDelMarBodyCosmeticActor, BackLeftWheelsBoneNames) == 728, "Offset mismatch for UDelMarBodyCosmeticActor::BackLeftWheelsBoneNames");
static_assert(offsetof(UDelMarBodyCosmeticActor, LeftBoostersInfo) == 744, "Offset mismatch for UDelMarBodyCosmeticActor::LeftBoostersInfo");
static_assert(offsetof(UDelMarBodyCosmeticActor, RightBoostersInfo) == 760, "Offset mismatch for UDelMarBodyCosmeticActor::RightBoostersInfo");
static_assert(offsetof(UDelMarBodyCosmeticActor, SkeletalMesh) == 776, "Offset mismatch for UDelMarBodyCosmeticActor::SkeletalMesh");
static_assert(offsetof(UDelMarBodyCosmeticActor, PhysicsAsset) == 784, "Offset mismatch for UDelMarBodyCosmeticActor::PhysicsAsset");
static_assert(offsetof(UDelMarBodyCosmeticActor, AnimInstanceClass) == 792, "Offset mismatch for UDelMarBodyCosmeticActor::AnimInstanceClass");
static_assert(offsetof(UDelMarBodyCosmeticActor, BodySetup) == 800, "Offset mismatch for UDelMarBodyCosmeticActor::BodySetup");
static_assert(offsetof(UDelMarBodyCosmeticActor, WheelContactFxOffset) == 808, "Offset mismatch for UDelMarBodyCosmeticActor::WheelContactFxOffset");

// /Script/DelMarCosmetics.DelMarBoosterCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarBoosterCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* BoosterFx; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LeftBoosters; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightBoosters; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    void* BodySkeletalMeshComponent; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarBoosterCosmeticActor, BoosterFx) == 680, "Offset mismatch for UDelMarBoosterCosmeticActor::BoosterFx");
static_assert(offsetof(UDelMarBoosterCosmeticActor, LeftBoosters) == 688, "Offset mismatch for UDelMarBoosterCosmeticActor::LeftBoosters");
static_assert(offsetof(UDelMarBoosterCosmeticActor, RightBoosters) == 704, "Offset mismatch for UDelMarBoosterCosmeticActor::RightBoosters");
static_assert(offsetof(UDelMarBoosterCosmeticActor, BodySkeletalMeshComponent) == 720, "Offset mismatch for UDelMarBoosterCosmeticActor::BodySkeletalMeshComponent");

// /Script/DelMarCosmetics.DelMarCosmeticActorSpawnLogic_Wheel
// Kind: Class; super: DelMarCosmeticActorSpawnLogic
class UDelMarCosmeticActorSpawnLogic_Wheel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bFrontWheel; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBackWheel; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttachPoint; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t MirrorType; // 0x002B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyFxEligibleWheels; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_Wheel, bFrontWheel) == 40, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_Wheel::bFrontWheel");
static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_Wheel, bBackWheel) == 41, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_Wheel::bBackWheel");
static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_Wheel, AttachPoint) == 42, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_Wheel::AttachPoint");
static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_Wheel, MirrorType) == 43, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_Wheel::MirrorType");
static_assert(offsetof(UDelMarCosmeticActorSpawnLogic_Wheel, bOnlyFxEligibleWheels) == 44, "Offset mismatch for UDelMarCosmeticActorSpawnLogic_Wheel::bOnlyFxEligibleWheels");

// /Script/DelMarCosmetics.DelMarEngineAudioCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarEngineAudioCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t EngineAudio[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    float NonLocalVelocityInterpSpeed; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisabled; // 0x02BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02BD
    void* ComponentGroup; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* MotorModel; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarEngineAudioCosmeticActor, EngineAudio) == 680, "Offset mismatch for UDelMarEngineAudioCosmeticActor::EngineAudio");
static_assert(offsetof(UDelMarEngineAudioCosmeticActor, NonLocalVelocityInterpSpeed) == 696, "Offset mismatch for UDelMarEngineAudioCosmeticActor::NonLocalVelocityInterpSpeed");
static_assert(offsetof(UDelMarEngineAudioCosmeticActor, bDisabled) == 700, "Offset mismatch for UDelMarEngineAudioCosmeticActor::bDisabled");
static_assert(offsetof(UDelMarEngineAudioCosmeticActor, ComponentGroup) == 704, "Offset mismatch for UDelMarEngineAudioCosmeticActor::ComponentGroup");
static_assert(offsetof(UDelMarEngineAudioCosmeticActor, MotorModel) == 712, "Offset mismatch for UDelMarEngineAudioCosmeticActor::MotorModel");

// /Script/DelMarCosmetics.DelMarGaragePreviewVehicle
// Kind: Class; super: DelMarPreviewVehicle
class UDelMarGaragePreviewVehicle
{
public:
    std::uint8_t Pad_0000[0x2698]; // 0x0000
    FMulticastInlineDelegate OnActiveCameraUpdatedDelegate; // 0x2698 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRotationTransitionStateChanged; // 0x26A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PreviewPivotComponent; // 0x26B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x26C0
    void* ActiveCameraComponent; // 0x26C8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultZoomInCameraComponent; // 0x26D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultZoomOutCameraComponent; // 0x26D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x26E0
    TMap<void*, void*> SlotPreviewRotations; // 0x2700 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SlotPreviewConfigs; // 0x2710 (Size: 0x10, Type: MapProperty)
    float ZoomLevel; // 0x2720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x2724
    std::uint8_t UserRotationOffset[0x18]; // 0x2728 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviewSlot[0x4]; // 0x2740 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreviewVehicleTag[0x4]; // 0x2744 (Size: 0x4, Type: StructProperty)
    float RotationTransitionTime; // 0x2748 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarGaragePreviewVehicle, OnActiveCameraUpdatedDelegate) == 9880, "Offset mismatch for UDelMarGaragePreviewVehicle::OnActiveCameraUpdatedDelegate");
static_assert(offsetof(UDelMarGaragePreviewVehicle, OnRotationTransitionStateChanged) == 9896, "Offset mismatch for UDelMarGaragePreviewVehicle::OnRotationTransitionStateChanged");
static_assert(offsetof(UDelMarGaragePreviewVehicle, PreviewPivotComponent) == 9912, "Offset mismatch for UDelMarGaragePreviewVehicle::PreviewPivotComponent");
static_assert(offsetof(UDelMarGaragePreviewVehicle, ActiveCameraComponent) == 9928, "Offset mismatch for UDelMarGaragePreviewVehicle::ActiveCameraComponent");
static_assert(offsetof(UDelMarGaragePreviewVehicle, DefaultZoomInCameraComponent) == 9936, "Offset mismatch for UDelMarGaragePreviewVehicle::DefaultZoomInCameraComponent");
static_assert(offsetof(UDelMarGaragePreviewVehicle, DefaultZoomOutCameraComponent) == 9944, "Offset mismatch for UDelMarGaragePreviewVehicle::DefaultZoomOutCameraComponent");
static_assert(offsetof(UDelMarGaragePreviewVehicle, SlotPreviewRotations) == 9984, "Offset mismatch for UDelMarGaragePreviewVehicle::SlotPreviewRotations");
static_assert(offsetof(UDelMarGaragePreviewVehicle, SlotPreviewConfigs) == 10000, "Offset mismatch for UDelMarGaragePreviewVehicle::SlotPreviewConfigs");
static_assert(offsetof(UDelMarGaragePreviewVehicle, ZoomLevel) == 10016, "Offset mismatch for UDelMarGaragePreviewVehicle::ZoomLevel");
static_assert(offsetof(UDelMarGaragePreviewVehicle, UserRotationOffset) == 10024, "Offset mismatch for UDelMarGaragePreviewVehicle::UserRotationOffset");
static_assert(offsetof(UDelMarGaragePreviewVehicle, PreviewSlot) == 10048, "Offset mismatch for UDelMarGaragePreviewVehicle::PreviewSlot");
static_assert(offsetof(UDelMarGaragePreviewVehicle, PreviewVehicleTag) == 10052, "Offset mismatch for UDelMarGaragePreviewVehicle::PreviewVehicleTag");
static_assert(offsetof(UDelMarGaragePreviewVehicle, RotationTransitionTime) == 10056, "Offset mismatch for UDelMarGaragePreviewVehicle::RotationTransitionTime");

// /Script/DelMarCosmetics.DelMarParamOverrideCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarParamOverrideCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TMap<void*, void*> CosmeticActorsParamterOverrides; // 0x02A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarParamOverrideCosmeticActor, CosmeticActorsParamterOverrides) == 680, "Offset mismatch for UDelMarParamOverrideCosmeticActor::CosmeticActorsParamterOverrides");

// /Script/DelMarCosmetics.DelMarPreviewCameraComponent
// Kind: Class; super: CameraComponent
class UDelMarPreviewCameraComponent
{
public:
    std::uint8_t Pad_0000[0xAD0]; // 0x0000
    std::uint8_t PreviewSlot[0x4]; // 0x0AD0 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreviewType; // 0x0AD4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDelMarPreviewCameraComponent, PreviewSlot) == 2768, "Offset mismatch for UDelMarPreviewCameraComponent::PreviewSlot");
static_assert(offsetof(UDelMarPreviewCameraComponent, PreviewType) == 2772, "Offset mismatch for UDelMarPreviewCameraComponent::PreviewType");

// /Script/DelMarCosmetics.DelMarPreviewPivot
// Kind: Class; super: Actor
class UDelMarPreviewPivot
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SceneComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarPreviewPivot, SceneComponent) == 624, "Offset mismatch for UDelMarPreviewPivot::SceneComponent");

// /Script/DelMarCosmetics.DelMarPreviewVehicle
// Kind: Class; super: FortAthenaVehicle
class UDelMarPreviewVehicle
{
public:
    std::uint8_t Pad_0000[0x1F88]; // 0x0000
    std::uint8_t PreviewLoadout[0x28]; // 0x1F88 (Size: 0x28, Type: StructProperty)
    TArray<void*> PreviewCustomizations; // 0x1FB0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x1FC0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1FC4
    void* CosmeticComponent; // 0x1FC8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviewConfigs[0x190]; // 0x1FD0 (Size: 0x190, Type: StructProperty)
    TArray<void*> SpringTravelOffset; // 0x2160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BouncyChassisConfig[0x10]; // 0x2170 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x2180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x40]; // 0x2190
    FMulticastInlineDelegate OnDelMarVehicleHitWall; // 0x21D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDelMarVehicleHitVehicle; // 0x21E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDelMarVehicleHitByVehicle; // 0x21F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x3C8]; // 0x2200
    FMulticastInlineDelegate OnHazardHit; // 0x25C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x25D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleTeleportExit; // 0x25E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x25F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x2608 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x2618 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x30]; // 0x2628
    FMulticastInlineDelegate OnHeadlightsChanged; // 0x2658 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarPreviewVehicle, PreviewLoadout) == 8072, "Offset mismatch for UDelMarPreviewVehicle::PreviewLoadout");
static_assert(offsetof(UDelMarPreviewVehicle, PreviewCustomizations) == 8112, "Offset mismatch for UDelMarPreviewVehicle::PreviewCustomizations");
static_assert(offsetof(UDelMarPreviewVehicle, NumAllowedVehicleCosmeticChanges) == 8128, "Offset mismatch for UDelMarPreviewVehicle::NumAllowedVehicleCosmeticChanges");
static_assert(offsetof(UDelMarPreviewVehicle, CosmeticComponent) == 8136, "Offset mismatch for UDelMarPreviewVehicle::CosmeticComponent");
static_assert(offsetof(UDelMarPreviewVehicle, PreviewConfigs) == 8144, "Offset mismatch for UDelMarPreviewVehicle::PreviewConfigs");
static_assert(offsetof(UDelMarPreviewVehicle, SpringTravelOffset) == 8544, "Offset mismatch for UDelMarPreviewVehicle::SpringTravelOffset");
static_assert(offsetof(UDelMarPreviewVehicle, BouncyChassisConfig) == 8560, "Offset mismatch for UDelMarPreviewVehicle::BouncyChassisConfig");
static_assert(offsetof(UDelMarPreviewVehicle, OnVehicleForwardStateChanged) == 8576, "Offset mismatch for UDelMarPreviewVehicle::OnVehicleForwardStateChanged");
static_assert(offsetof(UDelMarPreviewVehicle, OnDelMarVehicleHitWall) == 8656, "Offset mismatch for UDelMarPreviewVehicle::OnDelMarVehicleHitWall");
static_assert(offsetof(UDelMarPreviewVehicle, OnDelMarVehicleHitVehicle) == 8672, "Offset mismatch for UDelMarPreviewVehicle::OnDelMarVehicleHitVehicle");
static_assert(offsetof(UDelMarPreviewVehicle, OnDelMarVehicleHitByVehicle) == 8688, "Offset mismatch for UDelMarPreviewVehicle::OnDelMarVehicleHitByVehicle");
static_assert(offsetof(UDelMarPreviewVehicle, OnHazardHit) == 9672, "Offset mismatch for UDelMarPreviewVehicle::OnHazardHit");
static_assert(offsetof(UDelMarPreviewVehicle, OnVehicleTeleportEntered) == 9688, "Offset mismatch for UDelMarPreviewVehicle::OnVehicleTeleportEntered");
static_assert(offsetof(UDelMarPreviewVehicle, OnVehicleTeleportExit) == 9704, "Offset mismatch for UDelMarPreviewVehicle::OnVehicleTeleportExit");
static_assert(offsetof(UDelMarPreviewVehicle, OnVehicleAppliedTeleportRotation) == 9720, "Offset mismatch for UDelMarPreviewVehicle::OnVehicleAppliedTeleportRotation");
static_assert(offsetof(UDelMarPreviewVehicle, OnEnvironmentEffectCueActivated) == 9736, "Offset mismatch for UDelMarPreviewVehicle::OnEnvironmentEffectCueActivated");
static_assert(offsetof(UDelMarPreviewVehicle, OnEnvironmentEffectCueRemoved) == 9752, "Offset mismatch for UDelMarPreviewVehicle::OnEnvironmentEffectCueRemoved");
static_assert(offsetof(UDelMarPreviewVehicle, OnHeadlightsChanged) == 9816, "Offset mismatch for UDelMarPreviewVehicle::OnHeadlightsChanged");

// /Script/DelMarCosmetics.DelMarUnifiedVehicleCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarUnifiedVehicleCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TArray<void*> CachedSideBoosters; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02B8
    std::uint8_t SideBoosterParam_Scale[0x4]; // 0x02BC (Size: 0x4, Type: NameProperty)
    TArray<void*> Boosters; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UnderthrustVfxData[0x48]; // 0x02D0 (Size: 0x48, Type: StructProperty)
    void* BodySkeletalMeshComponent; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t KickflipAudioBehavior[0x10]; // 0x0320 (Size: 0x10, Type: StructProperty)
    std::uint8_t JumpAudioBehavior[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    void* JumpFX; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* SuperSonicFX; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* SuperSonicRadialBlurMaterial; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* SuperSonicRadialBlurMID; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    float SuperSonicBlurOffset; // 0x0360 (Size: 0x4, Type: FloatProperty)
    float SuperSonicForwardSpeedMin; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float SuperSonicForwardSpeedMax; // 0x0368 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SuperSonicParam_Spawn[0x4]; // 0x036C (Size: 0x4, Type: NameProperty)
    std::uint8_t RadialBlurParam_Offset[0x4]; // 0x0370 (Size: 0x4, Type: NameProperty)
    FName RadialBlurParam_Transition; // 0x0374 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x4]; // 0x037C
    std::uint8_t DraftingAudioBehavior[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    void* DraftingFX; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DraftingParam_Spawn[0x4]; // 0x0398 (Size: 0x4, Type: NameProperty)
    std::uint8_t DraftingParam_SpeedGain[0x4]; // 0x039C (Size: 0x4, Type: NameProperty)
    FName DraftingParam_Amount; // 0x03A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t WorldBonusSpeedAudioBehavior[0x10]; // 0x03A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t WBSGroupEvent_OnBonusSpeedActivated[0x4]; // 0x03B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WBSGroupEvent_OnBonusSpeedDeactivated[0x4]; // 0x03BC (Size: 0x4, Type: NameProperty)
    std::uint8_t WBSGroupEvent_OnWorldBonusSpeedStackGained[0x4]; // 0x03C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t DemolishTag_RaceFinished[0x4]; // 0x03C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t RespawnAudioBehavior[0x10]; // 0x03C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DespawnAudioBehavior[0x10]; // 0x03D8 (Size: 0x10, Type: StructProperty)
    void* TaillightTrailFX_Left; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* TaillightTrailFX_Right; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TaillightTrailSocket_Left[0x4]; // 0x03F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t TaillightTrailSocket_Right[0x4]; // 0x03FC (Size: 0x4, Type: NameProperty)
    float TaillightTrail_MinForwardSpeed; // 0x0400 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0404
    void* TeleportFx; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* TeleportEnterSystem; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    void* TeleportExitSystem; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* EnvironmentFx; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x20]; // 0x0428
    std::uint8_t UnderthrustAudioBehavior[0x10]; // 0x0448 (Size: 0x10, Type: StructProperty)
    std::uint8_t WheelsAudioBehavior[0x10]; // 0x0458 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrontLeftWheelContactBone[0x4]; // 0x0468 (Size: 0x4, Type: NameProperty)
    std::uint8_t FrontRightWheelContactBone[0x4]; // 0x046C (Size: 0x4, Type: NameProperty)
    std::uint8_t BackRightWheelContactBone[0x4]; // 0x0470 (Size: 0x4, Type: NameProperty)
    std::uint8_t BackLeftWheelContactBone[0x4]; // 0x0474 (Size: 0x4, Type: NameProperty)
    TArray<void*> WheelInfos; // 0x0478 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x58]; // 0x0488
    float FxSideSpeedThreshold; // 0x04E0 (Size: 0x4, Type: FloatProperty)
    float FxForwardSpeedThreshold; // 0x04E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, CachedSideBoosters) == 680, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::CachedSideBoosters");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SideBoosterParam_Scale) == 700, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SideBoosterParam_Scale");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, Boosters) == 704, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::Boosters");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, UnderthrustVfxData) == 720, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::UnderthrustVfxData");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, BodySkeletalMeshComponent) == 792, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::BodySkeletalMeshComponent");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, KickflipAudioBehavior) == 800, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::KickflipAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, JumpAudioBehavior) == 816, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::JumpAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, JumpFX) == 832, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::JumpFX");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicFX) == 840, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicFX");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicRadialBlurMaterial) == 848, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicRadialBlurMaterial");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicRadialBlurMID) == 856, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicRadialBlurMID");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicBlurOffset) == 864, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicBlurOffset");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicForwardSpeedMin) == 868, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicForwardSpeedMin");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicForwardSpeedMax) == 872, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicForwardSpeedMax");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, SuperSonicParam_Spawn) == 876, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::SuperSonicParam_Spawn");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, RadialBlurParam_Offset) == 880, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::RadialBlurParam_Offset");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, RadialBlurParam_Transition) == 884, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::RadialBlurParam_Transition");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DraftingAudioBehavior) == 896, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DraftingAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DraftingFX) == 912, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DraftingFX");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DraftingParam_Spawn) == 920, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DraftingParam_Spawn");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DraftingParam_SpeedGain) == 924, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DraftingParam_SpeedGain");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DraftingParam_Amount) == 928, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DraftingParam_Amount");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WorldBonusSpeedAudioBehavior) == 936, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WorldBonusSpeedAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnBonusSpeedActivated) == 952, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnBonusSpeedActivated");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnBonusSpeedDeactivated) == 956, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnBonusSpeedDeactivated");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnWorldBonusSpeedStackGained) == 960, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnWorldBonusSpeedStackGained");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DemolishTag_RaceFinished) == 964, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DemolishTag_RaceFinished");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, RespawnAudioBehavior) == 968, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::RespawnAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, DespawnAudioBehavior) == 984, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::DespawnAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TaillightTrailFX_Left) == 1000, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TaillightTrailFX_Left");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TaillightTrailFX_Right) == 1008, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TaillightTrailFX_Right");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TaillightTrailSocket_Left) == 1016, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TaillightTrailSocket_Left");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TaillightTrailSocket_Right) == 1020, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TaillightTrailSocket_Right");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TaillightTrail_MinForwardSpeed) == 1024, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TaillightTrail_MinForwardSpeed");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TeleportFx) == 1032, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TeleportFx");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TeleportEnterSystem) == 1040, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TeleportEnterSystem");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, TeleportExitSystem) == 1048, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::TeleportExitSystem");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, EnvironmentFx) == 1056, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::EnvironmentFx");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, UnderthrustAudioBehavior) == 1096, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::UnderthrustAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WheelsAudioBehavior) == 1112, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WheelsAudioBehavior");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, FrontLeftWheelContactBone) == 1128, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::FrontLeftWheelContactBone");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, FrontRightWheelContactBone) == 1132, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::FrontRightWheelContactBone");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, BackRightWheelContactBone) == 1136, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::BackRightWheelContactBone");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, BackLeftWheelContactBone) == 1140, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::BackLeftWheelContactBone");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, WheelInfos) == 1144, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::WheelInfos");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, FxSideSpeedThreshold) == 1248, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::FxSideSpeedThreshold");
static_assert(offsetof(UDelMarUnifiedVehicleCosmeticActor, FxForwardSpeedThreshold) == 1252, "Offset mismatch for UDelMarUnifiedVehicleCosmeticActor::FxForwardSpeedThreshold");

// /Script/DelMarCosmetics.DelMarVehicleAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UDelMarVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t BouncyChassis[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    std::uint8_t BouncyChassisSetup[0x58]; // 0x0340 (Size: 0x58, Type: StructProperty)
    float BouncyChassisBlendRate; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float VisualSteerAngleInterpRate; // 0x039C (Size: 0x4, Type: FloatProperty)
    float WheelLerpSpeed; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    float SuspensionInterpRate; // 0x03A4 (Size: 0x4, Type: FloatProperty)
    float AirSpinAccel; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    float AirSpinBrake; // 0x03AC (Size: 0x4, Type: FloatProperty)
    float AirSpinDecayRate; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleInfo[0x8]; // 0x03B4 (Size: 0x8, Type: StructProperty)
    std::uint8_t bThrottling; // 0x03BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReversing; // 0x03BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccelerating; // 0x03BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBraking; // 0x03BF (Size: 0x1, Type: BoolProperty)
    float Throttle; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    float Steering; // 0x03C4 (Size: 0x4, Type: FloatProperty)
    float SteeringAngle; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWheelsOnGround; // 0x03CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03CD
    float ForwardSpeed; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDriftBoostActive; // 0x03D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustActive; // 0x03D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftActive; // 0x03D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipActive; // 0x03D7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpActive; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboActive; // 0x03D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x03DA
    std::uint8_t WheelInfoFR[0x1C]; // 0x03DC (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoFL[0x1C]; // 0x03F8 (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoBR[0x1C]; // 0x0414 (Size: 0x1C, Type: StructProperty)
    std::uint8_t WheelInfoBL[0x1]; // 0x0430 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarVehicleAnimInstance, BouncyChassis) == 816, "Offset mismatch for UDelMarVehicleAnimInstance::BouncyChassis");
static_assert(offsetof(UDelMarVehicleAnimInstance, BouncyChassisSetup) == 832, "Offset mismatch for UDelMarVehicleAnimInstance::BouncyChassisSetup");
static_assert(offsetof(UDelMarVehicleAnimInstance, BouncyChassisBlendRate) == 920, "Offset mismatch for UDelMarVehicleAnimInstance::BouncyChassisBlendRate");
static_assert(offsetof(UDelMarVehicleAnimInstance, VisualSteerAngleInterpRate) == 924, "Offset mismatch for UDelMarVehicleAnimInstance::VisualSteerAngleInterpRate");
static_assert(offsetof(UDelMarVehicleAnimInstance, WheelLerpSpeed) == 928, "Offset mismatch for UDelMarVehicleAnimInstance::WheelLerpSpeed");
static_assert(offsetof(UDelMarVehicleAnimInstance, SuspensionInterpRate) == 932, "Offset mismatch for UDelMarVehicleAnimInstance::SuspensionInterpRate");
static_assert(offsetof(UDelMarVehicleAnimInstance, AirSpinAccel) == 936, "Offset mismatch for UDelMarVehicleAnimInstance::AirSpinAccel");
static_assert(offsetof(UDelMarVehicleAnimInstance, AirSpinBrake) == 940, "Offset mismatch for UDelMarVehicleAnimInstance::AirSpinBrake");
static_assert(offsetof(UDelMarVehicleAnimInstance, AirSpinDecayRate) == 944, "Offset mismatch for UDelMarVehicleAnimInstance::AirSpinDecayRate");
static_assert(offsetof(UDelMarVehicleAnimInstance, VehicleInfo) == 948, "Offset mismatch for UDelMarVehicleAnimInstance::VehicleInfo");
static_assert(offsetof(UDelMarVehicleAnimInstance, bThrottling) == 956, "Offset mismatch for UDelMarVehicleAnimInstance::bThrottling");
static_assert(offsetof(UDelMarVehicleAnimInstance, bReversing) == 957, "Offset mismatch for UDelMarVehicleAnimInstance::bReversing");
static_assert(offsetof(UDelMarVehicleAnimInstance, bAccelerating) == 958, "Offset mismatch for UDelMarVehicleAnimInstance::bAccelerating");
static_assert(offsetof(UDelMarVehicleAnimInstance, bBraking) == 959, "Offset mismatch for UDelMarVehicleAnimInstance::bBraking");
static_assert(offsetof(UDelMarVehicleAnimInstance, Throttle) == 960, "Offset mismatch for UDelMarVehicleAnimInstance::Throttle");
static_assert(offsetof(UDelMarVehicleAnimInstance, Steering) == 964, "Offset mismatch for UDelMarVehicleAnimInstance::Steering");
static_assert(offsetof(UDelMarVehicleAnimInstance, SteeringAngle) == 968, "Offset mismatch for UDelMarVehicleAnimInstance::SteeringAngle");
static_assert(offsetof(UDelMarVehicleAnimInstance, bWheelsOnGround) == 972, "Offset mismatch for UDelMarVehicleAnimInstance::bWheelsOnGround");
static_assert(offsetof(UDelMarVehicleAnimInstance, ForwardSpeed) == 976, "Offset mismatch for UDelMarVehicleAnimInstance::ForwardSpeed");
static_assert(offsetof(UDelMarVehicleAnimInstance, bDriftBoostActive) == 980, "Offset mismatch for UDelMarVehicleAnimInstance::bDriftBoostActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, bUnderthrustActive) == 981, "Offset mismatch for UDelMarVehicleAnimInstance::bUnderthrustActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, bDriftActive) == 982, "Offset mismatch for UDelMarVehicleAnimInstance::bDriftActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, bKickflipActive) == 983, "Offset mismatch for UDelMarVehicleAnimInstance::bKickflipActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, bJumpActive) == 984, "Offset mismatch for UDelMarVehicleAnimInstance::bJumpActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, bTurboActive) == 985, "Offset mismatch for UDelMarVehicleAnimInstance::bTurboActive");
static_assert(offsetof(UDelMarVehicleAnimInstance, WheelInfoFR) == 988, "Offset mismatch for UDelMarVehicleAnimInstance::WheelInfoFR");
static_assert(offsetof(UDelMarVehicleAnimInstance, WheelInfoFL) == 1016, "Offset mismatch for UDelMarVehicleAnimInstance::WheelInfoFL");
static_assert(offsetof(UDelMarVehicleAnimInstance, WheelInfoBR) == 1044, "Offset mismatch for UDelMarVehicleAnimInstance::WheelInfoBR");
static_assert(offsetof(UDelMarVehicleAnimInstance, WheelInfoBL) == 1072, "Offset mismatch for UDelMarVehicleAnimInstance::WheelInfoBL");

// /Script/DelMarCosmetics.DelMarWheelAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UDelMarWheelAnimInstance
{
public:
    std::uint8_t Pad_0000[0x34C]; // 0x0000
    float SpinDegrees; // 0x034C (Size: 0x4, Type: FloatProperty)
    void* ParentAnimInstance; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarWheelAnimInstance, SpinDegrees) == 844, "Offset mismatch for UDelMarWheelAnimInstance::SpinDegrees");
static_assert(offsetof(UDelMarWheelAnimInstance, ParentAnimInstance) == 848, "Offset mismatch for UDelMarWheelAnimInstance::ParentAnimInstance");

// /Script/DelMarCosmetics.DelMarWheelContactFxCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarWheelContactFxCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t WheelSounds[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    float FxSideSpeedThreshold; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float FxForwardSpeedThreshold; // 0x02BC (Size: 0x4, Type: FloatProperty)
    void* ContactMaterial; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02C8
    TArray<void*> WheelInfos; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FrontLeftWheelContactBone[0x4]; // 0x02E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FrontRightWheelContactBone[0x4]; // 0x02E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t BackRightWheelContactBone[0x4]; // 0x02E8 (Size: 0x4, Type: NameProperty)
    FName BackLeftWheelContactBone; // 0x02EC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, WheelSounds) == 680, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::WheelSounds");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, FxSideSpeedThreshold) == 696, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::FxSideSpeedThreshold");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, FxForwardSpeedThreshold) == 700, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::FxForwardSpeedThreshold");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, ContactMaterial) == 704, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::ContactMaterial");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, WheelInfos) == 720, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::WheelInfos");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, FrontLeftWheelContactBone) == 736, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::FrontLeftWheelContactBone");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, FrontRightWheelContactBone) == 740, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::FrontRightWheelContactBone");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, BackRightWheelContactBone) == 744, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::BackRightWheelContactBone");
static_assert(offsetof(UDelMarWheelContactFxCosmeticActor, BackLeftWheelContactBone) == 748, "Offset mismatch for UDelMarWheelContactFxCosmeticActor::BackLeftWheelContactBone");

// /Script/DelMarCosmetics.DelMarWheelSKCosmeticActor
// Kind: Class; super: DelMarWheelsCosmeticActor
class UDelMarWheelSKCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* SkeletalMeshComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarWheelSKCosmeticActor, SkeletalMeshComponent) == 688, "Offset mismatch for UDelMarWheelSKCosmeticActor::SkeletalMeshComponent");

// /Script/DelMarCosmetics.DelMarWheelsCosmeticActor
// Kind: Class; super: DelMarCosmeticActor
class UDelMarWheelsCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t WheelIndex; // 0x02A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDelMarWheelsCosmeticActor, WheelIndex) == 680, "Offset mismatch for UDelMarWheelsCosmeticActor::WheelIndex");
