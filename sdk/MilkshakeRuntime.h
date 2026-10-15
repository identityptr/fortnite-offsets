/**
 * decamp dumper generated SDK
 * Package: /Script/MilkshakeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MilkshakeRuntime.MilkshakeEarthquakePhysicsActorInfo
// Kind: ScriptStruct; super: none
struct FMilkshakeEarthquakePhysicsActorInfo
{
public:
    TWeakObjectPtr<void> PhysicsActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float ForceDirectionUpdateGameTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsForceForward; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t PhysicsSimSize; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMilkshakeEarthquakePhysicsActorInfo, PhysicsActor) == 0, "Offset mismatch for FMilkshakeEarthquakePhysicsActorInfo::PhysicsActor");
static_assert(offsetof(FMilkshakeEarthquakePhysicsActorInfo, ForceDirectionUpdateGameTime) == 8, "Offset mismatch for FMilkshakeEarthquakePhysicsActorInfo::ForceDirectionUpdateGameTime");
static_assert(offsetof(FMilkshakeEarthquakePhysicsActorInfo, bIsForceForward) == 12, "Offset mismatch for FMilkshakeEarthquakePhysicsActorInfo::bIsForceForward");
static_assert(offsetof(FMilkshakeEarthquakePhysicsActorInfo, PhysicsSimSize) == 13, "Offset mismatch for FMilkshakeEarthquakePhysicsActorInfo::PhysicsSimSize");

// /Script/MilkshakeRuntime.MilkshakeControllerComponent
// Kind: Class; super: FortControllerComponent
class UMilkshakeControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t NearbyBuildingActorsUpdateScanRadius[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::int32_t NearbyBuildingActorsUpdateScanRadiusReplicated; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    std::uint8_t CameraShakeScale[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    float CameraShakeScaleReplicated; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0124
    std::uint8_t NearbyBuildingActorsUpdateInterval[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    float NearbyBuildingActorsUpdateIntervalReplicated; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0154
    std::uint8_t bForceFeedbackEnabled[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t bForceFeedbackEnabledReplicated; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0181
    std::uint8_t ForceFeedbackTag[0x4]; // 0x0184 (Size: 0x4, Type: NameProperty)
    void* PawnInAirBasedCameraShakeMultiplierLookUpCurve; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    float PawnInAirBasedCameraShakeMultiplierInterpSpeed; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0194
    void* CameraShakeClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraShakeRotOscillationBaseValues[0x24]; // 0x01A0 (Size: 0x24, Type: StructProperty)
    float CameraShakeRotOscillationPitchFrequencyMin; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float CameraShakeRotOscillationPitchFrequencyMax; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float CameraShakeRotOscillationRollFrequencyMin; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float CameraShakeRotOscillationRollFrequencyMax; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x01D4
    void* CameraShakeSoundCue; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    float CameraShakeAudioFadeOutDuration; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraShakeAudioFadeCurveType; // 0x01E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x01E5
    FName CameraShakeAudioParam; // 0x01E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t MinTimeBetweenBuildingDamageFX[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    float MinTimeBetweenBuildingDamageFXReplicated; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x021C
    std::uint8_t MaxTimeBetweenBuildingDamageFX[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    float MaxTimeBetweenBuildingDamageFXReplicated; // 0x0248 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x4]; // 0x024C
    void* BuildingDamageFXTemplate; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    float BuildingDamageFXCooldown; // 0x0258 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingDamageFXMagnitudeParamName[0x4]; // 0x025C (Size: 0x4, Type: NameProperty)
    TMap<void*, void*> RecentDamageFXBuildings; // 0x0260 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BuildingDamageSoundCueByResourceType; // 0x0270 (Size: 0x10, Type: MapProperty)
    float PlayForceFeedbackInterval; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x4]; // 0x0284
    TArray<void*> ForceFeedbackEffects; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000B[0x10]; // 0x0298
    TArray<void*> RegisteredEarthquakes; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    void* CurrentEarthquake; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x18]; // 0x02C0
    void* CurrentCameraShakeAudioComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NearbyBuildingActors; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMilkshakeControllerComponent, NearbyBuildingActorsUpdateScanRadius) == 200, "Offset mismatch for UMilkshakeControllerComponent::NearbyBuildingActorsUpdateScanRadius");
static_assert(offsetof(UMilkshakeControllerComponent, NearbyBuildingActorsUpdateScanRadiusReplicated) == 240, "Offset mismatch for UMilkshakeControllerComponent::NearbyBuildingActorsUpdateScanRadiusReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeScale) == 248, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeScale");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeScaleReplicated) == 288, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeScaleReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, NearbyBuildingActorsUpdateInterval) == 296, "Offset mismatch for UMilkshakeControllerComponent::NearbyBuildingActorsUpdateInterval");
static_assert(offsetof(UMilkshakeControllerComponent, NearbyBuildingActorsUpdateIntervalReplicated) == 336, "Offset mismatch for UMilkshakeControllerComponent::NearbyBuildingActorsUpdateIntervalReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, bForceFeedbackEnabled) == 344, "Offset mismatch for UMilkshakeControllerComponent::bForceFeedbackEnabled");
static_assert(offsetof(UMilkshakeControllerComponent, bForceFeedbackEnabledReplicated) == 384, "Offset mismatch for UMilkshakeControllerComponent::bForceFeedbackEnabledReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, ForceFeedbackTag) == 388, "Offset mismatch for UMilkshakeControllerComponent::ForceFeedbackTag");
static_assert(offsetof(UMilkshakeControllerComponent, PawnInAirBasedCameraShakeMultiplierLookUpCurve) == 392, "Offset mismatch for UMilkshakeControllerComponent::PawnInAirBasedCameraShakeMultiplierLookUpCurve");
static_assert(offsetof(UMilkshakeControllerComponent, PawnInAirBasedCameraShakeMultiplierInterpSpeed) == 400, "Offset mismatch for UMilkshakeControllerComponent::PawnInAirBasedCameraShakeMultiplierInterpSpeed");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeClass) == 408, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeClass");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeRotOscillationBaseValues) == 416, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeRotOscillationBaseValues");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeRotOscillationPitchFrequencyMin) == 452, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeRotOscillationPitchFrequencyMin");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeRotOscillationPitchFrequencyMax) == 456, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeRotOscillationPitchFrequencyMax");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeRotOscillationRollFrequencyMin) == 460, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeRotOscillationRollFrequencyMin");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeRotOscillationRollFrequencyMax) == 464, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeRotOscillationRollFrequencyMax");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeSoundCue) == 472, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeSoundCue");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeAudioFadeOutDuration) == 480, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeAudioFadeOutDuration");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeAudioFadeCurveType) == 484, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeAudioFadeCurveType");
static_assert(offsetof(UMilkshakeControllerComponent, CameraShakeAudioParam) == 488, "Offset mismatch for UMilkshakeControllerComponent::CameraShakeAudioParam");
static_assert(offsetof(UMilkshakeControllerComponent, MinTimeBetweenBuildingDamageFX) == 496, "Offset mismatch for UMilkshakeControllerComponent::MinTimeBetweenBuildingDamageFX");
static_assert(offsetof(UMilkshakeControllerComponent, MinTimeBetweenBuildingDamageFXReplicated) == 536, "Offset mismatch for UMilkshakeControllerComponent::MinTimeBetweenBuildingDamageFXReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, MaxTimeBetweenBuildingDamageFX) == 544, "Offset mismatch for UMilkshakeControllerComponent::MaxTimeBetweenBuildingDamageFX");
static_assert(offsetof(UMilkshakeControllerComponent, MaxTimeBetweenBuildingDamageFXReplicated) == 584, "Offset mismatch for UMilkshakeControllerComponent::MaxTimeBetweenBuildingDamageFXReplicated");
static_assert(offsetof(UMilkshakeControllerComponent, BuildingDamageFXTemplate) == 592, "Offset mismatch for UMilkshakeControllerComponent::BuildingDamageFXTemplate");
static_assert(offsetof(UMilkshakeControllerComponent, BuildingDamageFXCooldown) == 600, "Offset mismatch for UMilkshakeControllerComponent::BuildingDamageFXCooldown");
static_assert(offsetof(UMilkshakeControllerComponent, BuildingDamageFXMagnitudeParamName) == 604, "Offset mismatch for UMilkshakeControllerComponent::BuildingDamageFXMagnitudeParamName");
static_assert(offsetof(UMilkshakeControllerComponent, RecentDamageFXBuildings) == 608, "Offset mismatch for UMilkshakeControllerComponent::RecentDamageFXBuildings");
static_assert(offsetof(UMilkshakeControllerComponent, BuildingDamageSoundCueByResourceType) == 624, "Offset mismatch for UMilkshakeControllerComponent::BuildingDamageSoundCueByResourceType");
static_assert(offsetof(UMilkshakeControllerComponent, PlayForceFeedbackInterval) == 640, "Offset mismatch for UMilkshakeControllerComponent::PlayForceFeedbackInterval");
static_assert(offsetof(UMilkshakeControllerComponent, ForceFeedbackEffects) == 648, "Offset mismatch for UMilkshakeControllerComponent::ForceFeedbackEffects");
static_assert(offsetof(UMilkshakeControllerComponent, RegisteredEarthquakes) == 680, "Offset mismatch for UMilkshakeControllerComponent::RegisteredEarthquakes");
static_assert(offsetof(UMilkshakeControllerComponent, CurrentEarthquake) == 696, "Offset mismatch for UMilkshakeControllerComponent::CurrentEarthquake");
static_assert(offsetof(UMilkshakeControllerComponent, CurrentCameraShakeAudioComponent) == 728, "Offset mismatch for UMilkshakeControllerComponent::CurrentCameraShakeAudioComponent");
static_assert(offsetof(UMilkshakeControllerComponent, NearbyBuildingActors) == 736, "Offset mismatch for UMilkshakeControllerComponent::NearbyBuildingActors");

// /Script/MilkshakeRuntime.MilkshakeEarthquakeActor
// Kind: Class; super: Actor
class UMilkshakeEarthquakeActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t AsyncOverlappedActorsPreallocateCount; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    TArray<void*> AsyncOverlappedActors; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverlappedPhysicsActorInfos; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxNumOfPhysicActorSimulation[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    float MinTimeBeforeNextForceDirectionUpdate; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    float MaxTimeBeforeNextForceDirectionUpdate; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float MinPhysicsImpulseMagnitude; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float MaxPhysicsImpulseMagnitude; // 0x02CC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> SimSizeToImpulseScalarMap; // 0x02D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMilkshakeEarthquakeActor, AsyncOverlappedActorsPreallocateCount) == 624, "Offset mismatch for UMilkshakeEarthquakeActor::AsyncOverlappedActorsPreallocateCount");
static_assert(offsetof(UMilkshakeEarthquakeActor, AsyncOverlappedActors) == 632, "Offset mismatch for UMilkshakeEarthquakeActor::AsyncOverlappedActors");
static_assert(offsetof(UMilkshakeEarthquakeActor, OverlappedPhysicsActorInfos) == 648, "Offset mismatch for UMilkshakeEarthquakeActor::OverlappedPhysicsActorInfos");
static_assert(offsetof(UMilkshakeEarthquakeActor, MaxNumOfPhysicActorSimulation) == 664, "Offset mismatch for UMilkshakeEarthquakeActor::MaxNumOfPhysicActorSimulation");
static_assert(offsetof(UMilkshakeEarthquakeActor, MinTimeBeforeNextForceDirectionUpdate) == 704, "Offset mismatch for UMilkshakeEarthquakeActor::MinTimeBeforeNextForceDirectionUpdate");
static_assert(offsetof(UMilkshakeEarthquakeActor, MaxTimeBeforeNextForceDirectionUpdate) == 708, "Offset mismatch for UMilkshakeEarthquakeActor::MaxTimeBeforeNextForceDirectionUpdate");
static_assert(offsetof(UMilkshakeEarthquakeActor, MinPhysicsImpulseMagnitude) == 712, "Offset mismatch for UMilkshakeEarthquakeActor::MinPhysicsImpulseMagnitude");
static_assert(offsetof(UMilkshakeEarthquakeActor, MaxPhysicsImpulseMagnitude) == 716, "Offset mismatch for UMilkshakeEarthquakeActor::MaxPhysicsImpulseMagnitude");
static_assert(offsetof(UMilkshakeEarthquakeActor, SimSizeToImpulseScalarMap) == 720, "Offset mismatch for UMilkshakeEarthquakeActor::SimSizeToImpulseScalarMap");

// /Script/MilkshakeRuntime.MilkshakeFieldSystemActor
// Kind: Class; super: FieldSystemActor
class UMilkshakeFieldSystemActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* OperatorFieldMultiplyComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* RadialFallOffComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* RadialVectorComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    float Radius; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float StopGameTime; // 0x0294 (Size: 0x4, Type: FloatProperty)
    float IncomingDuration; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float OutgoingDuration; // 0x029C (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x02A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMilkshakeFieldSystemActor, OperatorFieldMultiplyComponent) == 632, "Offset mismatch for UMilkshakeFieldSystemActor::OperatorFieldMultiplyComponent");
static_assert(offsetof(UMilkshakeFieldSystemActor, RadialFallOffComponent) == 640, "Offset mismatch for UMilkshakeFieldSystemActor::RadialFallOffComponent");
static_assert(offsetof(UMilkshakeFieldSystemActor, RadialVectorComponent) == 648, "Offset mismatch for UMilkshakeFieldSystemActor::RadialVectorComponent");
static_assert(offsetof(UMilkshakeFieldSystemActor, Radius) == 656, "Offset mismatch for UMilkshakeFieldSystemActor::Radius");
static_assert(offsetof(UMilkshakeFieldSystemActor, StopGameTime) == 660, "Offset mismatch for UMilkshakeFieldSystemActor::StopGameTime");
static_assert(offsetof(UMilkshakeFieldSystemActor, IncomingDuration) == 664, "Offset mismatch for UMilkshakeFieldSystemActor::IncomingDuration");
static_assert(offsetof(UMilkshakeFieldSystemActor, OutgoingDuration) == 668, "Offset mismatch for UMilkshakeFieldSystemActor::OutgoingDuration");
static_assert(offsetof(UMilkshakeFieldSystemActor, Strength) == 672, "Offset mismatch for UMilkshakeFieldSystemActor::Strength");
