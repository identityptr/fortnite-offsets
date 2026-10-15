/**
 * decamp dumper generated SDK
 * Package: /Script/CharacterDynamicsControlCore
 */
#pragma once
#include "Basic.h"

// /Script/CharacterDynamicsControlCore.BinaryDecisionTree
// Kind: ScriptStruct; super: none
struct FBinaryDecisionTree
{
public:
    TArray<void*> TreeStructure; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBinaryDecisionTree, TreeStructure) == 0, "Offset mismatch for FBinaryDecisionTree::TreeStructure");

// /Script/CharacterDynamicsControlCore.BinaryDecisionTreeElement
// Kind: ScriptStruct; super: none
struct FBinaryDecisionTreeElement
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::int64_t Bitmask; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t BitSet; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FBinaryDecisionTreeElement, Value) == 0, "Offset mismatch for FBinaryDecisionTreeElement::Value");
static_assert(offsetof(FBinaryDecisionTreeElement, Bitmask) == 8, "Offset mismatch for FBinaryDecisionTreeElement::Bitmask");
static_assert(offsetof(FBinaryDecisionTreeElement, BitSet) == 16, "Offset mismatch for FBinaryDecisionTreeElement::BitSet");

// /Script/CharacterDynamicsControlCore.BitArrayBinaryDecisionTree
// Kind: ScriptStruct; super: none
struct FBitArrayBinaryDecisionTree
{
public:
    TArray<void*> TreeStructure; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBitArrayBinaryDecisionTree, TreeStructure) == 0, "Offset mismatch for FBitArrayBinaryDecisionTree::TreeStructure");

// /Script/CharacterDynamicsControlCore.BitArrayBinaryDecisionTreeElement
// Kind: ScriptStruct; super: none
struct FBitArrayBinaryDecisionTreeElement
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t BitArrayMask[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t BitArraySet[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBitArrayBinaryDecisionTreeElement, Value) == 0, "Offset mismatch for FBitArrayBinaryDecisionTreeElement::Value");
static_assert(offsetof(FBitArrayBinaryDecisionTreeElement, BitArrayMask) == 8, "Offset mismatch for FBitArrayBinaryDecisionTreeElement::BitArrayMask");
static_assert(offsetof(FBitArrayBinaryDecisionTreeElement, BitArraySet) == 40, "Offset mismatch for FBitArrayBinaryDecisionTreeElement::BitArraySet");

// /Script/CharacterDynamicsControlCore.BitArrayWrapper
// Kind: ScriptStruct; super: none
struct FBitArrayWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CharacterDynamicsControlCore.ClothAssetControllerParameterModifiers
// Kind: ScriptStruct; super: none
struct FClothAssetControllerParameterModifiers
{
public:
    FName StateName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t GravityOverrideMultiplier[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravityOverrideOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindVelocityMultiplier[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindVelocityOffset[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float AngularSpeedScaleMultiplier; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float AngularSpeedScaleOffset; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeedMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeedOffset; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LinearVelocityScaleMultiplier[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearVelocityScaleOffset[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxLinearVelocityMultiplier[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxLinearVelocityOffset[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float FictitiousAngularScaleMultiplier; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float FictitiousAngularScaleOffset; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float WeightAngularVelocityMappingMin; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float WeightAngularVelocityMappingMax; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float WeightLinearVelocityMappingMin; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float WeightLinearVelocityMappingMax; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeightAngularVelocityMappingAxis; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWeightAngularVelocityMappingUseAbs; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WeightLinearVelocityMappingAxis; // 0x00F2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWeightLinearVelocityMappingUseAbs; // 0x00F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WeightOrientationType; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00F5
    float WeightOrientationMappingMin; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float WeightOrientationMappingMax; // 0x00FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeightOrientationForwardAxis; // 0x0100 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeightOrientationUpAxis; // 0x0101 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIgnoreWindVelocityWhenJumping; // 0x0102 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClothAssetControllerParameterModifiers, StateName) == 0, "Offset mismatch for FClothAssetControllerParameterModifiers::StateName");
static_assert(offsetof(FClothAssetControllerParameterModifiers, GravityOverrideMultiplier) == 8, "Offset mismatch for FClothAssetControllerParameterModifiers::GravityOverrideMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, GravityOverrideOffset) == 32, "Offset mismatch for FClothAssetControllerParameterModifiers::GravityOverrideOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WindVelocityMultiplier) == 56, "Offset mismatch for FClothAssetControllerParameterModifiers::WindVelocityMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WindVelocityOffset) == 80, "Offset mismatch for FClothAssetControllerParameterModifiers::WindVelocityOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, AngularSpeedScaleMultiplier) == 104, "Offset mismatch for FClothAssetControllerParameterModifiers::AngularSpeedScaleMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, AngularSpeedScaleOffset) == 108, "Offset mismatch for FClothAssetControllerParameterModifiers::AngularSpeedScaleOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, MaxAngularSpeedMultiplier) == 112, "Offset mismatch for FClothAssetControllerParameterModifiers::MaxAngularSpeedMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, MaxAngularSpeedOffset) == 116, "Offset mismatch for FClothAssetControllerParameterModifiers::MaxAngularSpeedOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, LinearVelocityScaleMultiplier) == 120, "Offset mismatch for FClothAssetControllerParameterModifiers::LinearVelocityScaleMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, LinearVelocityScaleOffset) == 144, "Offset mismatch for FClothAssetControllerParameterModifiers::LinearVelocityScaleOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, MaxLinearVelocityMultiplier) == 168, "Offset mismatch for FClothAssetControllerParameterModifiers::MaxLinearVelocityMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, MaxLinearVelocityOffset) == 192, "Offset mismatch for FClothAssetControllerParameterModifiers::MaxLinearVelocityOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, FictitiousAngularScaleMultiplier) == 216, "Offset mismatch for FClothAssetControllerParameterModifiers::FictitiousAngularScaleMultiplier");
static_assert(offsetof(FClothAssetControllerParameterModifiers, FictitiousAngularScaleOffset) == 220, "Offset mismatch for FClothAssetControllerParameterModifiers::FictitiousAngularScaleOffset");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightAngularVelocityMappingMin) == 224, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightAngularVelocityMappingMin");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightAngularVelocityMappingMax) == 228, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightAngularVelocityMappingMax");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightLinearVelocityMappingMin) == 232, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightLinearVelocityMappingMin");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightLinearVelocityMappingMax) == 236, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightLinearVelocityMappingMax");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightAngularVelocityMappingAxis) == 240, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightAngularVelocityMappingAxis");
static_assert(offsetof(FClothAssetControllerParameterModifiers, bWeightAngularVelocityMappingUseAbs) == 241, "Offset mismatch for FClothAssetControllerParameterModifiers::bWeightAngularVelocityMappingUseAbs");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightLinearVelocityMappingAxis) == 242, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightLinearVelocityMappingAxis");
static_assert(offsetof(FClothAssetControllerParameterModifiers, bWeightLinearVelocityMappingUseAbs) == 243, "Offset mismatch for FClothAssetControllerParameterModifiers::bWeightLinearVelocityMappingUseAbs");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightOrientationType) == 244, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightOrientationType");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightOrientationMappingMin) == 248, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightOrientationMappingMin");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightOrientationMappingMax) == 252, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightOrientationMappingMax");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightOrientationForwardAxis) == 256, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightOrientationForwardAxis");
static_assert(offsetof(FClothAssetControllerParameterModifiers, WeightOrientationUpAxis) == 257, "Offset mismatch for FClothAssetControllerParameterModifiers::WeightOrientationUpAxis");
static_assert(offsetof(FClothAssetControllerParameterModifiers, bIgnoreWindVelocityWhenJumping) == 258, "Offset mismatch for FClothAssetControllerParameterModifiers::bIgnoreWindVelocityWhenJumping");

// /Script/CharacterDynamicsControlCore.ClothAssetControllerParameters
// Kind: ScriptStruct; super: none
struct FClothAssetControllerParameters
{
public:
    std::uint8_t GravityOverride[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float AngularSpeedScale; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LinearVelocityScale[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxLinearVelocity[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float FictitiousAngularScale; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClothAssetControllerParameters, GravityOverride) == 0, "Offset mismatch for FClothAssetControllerParameters::GravityOverride");
static_assert(offsetof(FClothAssetControllerParameters, WindVelocity) == 24, "Offset mismatch for FClothAssetControllerParameters::WindVelocity");
static_assert(offsetof(FClothAssetControllerParameters, AngularSpeedScale) == 48, "Offset mismatch for FClothAssetControllerParameters::AngularSpeedScale");
static_assert(offsetof(FClothAssetControllerParameters, MaxAngularSpeed) == 52, "Offset mismatch for FClothAssetControllerParameters::MaxAngularSpeed");
static_assert(offsetof(FClothAssetControllerParameters, LinearVelocityScale) == 56, "Offset mismatch for FClothAssetControllerParameters::LinearVelocityScale");
static_assert(offsetof(FClothAssetControllerParameters, MaxLinearVelocity) == 80, "Offset mismatch for FClothAssetControllerParameters::MaxLinearVelocity");
static_assert(offsetof(FClothAssetControllerParameters, FictitiousAngularScale) == 104, "Offset mismatch for FClothAssetControllerParameters::FictitiousAngularScale");

// /Script/CharacterDynamicsControlCore.ClothControllerClothParameterMap
// Kind: ScriptStruct; super: none
struct FClothControllerClothParameterMap
{
public:
    TMap<void*, void*> Map; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FClothControllerClothParameterMap, Map) == 0, "Offset mismatch for FClothControllerClothParameterMap::Map");

// /Script/CharacterDynamicsControlCore.ClothControllerPropertiesMap
// Kind: ScriptStruct; super: none
struct FClothControllerPropertiesMap
{
public:
    TMap<void*, void*> Map; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FClothControllerPropertiesMap, Map) == 0, "Offset mismatch for FClothControllerPropertiesMap::Map");

// /Script/CharacterDynamicsControlCore.ClothControllerWindParameterMap
// Kind: ScriptStruct; super: none
struct FClothControllerWindParameterMap
{
public:
    TMap<void*, void*> Map; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FClothControllerWindParameterMap, Map) == 0, "Offset mismatch for FClothControllerWindParameterMap::Map");

// /Script/CharacterDynamicsControlCore.ClothCoreSettings
// Kind: ScriptStruct; super: none
struct FClothCoreSettings
{
public:
    std::uint8_t EdgeStiffness[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BendingStiffness[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t AreaStiffness[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t TetherStiffness[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    float CollisionThickness; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FrictionCoefficient; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionThickness; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float DampingCoefficient; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LocalDampingCoefficient; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    std::uint8_t AnimDriveStiffness[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t AnimDriveDamping[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::int32_t NumberIterations; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberSubsteps; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClothCoreSettings, EdgeStiffness) == 0, "Offset mismatch for FClothCoreSettings::EdgeStiffness");
static_assert(offsetof(FClothCoreSettings, BendingStiffness) == 16, "Offset mismatch for FClothCoreSettings::BendingStiffness");
static_assert(offsetof(FClothCoreSettings, AreaStiffness) == 32, "Offset mismatch for FClothCoreSettings::AreaStiffness");
static_assert(offsetof(FClothCoreSettings, TetherStiffness) == 48, "Offset mismatch for FClothCoreSettings::TetherStiffness");
static_assert(offsetof(FClothCoreSettings, CollisionThickness) == 64, "Offset mismatch for FClothCoreSettings::CollisionThickness");
static_assert(offsetof(FClothCoreSettings, FrictionCoefficient) == 68, "Offset mismatch for FClothCoreSettings::FrictionCoefficient");
static_assert(offsetof(FClothCoreSettings, SelfCollisionThickness) == 72, "Offset mismatch for FClothCoreSettings::SelfCollisionThickness");
static_assert(offsetof(FClothCoreSettings, DampingCoefficient) == 76, "Offset mismatch for FClothCoreSettings::DampingCoefficient");
static_assert(offsetof(FClothCoreSettings, LocalDampingCoefficient) == 80, "Offset mismatch for FClothCoreSettings::LocalDampingCoefficient");
static_assert(offsetof(FClothCoreSettings, AnimDriveStiffness) == 88, "Offset mismatch for FClothCoreSettings::AnimDriveStiffness");
static_assert(offsetof(FClothCoreSettings, AnimDriveDamping) == 104, "Offset mismatch for FClothCoreSettings::AnimDriveDamping");
static_assert(offsetof(FClothCoreSettings, NumberIterations) == 120, "Offset mismatch for FClothCoreSettings::NumberIterations");
static_assert(offsetof(FClothCoreSettings, NumberSubsteps) == 124, "Offset mismatch for FClothCoreSettings::NumberSubsteps");

// /Script/CharacterDynamicsControlCore.ClothParameters
// Kind: ScriptStruct; super: none
struct FClothParameters
{
public:
    std::uint8_t LinearVelocityScale[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float AngularVelocityScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FictitiousAngularScale; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GravityOverride[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t DragCoefficient[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t LiftCoefficient[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t OuterDrag[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t OuterLift[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxLinearVelocity[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxLinearAcceleration[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    float MaxAngularVelocity; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float MaxAngularAcceleration; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableLinearVelocityClamping; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableLinearAccelerationClamping; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAngularVelocityClamping; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAngularAccelerationClamping; // 0x00B3 (Size: 0x1, Type: BoolProperty)
    FName JointName; // 0x00B4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FClothParameters, LinearVelocityScale) == 0, "Offset mismatch for FClothParameters::LinearVelocityScale");
static_assert(offsetof(FClothParameters, AngularVelocityScale) == 24, "Offset mismatch for FClothParameters::AngularVelocityScale");
static_assert(offsetof(FClothParameters, FictitiousAngularScale) == 28, "Offset mismatch for FClothParameters::FictitiousAngularScale");
static_assert(offsetof(FClothParameters, GravityOverride) == 32, "Offset mismatch for FClothParameters::GravityOverride");
static_assert(offsetof(FClothParameters, DragCoefficient) == 56, "Offset mismatch for FClothParameters::DragCoefficient");
static_assert(offsetof(FClothParameters, LiftCoefficient) == 72, "Offset mismatch for FClothParameters::LiftCoefficient");
static_assert(offsetof(FClothParameters, OuterDrag) == 88, "Offset mismatch for FClothParameters::OuterDrag");
static_assert(offsetof(FClothParameters, OuterLift) == 104, "Offset mismatch for FClothParameters::OuterLift");
static_assert(offsetof(FClothParameters, MaxLinearVelocity) == 120, "Offset mismatch for FClothParameters::MaxLinearVelocity");
static_assert(offsetof(FClothParameters, MaxLinearAcceleration) == 144, "Offset mismatch for FClothParameters::MaxLinearAcceleration");
static_assert(offsetof(FClothParameters, MaxAngularVelocity) == 168, "Offset mismatch for FClothParameters::MaxAngularVelocity");
static_assert(offsetof(FClothParameters, MaxAngularAcceleration) == 172, "Offset mismatch for FClothParameters::MaxAngularAcceleration");
static_assert(offsetof(FClothParameters, bEnableLinearVelocityClamping) == 176, "Offset mismatch for FClothParameters::bEnableLinearVelocityClamping");
static_assert(offsetof(FClothParameters, bEnableLinearAccelerationClamping) == 177, "Offset mismatch for FClothParameters::bEnableLinearAccelerationClamping");
static_assert(offsetof(FClothParameters, bEnableAngularVelocityClamping) == 178, "Offset mismatch for FClothParameters::bEnableAngularVelocityClamping");
static_assert(offsetof(FClothParameters, bEnableAngularAccelerationClamping) == 179, "Offset mismatch for FClothParameters::bEnableAngularAccelerationClamping");
static_assert(offsetof(FClothParameters, JointName) == 180, "Offset mismatch for FClothParameters::JointName");

// /Script/CharacterDynamicsControlCore.ClothStateLogicTree
// Kind: ScriptStruct; super: none
struct FClothStateLogicTree
{
public:
    TMap<void*, void*> PropertyNameToBitFlagMap; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> PropertyFlagsToStateNameTable; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClothStateLogicTree, PropertyNameToBitFlagMap) == 0, "Offset mismatch for FClothStateLogicTree::PropertyNameToBitFlagMap");
static_assert(offsetof(FClothStateLogicTree, PropertyFlagsToStateNameTable) == 16, "Offset mismatch for FClothStateLogicTree::PropertyFlagsToStateNameTable");

// /Script/CharacterDynamicsControlCore.FortCharacterDynamicsControlParameterSet
// Kind: ScriptStruct; super: none
struct FFortCharacterDynamicsControlParameterSet
{
public:
    TArray<void*> StateNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortCharacterDynamicsControlParameterSet, StateNames) == 0, "Offset mismatch for FFortCharacterDynamicsControlParameterSet::StateNames");

// /Script/CharacterDynamicsControlCore.FortClothParameterSet
// Kind: ScriptStruct; super: FortCharacterDynamicsControlParameterSet
struct FFortClothParameterSet
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Parameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortClothParameterSet, Parameters) == 16, "Offset mismatch for FFortClothParameterSet::Parameters");

// /Script/CharacterDynamicsControlCore.FortGravityOverrideParameterSet
// Kind: ScriptStruct; super: FortCharacterDynamicsControlParameterSet
struct FFortGravityOverrideParameterSet
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Parameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortGravityOverrideParameterSet, Parameters) == 16, "Offset mismatch for FFortGravityOverrideParameterSet::Parameters");

// /Script/CharacterDynamicsControlCore.FortGravityOverrideParameters
// Kind: ScriptStruct; super: none
struct FFortGravityOverrideParameters
{
public:
    std::uint8_t WindFrequency[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindAmplitude[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravityOverride[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    FName JointName; // 0x0060 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortGravityOverrideParameters, WindFrequency) == 0, "Offset mismatch for FFortGravityOverrideParameters::WindFrequency");
static_assert(offsetof(FFortGravityOverrideParameters, WindAmplitude) == 24, "Offset mismatch for FFortGravityOverrideParameters::WindAmplitude");
static_assert(offsetof(FFortGravityOverrideParameters, WindOffset) == 48, "Offset mismatch for FFortGravityOverrideParameters::WindOffset");
static_assert(offsetof(FFortGravityOverrideParameters, GravityOverride) == 72, "Offset mismatch for FFortGravityOverrideParameters::GravityOverride");
static_assert(offsetof(FFortGravityOverrideParameters, JointName) == 96, "Offset mismatch for FFortGravityOverrideParameters::JointName");

// /Script/CharacterDynamicsControlCore.FortRigidBodyAnimNodeParameterSet
// Kind: ScriptStruct; super: FortCharacterDynamicsControlParameterSet
struct FFortRigidBodyAnimNodeParameterSet
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Parameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortRigidBodyAnimNodeParameterSet, Parameters) == 16, "Offset mismatch for FFortRigidBodyAnimNodeParameterSet::Parameters");

// /Script/CharacterDynamicsControlCore.FortRigidBodyAnimNodeParameters
// Kind: ScriptStruct; super: none
struct FFortRigidBodyAnimNodeParameters
{
public:
    std::uint8_t ComponentLinearAccScale[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearVelScale[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimSpaceSettings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRigidBodyAnimNodeParameters, ComponentLinearAccScale) == 0, "Offset mismatch for FFortRigidBodyAnimNodeParameters::ComponentLinearAccScale");
static_assert(offsetof(FFortRigidBodyAnimNodeParameters, ComponentLinearVelScale) == 24, "Offset mismatch for FFortRigidBodyAnimNodeParameters::ComponentLinearVelScale");
static_assert(offsetof(FFortRigidBodyAnimNodeParameters, SimSpaceSettings) == 48, "Offset mismatch for FFortRigidBodyAnimNodeParameters::SimSpaceSettings");

// /Script/CharacterDynamicsControlCore.FortRigidBodyWithControlStateTransitionParameters
// Kind: ScriptStruct; super: none
struct FFortRigidBodyWithControlStateTransitionParameters
{
public:
    std::uint8_t ControlAndModifierParameters[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    float TransitionTimeSeconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortRigidBodyWithControlStateTransitionParameters, ControlAndModifierParameters) == 0, "Offset mismatch for FFortRigidBodyWithControlStateTransitionParameters::ControlAndModifierParameters");
static_assert(offsetof(FFortRigidBodyWithControlStateTransitionParameters, TransitionTimeSeconds) == 48, "Offset mismatch for FFortRigidBodyWithControlStateTransitionParameters::TransitionTimeSeconds");

// /Script/CharacterDynamicsControlCore.FortWindGustParameterSet
// Kind: ScriptStruct; super: FortCharacterDynamicsControlParameterSet
struct FFortWindGustParameterSet
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Parameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortWindGustParameterSet, Parameters) == 16, "Offset mismatch for FFortWindGustParameterSet::Parameters");

// /Script/CharacterDynamicsControlCore.PropertyStatePair
// Kind: ScriptStruct; super: none
struct FPropertyStatePair
{
public:
    std::uint8_t StateName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t BitSet; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Bitmask; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPropertyStatePair, StateName) == 0, "Offset mismatch for FPropertyStatePair::StateName");
static_assert(offsetof(FPropertyStatePair, BitSet) == 4, "Offset mismatch for FPropertyStatePair::BitSet");
static_assert(offsetof(FPropertyStatePair, Bitmask) == 8, "Offset mismatch for FPropertyStatePair::Bitmask");

// /Script/CharacterDynamicsControlCore.ProxyProperty
// Kind: ScriptStruct; super: none
struct FProxyProperty
{
public:
    std::uint32_t Operator; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t BitArrayMask[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProxyProperty, Operator) == 0, "Offset mismatch for FProxyProperty::Operator");
static_assert(offsetof(FProxyProperty, BitArrayMask) == 8, "Offset mismatch for FProxyProperty::BitArrayMask");

// /Script/CharacterDynamicsControlCore.ProxyPropertyOrderingEditorData
// Kind: ScriptStruct; super: none
struct FProxyPropertyOrderingEditorData
{
public:
    TArray<void*> ReversePropertyOrder; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ProxyPropertyIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FProxyPropertyOrderingEditorData, ReversePropertyOrder) == 0, "Offset mismatch for FProxyPropertyOrderingEditorData::ReversePropertyOrder");
static_assert(offsetof(FProxyPropertyOrderingEditorData, ProxyPropertyIndex) == 16, "Offset mismatch for FProxyPropertyOrderingEditorData::ProxyPropertyIndex");

// /Script/CharacterDynamicsControlCore.WindGustParameters
// Kind: ScriptStruct; super: none
struct FWindGustParameters
{
public:
    float MinTimeBetweenGusts; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxTimeBetweenGusts; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinGustStrength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxGustStrength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinGustDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxGustDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float WindTurbulenceScalarA; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float WindTurbulenceScalarB; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinUpInterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxUpInterpSpeed; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MinDownInterpSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxDownInterpSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WindFrequency[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindAmplitude[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindOffset[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWindGustParameters, MinTimeBetweenGusts) == 0, "Offset mismatch for FWindGustParameters::MinTimeBetweenGusts");
static_assert(offsetof(FWindGustParameters, MaxTimeBetweenGusts) == 4, "Offset mismatch for FWindGustParameters::MaxTimeBetweenGusts");
static_assert(offsetof(FWindGustParameters, MinGustStrength) == 8, "Offset mismatch for FWindGustParameters::MinGustStrength");
static_assert(offsetof(FWindGustParameters, MaxGustStrength) == 12, "Offset mismatch for FWindGustParameters::MaxGustStrength");
static_assert(offsetof(FWindGustParameters, MinGustDuration) == 16, "Offset mismatch for FWindGustParameters::MinGustDuration");
static_assert(offsetof(FWindGustParameters, MaxGustDuration) == 20, "Offset mismatch for FWindGustParameters::MaxGustDuration");
static_assert(offsetof(FWindGustParameters, WindTurbulenceScalarA) == 24, "Offset mismatch for FWindGustParameters::WindTurbulenceScalarA");
static_assert(offsetof(FWindGustParameters, WindTurbulenceScalarB) == 28, "Offset mismatch for FWindGustParameters::WindTurbulenceScalarB");
static_assert(offsetof(FWindGustParameters, MinUpInterpSpeed) == 32, "Offset mismatch for FWindGustParameters::MinUpInterpSpeed");
static_assert(offsetof(FWindGustParameters, MaxUpInterpSpeed) == 36, "Offset mismatch for FWindGustParameters::MaxUpInterpSpeed");
static_assert(offsetof(FWindGustParameters, MinDownInterpSpeed) == 40, "Offset mismatch for FWindGustParameters::MinDownInterpSpeed");
static_assert(offsetof(FWindGustParameters, MaxDownInterpSpeed) == 44, "Offset mismatch for FWindGustParameters::MaxDownInterpSpeed");
static_assert(offsetof(FWindGustParameters, WindFrequency) == 48, "Offset mismatch for FWindGustParameters::WindFrequency");
static_assert(offsetof(FWindGustParameters, WindAmplitude) == 72, "Offset mismatch for FWindGustParameters::WindAmplitude");
static_assert(offsetof(FWindGustParameters, WindOffset) == 96, "Offset mismatch for FWindGustParameters::WindOffset");

// /Script/CharacterDynamicsControlCore.WindGustSettings
// Kind: ScriptStruct; super: none
struct FWindGustSettings
{
public:
    float ElapsedTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TimeBetweenGusts; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GustStrength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float GustDuration; // 0x000C (Size: 0x4, Type: FloatProperty)
    float FinalGustStrengthLocal; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWindGustSettings, ElapsedTime) == 0, "Offset mismatch for FWindGustSettings::ElapsedTime");
static_assert(offsetof(FWindGustSettings, TimeBetweenGusts) == 4, "Offset mismatch for FWindGustSettings::TimeBetweenGusts");
static_assert(offsetof(FWindGustSettings, GustStrength) == 8, "Offset mismatch for FWindGustSettings::GustStrength");
static_assert(offsetof(FWindGustSettings, GustDuration) == 12, "Offset mismatch for FWindGustSettings::GustDuration");
static_assert(offsetof(FWindGustSettings, FinalGustStrengthLocal) == 16, "Offset mismatch for FWindGustSettings::FinalGustStrengthLocal");

// /Script/CharacterDynamicsControlCore.FortCharacterDynamicsComponentInterface
// Kind: Class; super: ActorComponent
class UFortCharacterDynamicsComponentInterface
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFortCharacterDynamicsComponentInterface, PrimaryComponentTick) == 56, "Offset mismatch for UFortCharacterDynamicsComponentInterface::PrimaryComponentTick");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, ComponentTags) == 104, "Offset mismatch for UFortCharacterDynamicsComponentInterface::ComponentTags");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, AssetUserData) == 120, "Offset mismatch for UFortCharacterDynamicsComponentInterface::AssetUserData");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, UCSSerializationIndex) == 144, "Offset mismatch for UFortCharacterDynamicsComponentInterface::UCSSerializationIndex");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, bNetAddressable) == 152, "Offset mismatch for UFortCharacterDynamicsComponentInterface::bNetAddressable");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, bAutoActivate) == 154, "Offset mismatch for UFortCharacterDynamicsComponentInterface::bAutoActivate");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, bIsEditorOnly) == 155, "Offset mismatch for UFortCharacterDynamicsComponentInterface::bIsEditorOnly");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, CreationMethod) == 185, "Offset mismatch for UFortCharacterDynamicsComponentInterface::CreationMethod");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, OnComponentActivated) == 186, "Offset mismatch for UFortCharacterDynamicsComponentInterface::OnComponentActivated");
static_assert(offsetof(UFortCharacterDynamicsComponentInterface, OnComponentDeactivated) == 187, "Offset mismatch for UFortCharacterDynamicsComponentInterface::OnComponentDeactivated");

// /Script/CharacterDynamicsControlCore.FortCharacterDynamicsParameters
// Kind: Class; super: PrimaryDataAsset
class UFortCharacterDynamicsParameters
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StateNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClothParameters; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WindGustParameters; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RBWCControlAndModifierParameters; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RBWCTransitionParameters; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GravityOverrideParameters; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RigidBodyAnimNodeParameters; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCharacterDynamicsParameters, StateNames) == 40, "Offset mismatch for UFortCharacterDynamicsParameters::StateNames");
static_assert(offsetof(UFortCharacterDynamicsParameters, ClothParameters) == 56, "Offset mismatch for UFortCharacterDynamicsParameters::ClothParameters");
static_assert(offsetof(UFortCharacterDynamicsParameters, WindGustParameters) == 72, "Offset mismatch for UFortCharacterDynamicsParameters::WindGustParameters");
static_assert(offsetof(UFortCharacterDynamicsParameters, RBWCControlAndModifierParameters) == 88, "Offset mismatch for UFortCharacterDynamicsParameters::RBWCControlAndModifierParameters");
static_assert(offsetof(UFortCharacterDynamicsParameters, RBWCTransitionParameters) == 104, "Offset mismatch for UFortCharacterDynamicsParameters::RBWCTransitionParameters");
static_assert(offsetof(UFortCharacterDynamicsParameters, GravityOverrideParameters) == 120, "Offset mismatch for UFortCharacterDynamicsParameters::GravityOverrideParameters");
static_assert(offsetof(UFortCharacterDynamicsParameters, RigidBodyAnimNodeParameters) == 136, "Offset mismatch for UFortCharacterDynamicsParameters::RigidBodyAnimNodeParameters");

// /Script/CharacterDynamicsControlCore.FortCharacterDynamicsStateLogic
// Kind: Class; super: PrimaryDataAsset
class UFortCharacterDynamicsStateLogic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> BlueprintCharacterPropertyNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActivityStateNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActivityStateBinaryDecisionTree[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t DecisionTree[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    TArray<void*> ProxyPropertyCollection; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NativePropertyCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    float MinMovementSpeed; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MinRidingMovementSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinUpwardVelocityThreshold; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MaxFallingThreshold; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float HighRevolutionsPerSecondThreshold; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCharacterDynamicsStateLogic, BlueprintCharacterPropertyNames) == 40, "Offset mismatch for UFortCharacterDynamicsStateLogic::BlueprintCharacterPropertyNames");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, ActivityStateNames) == 56, "Offset mismatch for UFortCharacterDynamicsStateLogic::ActivityStateNames");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, ActivityStateBinaryDecisionTree) == 72, "Offset mismatch for UFortCharacterDynamicsStateLogic::ActivityStateBinaryDecisionTree");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, DecisionTree) == 88, "Offset mismatch for UFortCharacterDynamicsStateLogic::DecisionTree");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, ProxyPropertyCollection) == 104, "Offset mismatch for UFortCharacterDynamicsStateLogic::ProxyPropertyCollection");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, NativePropertyCount) == 120, "Offset mismatch for UFortCharacterDynamicsStateLogic::NativePropertyCount");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, MinMovementSpeed) == 124, "Offset mismatch for UFortCharacterDynamicsStateLogic::MinMovementSpeed");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, MinRidingMovementSpeed) == 128, "Offset mismatch for UFortCharacterDynamicsStateLogic::MinRidingMovementSpeed");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, MinUpwardVelocityThreshold) == 132, "Offset mismatch for UFortCharacterDynamicsStateLogic::MinUpwardVelocityThreshold");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, MaxFallingThreshold) == 136, "Offset mismatch for UFortCharacterDynamicsStateLogic::MaxFallingThreshold");
static_assert(offsetof(UFortCharacterDynamicsStateLogic, HighRevolutionsPerSecondThreshold) == 140, "Offset mismatch for UFortCharacterDynamicsStateLogic::HighRevolutionsPerSecondThreshold");

// /Script/CharacterDynamicsControlCore.FortClothAssetControllerStateParameterModifiers
// Kind: Class; super: PrimaryDataAsset
class UFortClothAssetControllerStateParameterModifiers
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Parameters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortClothAssetControllerStateParameterModifiers, Parameters) == 40, "Offset mismatch for UFortClothAssetControllerStateParameterModifiers::Parameters");
