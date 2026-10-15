/**
 * decamp dumper generated SDK
 * Package: /Script/TargetedBeamRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TargetedBeamRuntime.TargetedBeamData
// Kind: ScriptStruct; super: none
struct FTargetedBeamData
{
public:
    std::uint8_t bIsActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t BeamStartpoint[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t BeamEndpoint[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bMadeImpact; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitWater; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t WaterImpactPoint[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterHitNormal[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTargetedBeamData, bIsActive) == 0, "Offset mismatch for FTargetedBeamData::bIsActive");
static_assert(offsetof(FTargetedBeamData, BeamStartpoint) == 8, "Offset mismatch for FTargetedBeamData::BeamStartpoint");
static_assert(offsetof(FTargetedBeamData, BeamEndpoint) == 32, "Offset mismatch for FTargetedBeamData::BeamEndpoint");
static_assert(offsetof(FTargetedBeamData, HitNormal) == 56, "Offset mismatch for FTargetedBeamData::HitNormal");
static_assert(offsetof(FTargetedBeamData, bMadeImpact) == 80, "Offset mismatch for FTargetedBeamData::bMadeImpact");
static_assert(offsetof(FTargetedBeamData, bHitWater) == 81, "Offset mismatch for FTargetedBeamData::bHitWater");
static_assert(offsetof(FTargetedBeamData, WaterImpactPoint) == 88, "Offset mismatch for FTargetedBeamData::WaterImpactPoint");
static_assert(offsetof(FTargetedBeamData, WaterHitNormal) == 112, "Offset mismatch for FTargetedBeamData::WaterHitNormal");

// /Script/TargetedBeamRuntime.TargetedBeamImpactStateEvent
// Kind: ScriptStruct; super: none
struct FTargetedBeamImpactStateEvent
{
public:
    std::uint8_t bMadeImpact; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> TargetedActor; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTargetedBeamImpactStateEvent, bMadeImpact) == 0, "Offset mismatch for FTargetedBeamImpactStateEvent::bMadeImpact");
static_assert(offsetof(FTargetedBeamImpactStateEvent, TargetedActor) == 4, "Offset mismatch for FTargetedBeamImpactStateEvent::TargetedActor");

// /Script/TargetedBeamRuntime.FortActorComponent_TargetedBeam
// Kind: Class; super: ActorComponent
class UFortActorComponent_TargetedBeam
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnBeamDataUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AddEquippedWeaponTagsToDamage[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClientSideTargetingEnabled[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    void* ImpactAOETargetingPreset; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* BoxOverlapTargetingPreset; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoxOverlapWidth[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoxOverlapHeight[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    void* BeamDamageGEClass; // 0x0188 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BeamDamagePerSecond[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamMaxRange[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamChargeUpTime[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamDuration[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamMaxAngle[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamTraceCollisionChannel; // 0x0258 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCanBeamDamageOwnerVehicle; // 0x0259 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x025A
    std::uint8_t BeamServerUpdateInterval[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamReplicationSkipOwner[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSearchForStartSocketOnWeapon; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x02B1
    std::uint8_t BeamStartSocketName[0x4]; // 0x02B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsClientAlwaysTargeting; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBroadcastTargetingStateChange; // 0x02B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x16]; // 0x02BA
    std::uint8_t BeamData[0x1]; // 0x02D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortActorComponent_TargetedBeam, OnBeamDataUpdated) == 192, "Offset mismatch for UFortActorComponent_TargetedBeam::OnBeamDataUpdated");
static_assert(offsetof(UFortActorComponent_TargetedBeam, AddEquippedWeaponTagsToDamage) == 208, "Offset mismatch for UFortActorComponent_TargetedBeam::AddEquippedWeaponTagsToDamage");
static_assert(offsetof(UFortActorComponent_TargetedBeam, ClientSideTargetingEnabled) == 248, "Offset mismatch for UFortActorComponent_TargetedBeam::ClientSideTargetingEnabled");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamType) == 288, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamType");
static_assert(offsetof(UFortActorComponent_TargetedBeam, ImpactAOETargetingPreset) == 296, "Offset mismatch for UFortActorComponent_TargetedBeam::ImpactAOETargetingPreset");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BoxOverlapTargetingPreset) == 304, "Offset mismatch for UFortActorComponent_TargetedBeam::BoxOverlapTargetingPreset");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BoxOverlapWidth) == 312, "Offset mismatch for UFortActorComponent_TargetedBeam::BoxOverlapWidth");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BoxOverlapHeight) == 352, "Offset mismatch for UFortActorComponent_TargetedBeam::BoxOverlapHeight");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamDamageGEClass) == 392, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamDamageGEClass");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamDamagePerSecond) == 400, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamDamagePerSecond");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamMaxRange) == 440, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamMaxRange");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamChargeUpTime) == 480, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamChargeUpTime");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamDuration) == 520, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamDuration");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamMaxAngle) == 560, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamMaxAngle");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamTraceCollisionChannel) == 600, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamTraceCollisionChannel");
static_assert(offsetof(UFortActorComponent_TargetedBeam, bCanBeamDamageOwnerVehicle) == 601, "Offset mismatch for UFortActorComponent_TargetedBeam::bCanBeamDamageOwnerVehicle");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamServerUpdateInterval) == 608, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamServerUpdateInterval");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamReplicationSkipOwner) == 648, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamReplicationSkipOwner");
static_assert(offsetof(UFortActorComponent_TargetedBeam, bSearchForStartSocketOnWeapon) == 688, "Offset mismatch for UFortActorComponent_TargetedBeam::bSearchForStartSocketOnWeapon");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamStartSocketName) == 692, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamStartSocketName");
static_assert(offsetof(UFortActorComponent_TargetedBeam, bIsClientAlwaysTargeting) == 696, "Offset mismatch for UFortActorComponent_TargetedBeam::bIsClientAlwaysTargeting");
static_assert(offsetof(UFortActorComponent_TargetedBeam, bBroadcastTargetingStateChange) == 697, "Offset mismatch for UFortActorComponent_TargetedBeam::bBroadcastTargetingStateChange");
static_assert(offsetof(UFortActorComponent_TargetedBeam, BeamData) == 720, "Offset mismatch for UFortActorComponent_TargetedBeam::BeamData");

// /Script/TargetedBeamRuntime.FortGameplayCueNotifyLoop_TargetedBeam
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotifyLoop_TargetedBeam
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    TArray<void*> ParticleComponents; // 0x0C48 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BeamComponents; // 0x0C58 (Size: 0x10, Type: ArrayProperty)
    void* ImpactFXComponent; // 0x0C68 (Size: 0x8, Type: ObjectProperty)
    void* ImpactFXComponent_Light; // 0x0C70 (Size: 0x8, Type: ObjectProperty)
    void* WaterFXComponent; // 0x0C78 (Size: 0x8, Type: ObjectProperty)
    void* TargetedBeamActorComponent; // 0x0C80 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentEndpoint[0x18]; // 0x0C88 (Size: 0x18, Type: StructProperty)
    std::uint8_t bBeamStarted; // 0x0CA0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitEffectPreviousActivateState; // 0x0CA1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocallyControlled; // 0x0CA2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0CA3
    std::uint8_t BeamInterpSpeed_Local[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BeamInterpSpeed_SimProxy[0x28]; // 0x0CD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TickVFXInLateGroup[0x1]; // 0x0CF8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, ParticleComponents) == 3144, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::ParticleComponents");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, BeamComponents) == 3160, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::BeamComponents");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, ImpactFXComponent) == 3176, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::ImpactFXComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, ImpactFXComponent_Light) == 3184, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::ImpactFXComponent_Light");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, WaterFXComponent) == 3192, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::WaterFXComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, TargetedBeamActorComponent) == 3200, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::TargetedBeamActorComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, CurrentEndpoint) == 3208, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::CurrentEndpoint");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, bBeamStarted) == 3232, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::bBeamStarted");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, bHitEffectPreviousActivateState) == 3233, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::bHitEffectPreviousActivateState");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, bIsLocallyControlled) == 3234, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::bIsLocallyControlled");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, BeamInterpSpeed_Local) == 3240, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::BeamInterpSpeed_Local");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, BeamInterpSpeed_SimProxy) == 3280, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::BeamInterpSpeed_SimProxy");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TargetedBeam, TickVFXInLateGroup) == 3320, "Offset mismatch for UFortGameplayCueNotifyLoop_TargetedBeam::TickVFXInLateGroup");
