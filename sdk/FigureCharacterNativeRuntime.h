/**
 * decamp dumper generated SDK
 * Package: /Script/FigureCharacterNativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FigureCharacterNativeRuntime.AssembledMeshSchemaData_AnimDataAssets
// Kind: ScriptStruct; super: AssembledMeshSchemaData
struct FAssembledMeshSchemaData_AnimDataAssets
{
public:
    TMap<void*, void*> DataAssetMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAssembledMeshSchemaData_AnimDataAssets, DataAssetMap) == 0, "Offset mismatch for FAssembledMeshSchemaData_AnimDataAssets::DataAssetMap");

// /Script/FigureCharacterNativeRuntime.JunoAccountItemDefinitionOverride
// Kind: ScriptStruct; super: none
struct FJunoAccountItemDefinitionOverride
{
public:
    TWeakObjectPtr<void> OverridenAccountItemDefinition; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoAccountItemDefinitionOverride, OverridenAccountItemDefinition) == 0, "Offset mismatch for FJunoAccountItemDefinitionOverride::OverridenAccountItemDefinition");

// /Script/FigureCharacterNativeRuntime.JunoClockSettings
// Kind: ScriptStruct; super: none
struct FJunoClockSettings
{
public:
    float TimeSpeedMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float YearSpeedMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HourHandAxis; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MinuteHandAxis; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SecondHandAxis; // 0x000A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000B
    float HourHandRestAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinuteHandRestAngle; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SecondHandRestAngle; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoClockSettings, TimeSpeedMultiplier) == 0, "Offset mismatch for FJunoClockSettings::TimeSpeedMultiplier");
static_assert(offsetof(FJunoClockSettings, YearSpeedMultiplier) == 4, "Offset mismatch for FJunoClockSettings::YearSpeedMultiplier");
static_assert(offsetof(FJunoClockSettings, HourHandAxis) == 8, "Offset mismatch for FJunoClockSettings::HourHandAxis");
static_assert(offsetof(FJunoClockSettings, MinuteHandAxis) == 9, "Offset mismatch for FJunoClockSettings::MinuteHandAxis");
static_assert(offsetof(FJunoClockSettings, SecondHandAxis) == 10, "Offset mismatch for FJunoClockSettings::SecondHandAxis");
static_assert(offsetof(FJunoClockSettings, HourHandRestAngle) == 12, "Offset mismatch for FJunoClockSettings::HourHandRestAngle");
static_assert(offsetof(FJunoClockSettings, MinuteHandRestAngle) == 16, "Offset mismatch for FJunoClockSettings::MinuteHandRestAngle");
static_assert(offsetof(FJunoClockSettings, SecondHandRestAngle) == 20, "Offset mismatch for FJunoClockSettings::SecondHandRestAngle");

// /Script/FigureCharacterNativeRuntime.JunoClothStateVariationSettings
// Kind: ScriptStruct; super: none
struct FJunoClothStateVariationSettings
{
public:
    FName VariationName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Parameters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ClothingSettings[0xF8]; // 0x0018 (Size: 0xF8, Type: StructProperty)
    std::uint8_t RBANSettings[0xA0]; // 0x0110 (Size: 0xA0, Type: StructProperty)
    std::uint8_t TrailControllerSettings[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoClothStateVariationSettings, VariationName) == 0, "Offset mismatch for FJunoClothStateVariationSettings::VariationName");
static_assert(offsetof(FJunoClothStateVariationSettings, Parameters) == 8, "Offset mismatch for FJunoClothStateVariationSettings::Parameters");
static_assert(offsetof(FJunoClothStateVariationSettings, ClothingSettings) == 24, "Offset mismatch for FJunoClothStateVariationSettings::ClothingSettings");
static_assert(offsetof(FJunoClothStateVariationSettings, RBANSettings) == 272, "Offset mismatch for FJunoClothStateVariationSettings::RBANSettings");
static_assert(offsetof(FJunoClothStateVariationSettings, TrailControllerSettings) == 432, "Offset mismatch for FJunoClothStateVariationSettings::TrailControllerSettings");

// /Script/FigureCharacterNativeRuntime.JunoClothWindSettings
// Kind: ScriptStruct; super: none
struct FJunoClothWindSettings
{
public:
    float WindSpeedVariationFrequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WindMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WindSpeedMin; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WindSpeedMax; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WindSpeedVariationAmplitude; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float WindDirectionFrequency; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float WindDirectionAmplitude; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoClothWindSettings, WindSpeedVariationFrequency) == 0, "Offset mismatch for FJunoClothWindSettings::WindSpeedVariationFrequency");
static_assert(offsetof(FJunoClothWindSettings, WindMultiplier) == 4, "Offset mismatch for FJunoClothWindSettings::WindMultiplier");
static_assert(offsetof(FJunoClothWindSettings, WindSpeedMin) == 8, "Offset mismatch for FJunoClothWindSettings::WindSpeedMin");
static_assert(offsetof(FJunoClothWindSettings, WindSpeedMax) == 12, "Offset mismatch for FJunoClothWindSettings::WindSpeedMax");
static_assert(offsetof(FJunoClothWindSettings, WindSpeedVariationAmplitude) == 16, "Offset mismatch for FJunoClothWindSettings::WindSpeedVariationAmplitude");
static_assert(offsetof(FJunoClothWindSettings, WindDirectionFrequency) == 20, "Offset mismatch for FJunoClothWindSettings::WindDirectionFrequency");
static_assert(offsetof(FJunoClothWindSettings, WindDirectionAmplitude) == 24, "Offset mismatch for FJunoClothWindSettings::WindDirectionAmplitude");

// /Script/FigureCharacterNativeRuntime.JunoClothingSettings
// Kind: ScriptStruct; super: none
struct FJunoClothingSettings
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
    std::uint8_t DragCoefficient[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t LiftCoefficient[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t LinearScaleVelocity[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    float AngularScaleVelocity; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float FicticuousAngularScale; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseBackstop; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B9
    std::uint8_t WindMultiplier[0x1C]; // 0x00BC (Size: 0x1C, Type: StructProperty)
    std::uint8_t BucklingRatio[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BucklingStiffness[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoClothingSettings, EdgeStiffness) == 0, "Offset mismatch for FJunoClothingSettings::EdgeStiffness");
static_assert(offsetof(FJunoClothingSettings, BendingStiffness) == 16, "Offset mismatch for FJunoClothingSettings::BendingStiffness");
static_assert(offsetof(FJunoClothingSettings, AreaStiffness) == 32, "Offset mismatch for FJunoClothingSettings::AreaStiffness");
static_assert(offsetof(FJunoClothingSettings, TetherStiffness) == 48, "Offset mismatch for FJunoClothingSettings::TetherStiffness");
static_assert(offsetof(FJunoClothingSettings, CollisionThickness) == 64, "Offset mismatch for FJunoClothingSettings::CollisionThickness");
static_assert(offsetof(FJunoClothingSettings, FrictionCoefficient) == 68, "Offset mismatch for FJunoClothingSettings::FrictionCoefficient");
static_assert(offsetof(FJunoClothingSettings, SelfCollisionThickness) == 72, "Offset mismatch for FJunoClothingSettings::SelfCollisionThickness");
static_assert(offsetof(FJunoClothingSettings, DampingCoefficient) == 76, "Offset mismatch for FJunoClothingSettings::DampingCoefficient");
static_assert(offsetof(FJunoClothingSettings, LocalDampingCoefficient) == 80, "Offset mismatch for FJunoClothingSettings::LocalDampingCoefficient");
static_assert(offsetof(FJunoClothingSettings, AnimDriveStiffness) == 88, "Offset mismatch for FJunoClothingSettings::AnimDriveStiffness");
static_assert(offsetof(FJunoClothingSettings, AnimDriveDamping) == 104, "Offset mismatch for FJunoClothingSettings::AnimDriveDamping");
static_assert(offsetof(FJunoClothingSettings, DragCoefficient) == 120, "Offset mismatch for FJunoClothingSettings::DragCoefficient");
static_assert(offsetof(FJunoClothingSettings, LiftCoefficient) == 136, "Offset mismatch for FJunoClothingSettings::LiftCoefficient");
static_assert(offsetof(FJunoClothingSettings, LinearScaleVelocity) == 152, "Offset mismatch for FJunoClothingSettings::LinearScaleVelocity");
static_assert(offsetof(FJunoClothingSettings, AngularScaleVelocity) == 176, "Offset mismatch for FJunoClothingSettings::AngularScaleVelocity");
static_assert(offsetof(FJunoClothingSettings, FicticuousAngularScale) == 180, "Offset mismatch for FJunoClothingSettings::FicticuousAngularScale");
static_assert(offsetof(FJunoClothingSettings, UseBackstop) == 184, "Offset mismatch for FJunoClothingSettings::UseBackstop");
static_assert(offsetof(FJunoClothingSettings, WindMultiplier) == 188, "Offset mismatch for FJunoClothingSettings::WindMultiplier");
static_assert(offsetof(FJunoClothingSettings, BucklingRatio) == 216, "Offset mismatch for FJunoClothingSettings::BucklingRatio");
static_assert(offsetof(FJunoClothingSettings, BucklingStiffness) == 232, "Offset mismatch for FJunoClothingSettings::BucklingStiffness");

// /Script/FigureCharacterNativeRuntime.JunoClothingStateSettings
// Kind: ScriptStruct; super: none
struct FJunoClothingStateSettings
{
public:
    std::uint8_t ClothingSettings[0xF8]; // 0x0000 (Size: 0xF8, Type: StructProperty)
    std::uint8_t RBANSettings[0xA0]; // 0x00F8 (Size: 0xA0, Type: StructProperty)
    TArray<void*> VariationSettings; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TrailControllerSettings[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoClothingStateSettings, ClothingSettings) == 0, "Offset mismatch for FJunoClothingStateSettings::ClothingSettings");
static_assert(offsetof(FJunoClothingStateSettings, RBANSettings) == 248, "Offset mismatch for FJunoClothingStateSettings::RBANSettings");
static_assert(offsetof(FJunoClothingStateSettings, VariationSettings) == 408, "Offset mismatch for FJunoClothingStateSettings::VariationSettings");
static_assert(offsetof(FJunoClothingStateSettings, TrailControllerSettings) == 424, "Offset mismatch for FJunoClothingStateSettings::TrailControllerSettings");

// /Script/FigureCharacterNativeRuntime.JunoPlaybackSettings
// Kind: ScriptStruct; super: none
struct FJunoPlaybackSettings
{
public:
    float SpeedMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedRelative; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ForwardAxis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Stiffness; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AnimationLength; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RotationMultiplier; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotatorAxis; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoPlaybackSettings, SpeedMultiplier) == 0, "Offset mismatch for FJunoPlaybackSettings::SpeedMultiplier");
static_assert(offsetof(FJunoPlaybackSettings, SpeedRelative) == 4, "Offset mismatch for FJunoPlaybackSettings::SpeedRelative");
static_assert(offsetof(FJunoPlaybackSettings, ForwardAxis) == 8, "Offset mismatch for FJunoPlaybackSettings::ForwardAxis");
static_assert(offsetof(FJunoPlaybackSettings, Stiffness) == 32, "Offset mismatch for FJunoPlaybackSettings::Stiffness");
static_assert(offsetof(FJunoPlaybackSettings, Damping) == 36, "Offset mismatch for FJunoPlaybackSettings::Damping");
static_assert(offsetof(FJunoPlaybackSettings, MaxSpeed) == 40, "Offset mismatch for FJunoPlaybackSettings::MaxSpeed");
static_assert(offsetof(FJunoPlaybackSettings, AnimationLength) == 44, "Offset mismatch for FJunoPlaybackSettings::AnimationLength");
static_assert(offsetof(FJunoPlaybackSettings, RotationMultiplier) == 48, "Offset mismatch for FJunoPlaybackSettings::RotationMultiplier");
static_assert(offsetof(FJunoPlaybackSettings, RotatorAxis) == 52, "Offset mismatch for FJunoPlaybackSettings::RotatorAxis");

// /Script/FigureCharacterNativeRuntime.JunoPropHeadLookAt
// Kind: ScriptStruct; super: none
struct FJunoPropHeadLookAt
{
public:
    std::uint8_t HeadBoneName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float LookAtRange; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float HeadAngleClampMin; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float HeadAngleClampMax; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RangeBlendSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float HeadTurnSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float LookAtBlend; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float CurrentHeadAngle; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPropHeadLookAt, HeadBoneName) == 0, "Offset mismatch for FJunoPropHeadLookAt::HeadBoneName");
static_assert(offsetof(FJunoPropHeadLookAt, LookAtRange) == 4, "Offset mismatch for FJunoPropHeadLookAt::LookAtRange");
static_assert(offsetof(FJunoPropHeadLookAt, HeadAngleClampMin) == 8, "Offset mismatch for FJunoPropHeadLookAt::HeadAngleClampMin");
static_assert(offsetof(FJunoPropHeadLookAt, HeadAngleClampMax) == 12, "Offset mismatch for FJunoPropHeadLookAt::HeadAngleClampMax");
static_assert(offsetof(FJunoPropHeadLookAt, RangeBlendSpeed) == 16, "Offset mismatch for FJunoPropHeadLookAt::RangeBlendSpeed");
static_assert(offsetof(FJunoPropHeadLookAt, HeadTurnSpeed) == 20, "Offset mismatch for FJunoPropHeadLookAt::HeadTurnSpeed");
static_assert(offsetof(FJunoPropHeadLookAt, LookAtBlend) == 24, "Offset mismatch for FJunoPropHeadLookAt::LookAtBlend");
static_assert(offsetof(FJunoPropHeadLookAt, CurrentHeadAngle) == 28, "Offset mismatch for FJunoPropHeadLookAt::CurrentHeadAngle");

// /Script/FigureCharacterNativeRuntime.JunoRBANSettings
// Kind: ScriptStruct; super: none
struct FJunoRBANSettings
{
public:
    std::uint8_t GravityOverride[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t JointName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t WindMultiplier[0x1C]; // 0x001C (Size: 0x1C, Type: StructProperty)
    std::uint8_t SimSpaceSettings[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoRBANSettings, GravityOverride) == 0, "Offset mismatch for FJunoRBANSettings::GravityOverride");
static_assert(offsetof(FJunoRBANSettings, JointName) == 24, "Offset mismatch for FJunoRBANSettings::JointName");
static_assert(offsetof(FJunoRBANSettings, WindMultiplier) == 28, "Offset mismatch for FJunoRBANSettings::WindMultiplier");
static_assert(offsetof(FJunoRBANSettings, SimSpaceSettings) == 56, "Offset mismatch for FJunoRBANSettings::SimSpaceSettings");

// /Script/FigureCharacterNativeRuntime.JunoStateVariation
// Kind: ScriptStruct; super: none
struct FJunoStateVariation
{
public:
    std::uint8_t Parameter; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Operator; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoStateVariation, Parameter) == 0, "Offset mismatch for FJunoStateVariation::Parameter");
static_assert(offsetof(FJunoStateVariation, Operator) == 1, "Offset mismatch for FJunoStateVariation::Operator");
static_assert(offsetof(FJunoStateVariation, Value) == 4, "Offset mismatch for FJunoStateVariation::Value");

// /Script/FigureCharacterNativeRuntime.JunoTrailControllerSettings
// Kind: ScriptStruct; super: none
struct FJunoTrailControllerSettings
{
public:
    float Alpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RelationSpeedScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoTrailControllerSettings, Alpha) == 0, "Offset mismatch for FJunoTrailControllerSettings::Alpha");
static_assert(offsetof(FJunoTrailControllerSettings, RelationSpeedScale) == 4, "Offset mismatch for FJunoTrailControllerSettings::RelationSpeedScale");

// /Script/FigureCharacterNativeRuntime.JunoAccountItemDefinitionOverrideExtension
// Kind: Class; super: FortGameFeatureActionMultipleAsset
class UJunoAccountItemDefinitionOverrideExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FigureCharacterNativeRuntime.JunoAccountItemDefinitionOverrideManager
// Kind: Class; super: Object
class UJunoAccountItemDefinitionOverrideManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* JunoHeroDefinition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DefaultCharacters; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PreviewActorClasses; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GameplayTagParentsToRemoveFromOverrides; // 0x0050 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GameplayTagsToAdd; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CosmeticsMarkupGameplayTagsToAllow; // 0x0070 (Size: 0x10, Type: MapProperty)
    std::uint8_t CosmeticsProhibitedByHotfix[0x10]; // 0x0080 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> Overrides; // 0x0090 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00A0
    std::uint8_t bCheckContextForTagQuery; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    // 0x00B0 BoolProperty bEnabledWhenTagsNotSupported (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x00B1
    std::uint8_t ContextTagQuery[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, JunoHeroDefinition) == 48, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::JunoHeroDefinition");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, DefaultCharacters) == 56, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::DefaultCharacters");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, PreviewActorClasses) == 64, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::PreviewActorClasses");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, GameplayTagParentsToRemoveFromOverrides) == 80, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::GameplayTagParentsToRemoveFromOverrides");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, GameplayTagsToAdd) == 96, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::GameplayTagsToAdd");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, CosmeticsMarkupGameplayTagsToAllow) == 112, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::CosmeticsMarkupGameplayTagsToAllow");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, CosmeticsProhibitedByHotfix) == 128, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::CosmeticsProhibitedByHotfix");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, Overrides) == 144, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::Overrides");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, bCheckContextForTagQuery) == 176, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::bCheckContextForTagQuery");
static_assert(offsetof(UJunoAccountItemDefinitionOverrideManager, ContextTagQuery) == 184, "Offset mismatch for UJunoAccountItemDefinitionOverrideManager::ContextTagQuery");

// /Script/FigureCharacterNativeRuntime.JunoAccountItemOverrideDefinition
// Kind: Class; super: PrimaryDataAsset
class UJunoAccountItemOverrideDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagsToAdd[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TArray<void*> ItemVariantsOverride; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideFrontendTransform; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    float FrontendPreviewScale; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrontendPreviewPivotOffset[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t FrontendPreviewInitialRotation[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t FrontendPreviewPawnRotationOffset[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    TSoftClassPtr<void> PreviewActorClass; // 0x00A8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJunoAccountItemOverrideDefinition, GameplayTagsToAdd) == 40, "Offset mismatch for UJunoAccountItemOverrideDefinition::GameplayTagsToAdd");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, ItemVariantsOverride) == 72, "Offset mismatch for UJunoAccountItemOverrideDefinition::ItemVariantsOverride");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, bOverrideFrontendTransform) == 88, "Offset mismatch for UJunoAccountItemOverrideDefinition::bOverrideFrontendTransform");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, FrontendPreviewScale) == 92, "Offset mismatch for UJunoAccountItemOverrideDefinition::FrontendPreviewScale");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, FrontendPreviewPivotOffset) == 96, "Offset mismatch for UJunoAccountItemOverrideDefinition::FrontendPreviewPivotOffset");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, FrontendPreviewInitialRotation) == 120, "Offset mismatch for UJunoAccountItemOverrideDefinition::FrontendPreviewInitialRotation");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, FrontendPreviewPawnRotationOffset) == 144, "Offset mismatch for UJunoAccountItemOverrideDefinition::FrontendPreviewPawnRotationOffset");
static_assert(offsetof(UJunoAccountItemOverrideDefinition, PreviewActorClass) == 168, "Offset mismatch for UJunoAccountItemOverrideDefinition::PreviewActorClass");

// /Script/FigureCharacterNativeRuntime.JunoAthenaCharacterItemOverrideDefinition
// Kind: Class; super: JunoAccountItemOverrideDefinition
class UJunoAthenaCharacterItemOverrideDefinition
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t BaseAthenaCharacterItemDefinition[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BaseAthenaCharacterAssetId[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AssembledMeshSchema[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LowDetailsAssembledMeshSchema[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    float PreviewPawnScale; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0144
    std::uint8_t WidePreviewImage[0x20]; // 0x0148 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x0168 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargePreviewImage[0x20]; // 0x0188 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LowDetailsWidePreviewImage[0x20]; // 0x01A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LowDetailsSmallPreviewImage[0x20]; // 0x01C8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> LowDetailsLargePreviewImage; // 0x01E8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, BaseAthenaCharacterItemDefinition) == 216, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::BaseAthenaCharacterItemDefinition");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, BaseAthenaCharacterAssetId) == 248, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::BaseAthenaCharacterAssetId");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, AssembledMeshSchema) == 256, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::AssembledMeshSchema");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, LowDetailsAssembledMeshSchema) == 288, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::LowDetailsAssembledMeshSchema");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, PreviewPawnScale) == 320, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::PreviewPawnScale");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, WidePreviewImage) == 328, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::WidePreviewImage");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, SmallPreviewImage) == 360, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::SmallPreviewImage");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, LargePreviewImage) == 392, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::LargePreviewImage");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, LowDetailsWidePreviewImage) == 424, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::LowDetailsWidePreviewImage");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, LowDetailsSmallPreviewImage) == 456, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::LowDetailsSmallPreviewImage");
static_assert(offsetof(UJunoAthenaCharacterItemOverrideDefinition, LowDetailsLargePreviewImage) == 488, "Offset mismatch for UJunoAthenaCharacterItemOverrideDefinition::LowDetailsLargePreviewImage");

// /Script/FigureCharacterNativeRuntime.JunoAthenaDanceItemOverrideDefinition
// Kind: Class; super: JunoAccountItemOverrideDefinition
class UJunoAthenaDanceItemOverrideDefinition
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t BaseAthenaDanceItemDefinition[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BaseAthenaDanceAssetId[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Animation[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnimationFemaleOverride[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> AnimationOverrides; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverridePlayRandomSectionByName; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0149
    TArray<void*> PlayRandomSectionByName; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FrontEndAnimation[0x20]; // 0x0160 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FrontEndAnimationFemaleOverride[0x20]; // 0x0180 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> FrontEndAnimationOverrides; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverridePreviewDuration; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01B1
    std::int32_t PreviewLoops; // 0x01B4 (Size: 0x4, Type: IntProperty)
    float PreviewLength; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01BC
    std::uint8_t GroupEmotePositionOffset[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    float GroupEmotePositionOffsetTolerance; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float GroupEmoteFollowDistance; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float WalkForwardSpeed; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float StaticToTraversalBlendTime; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float TraversalToStaticBlendTime; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableGroupEmoteFollowerPreview; // 0x01EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideGroupEmotePreviewSettings; // 0x01ED (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x01EE
    std::uint8_t GroupEmotePreviewSettings[0x78]; // 0x01F0 (Size: 0x78, Type: StructProperty)
    std::uint8_t bOverrideMontageSelectionGroups; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0269
    TArray<void*> MontageSelectionGroups; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, BaseAthenaDanceItemDefinition) == 208, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::BaseAthenaDanceItemDefinition");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, BaseAthenaDanceAssetId) == 240, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::BaseAthenaDanceAssetId");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, Animation) == 248, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::Animation");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, AnimationFemaleOverride) == 280, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::AnimationFemaleOverride");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, AnimationOverrides) == 312, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::AnimationOverrides");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, bOverridePlayRandomSectionByName) == 328, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::bOverridePlayRandomSectionByName");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, PlayRandomSectionByName) == 336, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::PlayRandomSectionByName");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, FrontEndAnimation) == 352, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::FrontEndAnimation");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, FrontEndAnimationFemaleOverride) == 384, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::FrontEndAnimationFemaleOverride");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, FrontEndAnimationOverrides) == 416, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::FrontEndAnimationOverrides");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, bOverridePreviewDuration) == 432, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::bOverridePreviewDuration");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, PreviewLoops) == 436, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::PreviewLoops");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, PreviewLength) == 440, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::PreviewLength");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, GroupEmotePositionOffset) == 448, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::GroupEmotePositionOffset");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, GroupEmotePositionOffsetTolerance) == 472, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::GroupEmotePositionOffsetTolerance");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, GroupEmoteFollowDistance) == 476, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::GroupEmoteFollowDistance");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, WalkForwardSpeed) == 480, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::WalkForwardSpeed");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, StaticToTraversalBlendTime) == 484, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::StaticToTraversalBlendTime");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, TraversalToStaticBlendTime) == 488, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::TraversalToStaticBlendTime");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, bEnableGroupEmoteFollowerPreview) == 492, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::bEnableGroupEmoteFollowerPreview");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, bOverrideGroupEmotePreviewSettings) == 493, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::bOverrideGroupEmotePreviewSettings");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, GroupEmotePreviewSettings) == 496, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::GroupEmotePreviewSettings");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, bOverrideMontageSelectionGroups) == 616, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::bOverrideMontageSelectionGroups");
static_assert(offsetof(UJunoAthenaDanceItemOverrideDefinition, MontageSelectionGroups) == 624, "Offset mismatch for UJunoAthenaDanceItemOverrideDefinition::MontageSelectionGroups");

// /Script/FigureCharacterNativeRuntime.JunoBldgAnimInstance
// Kind: Class; super: AnimInstance
class UJunoBldgAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bSyncEnabled; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0261
    std::uint8_t PlaybackSettings[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t SwitchDirection; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02A1
    float PlaybackTime; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlaybackRotator[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    float CurrentSpeed; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x30]; // 0x02C4
    TWeakObjectPtr<void> RootPhysicsObject; // 0x02F4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SyncLeaderABP; // 0x02FC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsSyncLeader; // 0x0304 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHadSyncLeader; // 0x0305 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBldgAnimInstance, bSyncEnabled) == 608, "Offset mismatch for UJunoBldgAnimInstance::bSyncEnabled");
static_assert(offsetof(UJunoBldgAnimInstance, PlaybackSettings) == 616, "Offset mismatch for UJunoBldgAnimInstance::PlaybackSettings");
static_assert(offsetof(UJunoBldgAnimInstance, SwitchDirection) == 672, "Offset mismatch for UJunoBldgAnimInstance::SwitchDirection");
static_assert(offsetof(UJunoBldgAnimInstance, PlaybackTime) == 676, "Offset mismatch for UJunoBldgAnimInstance::PlaybackTime");
static_assert(offsetof(UJunoBldgAnimInstance, PlaybackRotator) == 680, "Offset mismatch for UJunoBldgAnimInstance::PlaybackRotator");
static_assert(offsetof(UJunoBldgAnimInstance, CurrentSpeed) == 704, "Offset mismatch for UJunoBldgAnimInstance::CurrentSpeed");
static_assert(offsetof(UJunoBldgAnimInstance, RootPhysicsObject) == 756, "Offset mismatch for UJunoBldgAnimInstance::RootPhysicsObject");
static_assert(offsetof(UJunoBldgAnimInstance, SyncLeaderABP) == 764, "Offset mismatch for UJunoBldgAnimInstance::SyncLeaderABP");
static_assert(offsetof(UJunoBldgAnimInstance, bIsSyncLeader) == 772, "Offset mismatch for UJunoBldgAnimInstance::bIsSyncLeader");
static_assert(offsetof(UJunoBldgAnimInstance, bHadSyncLeader) == 773, "Offset mismatch for UJunoBldgAnimInstance::bHadSyncLeader");

// /Script/FigureCharacterNativeRuntime.JunoClockAnimInstance
// Kind: Class; super: AnimInstance
class UJunoClockAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t Settings[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    float TimeOfDayHours; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float YearProgress; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HourRotator[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinuteRotator[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondRotator[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoClockAnimInstance, Settings) == 608, "Offset mismatch for UJunoClockAnimInstance::Settings");
static_assert(offsetof(UJunoClockAnimInstance, TimeOfDayHours) == 632, "Offset mismatch for UJunoClockAnimInstance::TimeOfDayHours");
static_assert(offsetof(UJunoClockAnimInstance, YearProgress) == 636, "Offset mismatch for UJunoClockAnimInstance::YearProgress");
static_assert(offsetof(UJunoClockAnimInstance, HourRotator) == 640, "Offset mismatch for UJunoClockAnimInstance::HourRotator");
static_assert(offsetof(UJunoClockAnimInstance, MinuteRotator) == 664, "Offset mismatch for UJunoClockAnimInstance::MinuteRotator");
static_assert(offsetof(UJunoClockAnimInstance, SecondRotator) == 688, "Offset mismatch for UJunoClockAnimInstance::SecondRotator");

// /Script/FigureCharacterNativeRuntime.JunoClothStateSettings
// Kind: Class; super: DataAsset
class UJunoClothStateSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClothStateSettings; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> WeatherWindSettings; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoClothStateSettings, ClothStateSettings) == 40, "Offset mismatch for UJunoClothStateSettings::ClothStateSettings");
static_assert(offsetof(UJunoClothStateSettings, WeatherWindSettings) == 56, "Offset mismatch for UJunoClothStateSettings::WeatherWindSettings");

// /Script/FigureCharacterNativeRuntime.JunoFigureCapeAnimLogic
// Kind: Class; super: AnimInstance
class UJunoFigureCapeAnimLogic
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bPlayerIsSneaking; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSkydiving; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsParachuteOpen; // 0x0262 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClothEnabled; // 0x0263 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRigidBodyEnabled; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInVehicle; // 0x0265 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSurfaceSwimming; // 0x0266 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGliderIsOpen; // 0x0267 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerIsSprinting; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling; // 0x0269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerIsFlying; // 0x026A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x026B
    float PawnSpeed2D; // 0x026C (Size: 0x4, Type: FloatProperty)
    float VelocityZ; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0274
    std::uint8_t PawnVelocity[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalVelocity[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravityOverride_Native[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentClothSettings_Native[0xF8]; // 0x02C0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t CurrentRBANSettings_Native[0xA0]; // 0x03B8 (Size: 0xA0, Type: StructProperty)
    std::uint8_t PreviousClothSettings_Native[0xF8]; // 0x0458 (Size: 0xF8, Type: StructProperty)
    std::uint8_t PreviousRBANSettings_Native[0xA0]; // 0x0550 (Size: 0xA0, Type: StructProperty)
    std::uint8_t SettingsChanged_Native; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05F1
    std::uint8_t SimSpaceSettings_Native[0x68]; // 0x05F8 (Size: 0x68, Type: StructProperty)
    float BlendDeltaTime_Native; // 0x0660 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WindWeatherSettings_Native[0x1C]; // 0x0664 (Size: 0x1C, Type: StructProperty)
    std::uint8_t PreviousState_Native; // 0x0680 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentState_Native; // 0x0681 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0682
    std::uint8_t CurrentVariationName_Native[0x4]; // 0x0684 (Size: 0x4, Type: NameProperty)
    FName PreviousVariationName_Native; // 0x0688 (Size: 0x8, Type: NameProperty)
    void* ChaosClothInteractor_Native; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* ClothStateSettings_Native; // 0x0698 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Debug_Native; // 0x06A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x06A1
    std::uint8_t TrailControllerSettings_Native[0x8]; // 0x06A4 (Size: 0x8, Type: StructProperty)
    float LocalVelocityYawAngle_Native; // 0x06AC (Size: 0x4, Type: FloatProperty)
    float LocalAccelYawAngle_Native; // 0x06B0 (Size: 0x4, Type: FloatProperty)
    float LocalVelocityRight_Native; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    float PelvisRotationYPitch_Native; // 0x06B8 (Size: 0x4, Type: FloatProperty)
    float InterpedYaw_Native; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float YawInterpSpeed_Native; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ApplyPoseControlRig_Native; // 0x06C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ApplyPoseDrivers_Native; // 0x06C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x06C6
    void* MaterialCollection; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    float CapeVelocity_Native; // 0x06D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DisableCapePhysics_Native; // 0x06D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x06D5
    float CapeWhipYawRateThreshold; // 0x06D8 (Size: 0x4, Type: FloatProperty)
    float CapeWhipAccelThreshold; // 0x06DC (Size: 0x4, Type: FloatProperty)
    float PreviousMeshYaw_Native; // 0x06E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x06E4
    std::uint8_t PreviousOwnerVelocity_Native[0x18]; // 0x06E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bYawInitialized_Native; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasWhipping_Native; // 0x0701 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCapeDivergenceWatchdog; // 0x0702 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x1]; // 0x0703
    float DivergenceBoundsMultiplier; // 0x0704 (Size: 0x4, Type: FloatProperty)
    float DivergenceIdleBoundsMultiplier; // 0x0708 (Size: 0x4, Type: FloatProperty)
    float DivergenceIdleMaxSpeed; // 0x070C (Size: 0x4, Type: FloatProperty)
    float DivergenceIdleMaxWindSpeed; // 0x0710 (Size: 0x4, Type: FloatProperty)
    float DivergenceIdlePersistTime; // 0x0714 (Size: 0x4, Type: FloatProperty)
    float DivergenceCheckInterval; // 0x0718 (Size: 0x4, Type: FloatProperty)
    float DivergencePersistTime; // 0x071C (Size: 0x4, Type: FloatProperty)
    float DivergenceResetCooldown; // 0x0720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDivergenceSkipWhenNotRendered; // 0x0724 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x0725
    float DivergenceCheckAccum_Native; // 0x0728 (Size: 0x4, Type: FloatProperty)
    float DivergenceOverTime_Native; // 0x072C (Size: 0x4, Type: FloatProperty)
    float DivergenceIdleOverTime_Native; // 0x0730 (Size: 0x4, Type: FloatProperty)
    float CapeWindSpeed_Native; // 0x0734 (Size: 0x4, Type: FloatProperty)
    float DivergenceResetCooldownRemaining_Native; // 0x0738 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoFigureCapeAnimLogic, bPlayerIsSneaking) == 608, "Offset mismatch for UJunoFigureCapeAnimLogic::bPlayerIsSneaking");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bIsSkydiving) == 609, "Offset mismatch for UJunoFigureCapeAnimLogic::bIsSkydiving");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bIsParachuteOpen) == 610, "Offset mismatch for UJunoFigureCapeAnimLogic::bIsParachuteOpen");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bClothEnabled) == 611, "Offset mismatch for UJunoFigureCapeAnimLogic::bClothEnabled");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bRigidBodyEnabled) == 612, "Offset mismatch for UJunoFigureCapeAnimLogic::bRigidBodyEnabled");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bIsInVehicle) == 613, "Offset mismatch for UJunoFigureCapeAnimLogic::bIsInVehicle");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bIsSurfaceSwimming) == 614, "Offset mismatch for UJunoFigureCapeAnimLogic::bIsSurfaceSwimming");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bGliderIsOpen) == 615, "Offset mismatch for UJunoFigureCapeAnimLogic::bGliderIsOpen");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bPlayerIsSprinting) == 616, "Offset mismatch for UJunoFigureCapeAnimLogic::bPlayerIsSprinting");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bIsFalling) == 617, "Offset mismatch for UJunoFigureCapeAnimLogic::bIsFalling");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bPlayerIsFlying) == 618, "Offset mismatch for UJunoFigureCapeAnimLogic::bPlayerIsFlying");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PawnSpeed2D) == 620, "Offset mismatch for UJunoFigureCapeAnimLogic::PawnSpeed2D");
static_assert(offsetof(UJunoFigureCapeAnimLogic, VelocityZ) == 624, "Offset mismatch for UJunoFigureCapeAnimLogic::VelocityZ");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PawnVelocity) == 632, "Offset mismatch for UJunoFigureCapeAnimLogic::PawnVelocity");
static_assert(offsetof(UJunoFigureCapeAnimLogic, LocalVelocity) == 656, "Offset mismatch for UJunoFigureCapeAnimLogic::LocalVelocity");
static_assert(offsetof(UJunoFigureCapeAnimLogic, GravityOverride_Native) == 680, "Offset mismatch for UJunoFigureCapeAnimLogic::GravityOverride_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CurrentClothSettings_Native) == 704, "Offset mismatch for UJunoFigureCapeAnimLogic::CurrentClothSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CurrentRBANSettings_Native) == 952, "Offset mismatch for UJunoFigureCapeAnimLogic::CurrentRBANSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousClothSettings_Native) == 1112, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousClothSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousRBANSettings_Native) == 1360, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousRBANSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, SettingsChanged_Native) == 1520, "Offset mismatch for UJunoFigureCapeAnimLogic::SettingsChanged_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, SimSpaceSettings_Native) == 1528, "Offset mismatch for UJunoFigureCapeAnimLogic::SimSpaceSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, BlendDeltaTime_Native) == 1632, "Offset mismatch for UJunoFigureCapeAnimLogic::BlendDeltaTime_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, WindWeatherSettings_Native) == 1636, "Offset mismatch for UJunoFigureCapeAnimLogic::WindWeatherSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousState_Native) == 1664, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousState_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CurrentState_Native) == 1665, "Offset mismatch for UJunoFigureCapeAnimLogic::CurrentState_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CurrentVariationName_Native) == 1668, "Offset mismatch for UJunoFigureCapeAnimLogic::CurrentVariationName_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousVariationName_Native) == 1672, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousVariationName_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, ChaosClothInteractor_Native) == 1680, "Offset mismatch for UJunoFigureCapeAnimLogic::ChaosClothInteractor_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, ClothStateSettings_Native) == 1688, "Offset mismatch for UJunoFigureCapeAnimLogic::ClothStateSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, Debug_Native) == 1696, "Offset mismatch for UJunoFigureCapeAnimLogic::Debug_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, TrailControllerSettings_Native) == 1700, "Offset mismatch for UJunoFigureCapeAnimLogic::TrailControllerSettings_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, LocalVelocityYawAngle_Native) == 1708, "Offset mismatch for UJunoFigureCapeAnimLogic::LocalVelocityYawAngle_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, LocalAccelYawAngle_Native) == 1712, "Offset mismatch for UJunoFigureCapeAnimLogic::LocalAccelYawAngle_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, LocalVelocityRight_Native) == 1716, "Offset mismatch for UJunoFigureCapeAnimLogic::LocalVelocityRight_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PelvisRotationYPitch_Native) == 1720, "Offset mismatch for UJunoFigureCapeAnimLogic::PelvisRotationYPitch_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, InterpedYaw_Native) == 1724, "Offset mismatch for UJunoFigureCapeAnimLogic::InterpedYaw_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, YawInterpSpeed_Native) == 1728, "Offset mismatch for UJunoFigureCapeAnimLogic::YawInterpSpeed_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, ApplyPoseControlRig_Native) == 1732, "Offset mismatch for UJunoFigureCapeAnimLogic::ApplyPoseControlRig_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, ApplyPoseDrivers_Native) == 1733, "Offset mismatch for UJunoFigureCapeAnimLogic::ApplyPoseDrivers_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, MaterialCollection) == 1736, "Offset mismatch for UJunoFigureCapeAnimLogic::MaterialCollection");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CapeVelocity_Native) == 1744, "Offset mismatch for UJunoFigureCapeAnimLogic::CapeVelocity_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DisableCapePhysics_Native) == 1748, "Offset mismatch for UJunoFigureCapeAnimLogic::DisableCapePhysics_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CapeWhipYawRateThreshold) == 1752, "Offset mismatch for UJunoFigureCapeAnimLogic::CapeWhipYawRateThreshold");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CapeWhipAccelThreshold) == 1756, "Offset mismatch for UJunoFigureCapeAnimLogic::CapeWhipAccelThreshold");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousMeshYaw_Native) == 1760, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousMeshYaw_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, PreviousOwnerVelocity_Native) == 1768, "Offset mismatch for UJunoFigureCapeAnimLogic::PreviousOwnerVelocity_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bYawInitialized_Native) == 1792, "Offset mismatch for UJunoFigureCapeAnimLogic::bYawInitialized_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bWasWhipping_Native) == 1793, "Offset mismatch for UJunoFigureCapeAnimLogic::bWasWhipping_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bEnableCapeDivergenceWatchdog) == 1794, "Offset mismatch for UJunoFigureCapeAnimLogic::bEnableCapeDivergenceWatchdog");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceBoundsMultiplier) == 1796, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceBoundsMultiplier");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceIdleBoundsMultiplier) == 1800, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceIdleBoundsMultiplier");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceIdleMaxSpeed) == 1804, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceIdleMaxSpeed");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceIdleMaxWindSpeed) == 1808, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceIdleMaxWindSpeed");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceIdlePersistTime) == 1812, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceIdlePersistTime");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceCheckInterval) == 1816, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceCheckInterval");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergencePersistTime) == 1820, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergencePersistTime");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceResetCooldown) == 1824, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceResetCooldown");
static_assert(offsetof(UJunoFigureCapeAnimLogic, bDivergenceSkipWhenNotRendered) == 1828, "Offset mismatch for UJunoFigureCapeAnimLogic::bDivergenceSkipWhenNotRendered");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceCheckAccum_Native) == 1832, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceCheckAccum_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceOverTime_Native) == 1836, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceOverTime_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceIdleOverTime_Native) == 1840, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceIdleOverTime_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, CapeWindSpeed_Native) == 1844, "Offset mismatch for UJunoFigureCapeAnimLogic::CapeWindSpeed_Native");
static_assert(offsetof(UJunoFigureCapeAnimLogic, DivergenceResetCooldownRemaining_Native) == 1848, "Offset mismatch for UJunoFigureCapeAnimLogic::DivergenceResetCooldownRemaining_Native");

// /Script/FigureCharacterNativeRuntime.JunoFigureMutableAnimLogic
// Kind: Class; super: AnimInstance
class UJunoFigureMutableAnimLogic
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::int32_t ABP_LOD_Level; // 0x0260 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnCurrentLOD; // 0x0264 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPlayerFaceIsVisible; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMinifigDisableHeadConstraints; // 0x0269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnIsDying; // 0x026A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstraintHipPegsAlpha_Native; // 0x026B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNoT_Native; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNoR_Native; // 0x026D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableHeadConstraints_Native; // 0x026E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x026F
    float HeadRAlpha_Native; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0274
    std::uint8_t HipAccHandAttachOffset[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHideHipAcc; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0291
    float ArmRIgnoreHipAccOffset; // 0x0294 (Size: 0x4, Type: FloatProperty)
    float ArmLIgnoreHipAccOffset; // 0x0298 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableHipAccOffset; // 0x029C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x029D
    std::uint8_t HipAccOffset_Native[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableNeckAccOffset_Native; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeckAccRotateWithHead_Native; // 0x02B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x02BA
    std::uint8_t NeckAccOffset_Native[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t HeadConstraint; // 0x02D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NeckAccConstraint; // 0x02D9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequiresControlRig; // 0x02DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableControlRig; // 0x02DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableControlRigOnlyWhenFaceIsVisible; // 0x02DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x02DD
    TArray<void*> IKTargets; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> SceneActorComp; // 0x02F0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> BlankBrowValues_Native; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableBlankBrow; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0309
    float BrowRightPose; // 0x030C (Size: 0x4, Type: FloatProperty)
    float BrowLeftPose; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float DisableEyeMovement; // 0x0314 (Size: 0x4, Type: FloatProperty)
    float ShrinkNeckPeg; // 0x0318 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoFigureMutableAnimLogic, ABP_LOD_Level) == 608, "Offset mismatch for UJunoFigureMutableAnimLogic::ABP_LOD_Level");
static_assert(offsetof(UJunoFigureMutableAnimLogic, PawnCurrentLOD) == 612, "Offset mismatch for UJunoFigureMutableAnimLogic::PawnCurrentLOD");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bPlayerFaceIsVisible) == 616, "Offset mismatch for UJunoFigureMutableAnimLogic::bPlayerFaceIsVisible");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bMinifigDisableHeadConstraints) == 617, "Offset mismatch for UJunoFigureMutableAnimLogic::bMinifigDisableHeadConstraints");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bPawnIsDying) == 618, "Offset mismatch for UJunoFigureMutableAnimLogic::bPawnIsDying");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bConstraintHipPegsAlpha_Native) == 619, "Offset mismatch for UJunoFigureMutableAnimLogic::bConstraintHipPegsAlpha_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableNoT_Native) == 620, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableNoT_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableNoR_Native) == 621, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableNoR_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bDisableHeadConstraints_Native) == 622, "Offset mismatch for UJunoFigureMutableAnimLogic::bDisableHeadConstraints_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, HeadRAlpha_Native) == 624, "Offset mismatch for UJunoFigureMutableAnimLogic::HeadRAlpha_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, HipAccHandAttachOffset) == 632, "Offset mismatch for UJunoFigureMutableAnimLogic::HipAccHandAttachOffset");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bHideHipAcc) == 656, "Offset mismatch for UJunoFigureMutableAnimLogic::bHideHipAcc");
static_assert(offsetof(UJunoFigureMutableAnimLogic, ArmRIgnoreHipAccOffset) == 660, "Offset mismatch for UJunoFigureMutableAnimLogic::ArmRIgnoreHipAccOffset");
static_assert(offsetof(UJunoFigureMutableAnimLogic, ArmLIgnoreHipAccOffset) == 664, "Offset mismatch for UJunoFigureMutableAnimLogic::ArmLIgnoreHipAccOffset");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableHipAccOffset) == 668, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableHipAccOffset");
static_assert(offsetof(UJunoFigureMutableAnimLogic, HipAccOffset_Native) == 672, "Offset mismatch for UJunoFigureMutableAnimLogic::HipAccOffset_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableNeckAccOffset_Native) == 696, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableNeckAccOffset_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bNeckAccRotateWithHead_Native) == 697, "Offset mismatch for UJunoFigureMutableAnimLogic::bNeckAccRotateWithHead_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, NeckAccOffset_Native) == 704, "Offset mismatch for UJunoFigureMutableAnimLogic::NeckAccOffset_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, HeadConstraint) == 728, "Offset mismatch for UJunoFigureMutableAnimLogic::HeadConstraint");
static_assert(offsetof(UJunoFigureMutableAnimLogic, NeckAccConstraint) == 729, "Offset mismatch for UJunoFigureMutableAnimLogic::NeckAccConstraint");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bRequiresControlRig) == 730, "Offset mismatch for UJunoFigureMutableAnimLogic::bRequiresControlRig");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableControlRig) == 731, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableControlRig");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableControlRigOnlyWhenFaceIsVisible) == 732, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableControlRigOnlyWhenFaceIsVisible");
static_assert(offsetof(UJunoFigureMutableAnimLogic, IKTargets) == 736, "Offset mismatch for UJunoFigureMutableAnimLogic::IKTargets");
static_assert(offsetof(UJunoFigureMutableAnimLogic, SceneActorComp) == 752, "Offset mismatch for UJunoFigureMutableAnimLogic::SceneActorComp");
static_assert(offsetof(UJunoFigureMutableAnimLogic, BlankBrowValues_Native) == 760, "Offset mismatch for UJunoFigureMutableAnimLogic::BlankBrowValues_Native");
static_assert(offsetof(UJunoFigureMutableAnimLogic, bEnableBlankBrow) == 776, "Offset mismatch for UJunoFigureMutableAnimLogic::bEnableBlankBrow");
static_assert(offsetof(UJunoFigureMutableAnimLogic, BrowRightPose) == 780, "Offset mismatch for UJunoFigureMutableAnimLogic::BrowRightPose");
static_assert(offsetof(UJunoFigureMutableAnimLogic, BrowLeftPose) == 784, "Offset mismatch for UJunoFigureMutableAnimLogic::BrowLeftPose");
static_assert(offsetof(UJunoFigureMutableAnimLogic, DisableEyeMovement) == 788, "Offset mismatch for UJunoFigureMutableAnimLogic::DisableEyeMovement");
static_assert(offsetof(UJunoFigureMutableAnimLogic, ShrinkNeckPeg) == 792, "Offset mismatch for UJunoFigureMutableAnimLogic::ShrinkNeckPeg");

// /Script/FigureCharacterNativeRuntime.JunoPlaceholderProvider
// Kind: Class; super: DataAsset
class UJunoPlaceholderProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ProductTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> CosmeticPlaceholderBaseItemDefinitions; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoPlaceholderProvider, ProductTags) == 48, "Offset mismatch for UJunoPlaceholderProvider::ProductTags");
static_assert(offsetof(UJunoPlaceholderProvider, CosmeticPlaceholderBaseItemDefinitions) == 80, "Offset mismatch for UJunoPlaceholderProvider::CosmeticPlaceholderBaseItemDefinitions");

// /Script/FigureCharacterNativeRuntime.JunoPropAnimInstance
// Kind: Class; super: AnimInstance
class UJunoPropAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsMoving2D; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPropAnimInstance, bIsMoving2D) == 608, "Offset mismatch for UJunoPropAnimInstance::bIsMoving2D");

// /Script/FigureCharacterNativeRuntime.JunoPropAnimLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoPropAnimLibrary
{
public:
    std::uint8_t Opaque[1];
};
