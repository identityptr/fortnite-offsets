/**
 * decamp dumper generated SDK
 * Package: /Script/WindRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WindRuntime.PhysicsWindSplineAsyncInPersistent
// Kind: ScriptStruct; super: none
struct FPhysicsWindSplineAsyncInPersistent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WindRuntime.PhysicsWindSplineAsyncOutContinuous
// Kind: ScriptStruct; super: none
struct FPhysicsWindSplineAsyncOutContinuous
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WindRuntime.RootMotionSource_ConstantWindForce
// Kind: ScriptStruct; super: RootMotionSource
struct FRootMotionSource_ConstantWindForce
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Force[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    void* StrengthOverTime; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRootMotionSource_ConstantWindForce, Force) == 192, "Offset mismatch for FRootMotionSource_ConstantWindForce::Force");
static_assert(offsetof(FRootMotionSource_ConstantWindForce, StrengthOverTime) == 216, "Offset mismatch for FRootMotionSource_ConstantWindForce::StrengthOverTime");

// /Script/WindRuntime.WindSplineBlockage
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FWindSplineBlockage
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t ID[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    TArray<void*> SubDivBlockages; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float ActivationTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DeactivationTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWindSplineBlockage, ID) == 12, "Offset mismatch for FWindSplineBlockage::ID");
static_assert(offsetof(FWindSplineBlockage, SubDivBlockages) == 16, "Offset mismatch for FWindSplineBlockage::SubDivBlockages");
static_assert(offsetof(FWindSplineBlockage, ActivationTime) == 32, "Offset mismatch for FWindSplineBlockage::ActivationTime");
static_assert(offsetof(FWindSplineBlockage, DeactivationTime) == 36, "Offset mismatch for FWindSplineBlockage::DeactivationTime");

// /Script/WindRuntime.WindSplineBlockageArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FWindSplineBlockageArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWindSplineBlockageArray, Items) == 72, "Offset mismatch for FWindSplineBlockageArray::Items");

// /Script/WindRuntime.WindSplineBlockageID
// Kind: ScriptStruct; super: none
struct FWindSplineBlockageID
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FWindSplineBlockageID, ID) == 0, "Offset mismatch for FWindSplineBlockageID::ID");

// /Script/WindRuntime.WindSplineForceModifiers
// Kind: ScriptStruct; super: none
struct FWindSplineForceModifiers
{
public:
    std::uint8_t ForwardForceMagnitudeMultiplier[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseForceMagnitudeMultiplier[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceOuterRadiusAccelerationMultiplier[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceInnerRadiusDecelerationMultiplier[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWindSplineForceModifiers, ForwardForceMagnitudeMultiplier) == 0, "Offset mismatch for FWindSplineForceModifiers::ForwardForceMagnitudeMultiplier");
static_assert(offsetof(FWindSplineForceModifiers, ReverseForceMagnitudeMultiplier) == 40, "Offset mismatch for FWindSplineForceModifiers::ReverseForceMagnitudeMultiplier");
static_assert(offsetof(FWindSplineForceModifiers, InwardForceOuterRadiusAccelerationMultiplier) == 80, "Offset mismatch for FWindSplineForceModifiers::InwardForceOuterRadiusAccelerationMultiplier");
static_assert(offsetof(FWindSplineForceModifiers, InwardForceInnerRadiusDecelerationMultiplier) == 120, "Offset mismatch for FWindSplineForceModifiers::InwardForceInnerRadiusDecelerationMultiplier");

// /Script/WindRuntime.WindSplineMeshData
// Kind: ScriptStruct; super: none
struct FWindSplineMeshData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> MeshMaterials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWindSplineMeshData, MeshMaterials) == 8, "Offset mismatch for FWindSplineMeshData::MeshMaterials");

// /Script/WindRuntime.WindSplineSubDivBlockage
// Kind: ScriptStruct; super: none
struct FWindSplineSubDivBlockage
{
public:
    std::int32_t SubDivIdx; // 0x0000 (Size: 0x4, Type: IntProperty)
    float StartSectionLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWindSplineSubDivBlockage, SubDivIdx) == 0, "Offset mismatch for FWindSplineSubDivBlockage::SubDivIdx");
static_assert(offsetof(FWindSplineSubDivBlockage, StartSectionLength) == 4, "Offset mismatch for FWindSplineSubDivBlockage::StartSectionLength");

// /Script/WindRuntime.WindSplineTagBasedForceModifiers
// Kind: ScriptStruct; super: none
struct FWindSplineTagBasedForceModifiers
{
public:
    std::uint8_t Query[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t modifier[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWindSplineTagBasedForceModifiers, Query) == 0, "Offset mismatch for FWindSplineTagBasedForceModifiers::Query");
static_assert(offsetof(FWindSplineTagBasedForceModifiers, modifier) == 72, "Offset mismatch for FWindSplineTagBasedForceModifiers::modifier");

// /Script/WindRuntime.WindSplineTargetData
// Kind: ScriptStruct; super: FastArraySerializer
struct FWindSplineTargetData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWindSplineTargetData, Items) == 72, "Offset mismatch for FWindSplineTargetData::Items");

// /Script/WindRuntime.WindSplineTargetDatum
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FWindSplineTargetDatum
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    TWeakObjectPtr<void> Target; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FWindSplineTargetDatum, Target) == 12, "Offset mismatch for FWindSplineTargetDatum::Target");

// /Script/WindRuntime.WindSplineTargetEffects
// Kind: ScriptStruct; super: none
struct FWindSplineTargetEffects
{
public:
    std::uint8_t Filter[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t Cue[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    TArray<void*> GameplayEffects; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWindSplineTargetEffects, Filter) == 0, "Offset mismatch for FWindSplineTargetEffects::Filter");
static_assert(offsetof(FWindSplineTargetEffects, Cue) == 72, "Offset mismatch for FWindSplineTargetEffects::Cue");
static_assert(offsetof(FWindSplineTargetEffects, GameplayEffects) == 80, "Offset mismatch for FWindSplineTargetEffects::GameplayEffects");

// /Script/WindRuntime.FortPlayerWindTunnelAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortPlayerWindTunnelAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bApplyWindSlideAdditive; // 0x1170 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerWindTunnelAnimInstance, bApplyWindSlideAdditive) == 4464, "Offset mismatch for UFortPlayerWindTunnelAnimInstance::bApplyWindSlideAdditive");

// /Script/WindRuntime.LinearWindField
// Kind: Class; super: WindField
class ULinearWindField
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t Direction[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    float FieldStrength; // 0x02D8 (Size: 0x4, Type: FloatProperty)
    float ForceStrength; // 0x02DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PawnForceName[0x4]; // 0x02E0 (Size: 0x4, Type: NameProperty)
    float PawnForceStrength; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    void* RadialVector; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    void* RadialFalloff; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* OperatorField; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinearWindField, Direction) == 704, "Offset mismatch for ULinearWindField::Direction");
static_assert(offsetof(ULinearWindField, FieldStrength) == 728, "Offset mismatch for ULinearWindField::FieldStrength");
static_assert(offsetof(ULinearWindField, ForceStrength) == 732, "Offset mismatch for ULinearWindField::ForceStrength");
static_assert(offsetof(ULinearWindField, PawnForceName) == 736, "Offset mismatch for ULinearWindField::PawnForceName");
static_assert(offsetof(ULinearWindField, PawnForceStrength) == 740, "Offset mismatch for ULinearWindField::PawnForceStrength");
static_assert(offsetof(ULinearWindField, RadialVector) == 744, "Offset mismatch for ULinearWindField::RadialVector");
static_assert(offsetof(ULinearWindField, RadialFalloff) == 752, "Offset mismatch for ULinearWindField::RadialFalloff");
static_assert(offsetof(ULinearWindField, OperatorField) == 760, "Offset mismatch for ULinearWindField::OperatorField");

// /Script/WindRuntime.RadialWindField
// Kind: Class; super: WindField
class URadialWindField
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t FieldRadius[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FieldStrength[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceRadius[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceStrength[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    void* ForceStrengthDistanceFalloff; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    FName PawnForceName; // 0x0368 (Size: 0x8, Type: NameProperty)
    std::uint8_t PawnForceStrength[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    void* PawnForceStrengthDistanceFalloff; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPawnForceIsPush; // 0x03A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A1
    void* RadialVector; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* RadialFalloff; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* OperatorField; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URadialWindField, FieldRadius) == 704, "Offset mismatch for URadialWindField::FieldRadius");
static_assert(offsetof(URadialWindField, FieldStrength) == 744, "Offset mismatch for URadialWindField::FieldStrength");
static_assert(offsetof(URadialWindField, ForceRadius) == 784, "Offset mismatch for URadialWindField::ForceRadius");
static_assert(offsetof(URadialWindField, ForceStrength) == 824, "Offset mismatch for URadialWindField::ForceStrength");
static_assert(offsetof(URadialWindField, ForceStrengthDistanceFalloff) == 864, "Offset mismatch for URadialWindField::ForceStrengthDistanceFalloff");
static_assert(offsetof(URadialWindField, PawnForceName) == 872, "Offset mismatch for URadialWindField::PawnForceName");
static_assert(offsetof(URadialWindField, PawnForceStrength) == 880, "Offset mismatch for URadialWindField::PawnForceStrength");
static_assert(offsetof(URadialWindField, PawnForceStrengthDistanceFalloff) == 920, "Offset mismatch for URadialWindField::PawnForceStrengthDistanceFalloff");
static_assert(offsetof(URadialWindField, bPawnForceIsPush) == 928, "Offset mismatch for URadialWindField::bPawnForceIsPush");
static_assert(offsetof(URadialWindField, RadialVector) == 936, "Offset mismatch for URadialWindField::RadialVector");
static_assert(offsetof(URadialWindField, RadialFalloff) == 944, "Offset mismatch for URadialWindField::RadialFalloff");
static_assert(offsetof(URadialWindField, OperatorField) == 952, "Offset mismatch for URadialWindField::OperatorField");

// /Script/WindRuntime.WindCheatManager
// Kind: Class; super: ChildCheatManager
class UWindCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InflateEffectClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DeflateEffectClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t MinBalloonsOnPlayer; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxBalloonsOnPlayer; // 0x006C (Size: 0x4, Type: IntProperty)
    void* CachedInflateEffectClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
    void* CachedDeflateEffectClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWindCheatManager, InflateEffectClass) == 40, "Offset mismatch for UWindCheatManager::InflateEffectClass");
static_assert(offsetof(UWindCheatManager, DeflateEffectClass) == 72, "Offset mismatch for UWindCheatManager::DeflateEffectClass");
static_assert(offsetof(UWindCheatManager, MinBalloonsOnPlayer) == 104, "Offset mismatch for UWindCheatManager::MinBalloonsOnPlayer");
static_assert(offsetof(UWindCheatManager, MaxBalloonsOnPlayer) == 108, "Offset mismatch for UWindCheatManager::MaxBalloonsOnPlayer");
static_assert(offsetof(UWindCheatManager, CachedInflateEffectClass) == 112, "Offset mismatch for UWindCheatManager::CachedInflateEffectClass");
static_assert(offsetof(UWindCheatManager, CachedDeflateEffectClass) == 120, "Offset mismatch for UWindCheatManager::CachedDeflateEffectClass");

// /Script/WindRuntime.WindField
// Kind: Class; super: FieldSystemActor
class UWindField
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float StartTime; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float StopTime; // 0x027C (Size: 0x4, Type: FloatProperty)
    float IncomingDuration; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float OutgoingDuration; // 0x0284 (Size: 0x4, Type: FloatProperty)
    float StrengthMultiplier; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsActive; // 0x028C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWindField, StartTime) == 632, "Offset mismatch for UWindField::StartTime");
static_assert(offsetof(UWindField, StopTime) == 636, "Offset mismatch for UWindField::StopTime");
static_assert(offsetof(UWindField, IncomingDuration) == 640, "Offset mismatch for UWindField::IncomingDuration");
static_assert(offsetof(UWindField, OutgoingDuration) == 644, "Offset mismatch for UWindField::OutgoingDuration");
static_assert(offsetof(UWindField, StrengthMultiplier) == 648, "Offset mismatch for UWindField::StrengthMultiplier");
static_assert(offsetof(UWindField, bIsActive) == 652, "Offset mismatch for UWindField::bIsActive");

// /Script/WindRuntime.WindSplineComponent
// Kind: Class; super: SplineComponent
class UWindSplineComponent
{
public:
    std::uint8_t Pad_0000[0x6F0]; // 0x0000
    std::uint8_t DisableSafeZonePhaseIndex[0x28]; // 0x06F0 (Size: 0x28, Type: StructProperty)
    void* StaticMesh; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* StartStaticMesh; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* EndStaticMesh; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MeshForwardAxis; // 0x0730 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0731
    std::uint8_t MeshRollVariance[0x28]; // 0x0738 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveSectionStartMaterialParamName[0x4]; // 0x0760 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActiveSectionEndMaterialParamName[0x4]; // 0x0764 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetingRefreshRate[0x28]; // 0x0768 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetingRadius[0x28]; // 0x0790 (Size: 0x28, Type: StructProperty)
    TArray<void*> TargetObjectTypes; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetTagQuery[0x48]; // 0x07C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BlockageTagQuery[0x48]; // 0x0810 (Size: 0x48, Type: StructProperty)
    std::uint8_t BlockageSubdivisions[0x28]; // 0x0858 (Size: 0x28, Type: StructProperty)
    TArray<void*> TargetEffects; // 0x0880 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ObjectTypeToMaxTargetCount; // 0x0890 (Size: 0x10, Type: MapProperty)
    std::uint8_t MaxTargetCountReachedExpelDuration[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkydivingLandingAngle[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RampUpSpeed[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RampDownSpeed[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardForceFallOffStartDistance[0x28]; // 0x0940 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardForceMagnitude[0x28]; // 0x0968 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseForceMagnitude[0x28]; // 0x0990 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardForceDistanceFallOffExponent[0x28]; // 0x09B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceInnerRadius[0x28]; // 0x09E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceOuterRadiusAcceleration[0x28]; // 0x0A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceInnerRadiusDeceleration[0x28]; // 0x0A30 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceInnerRadiusSpeedThreshold[0x28]; // 0x0A58 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceOuterRadiusSpeedThreshold[0x28]; // 0x0A80 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceMaxReductionFromSteering[0x28]; // 0x0AA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceMaxMultiplierWhenSteering[0x28]; // 0x0AD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceMaxSteerAngle[0x28]; // 0x0AF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceLowVelocityThreshold[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceLowVelocityMinValue[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceSteeringReduceAccelerationPower[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t InwardForceSteeringReduceDecelerationPower[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> SizeForceModifiers; // 0x0BC0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ObjectTypeForceModifiers; // 0x0BD0 (Size: 0x10, Type: MapProperty)
    TArray<void*> QueryBasedForceModifiers; // 0x0BE0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PawnSkydivingTimeLimitQuery[0x48]; // 0x0BF0 (Size: 0x48, Type: StructProperty)
    std::uint8_t PawnSkydivingTimeLimit[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t PawnSkydivingMinDistanceAboveGround[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoWakeUpPhysicsObjects[0x28]; // 0x0C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t FieldMagnitudeBase[0x28]; // 0x0CB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FieldMinMagnitudeAfterFalloff[0x28]; // 0x0CD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FieldMaxMagnitudeAfterFalloff[0x28]; // 0x0D00 (Size: 0x28, Type: StructProperty)
    void* PlayerWindAnimationLayer; // 0x0D28 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate OnWindSplineDisabled; // 0x0D30 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWindSplineEnabled; // 0x0D40 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetData[0x78]; // 0x0D50 (Size: 0x78, Type: StructProperty)
    std::uint8_t Blockages[0x58]; // 0x0DC8 (Size: 0x58, Type: StructProperty)
    void* FieldSystemComponent; // 0x0E20 (Size: 0x8, Type: ObjectProperty)
    void* UniformVector; // 0x0E28 (Size: 0x8, Type: ObjectProperty)
    void* BoxFalloff; // 0x0E30 (Size: 0x8, Type: ObjectProperty)
    void* BoxOperatorField; // 0x0E38 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MeshDataArray; // 0x0E40 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FXComponents; // 0x0E50 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWindSplineComponent, DisableSafeZonePhaseIndex) == 1776, "Offset mismatch for UWindSplineComponent::DisableSafeZonePhaseIndex");
static_assert(offsetof(UWindSplineComponent, StaticMesh) == 1816, "Offset mismatch for UWindSplineComponent::StaticMesh");
static_assert(offsetof(UWindSplineComponent, StartStaticMesh) == 1824, "Offset mismatch for UWindSplineComponent::StartStaticMesh");
static_assert(offsetof(UWindSplineComponent, EndStaticMesh) == 1832, "Offset mismatch for UWindSplineComponent::EndStaticMesh");
static_assert(offsetof(UWindSplineComponent, MeshForwardAxis) == 1840, "Offset mismatch for UWindSplineComponent::MeshForwardAxis");
static_assert(offsetof(UWindSplineComponent, MeshRollVariance) == 1848, "Offset mismatch for UWindSplineComponent::MeshRollVariance");
static_assert(offsetof(UWindSplineComponent, ActiveSectionStartMaterialParamName) == 1888, "Offset mismatch for UWindSplineComponent::ActiveSectionStartMaterialParamName");
static_assert(offsetof(UWindSplineComponent, ActiveSectionEndMaterialParamName) == 1892, "Offset mismatch for UWindSplineComponent::ActiveSectionEndMaterialParamName");
static_assert(offsetof(UWindSplineComponent, TargetingRefreshRate) == 1896, "Offset mismatch for UWindSplineComponent::TargetingRefreshRate");
static_assert(offsetof(UWindSplineComponent, TargetingRadius) == 1936, "Offset mismatch for UWindSplineComponent::TargetingRadius");
static_assert(offsetof(UWindSplineComponent, TargetObjectTypes) == 1976, "Offset mismatch for UWindSplineComponent::TargetObjectTypes");
static_assert(offsetof(UWindSplineComponent, TargetTagQuery) == 1992, "Offset mismatch for UWindSplineComponent::TargetTagQuery");
static_assert(offsetof(UWindSplineComponent, BlockageTagQuery) == 2064, "Offset mismatch for UWindSplineComponent::BlockageTagQuery");
static_assert(offsetof(UWindSplineComponent, BlockageSubdivisions) == 2136, "Offset mismatch for UWindSplineComponent::BlockageSubdivisions");
static_assert(offsetof(UWindSplineComponent, TargetEffects) == 2176, "Offset mismatch for UWindSplineComponent::TargetEffects");
static_assert(offsetof(UWindSplineComponent, ObjectTypeToMaxTargetCount) == 2192, "Offset mismatch for UWindSplineComponent::ObjectTypeToMaxTargetCount");
static_assert(offsetof(UWindSplineComponent, MaxTargetCountReachedExpelDuration) == 2208, "Offset mismatch for UWindSplineComponent::MaxTargetCountReachedExpelDuration");
static_assert(offsetof(UWindSplineComponent, SkydivingLandingAngle) == 2248, "Offset mismatch for UWindSplineComponent::SkydivingLandingAngle");
static_assert(offsetof(UWindSplineComponent, RampUpSpeed) == 2288, "Offset mismatch for UWindSplineComponent::RampUpSpeed");
static_assert(offsetof(UWindSplineComponent, RampDownSpeed) == 2328, "Offset mismatch for UWindSplineComponent::RampDownSpeed");
static_assert(offsetof(UWindSplineComponent, ForwardForceFallOffStartDistance) == 2368, "Offset mismatch for UWindSplineComponent::ForwardForceFallOffStartDistance");
static_assert(offsetof(UWindSplineComponent, ForwardForceMagnitude) == 2408, "Offset mismatch for UWindSplineComponent::ForwardForceMagnitude");
static_assert(offsetof(UWindSplineComponent, ReverseForceMagnitude) == 2448, "Offset mismatch for UWindSplineComponent::ReverseForceMagnitude");
static_assert(offsetof(UWindSplineComponent, ForwardForceDistanceFallOffExponent) == 2488, "Offset mismatch for UWindSplineComponent::ForwardForceDistanceFallOffExponent");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadius) == 2528, "Offset mismatch for UWindSplineComponent::InwardForceInnerRadius");
static_assert(offsetof(UWindSplineComponent, InwardForceOuterRadiusAcceleration) == 2568, "Offset mismatch for UWindSplineComponent::InwardForceOuterRadiusAcceleration");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadiusDeceleration) == 2608, "Offset mismatch for UWindSplineComponent::InwardForceInnerRadiusDeceleration");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadiusSpeedThreshold) == 2648, "Offset mismatch for UWindSplineComponent::InwardForceInnerRadiusSpeedThreshold");
static_assert(offsetof(UWindSplineComponent, InwardForceOuterRadiusSpeedThreshold) == 2688, "Offset mismatch for UWindSplineComponent::InwardForceOuterRadiusSpeedThreshold");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxReductionFromSteering) == 2728, "Offset mismatch for UWindSplineComponent::InwardForceMaxReductionFromSteering");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxMultiplierWhenSteering) == 2768, "Offset mismatch for UWindSplineComponent::InwardForceMaxMultiplierWhenSteering");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxSteerAngle) == 2808, "Offset mismatch for UWindSplineComponent::InwardForceMaxSteerAngle");
static_assert(offsetof(UWindSplineComponent, InwardForceLowVelocityThreshold) == 2848, "Offset mismatch for UWindSplineComponent::InwardForceLowVelocityThreshold");
static_assert(offsetof(UWindSplineComponent, InwardForceLowVelocityMinValue) == 2888, "Offset mismatch for UWindSplineComponent::InwardForceLowVelocityMinValue");
static_assert(offsetof(UWindSplineComponent, InwardForceSteeringReduceAccelerationPower) == 2928, "Offset mismatch for UWindSplineComponent::InwardForceSteeringReduceAccelerationPower");
static_assert(offsetof(UWindSplineComponent, InwardForceSteeringReduceDecelerationPower) == 2968, "Offset mismatch for UWindSplineComponent::InwardForceSteeringReduceDecelerationPower");
static_assert(offsetof(UWindSplineComponent, SizeForceModifiers) == 3008, "Offset mismatch for UWindSplineComponent::SizeForceModifiers");
static_assert(offsetof(UWindSplineComponent, ObjectTypeForceModifiers) == 3024, "Offset mismatch for UWindSplineComponent::ObjectTypeForceModifiers");
static_assert(offsetof(UWindSplineComponent, QueryBasedForceModifiers) == 3040, "Offset mismatch for UWindSplineComponent::QueryBasedForceModifiers");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingTimeLimitQuery) == 3056, "Offset mismatch for UWindSplineComponent::PawnSkydivingTimeLimitQuery");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingTimeLimit) == 3128, "Offset mismatch for UWindSplineComponent::PawnSkydivingTimeLimit");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingMinDistanceAboveGround) == 3168, "Offset mismatch for UWindSplineComponent::PawnSkydivingMinDistanceAboveGround");
static_assert(offsetof(UWindSplineComponent, AutoWakeUpPhysicsObjects) == 3208, "Offset mismatch for UWindSplineComponent::AutoWakeUpPhysicsObjects");
static_assert(offsetof(UWindSplineComponent, FieldMagnitudeBase) == 3248, "Offset mismatch for UWindSplineComponent::FieldMagnitudeBase");
static_assert(offsetof(UWindSplineComponent, FieldMinMagnitudeAfterFalloff) == 3288, "Offset mismatch for UWindSplineComponent::FieldMinMagnitudeAfterFalloff");
static_assert(offsetof(UWindSplineComponent, FieldMaxMagnitudeAfterFalloff) == 3328, "Offset mismatch for UWindSplineComponent::FieldMaxMagnitudeAfterFalloff");
static_assert(offsetof(UWindSplineComponent, PlayerWindAnimationLayer) == 3368, "Offset mismatch for UWindSplineComponent::PlayerWindAnimationLayer");
static_assert(offsetof(UWindSplineComponent, OnWindSplineDisabled) == 3376, "Offset mismatch for UWindSplineComponent::OnWindSplineDisabled");
static_assert(offsetof(UWindSplineComponent, OnWindSplineEnabled) == 3392, "Offset mismatch for UWindSplineComponent::OnWindSplineEnabled");
static_assert(offsetof(UWindSplineComponent, TargetData) == 3408, "Offset mismatch for UWindSplineComponent::TargetData");
static_assert(offsetof(UWindSplineComponent, Blockages) == 3528, "Offset mismatch for UWindSplineComponent::Blockages");
static_assert(offsetof(UWindSplineComponent, FieldSystemComponent) == 3616, "Offset mismatch for UWindSplineComponent::FieldSystemComponent");
static_assert(offsetof(UWindSplineComponent, UniformVector) == 3624, "Offset mismatch for UWindSplineComponent::UniformVector");
static_assert(offsetof(UWindSplineComponent, BoxFalloff) == 3632, "Offset mismatch for UWindSplineComponent::BoxFalloff");
static_assert(offsetof(UWindSplineComponent, BoxOperatorField) == 3640, "Offset mismatch for UWindSplineComponent::BoxOperatorField");
static_assert(offsetof(UWindSplineComponent, MeshDataArray) == 3648, "Offset mismatch for UWindSplineComponent::MeshDataArray");
static_assert(offsetof(UWindSplineComponent, FXComponents) == 3664, "Offset mismatch for UWindSplineComponent::FXComponents");
