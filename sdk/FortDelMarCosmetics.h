/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarCosmetics
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarCosmetics.FortDelMarAnimNode_VehicleController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FFortDelMarAnimNode_VehicleController
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

static_assert(offsetof(FFortDelMarAnimNode_VehicleController, BouncyChassis) == 200, "Offset mismatch for FFortDelMarAnimNode_VehicleController::BouncyChassis");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, FrontLeftWheel) == 212, "Offset mismatch for FFortDelMarAnimNode_VehicleController::FrontLeftWheel");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, FrontRightWheel) == 248, "Offset mismatch for FFortDelMarAnimNode_VehicleController::FrontRightWheel");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, BackLeftWheel) == 284, "Offset mismatch for FFortDelMarAnimNode_VehicleController::BackLeftWheel");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, BackRightWheel) == 320, "Offset mismatch for FFortDelMarAnimNode_VehicleController::BackRightWheel");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, ChassisBone) == 356, "Offset mismatch for FFortDelMarAnimNode_VehicleController::ChassisBone");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, VehicleInfo) == 368, "Offset mismatch for FFortDelMarAnimNode_VehicleController::VehicleInfo");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, WheelInfoFR) == 376, "Offset mismatch for FFortDelMarAnimNode_VehicleController::WheelInfoFR");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, WheelInfoFL) == 404, "Offset mismatch for FFortDelMarAnimNode_VehicleController::WheelInfoFL");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, WheelInfoBR) == 432, "Offset mismatch for FFortDelMarAnimNode_VehicleController::WheelInfoBR");
static_assert(offsetof(FFortDelMarAnimNode_VehicleController, WheelInfoBL) == 460, "Offset mismatch for FFortDelMarAnimNode_VehicleController::WheelInfoBL");

// /Script/FortDelMarCosmetics.FortDelMarBouncyChassisInstance
// Kind: ScriptStruct; super: none
struct FFortDelMarBouncyChassisInstance
{
public:
    std::uint8_t Spring[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarBouncyChassisInstance, Spring) == 0, "Offset mismatch for FFortDelMarBouncyChassisInstance::Spring");

// /Script/FortDelMarCosmetics.FortDelMarBouncyChassisSetup
// Kind: ScriptStruct; super: none
struct FFortDelMarBouncyChassisSetup
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

static_assert(offsetof(FFortDelMarBouncyChassisSetup, PitchSpring) == 0, "Offset mismatch for FFortDelMarBouncyChassisSetup::PitchSpring");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, PitchMaxAngleDegrees) == 8, "Offset mismatch for FFortDelMarBouncyChassisSetup::PitchMaxAngleDegrees");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, RollSpring) == 12, "Offset mismatch for FFortDelMarBouncyChassisSetup::RollSpring");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, RollMaxAngleDegrees) == 20, "Offset mismatch for FFortDelMarBouncyChassisSetup::RollMaxAngleDegrees");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, ZSpring) == 24, "Offset mismatch for FFortDelMarBouncyChassisSetup::ZSpring");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, ZMaxDrop) == 32, "Offset mismatch for FFortDelMarBouncyChassisSetup::ZMaxDrop");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, ZMaxRaise) == 36, "Offset mismatch for FFortDelMarBouncyChassisSetup::ZMaxRaise");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, MaxDisplacement) == 40, "Offset mismatch for FFortDelMarBouncyChassisSetup::MaxDisplacement");
static_assert(offsetof(FFortDelMarBouncyChassisSetup, MassOffset) == 64, "Offset mismatch for FFortDelMarBouncyChassisSetup::MassOffset");

// /Script/FortDelMarCosmetics.FortDelMarBouncyChassisState
// Kind: ScriptStruct; super: none
struct FFortDelMarBouncyChassisState
{
public:
    float PitchDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RollDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslationZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarBouncyChassisState, PitchDegrees) == 0, "Offset mismatch for FFortDelMarBouncyChassisState::PitchDegrees");
static_assert(offsetof(FFortDelMarBouncyChassisState, RollDegrees) == 4, "Offset mismatch for FFortDelMarBouncyChassisState::RollDegrees");
static_assert(offsetof(FFortDelMarBouncyChassisState, TranslationZ) == 8, "Offset mismatch for FFortDelMarBouncyChassisState::TranslationZ");

// /Script/FortDelMarCosmetics.FortDelMarBoxSpring
// Kind: ScriptStruct; super: none
struct FFortDelMarBoxSpring
{
public:
    std::uint8_t Setup[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarBoxSpring, Setup) == 0, "Offset mismatch for FFortDelMarBoxSpring::Setup");

// /Script/FortDelMarCosmetics.FortDelMarBoxSpringSetup
// Kind: ScriptStruct; super: none
struct FFortDelMarBoxSpringSetup
{
public:
    std::uint8_t Strength[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Damping[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarBoxSpringSetup, Strength) == 0, "Offset mismatch for FFortDelMarBoxSpringSetup::Strength");
static_assert(offsetof(FFortDelMarBoxSpringSetup, Damping) == 24, "Offset mismatch for FFortDelMarBoxSpringSetup::Damping");
static_assert(offsetof(FFortDelMarBoxSpringSetup, MaxDisplacement) == 48, "Offset mismatch for FFortDelMarBoxSpringSetup::MaxDisplacement");
static_assert(offsetof(FFortDelMarBoxSpringSetup, MaxSpeed) == 72, "Offset mismatch for FFortDelMarBoxSpringSetup::MaxSpeed");
static_assert(offsetof(FFortDelMarBoxSpringSetup, Mass) == 76, "Offset mismatch for FFortDelMarBoxSpringSetup::Mass");

// /Script/FortDelMarCosmetics.FortDelMarMaterialOverrides
// Kind: ScriptStruct; super: none
struct FFortDelMarMaterialOverrides
{
public:
    std::int32_t MaterialInstanceDynamicIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MaterialInterface; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParameterOverrides[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarMaterialOverrides, MaterialInstanceDynamicIndex) == 0, "Offset mismatch for FFortDelMarMaterialOverrides::MaterialInstanceDynamicIndex");
static_assert(offsetof(FFortDelMarMaterialOverrides, MaterialInterface) == 8, "Offset mismatch for FFortDelMarMaterialOverrides::MaterialInterface");
static_assert(offsetof(FFortDelMarMaterialOverrides, ParameterOverrides) == 16, "Offset mismatch for FFortDelMarMaterialOverrides::ParameterOverrides");

// /Script/FortDelMarCosmetics.FortDelMarMaterialParameterCollection
// Kind: ScriptStruct; super: none
struct FFortDelMarMaterialParameterCollection
{
public:
    TArray<void*> OverrideFloatParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideVectorParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideTextureParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarMaterialParameterCollection, OverrideFloatParameters) == 0, "Offset mismatch for FFortDelMarMaterialParameterCollection::OverrideFloatParameters");
static_assert(offsetof(FFortDelMarMaterialParameterCollection, OverrideVectorParameters) == 16, "Offset mismatch for FFortDelMarMaterialParameterCollection::OverrideVectorParameters");
static_assert(offsetof(FFortDelMarMaterialParameterCollection, OverrideTextureParameters) == 32, "Offset mismatch for FFortDelMarMaterialParameterCollection::OverrideTextureParameters");

// /Script/FortDelMarCosmetics.FortDelMarNiagaraOverrides
// Kind: ScriptStruct; super: none
struct FFortDelMarNiagaraOverrides
{
public:
    std::uint8_t ParameterOverrides[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarNiagaraOverrides, ParameterOverrides) == 0, "Offset mismatch for FFortDelMarNiagaraOverrides::ParameterOverrides");

// /Script/FortDelMarCosmetics.FortDelMarNiagaraParameterCollection
// Kind: ScriptStruct; super: none
struct FFortDelMarNiagaraParameterCollection
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

static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideNiagaraSystem) == 0, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideNiagaraSystem");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideBoolParameters) == 8, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideBoolParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideIntParameters) == 24, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideIntParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideFloatParameters) == 40, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideFloatParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideVectorParameters) == 56, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideVectorParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideColorParameters) == 72, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideColorParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideTextureParameters) == 88, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideTextureParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideMaterialsParameters) == 104, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideMaterialsParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideStaticMeshParameters) == 120, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideStaticMeshParameters");
static_assert(offsetof(FFortDelMarNiagaraParameterCollection, OverrideActorParameters) == 136, "Offset mismatch for FFortDelMarNiagaraParameterCollection::OverrideActorParameters");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Actor
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Actor
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Actor, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Actor::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Actor, Value) == 8, "Offset mismatch for FFortDelMarOverrideParameter_Actor::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Bool
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Bool
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Value; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Bool, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Bool::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Bool, Value) == 4, "Offset mismatch for FFortDelMarOverrideParameter_Bool::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Color
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Color
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Color, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Color::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Color, Value) == 4, "Offset mismatch for FFortDelMarOverrideParameter_Color::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Float
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Float
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Float, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Float::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Float, Value) == 4, "Offset mismatch for FFortDelMarOverrideParameter_Float::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Int
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Int
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Int, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Int::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Int, Value) == 4, "Offset mismatch for FFortDelMarOverrideParameter_Int::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Material
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Material
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Material, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Material::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Material, Value) == 8, "Offset mismatch for FFortDelMarOverrideParameter_Material::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_StaticMesh
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_StaticMesh
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_StaticMesh, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_StaticMesh::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_StaticMesh, Value) == 8, "Offset mismatch for FFortDelMarOverrideParameter_StaticMesh::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Texture
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Texture
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Texture, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Texture::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Texture, Value) == 8, "Offset mismatch for FFortDelMarOverrideParameter_Texture::Value");

// /Script/FortDelMarCosmetics.FortDelMarOverrideParameter_Vector
// Kind: ScriptStruct; super: none
struct FFortDelMarOverrideParameter_Vector
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarOverrideParameter_Vector, Name) == 0, "Offset mismatch for FFortDelMarOverrideParameter_Vector::Name");
static_assert(offsetof(FFortDelMarOverrideParameter_Vector, Value) == 8, "Offset mismatch for FFortDelMarOverrideParameter_Vector::Value");

// /Script/FortDelMarCosmetics.FortDelMarParameterOverrides
// Kind: ScriptStruct; super: none
struct FFortDelMarParameterOverrides
{
public:
    TArray<void*> MaterialOverrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NiagaraOverrides; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarParameterOverrides, MaterialOverrides) == 0, "Offset mismatch for FFortDelMarParameterOverrides::MaterialOverrides");
static_assert(offsetof(FFortDelMarParameterOverrides, NiagaraOverrides) == 16, "Offset mismatch for FFortDelMarParameterOverrides::NiagaraOverrides");

// /Script/FortDelMarCosmetics.FortDelMarPreviewConfigs
// Kind: ScriptStruct; super: none
struct FFortDelMarPreviewConfigs
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

static_assert(offsetof(FFortDelMarPreviewConfigs, bAnyWheelsOnGround) == 0, "Offset mismatch for FFortDelMarPreviewConfigs::bAnyWheelsOnGround");
static_assert(offsetof(FFortDelMarPreviewConfigs, bWheelsOnGround) == 1, "Offset mismatch for FFortDelMarPreviewConfigs::bWheelsOnGround");
static_assert(offsetof(FFortDelMarPreviewConfigs, ForwardSpeed) == 4, "Offset mismatch for FFortDelMarPreviewConfigs::ForwardSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, SideSpeed) == 8, "Offset mismatch for FFortDelMarPreviewConfigs::SideSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, Acceleration) == 12, "Offset mismatch for FFortDelMarPreviewConfigs::Acceleration");
static_assert(offsetof(FFortDelMarPreviewConfigs, Throttle) == 16, "Offset mismatch for FFortDelMarPreviewConfigs::Throttle");
static_assert(offsetof(FFortDelMarPreviewConfigs, Steering) == 20, "Offset mismatch for FFortDelMarPreviewConfigs::Steering");
static_assert(offsetof(FFortDelMarPreviewConfigs, SteerAngle) == 24, "Offset mismatch for FFortDelMarPreviewConfigs::SteerAngle");
static_assert(offsetof(FFortDelMarPreviewConfigs, TargetSpeed) == 28, "Offset mismatch for FFortDelMarPreviewConfigs::TargetSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, BaseTargetSpeed) == 32, "Offset mismatch for FFortDelMarPreviewConfigs::BaseTargetSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, NormalizedForwardSpeed) == 36, "Offset mismatch for FFortDelMarPreviewConfigs::NormalizedForwardSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, NormalizedBonusSpeed) == 40, "Offset mismatch for FFortDelMarPreviewConfigs::NormalizedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, VehicleForwardState) == 44, "Offset mismatch for FFortDelMarPreviewConfigs::VehicleForwardState");
static_assert(offsetof(FFortDelMarPreviewConfigs, BonusSpeed) == 48, "Offset mismatch for FFortDelMarPreviewConfigs::BonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, WorldAppliedBonusSpeed) == 52, "Offset mismatch for FFortDelMarPreviewConfigs::WorldAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, LandingData) == 56, "Offset mismatch for FFortDelMarPreviewConfigs::LandingData");
static_assert(offsetof(FFortDelMarPreviewConfigs, bLanded) == 68, "Offset mismatch for FFortDelMarPreviewConfigs::bLanded");
static_assert(offsetof(FFortDelMarPreviewConfigs, bSkydiving) == 69, "Offset mismatch for FFortDelMarPreviewConfigs::bSkydiving");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftState) == 70, "Offset mismatch for FFortDelMarPreviewConfigs::DriftState");
static_assert(offsetof(FFortDelMarPreviewConfigs, bDriftControlled) == 71, "Offset mismatch for FFortDelMarPreviewConfigs::bDriftControlled");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftAngle) == 72, "Offset mismatch for FFortDelMarPreviewConfigs::DriftAngle");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftSlipAngleRatio) == 76, "Offset mismatch for FFortDelMarPreviewConfigs::DriftSlipAngleRatio");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftTargetSide) == 80, "Offset mismatch for FFortDelMarPreviewConfigs::DriftTargetSide");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftDuration) == 84, "Offset mismatch for FFortDelMarPreviewConfigs::DriftDuration");
static_assert(offsetof(FFortDelMarPreviewConfigs, bDriftBoostInRange) == 88, "Offset mismatch for FFortDelMarPreviewConfigs::bDriftBoostInRange");
static_assert(offsetof(FFortDelMarPreviewConfigs, bDriftBoostLosingAppliedBonusSpeed) == 89, "Offset mismatch for FFortDelMarPreviewConfigs::bDriftBoostLosingAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftBoostPotentialPercentage) == 92, "Offset mismatch for FFortDelMarPreviewConfigs::DriftBoostPotentialPercentage");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftBoostAppliedBonusSpeed) == 96, "Offset mismatch for FFortDelMarPreviewConfigs::DriftBoostAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, DriftBoostQueuedBonusSpeed) == 100, "Offset mismatch for FFortDelMarPreviewConfigs::DriftBoostQueuedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, DraftingAppliedBonusSpeed) == 104, "Offset mismatch for FFortDelMarPreviewConfigs::DraftingAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, DraftingMaxBonusSpeedPercentage) == 108, "Offset mismatch for FFortDelMarPreviewConfigs::DraftingMaxBonusSpeedPercentage");
static_assert(offsetof(FFortDelMarPreviewConfigs, DraftingTargetDegrees) == 112, "Offset mismatch for FFortDelMarPreviewConfigs::DraftingTargetDegrees");
static_assert(offsetof(FFortDelMarPreviewConfigs, DraftingCurrentBonusSpeedPercentage) == 116, "Offset mismatch for FFortDelMarPreviewConfigs::DraftingCurrentBonusSpeedPercentage");
static_assert(offsetof(FFortDelMarPreviewConfigs, bHasValidDraftingTarget) == 120, "Offset mismatch for FFortDelMarPreviewConfigs::bHasValidDraftingTarget");
static_assert(offsetof(FFortDelMarPreviewConfigs, DraftingState) == 121, "Offset mismatch for FFortDelMarPreviewConfigs::DraftingState");
static_assert(offsetof(FFortDelMarPreviewConfigs, OversteerAccumulationPercentage) == 124, "Offset mismatch for FFortDelMarPreviewConfigs::OversteerAccumulationPercentage");
static_assert(offsetof(FFortDelMarPreviewConfigs, bStartlineBoostActive) == 128, "Offset mismatch for FFortDelMarPreviewConfigs::bStartlineBoostActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bFailedStartlineBoost) == 129, "Offset mismatch for FFortDelMarPreviewConfigs::bFailedStartlineBoost");
static_assert(offsetof(FFortDelMarPreviewConfigs, PercentageMaxBonusSpeedEarned) == 132, "Offset mismatch for FFortDelMarPreviewConfigs::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FFortDelMarPreviewConfigs, StartlineBoostAppliedBonusSpeed) == 136, "Offset mismatch for FFortDelMarPreviewConfigs::StartlineBoostAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, MaxEarnedBonusSpeed) == 140, "Offset mismatch for FFortDelMarPreviewConfigs::MaxEarnedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, bLeftStrafe) == 144, "Offset mismatch for FFortDelMarPreviewConfigs::bLeftStrafe");
static_assert(offsetof(FFortDelMarPreviewConfigs, bStrafeActive) == 145, "Offset mismatch for FFortDelMarPreviewConfigs::bStrafeActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bStrafeDisabled) == 146, "Offset mismatch for FFortDelMarPreviewConfigs::bStrafeDisabled");
static_assert(offsetof(FFortDelMarPreviewConfigs, bCanStrafeBeActivated) == 147, "Offset mismatch for FFortDelMarPreviewConfigs::bCanStrafeBeActivated");
static_assert(offsetof(FFortDelMarPreviewConfigs, StrafeCooldownPercentage) == 148, "Offset mismatch for FFortDelMarPreviewConfigs::StrafeCooldownPercentage");
static_assert(offsetof(FFortDelMarPreviewConfigs, bTurboActive) == 152, "Offset mismatch for FFortDelMarPreviewConfigs::bTurboActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, NumCurrentCharges) == 156, "Offset mismatch for FFortDelMarPreviewConfigs::NumCurrentCharges");
static_assert(offsetof(FFortDelMarPreviewConfigs, NumMaxCharges) == 160, "Offset mismatch for FFortDelMarPreviewConfigs::NumMaxCharges");
static_assert(offsetof(FFortDelMarPreviewConfigs, BonusZoneState) == 164, "Offset mismatch for FFortDelMarPreviewConfigs::BonusZoneState");
static_assert(offsetof(FFortDelMarPreviewConfigs, PercentageTurboActiveTimeRemaining) == 168, "Offset mismatch for FFortDelMarPreviewConfigs::PercentageTurboActiveTimeRemaining");
static_assert(offsetof(FFortDelMarPreviewConfigs, RemainingTurboActiveSeconds) == 172, "Offset mismatch for FFortDelMarPreviewConfigs::RemainingTurboActiveSeconds");
static_assert(offsetof(FFortDelMarPreviewConfigs, TurboAppliedBonusSpeed) == 176, "Offset mismatch for FFortDelMarPreviewConfigs::TurboAppliedBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, TurboBonusZoneBonusSpeed) == 180, "Offset mismatch for FFortDelMarPreviewConfigs::TurboBonusZoneBonusSpeed");
static_assert(offsetof(FFortDelMarPreviewConfigs, TurboAdditionalActiveSeconds) == 184, "Offset mismatch for FFortDelMarPreviewConfigs::TurboAdditionalActiveSeconds");
static_assert(offsetof(FFortDelMarPreviewConfigs, bKickflipActive) == 188, "Offset mismatch for FFortDelMarPreviewConfigs::bKickflipActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bKickflipLeftSide) == 189, "Offset mismatch for FFortDelMarPreviewConfigs::bKickflipLeftSide");
static_assert(offsetof(FFortDelMarPreviewConfigs, bKickflipSuctionActive) == 190, "Offset mismatch for FFortDelMarPreviewConfigs::bKickflipSuctionActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, DistanceToSuctionSurface) == 192, "Offset mismatch for FFortDelMarPreviewConfigs::DistanceToSuctionSurface");
static_assert(offsetof(FFortDelMarPreviewConfigs, KickflipDuration) == 196, "Offset mismatch for FFortDelMarPreviewConfigs::KickflipDuration");
static_assert(offsetof(FFortDelMarPreviewConfigs, KickflipActivationCharges) == 200, "Offset mismatch for FFortDelMarPreviewConfigs::KickflipActivationCharges");
static_assert(offsetof(FFortDelMarPreviewConfigs, bReattachmentActive) == 204, "Offset mismatch for FFortDelMarPreviewConfigs::bReattachmentActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, ReattachmentDirection) == 208, "Offset mismatch for FFortDelMarPreviewConfigs::ReattachmentDirection");
static_assert(offsetof(FFortDelMarPreviewConfigs, bUnderthrustActive) == 232, "Offset mismatch for FFortDelMarPreviewConfigs::bUnderthrustActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, UnderthrustPercentageTankRemaining) == 236, "Offset mismatch for FFortDelMarPreviewConfigs::UnderthrustPercentageTankRemaining");
static_assert(offsetof(FFortDelMarPreviewConfigs, UnderthrustActiveDuration) == 240, "Offset mismatch for FFortDelMarPreviewConfigs::UnderthrustActiveDuration");
static_assert(offsetof(FFortDelMarPreviewConfigs, bJumpActive) == 244, "Offset mismatch for FFortDelMarPreviewConfigs::bJumpActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bAirFreestyleActive) == 245, "Offset mismatch for FFortDelMarPreviewConfigs::bAirFreestyleActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bVehicleDemolished) == 246, "Offset mismatch for FFortDelMarPreviewConfigs::bVehicleDemolished");
static_assert(offsetof(FFortDelMarPreviewConfigs, DemolishCausedByTag) == 248, "Offset mismatch for FFortDelMarPreviewConfigs::DemolishCausedByTag");
static_assert(offsetof(FFortDelMarPreviewConfigs, bInvulnerabilityActive) == 252, "Offset mismatch for FFortDelMarPreviewConfigs::bInvulnerabilityActive");
static_assert(offsetof(FFortDelMarPreviewConfigs, bVehicleSpawnedThisFrame) == 253, "Offset mismatch for FFortDelMarPreviewConfigs::bVehicleSpawnedThisFrame");
static_assert(offsetof(FFortDelMarPreviewConfigs, bFirstVehicleForPlayer) == 254, "Offset mismatch for FFortDelMarPreviewConfigs::bFirstVehicleForPlayer");
static_assert(offsetof(FFortDelMarPreviewConfigs, bPreviousVehicleDemolished) == 255, "Offset mismatch for FFortDelMarPreviewConfigs::bPreviousVehicleDemolished");
static_assert(offsetof(FFortDelMarPreviewConfigs, bHeadlightsActive) == 256, "Offset mismatch for FFortDelMarPreviewConfigs::bHeadlightsActive");

// /Script/FortDelMarCosmetics.FortDelMarPreviewCustomization
// Kind: ScriptStruct; super: none
struct FFortDelMarPreviewCustomization
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> CustomizationInfo; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarPreviewCustomization, SlotTag) == 0, "Offset mismatch for FFortDelMarPreviewCustomization::SlotTag");
static_assert(offsetof(FFortDelMarPreviewCustomization, CustomizationInfo) == 8, "Offset mismatch for FFortDelMarPreviewCustomization::CustomizationInfo");

// /Script/FortDelMarCosmetics.FortDelMarPreviousPreviewConfigs
// Kind: ScriptStruct; super: none
struct FFortDelMarPreviousPreviewConfigs
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCosmetics.FortDelMarSpringSettings
// Kind: ScriptStruct; super: none
struct FFortDelMarSpringSettings
{
public:
    float Strength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarSpringSettings, Strength) == 0, "Offset mismatch for FFortDelMarSpringSettings::Strength");
static_assert(offsetof(FFortDelMarSpringSettings, Damping) == 4, "Offset mismatch for FFortDelMarSpringSettings::Damping");

// /Script/FortDelMarCosmetics.FortDelMarVehicleAnimInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleAnimInfo
{
public:
    float SteerAngleDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VisualSteerAngleDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleAnimInfo, SteerAngleDegrees) == 0, "Offset mismatch for FFortDelMarVehicleAnimInfo::SteerAngleDegrees");
static_assert(offsetof(FFortDelMarVehicleAnimInfo, VisualSteerAngleDegrees) == 4, "Offset mismatch for FFortDelMarVehicleAnimInfo::VisualSteerAngleDegrees");

// /Script/FortDelMarCosmetics.FortDelMarVehicleBooster
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleBooster
{
public:
    void* BoosterSystem; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoosterSocket[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t BitFlags; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortDelMarVehicleBooster, BoosterSystem) == 0, "Offset mismatch for FFortDelMarVehicleBooster::BoosterSystem");
static_assert(offsetof(FFortDelMarVehicleBooster, NiagaraComponent) == 8, "Offset mismatch for FFortDelMarVehicleBooster::NiagaraComponent");
static_assert(offsetof(FFortDelMarVehicleBooster, BoosterSocket) == 16, "Offset mismatch for FFortDelMarVehicleBooster::BoosterSocket");
static_assert(offsetof(FFortDelMarVehicleBooster, BitFlags) == 20, "Offset mismatch for FFortDelMarVehicleBooster::BitFlags");

// /Script/FortDelMarCosmetics.FortDelMarVehicleController_WheelData
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleController_WheelData
{
public:
    std::uint8_t SuspensionBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t SteeringBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t RollBone[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleController_WheelData, SuspensionBone) == 0, "Offset mismatch for FFortDelMarVehicleController_WheelData::SuspensionBone");
static_assert(offsetof(FFortDelMarVehicleController_WheelData, SteeringBone) == 12, "Offset mismatch for FFortDelMarVehicleController_WheelData::SteeringBone");
static_assert(offsetof(FFortDelMarVehicleController_WheelData, RollBone) == 24, "Offset mismatch for FFortDelMarVehicleController_WheelData::RollBone");

// /Script/FortDelMarCosmetics.FortDelMarVehicleCosmeticWheelInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleCosmeticWheelInfo
{
public:
    void* ContactParticleComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ContactParticle; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ContactMaterial; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WheelIndex; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::uint8_t Setup[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleCosmeticWheelInfo, ContactParticleComponent) == 0, "Offset mismatch for FFortDelMarVehicleCosmeticWheelInfo::ContactParticleComponent");
static_assert(offsetof(FFortDelMarVehicleCosmeticWheelInfo, ContactParticle) == 8, "Offset mismatch for FFortDelMarVehicleCosmeticWheelInfo::ContactParticle");
static_assert(offsetof(FFortDelMarVehicleCosmeticWheelInfo, ContactMaterial) == 16, "Offset mismatch for FFortDelMarVehicleCosmeticWheelInfo::ContactMaterial");
static_assert(offsetof(FFortDelMarVehicleCosmeticWheelInfo, WheelIndex) == 24, "Offset mismatch for FFortDelMarVehicleCosmeticWheelInfo::WheelIndex");
static_assert(offsetof(FFortDelMarVehicleCosmeticWheelInfo, Setup) == 28, "Offset mismatch for FFortDelMarVehicleCosmeticWheelInfo::Setup");

// /Script/FortDelMarCosmetics.FortDelMarVehicleUnderthrustSocket
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleUnderthrustSocket
{
public:
    std::uint8_t SocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SideFlags; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortDelMarVehicleUnderthrustSocket, SocketName) == 0, "Offset mismatch for FFortDelMarVehicleUnderthrustSocket::SocketName");
static_assert(offsetof(FFortDelMarVehicleUnderthrustSocket, SideFlags) == 4, "Offset mismatch for FFortDelMarVehicleUnderthrustSocket::SideFlags");

// /Script/FortDelMarCosmetics.FortDelMarVehicleUnderthrustVfxData
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleUnderthrustVfxData
{
public:
    void* UnderthrustVfxSystem; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NiagaraLocationArrayParam[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t NiagaraActivationsArrayParam[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> Sockets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarVehicleUnderthrustVfxData, UnderthrustVfxSystem) == 0, "Offset mismatch for FFortDelMarVehicleUnderthrustVfxData::UnderthrustVfxSystem");
static_assert(offsetof(FFortDelMarVehicleUnderthrustVfxData, NiagaraComponent) == 8, "Offset mismatch for FFortDelMarVehicleUnderthrustVfxData::NiagaraComponent");
static_assert(offsetof(FFortDelMarVehicleUnderthrustVfxData, NiagaraLocationArrayParam) == 16, "Offset mismatch for FFortDelMarVehicleUnderthrustVfxData::NiagaraLocationArrayParam");
static_assert(offsetof(FFortDelMarVehicleUnderthrustVfxData, NiagaraActivationsArrayParam) == 20, "Offset mismatch for FFortDelMarVehicleUnderthrustVfxData::NiagaraActivationsArrayParam");
static_assert(offsetof(FFortDelMarVehicleUnderthrustVfxData, Sockets) == 24, "Offset mismatch for FFortDelMarVehicleUnderthrustVfxData::Sockets");

// /Script/FortDelMarCosmetics.FortDelMarVehicleWheelAnimInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleWheelAnimInfo
{
public:
    float SpringToWheelOffsetZ; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringTravelRange[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TravelDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpinSpeedDegrees; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SpinDegrees; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, SpringToWheelOffsetZ) == 0, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::SpringToWheelOffsetZ");
static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, SpringTravelRange) == 4, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::SpringTravelRange");
static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, WheelRadius) == 12, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::WheelRadius");
static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, TravelDistance) == 16, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::TravelDistance");
static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, SpinSpeedDegrees) == 20, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::SpinSpeedDegrees");
static_assert(offsetof(FFortDelMarVehicleWheelAnimInfo, SpinDegrees) == 24, "Offset mismatch for FFortDelMarVehicleWheelAnimInfo::SpinDegrees");

// /Script/FortDelMarCosmetics.FortDelMarVehicleWheelSetup
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleWheelSetup
{
public:
    std::uint8_t WheelSpinBone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t WheelPivotBone[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t WheelContactBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEligibleForPhysMatContactFx; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleWheelSetup, WheelSpinBone) == 0, "Offset mismatch for FFortDelMarVehicleWheelSetup::WheelSpinBone");
static_assert(offsetof(FFortDelMarVehicleWheelSetup, WheelPivotBone) == 4, "Offset mismatch for FFortDelMarVehicleWheelSetup::WheelPivotBone");
static_assert(offsetof(FFortDelMarVehicleWheelSetup, WheelContactBone) == 8, "Offset mismatch for FFortDelMarVehicleWheelSetup::WheelContactBone");
static_assert(offsetof(FFortDelMarVehicleWheelSetup, bEligibleForPhysMatContactFx) == 12, "Offset mismatch for FFortDelMarVehicleWheelSetup::bEligibleForPhysMatContactFx");

// /Script/FortDelMarCosmetics.FortDelMarBodyCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarBodyCosmeticActor
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

static_assert(offsetof(UFortDelMarBodyCosmeticActor, FrontLeftWheelsBoneNames) == 680, "Offset mismatch for UFortDelMarBodyCosmeticActor::FrontLeftWheelsBoneNames");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, FrontRightWheelsBoneNames) == 696, "Offset mismatch for UFortDelMarBodyCosmeticActor::FrontRightWheelsBoneNames");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, BackRightWheelsBoneNames) == 712, "Offset mismatch for UFortDelMarBodyCosmeticActor::BackRightWheelsBoneNames");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, BackLeftWheelsBoneNames) == 728, "Offset mismatch for UFortDelMarBodyCosmeticActor::BackLeftWheelsBoneNames");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, LeftBoostersInfo) == 744, "Offset mismatch for UFortDelMarBodyCosmeticActor::LeftBoostersInfo");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, RightBoostersInfo) == 760, "Offset mismatch for UFortDelMarBodyCosmeticActor::RightBoostersInfo");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, SkeletalMesh) == 776, "Offset mismatch for UFortDelMarBodyCosmeticActor::SkeletalMesh");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, PhysicsAsset) == 784, "Offset mismatch for UFortDelMarBodyCosmeticActor::PhysicsAsset");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, AnimInstanceClass) == 792, "Offset mismatch for UFortDelMarBodyCosmeticActor::AnimInstanceClass");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, BodySetup) == 800, "Offset mismatch for UFortDelMarBodyCosmeticActor::BodySetup");
static_assert(offsetof(UFortDelMarBodyCosmeticActor, WheelContactFxOffset) == 808, "Offset mismatch for UFortDelMarBodyCosmeticActor::WheelContactFxOffset");

// /Script/FortDelMarCosmetics.FortDelMarBoosterCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarBoosterCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* BoosterFx; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LeftBoosters; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightBoosters; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    void* BodySkeletalMeshComponent; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarBoosterCosmeticActor, BoosterFx) == 680, "Offset mismatch for UFortDelMarBoosterCosmeticActor::BoosterFx");
static_assert(offsetof(UFortDelMarBoosterCosmeticActor, LeftBoosters) == 688, "Offset mismatch for UFortDelMarBoosterCosmeticActor::LeftBoosters");
static_assert(offsetof(UFortDelMarBoosterCosmeticActor, RightBoosters) == 704, "Offset mismatch for UFortDelMarBoosterCosmeticActor::RightBoosters");
static_assert(offsetof(UFortDelMarBoosterCosmeticActor, BodySkeletalMeshComponent) == 720, "Offset mismatch for UFortDelMarBoosterCosmeticActor::BodySkeletalMeshComponent");

// /Script/FortDelMarCosmetics.FortDelMarCosmeticActorSpawnLogic_Wheel
// Kind: Class; super: FortDelMarCosmeticActorSpawnLogic
class UFortDelMarCosmeticActorSpawnLogic_Wheel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bFrontWheel; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBackWheel; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttachPoint; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t MirrorType; // 0x002B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyFxEligibleWheels; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_Wheel, bFrontWheel) == 40, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_Wheel::bFrontWheel");
static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_Wheel, bBackWheel) == 41, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_Wheel::bBackWheel");
static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_Wheel, AttachPoint) == 42, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_Wheel::AttachPoint");
static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_Wheel, MirrorType) == 43, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_Wheel::MirrorType");
static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_Wheel, bOnlyFxEligibleWheels) == 44, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_Wheel::bOnlyFxEligibleWheels");

// /Script/FortDelMarCosmetics.FortDelMarEngineAudioCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarEngineAudioCosmeticActor
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

static_assert(offsetof(UFortDelMarEngineAudioCosmeticActor, EngineAudio) == 680, "Offset mismatch for UFortDelMarEngineAudioCosmeticActor::EngineAudio");
static_assert(offsetof(UFortDelMarEngineAudioCosmeticActor, NonLocalVelocityInterpSpeed) == 696, "Offset mismatch for UFortDelMarEngineAudioCosmeticActor::NonLocalVelocityInterpSpeed");
static_assert(offsetof(UFortDelMarEngineAudioCosmeticActor, bDisabled) == 700, "Offset mismatch for UFortDelMarEngineAudioCosmeticActor::bDisabled");
static_assert(offsetof(UFortDelMarEngineAudioCosmeticActor, ComponentGroup) == 704, "Offset mismatch for UFortDelMarEngineAudioCosmeticActor::ComponentGroup");
static_assert(offsetof(UFortDelMarEngineAudioCosmeticActor, MotorModel) == 712, "Offset mismatch for UFortDelMarEngineAudioCosmeticActor::MotorModel");

// /Script/FortDelMarCosmetics.FortDelMarGaragePreviewVehicle
// Kind: Class; super: FortDelMarPreviewVehicle
class UFortDelMarGaragePreviewVehicle
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

static_assert(offsetof(UFortDelMarGaragePreviewVehicle, OnActiveCameraUpdatedDelegate) == 9880, "Offset mismatch for UFortDelMarGaragePreviewVehicle::OnActiveCameraUpdatedDelegate");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, OnRotationTransitionStateChanged) == 9896, "Offset mismatch for UFortDelMarGaragePreviewVehicle::OnRotationTransitionStateChanged");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, PreviewPivotComponent) == 9912, "Offset mismatch for UFortDelMarGaragePreviewVehicle::PreviewPivotComponent");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, ActiveCameraComponent) == 9928, "Offset mismatch for UFortDelMarGaragePreviewVehicle::ActiveCameraComponent");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, DefaultZoomInCameraComponent) == 9936, "Offset mismatch for UFortDelMarGaragePreviewVehicle::DefaultZoomInCameraComponent");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, DefaultZoomOutCameraComponent) == 9944, "Offset mismatch for UFortDelMarGaragePreviewVehicle::DefaultZoomOutCameraComponent");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, SlotPreviewRotations) == 9984, "Offset mismatch for UFortDelMarGaragePreviewVehicle::SlotPreviewRotations");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, SlotPreviewConfigs) == 10000, "Offset mismatch for UFortDelMarGaragePreviewVehicle::SlotPreviewConfigs");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, ZoomLevel) == 10016, "Offset mismatch for UFortDelMarGaragePreviewVehicle::ZoomLevel");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, UserRotationOffset) == 10024, "Offset mismatch for UFortDelMarGaragePreviewVehicle::UserRotationOffset");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, PreviewSlot) == 10048, "Offset mismatch for UFortDelMarGaragePreviewVehicle::PreviewSlot");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, PreviewVehicleTag) == 10052, "Offset mismatch for UFortDelMarGaragePreviewVehicle::PreviewVehicleTag");
static_assert(offsetof(UFortDelMarGaragePreviewVehicle, RotationTransitionTime) == 10056, "Offset mismatch for UFortDelMarGaragePreviewVehicle::RotationTransitionTime");

// /Script/FortDelMarCosmetics.FortDelMarParamOverrideCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarParamOverrideCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TMap<void*, void*> CosmeticActorsParamterOverrides; // 0x02A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarParamOverrideCosmeticActor, CosmeticActorsParamterOverrides) == 680, "Offset mismatch for UFortDelMarParamOverrideCosmeticActor::CosmeticActorsParamterOverrides");

// /Script/FortDelMarCosmetics.FortDelMarPreviewCameraComponent
// Kind: Class; super: CameraComponent
class UFortDelMarPreviewCameraComponent
{
public:
    std::uint8_t Pad_0000[0xAD0]; // 0x0000
    std::uint8_t PreviewSlot[0x4]; // 0x0AD0 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreviewType; // 0x0AD4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortDelMarPreviewCameraComponent, PreviewSlot) == 2768, "Offset mismatch for UFortDelMarPreviewCameraComponent::PreviewSlot");
static_assert(offsetof(UFortDelMarPreviewCameraComponent, PreviewType) == 2772, "Offset mismatch for UFortDelMarPreviewCameraComponent::PreviewType");

// /Script/FortDelMarCosmetics.FortDelMarPreviewPivot
// Kind: Class; super: Actor
class UFortDelMarPreviewPivot
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SceneComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarPreviewPivot, SceneComponent) == 624, "Offset mismatch for UFortDelMarPreviewPivot::SceneComponent");

// /Script/FortDelMarCosmetics.FortDelMarPreviewVehicle
// Kind: Class; super: FortAthenaVehicle
class UFortDelMarPreviewVehicle
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
    FMulticastInlineDelegate OnFortDelMarVehicleHitWall; // 0x21D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFortDelMarVehicleHitVehicle; // 0x21E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFortDelMarVehicleHitByVehicle; // 0x21F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
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

static_assert(offsetof(UFortDelMarPreviewVehicle, PreviewLoadout) == 8072, "Offset mismatch for UFortDelMarPreviewVehicle::PreviewLoadout");
static_assert(offsetof(UFortDelMarPreviewVehicle, PreviewCustomizations) == 8112, "Offset mismatch for UFortDelMarPreviewVehicle::PreviewCustomizations");
static_assert(offsetof(UFortDelMarPreviewVehicle, NumAllowedVehicleCosmeticChanges) == 8128, "Offset mismatch for UFortDelMarPreviewVehicle::NumAllowedVehicleCosmeticChanges");
static_assert(offsetof(UFortDelMarPreviewVehicle, CosmeticComponent) == 8136, "Offset mismatch for UFortDelMarPreviewVehicle::CosmeticComponent");
static_assert(offsetof(UFortDelMarPreviewVehicle, PreviewConfigs) == 8144, "Offset mismatch for UFortDelMarPreviewVehicle::PreviewConfigs");
static_assert(offsetof(UFortDelMarPreviewVehicle, SpringTravelOffset) == 8544, "Offset mismatch for UFortDelMarPreviewVehicle::SpringTravelOffset");
static_assert(offsetof(UFortDelMarPreviewVehicle, BouncyChassisConfig) == 8560, "Offset mismatch for UFortDelMarPreviewVehicle::BouncyChassisConfig");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnVehicleForwardStateChanged) == 8576, "Offset mismatch for UFortDelMarPreviewVehicle::OnVehicleForwardStateChanged");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnFortDelMarVehicleHitWall) == 8656, "Offset mismatch for UFortDelMarPreviewVehicle::OnFortDelMarVehicleHitWall");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnFortDelMarVehicleHitVehicle) == 8672, "Offset mismatch for UFortDelMarPreviewVehicle::OnFortDelMarVehicleHitVehicle");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnFortDelMarVehicleHitByVehicle) == 8688, "Offset mismatch for UFortDelMarPreviewVehicle::OnFortDelMarVehicleHitByVehicle");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnHazardHit) == 9672, "Offset mismatch for UFortDelMarPreviewVehicle::OnHazardHit");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnVehicleTeleportEntered) == 9688, "Offset mismatch for UFortDelMarPreviewVehicle::OnVehicleTeleportEntered");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnVehicleTeleportExit) == 9704, "Offset mismatch for UFortDelMarPreviewVehicle::OnVehicleTeleportExit");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnVehicleAppliedTeleportRotation) == 9720, "Offset mismatch for UFortDelMarPreviewVehicle::OnVehicleAppliedTeleportRotation");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnEnvironmentEffectCueActivated) == 9736, "Offset mismatch for UFortDelMarPreviewVehicle::OnEnvironmentEffectCueActivated");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnEnvironmentEffectCueRemoved) == 9752, "Offset mismatch for UFortDelMarPreviewVehicle::OnEnvironmentEffectCueRemoved");
static_assert(offsetof(UFortDelMarPreviewVehicle, OnHeadlightsChanged) == 9816, "Offset mismatch for UFortDelMarPreviewVehicle::OnHeadlightsChanged");

// /Script/FortDelMarCosmetics.FortDelMarUnifiedVehicleCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarUnifiedVehicleCosmeticActor
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

static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, CachedSideBoosters) == 680, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::CachedSideBoosters");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SideBoosterParam_Scale) == 700, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SideBoosterParam_Scale");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, Boosters) == 704, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::Boosters");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, UnderthrustVfxData) == 720, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::UnderthrustVfxData");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, BodySkeletalMeshComponent) == 792, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::BodySkeletalMeshComponent");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, KickflipAudioBehavior) == 800, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::KickflipAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, JumpAudioBehavior) == 816, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::JumpAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, JumpFX) == 832, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::JumpFX");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicFX) == 840, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicFX");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicRadialBlurMaterial) == 848, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicRadialBlurMaterial");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicRadialBlurMID) == 856, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicRadialBlurMID");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicBlurOffset) == 864, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicBlurOffset");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicForwardSpeedMin) == 868, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicForwardSpeedMin");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicForwardSpeedMax) == 872, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicForwardSpeedMax");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, SuperSonicParam_Spawn) == 876, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::SuperSonicParam_Spawn");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, RadialBlurParam_Offset) == 880, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::RadialBlurParam_Offset");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, RadialBlurParam_Transition) == 884, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::RadialBlurParam_Transition");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DraftingAudioBehavior) == 896, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DraftingAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DraftingFX) == 912, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DraftingFX");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DraftingParam_Spawn) == 920, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DraftingParam_Spawn");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DraftingParam_SpeedGain) == 924, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DraftingParam_SpeedGain");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DraftingParam_Amount) == 928, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DraftingParam_Amount");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WorldBonusSpeedAudioBehavior) == 936, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WorldBonusSpeedAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnBonusSpeedActivated) == 952, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnBonusSpeedActivated");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnBonusSpeedDeactivated) == 956, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnBonusSpeedDeactivated");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WBSGroupEvent_OnWorldBonusSpeedStackGained) == 960, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WBSGroupEvent_OnWorldBonusSpeedStackGained");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DemolishTag_RaceFinished) == 964, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DemolishTag_RaceFinished");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, RespawnAudioBehavior) == 968, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::RespawnAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, DespawnAudioBehavior) == 984, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::DespawnAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TaillightTrailFX_Left) == 1000, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TaillightTrailFX_Left");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TaillightTrailFX_Right) == 1008, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TaillightTrailFX_Right");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TaillightTrailSocket_Left) == 1016, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TaillightTrailSocket_Left");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TaillightTrailSocket_Right) == 1020, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TaillightTrailSocket_Right");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TaillightTrail_MinForwardSpeed) == 1024, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TaillightTrail_MinForwardSpeed");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TeleportFx) == 1032, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TeleportFx");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TeleportEnterSystem) == 1040, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TeleportEnterSystem");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, TeleportExitSystem) == 1048, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::TeleportExitSystem");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, EnvironmentFx) == 1056, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::EnvironmentFx");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, UnderthrustAudioBehavior) == 1096, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::UnderthrustAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WheelsAudioBehavior) == 1112, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WheelsAudioBehavior");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, FrontLeftWheelContactBone) == 1128, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::FrontLeftWheelContactBone");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, FrontRightWheelContactBone) == 1132, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::FrontRightWheelContactBone");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, BackRightWheelContactBone) == 1136, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::BackRightWheelContactBone");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, BackLeftWheelContactBone) == 1140, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::BackLeftWheelContactBone");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, WheelInfos) == 1144, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::WheelInfos");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, FxSideSpeedThreshold) == 1248, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::FxSideSpeedThreshold");
static_assert(offsetof(UFortDelMarUnifiedVehicleCosmeticActor, FxForwardSpeedThreshold) == 1252, "Offset mismatch for UFortDelMarUnifiedVehicleCosmeticActor::FxForwardSpeedThreshold");

// /Script/FortDelMarCosmetics.FortDelMarVehicleAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UFortDelMarVehicleAnimInstance
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

static_assert(offsetof(UFortDelMarVehicleAnimInstance, BouncyChassis) == 816, "Offset mismatch for UFortDelMarVehicleAnimInstance::BouncyChassis");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, BouncyChassisSetup) == 832, "Offset mismatch for UFortDelMarVehicleAnimInstance::BouncyChassisSetup");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, BouncyChassisBlendRate) == 920, "Offset mismatch for UFortDelMarVehicleAnimInstance::BouncyChassisBlendRate");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, VisualSteerAngleInterpRate) == 924, "Offset mismatch for UFortDelMarVehicleAnimInstance::VisualSteerAngleInterpRate");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, WheelLerpSpeed) == 928, "Offset mismatch for UFortDelMarVehicleAnimInstance::WheelLerpSpeed");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, SuspensionInterpRate) == 932, "Offset mismatch for UFortDelMarVehicleAnimInstance::SuspensionInterpRate");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, AirSpinAccel) == 936, "Offset mismatch for UFortDelMarVehicleAnimInstance::AirSpinAccel");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, AirSpinBrake) == 940, "Offset mismatch for UFortDelMarVehicleAnimInstance::AirSpinBrake");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, AirSpinDecayRate) == 944, "Offset mismatch for UFortDelMarVehicleAnimInstance::AirSpinDecayRate");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, VehicleInfo) == 948, "Offset mismatch for UFortDelMarVehicleAnimInstance::VehicleInfo");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bThrottling) == 956, "Offset mismatch for UFortDelMarVehicleAnimInstance::bThrottling");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bReversing) == 957, "Offset mismatch for UFortDelMarVehicleAnimInstance::bReversing");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bAccelerating) == 958, "Offset mismatch for UFortDelMarVehicleAnimInstance::bAccelerating");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bBraking) == 959, "Offset mismatch for UFortDelMarVehicleAnimInstance::bBraking");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, Throttle) == 960, "Offset mismatch for UFortDelMarVehicleAnimInstance::Throttle");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, Steering) == 964, "Offset mismatch for UFortDelMarVehicleAnimInstance::Steering");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, SteeringAngle) == 968, "Offset mismatch for UFortDelMarVehicleAnimInstance::SteeringAngle");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bWheelsOnGround) == 972, "Offset mismatch for UFortDelMarVehicleAnimInstance::bWheelsOnGround");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, ForwardSpeed) == 976, "Offset mismatch for UFortDelMarVehicleAnimInstance::ForwardSpeed");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bDriftBoostActive) == 980, "Offset mismatch for UFortDelMarVehicleAnimInstance::bDriftBoostActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bUnderthrustActive) == 981, "Offset mismatch for UFortDelMarVehicleAnimInstance::bUnderthrustActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bDriftActive) == 982, "Offset mismatch for UFortDelMarVehicleAnimInstance::bDriftActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bKickflipActive) == 983, "Offset mismatch for UFortDelMarVehicleAnimInstance::bKickflipActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bJumpActive) == 984, "Offset mismatch for UFortDelMarVehicleAnimInstance::bJumpActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, bTurboActive) == 985, "Offset mismatch for UFortDelMarVehicleAnimInstance::bTurboActive");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, WheelInfoFR) == 988, "Offset mismatch for UFortDelMarVehicleAnimInstance::WheelInfoFR");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, WheelInfoFL) == 1016, "Offset mismatch for UFortDelMarVehicleAnimInstance::WheelInfoFL");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, WheelInfoBR) == 1044, "Offset mismatch for UFortDelMarVehicleAnimInstance::WheelInfoBR");
static_assert(offsetof(UFortDelMarVehicleAnimInstance, WheelInfoBL) == 1072, "Offset mismatch for UFortDelMarVehicleAnimInstance::WheelInfoBL");

// /Script/FortDelMarCosmetics.FortDelMarWheelAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UFortDelMarWheelAnimInstance
{
public:
    std::uint8_t Pad_0000[0x34C]; // 0x0000
    float SpinDegrees; // 0x034C (Size: 0x4, Type: FloatProperty)
    void* ParentAnimInstance; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarWheelAnimInstance, SpinDegrees) == 844, "Offset mismatch for UFortDelMarWheelAnimInstance::SpinDegrees");
static_assert(offsetof(UFortDelMarWheelAnimInstance, ParentAnimInstance) == 848, "Offset mismatch for UFortDelMarWheelAnimInstance::ParentAnimInstance");

// /Script/FortDelMarCosmetics.FortDelMarWheelContactFxCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarWheelContactFxCosmeticActor
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

static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, WheelSounds) == 680, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::WheelSounds");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, FxSideSpeedThreshold) == 696, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::FxSideSpeedThreshold");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, FxForwardSpeedThreshold) == 700, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::FxForwardSpeedThreshold");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, ContactMaterial) == 704, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::ContactMaterial");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, WheelInfos) == 720, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::WheelInfos");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, FrontLeftWheelContactBone) == 736, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::FrontLeftWheelContactBone");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, FrontRightWheelContactBone) == 740, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::FrontRightWheelContactBone");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, BackRightWheelContactBone) == 744, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::BackRightWheelContactBone");
static_assert(offsetof(UFortDelMarWheelContactFxCosmeticActor, BackLeftWheelContactBone) == 748, "Offset mismatch for UFortDelMarWheelContactFxCosmeticActor::BackLeftWheelContactBone");

// /Script/FortDelMarCosmetics.FortDelMarWheelSKCosmeticActor
// Kind: Class; super: FortDelMarWheelsCosmeticActor
class UFortDelMarWheelSKCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* SkeletalMeshComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarWheelSKCosmeticActor, SkeletalMeshComponent) == 688, "Offset mismatch for UFortDelMarWheelSKCosmeticActor::SkeletalMeshComponent");

// /Script/FortDelMarCosmetics.FortDelMarWheelsCosmeticActor
// Kind: Class; super: FortDelMarCosmeticActor
class UFortDelMarWheelsCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t WheelIndex; // 0x02A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortDelMarWheelsCosmeticActor, WheelIndex) == 680, "Offset mismatch for UFortDelMarWheelsCosmeticActor::WheelIndex");
