/**
 * decamp dumper generated SDK
 * Package: /Script/NevadaRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NevadaRuntime.DampedSpringConfig
// Kind: ScriptStruct; super: none
struct FDampedSpringConfig
{
public:
    float Stiffness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxAccel; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDampedSpringConfig, Stiffness) == 0, "Offset mismatch for FDampedSpringConfig::Stiffness");
static_assert(offsetof(FDampedSpringConfig, Damping) == 4, "Offset mismatch for FDampedSpringConfig::Damping");
static_assert(offsetof(FDampedSpringConfig, MaxAccel) == 8, "Offset mismatch for FDampedSpringConfig::MaxAccel");

// /Script/NevadaRuntime.NevadaAudioUpdateContext
// Kind: ScriptStruct; super: none
struct FNevadaAudioUpdateContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NevadaRuntime.NevadaInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FNevadaInPersistent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* FortNevadaVehicleConfigs; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bBoostThrust; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoostDrag; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01CA
    float TractorBeamExtraLengthForExtents; // 0x01CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseTractorBeamUprightForce; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01D1
    std::uint8_t CrashingDesiredUp[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentVehicleState; // 0x01F0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNevadaInPersistent, FortNevadaVehicleConfigs) == 448, "Offset mismatch for FNevadaInPersistent::FortNevadaVehicleConfigs");
static_assert(offsetof(FNevadaInPersistent, bBoostThrust) == 456, "Offset mismatch for FNevadaInPersistent::bBoostThrust");
static_assert(offsetof(FNevadaInPersistent, bBoostDrag) == 457, "Offset mismatch for FNevadaInPersistent::bBoostDrag");
static_assert(offsetof(FNevadaInPersistent, TractorBeamExtraLengthForExtents) == 460, "Offset mismatch for FNevadaInPersistent::TractorBeamExtraLengthForExtents");
static_assert(offsetof(FNevadaInPersistent, bUseTractorBeamUprightForce) == 464, "Offset mismatch for FNevadaInPersistent::bUseTractorBeamUprightForce");
static_assert(offsetof(FNevadaInPersistent, CrashingDesiredUp) == 472, "Offset mismatch for FNevadaInPersistent::CrashingDesiredUp");
static_assert(offsetof(FNevadaInPersistent, CurrentVehicleState) == 496, "Offset mismatch for FNevadaInPersistent::CurrentVehicleState");

// /Script/NevadaRuntime.NevadaMoveModeConfig
// Kind: ScriptStruct; super: none
struct FNevadaMoveModeConfig
{
public:
    float ThrustForce; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LiftForce; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxHorizontalSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DragForceMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNevadaMoveModeConfig, ThrustForce) == 0, "Offset mismatch for FNevadaMoveModeConfig::ThrustForce");
static_assert(offsetof(FNevadaMoveModeConfig, LiftForce) == 4, "Offset mismatch for FNevadaMoveModeConfig::LiftForce");
static_assert(offsetof(FNevadaMoveModeConfig, MaxHorizontalSpeed) == 8, "Offset mismatch for FNevadaMoveModeConfig::MaxHorizontalSpeed");
static_assert(offsetof(FNevadaMoveModeConfig, MaxVerticalSpeed) == 12, "Offset mismatch for FNevadaMoveModeConfig::MaxVerticalSpeed");
static_assert(offsetof(FNevadaMoveModeConfig, DragForceMultiplier) == 16, "Offset mismatch for FNevadaMoveModeConfig::DragForceMultiplier");

// /Script/NevadaRuntime.NevadaOutContinuous
// Kind: ScriptStruct; super: FortVehicleOutContinuous
struct FNevadaOutContinuous
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float AltimeterTraceHitDistance; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float TractorBeamAppliedForceMagnitude; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNevadaOutContinuous, AltimeterTraceHitDistance) == 80, "Offset mismatch for FNevadaOutContinuous::AltimeterTraceHitDistance");
static_assert(offsetof(FNevadaOutContinuous, TractorBeamAppliedForceMagnitude) == 84, "Offset mismatch for FNevadaOutContinuous::TractorBeamAppliedForceMagnitude");

// /Script/NevadaRuntime.NevadaOutPersistent
// Kind: ScriptStruct; super: FortVehicleOutPersistent
struct FNevadaOutPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAnyWheelsOnGround; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bCanDriveOnIncline (shared storage)
    // 0x0008 BoolProperty bIsAsyncCorrectingOrientation (shared storage)
    // 0x0008 BoolProperty bIsTouchingDrivableGround (shared storage)
    // 0x0008 BoolProperty bIsTouchingGroundWithoutWheels (shared storage)
    // 0x0008 BoolProperty bOnRoad (shared storage)
    // 0x0008 BoolProperty bPossiblyTouchingTop (shared storage)
    // 0x0008 BoolProperty bWheelsOnGround (shared storage)
    std::uint8_t bBoosting; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty bOnDirt (shared storage)
    // 0x0009 BoolProperty bOnGrass (shared storage)
    // 0x0009 BoolProperty bOnIce (shared storage)
    // 0x0009 BoolProperty bOnLandscape (shared storage)
    // 0x0009 BoolProperty bOnMud (shared storage)
    // 0x0009 BoolProperty bOnSnow (shared storage)
    // 0x0009 BoolProperty bOnVehicle (shared storage)
    std::uint8_t bStartedWithFullBoost; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x000B
    TArray<void*> TireSurfaces; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float TotalBrakingDelta; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGearIdx; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNevadaOutPersistent, bAnyWheelsOnGround) == 8, "Offset mismatch for FNevadaOutPersistent::bAnyWheelsOnGround");
static_assert(offsetof(FNevadaOutPersistent, bBoosting) == 9, "Offset mismatch for FNevadaOutPersistent::bBoosting");
static_assert(offsetof(FNevadaOutPersistent, bStartedWithFullBoost) == 10, "Offset mismatch for FNevadaOutPersistent::bStartedWithFullBoost");
static_assert(offsetof(FNevadaOutPersistent, TireSurfaces) == 16, "Offset mismatch for FNevadaOutPersistent::TireSurfaces");
static_assert(offsetof(FNevadaOutPersistent, TotalBrakingDelta) == 32, "Offset mismatch for FNevadaOutPersistent::TotalBrakingDelta");
static_assert(offsetof(FNevadaOutPersistent, CurrentGearIdx) == 36, "Offset mismatch for FNevadaOutPersistent::CurrentGearIdx");

// /Script/NevadaRuntime.NevadaState
// Kind: ScriptStruct; super: none
struct FNevadaState
{
public:
    std::uint8_t CurrentStatus; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t LivesRemaining; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHijackingActive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPilotBubbleCollisionEnabled; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float CurrentBatteryCharge; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCannonEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeamEnabled; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNevadaState, CurrentStatus) == 0, "Offset mismatch for FNevadaState::CurrentStatus");
static_assert(offsetof(FNevadaState, LivesRemaining) == 4, "Offset mismatch for FNevadaState::LivesRemaining");
static_assert(offsetof(FNevadaState, bHijackingActive) == 8, "Offset mismatch for FNevadaState::bHijackingActive");
static_assert(offsetof(FNevadaState, bPilotBubbleCollisionEnabled) == 9, "Offset mismatch for FNevadaState::bPilotBubbleCollisionEnabled");
static_assert(offsetof(FNevadaState, CurrentBatteryCharge) == 12, "Offset mismatch for FNevadaState::CurrentBatteryCharge");
static_assert(offsetof(FNevadaState, bCannonEnabled) == 16, "Offset mismatch for FNevadaState::bCannonEnabled");
static_assert(offsetof(FNevadaState, bTractorBeamEnabled) == 17, "Offset mismatch for FNevadaState::bTractorBeamEnabled");

// /Script/NevadaRuntime.FortCameraMode_Nevada
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UFortCameraMode_Nevada
{
public:
    std::uint8_t Pad_0000[0x20C8]; // 0x0000
    std::uint8_t TractorBeamCameraOffset[0x18]; // 0x20C8 (Size: 0x18, Type: StructProperty)
    float TractorBeamCameraLerpTime; // 0x20E0 (Size: 0x4, Type: FloatProperty)
    float TractorBeamCameraExtraPitch; // 0x20E4 (Size: 0x4, Type: FloatProperty)
    float TractorBeamInactiveCameraExtraPitch; // 0x20E8 (Size: 0x4, Type: FloatProperty)
    float TractorBeamCameraPositionResetDelay; // 0x20EC (Size: 0x4, Type: FloatProperty)
    float MinPitchForOffset; // 0x20F0 (Size: 0x4, Type: FloatProperty)
    float MaxPitchForOffset; // 0x20F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExtraOffset[0x1]; // 0x20F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraOffset) == 8392, "Offset mismatch for UFortCameraMode_Nevada::TractorBeamCameraOffset");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraLerpTime) == 8416, "Offset mismatch for UFortCameraMode_Nevada::TractorBeamCameraLerpTime");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraExtraPitch) == 8420, "Offset mismatch for UFortCameraMode_Nevada::TractorBeamCameraExtraPitch");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamInactiveCameraExtraPitch) == 8424, "Offset mismatch for UFortCameraMode_Nevada::TractorBeamInactiveCameraExtraPitch");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraPositionResetDelay) == 8428, "Offset mismatch for UFortCameraMode_Nevada::TractorBeamCameraPositionResetDelay");
static_assert(offsetof(UFortCameraMode_Nevada, MinPitchForOffset) == 8432, "Offset mismatch for UFortCameraMode_Nevada::MinPitchForOffset");
static_assert(offsetof(UFortCameraMode_Nevada, MaxPitchForOffset) == 8436, "Offset mismatch for UFortCameraMode_Nevada::MaxPitchForOffset");
static_assert(offsetof(UFortCameraMode_Nevada, ExtraOffset) == 8440, "Offset mismatch for UFortCameraMode_Nevada::ExtraOffset");

// /Script/NevadaRuntime.FortNevadaAudioController
// Kind: Class; super: Actor
class UFortNevadaAudioController
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t SpeedRangeMap[0x10]; // 0x0270 (Size: 0x10, Type: StructProperty)
    std::uint8_t TurningRangeMap[0x10]; // 0x0280 (Size: 0x10, Type: StructProperty)
    std::uint8_t AcceleratingRangeMap[0x10]; // 0x0290 (Size: 0x10, Type: StructProperty)
    std::uint8_t BrakingRangeMap[0x10]; // 0x02A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PassByRangeMap[0x10]; // 0x02B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LFORangeMap[0x10]; // 0x02C0 (Size: 0x10, Type: StructProperty)
    void* Vehicle; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* LayeredAudioComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    float SpeedParamValue; // 0x02E0 (Size: 0x4, Type: FloatProperty)
    float SpeedParamValuePrev; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    float AcceleratingParamValue; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float BrakingParamValue; // 0x02EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForwardVector[0x18]; // 0x02F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForwardVectorPrev[0x18]; // 0x0308 (Size: 0x18, Type: StructProperty)
    float TurningParamValue; // 0x0320 (Size: 0x4, Type: FloatProperty)
    float PassByParamValue; // 0x0324 (Size: 0x4, Type: FloatProperty)
    float LocallyControlledParamValue; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float LFOParamValue; // 0x032C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortNevadaAudioController, SpeedRangeMap) == 624, "Offset mismatch for UFortNevadaAudioController::SpeedRangeMap");
static_assert(offsetof(UFortNevadaAudioController, TurningRangeMap) == 640, "Offset mismatch for UFortNevadaAudioController::TurningRangeMap");
static_assert(offsetof(UFortNevadaAudioController, AcceleratingRangeMap) == 656, "Offset mismatch for UFortNevadaAudioController::AcceleratingRangeMap");
static_assert(offsetof(UFortNevadaAudioController, BrakingRangeMap) == 672, "Offset mismatch for UFortNevadaAudioController::BrakingRangeMap");
static_assert(offsetof(UFortNevadaAudioController, PassByRangeMap) == 688, "Offset mismatch for UFortNevadaAudioController::PassByRangeMap");
static_assert(offsetof(UFortNevadaAudioController, LFORangeMap) == 704, "Offset mismatch for UFortNevadaAudioController::LFORangeMap");
static_assert(offsetof(UFortNevadaAudioController, Vehicle) == 720, "Offset mismatch for UFortNevadaAudioController::Vehicle");
static_assert(offsetof(UFortNevadaAudioController, LayeredAudioComponent) == 728, "Offset mismatch for UFortNevadaAudioController::LayeredAudioComponent");
static_assert(offsetof(UFortNevadaAudioController, SpeedParamValue) == 736, "Offset mismatch for UFortNevadaAudioController::SpeedParamValue");
static_assert(offsetof(UFortNevadaAudioController, SpeedParamValuePrev) == 740, "Offset mismatch for UFortNevadaAudioController::SpeedParamValuePrev");
static_assert(offsetof(UFortNevadaAudioController, AcceleratingParamValue) == 744, "Offset mismatch for UFortNevadaAudioController::AcceleratingParamValue");
static_assert(offsetof(UFortNevadaAudioController, BrakingParamValue) == 748, "Offset mismatch for UFortNevadaAudioController::BrakingParamValue");
static_assert(offsetof(UFortNevadaAudioController, ForwardVector) == 752, "Offset mismatch for UFortNevadaAudioController::ForwardVector");
static_assert(offsetof(UFortNevadaAudioController, ForwardVectorPrev) == 776, "Offset mismatch for UFortNevadaAudioController::ForwardVectorPrev");
static_assert(offsetof(UFortNevadaAudioController, TurningParamValue) == 800, "Offset mismatch for UFortNevadaAudioController::TurningParamValue");
static_assert(offsetof(UFortNevadaAudioController, PassByParamValue) == 804, "Offset mismatch for UFortNevadaAudioController::PassByParamValue");
static_assert(offsetof(UFortNevadaAudioController, LocallyControlledParamValue) == 808, "Offset mismatch for UFortNevadaAudioController::LocallyControlledParamValue");
static_assert(offsetof(UFortNevadaAudioController, LFOParamValue) == 812, "Offset mismatch for UFortNevadaAudioController::LFOParamValue");

// /Script/NevadaRuntime.FortNevadaVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UFortNevadaVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    std::uint8_t ServerReplicatedState[0x18]; // 0x2020 (Size: 0x18, Type: StructProperty)
    void* FortNevadaVehicleConfigs; // 0x2038 (Size: 0x8, Type: ObjectProperty)
    void* FortNevadaAudioControllerClass; // 0x2040 (Size: 0x8, Type: ClassProperty)
    void* AudioControllerActor; // 0x2048 (Size: 0x8, Type: ObjectProperty)
    void* FortNevadaAudioController; // 0x2050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LiftInputs[0x8]; // 0x2058 (Size: 0x8, Type: StructProperty)
    float LastBatteryRegenTickTime; // 0x2060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBoostThrust; // 0x2064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoostDrag; // 0x2065 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoostInputReleased; // 0x2066 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTractorBeamUprightForce; // 0x2067 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeadBattery; // 0x2068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x2069
    float TractorBeamExtraLengthForExtents; // 0x206C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CrashingDesiredUp[0x18]; // 0x2070 (Size: 0x18, Type: StructProperty)
    float BoostStartTime; // 0x2088 (Size: 0x4, Type: FloatProperty)
    float BoostPitchAlpha; // 0x208C (Size: 0x4, Type: FloatProperty)
    float BoostChargeProgress; // 0x2090 (Size: 0x4, Type: FloatProperty)
    std::int32_t BoostChargesAvailable; // 0x2094 (Size: 0x4, Type: IntProperty)
    std::uint8_t CachedBoostMoveDir[0x18]; // 0x2098 (Size: 0x18, Type: StructProperty)
    float CurrentStateStartTime; // 0x20B0 (Size: 0x4, Type: FloatProperty)
    float HeightAtLandingTime; // 0x20B4 (Size: 0x4, Type: FloatProperty)
    float CrashingScrapingTime; // 0x20B8 (Size: 0x4, Type: FloatProperty)
    float CrashingNotMovingTimer; // 0x20BC (Size: 0x4, Type: FloatProperty)
    float AltimeterTraceHitDistance; // 0x20C0 (Size: 0x4, Type: FloatProperty)
    float TractorBeamAppliedForceMagnitude; // 0x20C4 (Size: 0x4, Type: FloatProperty)
    float AnimParamDriverSeatLeftRight; // 0x20C8 (Size: 0x4, Type: FloatProperty)
    float AnimParamDriverSeatForwardBack; // 0x20CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceNegativeLift; // 0x20D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForcePositiveLift; // 0x20D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitialLift; // 0x20D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentVehicleState; // 0x20D3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4C]; // 0x20D4
    TWeakObjectPtr<void> CachedLandscapeProxy; // 0x2120 (Size: 0x8, Type: WeakObjectProperty)
    void* PassengerCameraModeClass; // 0x2128 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bTractorBeamChargeStarted; // 0x2130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2131
    std::uint8_t TowHookParams[0xD0]; // 0x2138 (Size: 0xD0, Type: StructProperty)
    void* AttachedPawnHiddenVehicle; // 0x2208 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> TractorBeamAttachedPrimitive; // 0x2210 (Size: 0x8, Type: WeakObjectProperty)
    void* SpawnedTractorBeamVictimVehicle; // 0x2218 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PreviousTractorBeamAttachedPrimitive; // 0x2220 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> TractorBeamTargetedActors; // 0x2228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviouslyTargetedActors; // 0x2238 (Size: 0x10, Type: ArrayProperty)
    void* TractorBeamAttachedActor; // 0x2248 (Size: 0x8, Type: ObjectProperty)
    void* TractorBeamTargetedActor; // 0x2250 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TractorBeamTargetPosition[0x19]; // 0x2258 (Size: 0x19, Type: StructProperty)
    std::uint8_t bBeamButtonReleased; // 0x2271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x2272
    TArray<void*> TractorBeamObjectsTypes; // 0x2278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisallowedBeamTags[0x20]; // 0x2288 (Size: 0x20, Type: StructProperty)
    std::uint8_t AlwaysAllowedBeamTags[0xB8]; // 0x22A8 (Size: 0xB8, Type: StructProperty)
    void* TractorBeamFX_Unattached; // 0x2360 (Size: 0x8, Type: ObjectProperty)
    void* TractorBeamFX_Attached; // 0x2368 (Size: 0x8, Type: ObjectProperty)
    void* BeamPSC; // 0x2370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x50]; // 0x2378
    std::uint8_t TractorBeamState; // 0x23C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x2F]; // 0x23C9
    float TractorBeamDeactivationTimestamp; // 0x23F8 (Size: 0x4, Type: FloatProperty)
    float TractorBeamDisruptedTimestamp; // 0x23FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x50]; // 0x2400
    float CockpitHealth; // 0x2450 (Size: 0x4, Type: FloatProperty)
    float Native_CockpitEnabled; // 0x2454 (Size: 0x4, Type: FloatProperty)
    float LastCockpitHealthTickTime; // 0x2458 (Size: 0x4, Type: FloatProperty)
    float LastCockpitDamageTime; // 0x245C (Size: 0x4, Type: FloatProperty)
    float CockpitDissolveStartTime; // 0x2460 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x2464
    std::uint8_t CockpitMaxHealth[0x28]; // 0x2468 (Size: 0x28, Type: StructProperty)
    std::uint8_t CockpitHealthTickRate[0x28]; // 0x2490 (Size: 0x28, Type: StructProperty)
    std::uint8_t CockpitHealthPerTick[0x28]; // 0x24B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CockpitRegenDelay[0x28]; // 0x24E0 (Size: 0x28, Type: StructProperty)
    void* CockpitHitMaterialWobble; // 0x2508 (Size: 0x8, Type: ObjectProperty)
    float LastDamageAlpha; // 0x2510 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDissolvingCockpit; // 0x2514 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestoringCockpit; // 0x2515 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCockpitWobble; // 0x2516 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x1]; // 0x2517
    void* NativeComp_ShieldMesh; // 0x2518 (Size: 0x8, Type: ObjectProperty)
    void* Native_CockpitMaterial; // 0x2520 (Size: 0x8, Type: ObjectProperty)
    void* Native_EnergyRingMatInstance; // 0x2528 (Size: 0x8, Type: ObjectProperty)
    void* Native_EnergyFieldMatInstance; // 0x2530 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_DamageStateLastLife; // 0x2538 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_DamageState; // 0x2540 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Native_LastHitLocation[0x18]; // 0x2548 (Size: 0x18, Type: StructProperty)
    std::uint8_t Native_LastHitNormal[0x18]; // 0x2560 (Size: 0x18, Type: StructProperty)
    void* NativeComp_DamageStateFX; // 0x2578 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_HologramScreen; // 0x2580 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_SpeedLines; // 0x2588 (Size: 0x8, Type: ObjectProperty)
    void* Native_EnergyRingMat; // 0x2590 (Size: 0x8, Type: ObjectProperty)
    void* Native_EnergyFieldMat; // 0x2598 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_DamageStateFX; // 0x25A0 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_CockpitDestroyed; // 0x25A8 (Size: 0x8, Type: ObjectProperty)
    void* CockpitDamagedSound; // 0x25B0 (Size: 0x8, Type: ObjectProperty)
    void* CockpitDestroyedSound; // 0x25B8 (Size: 0x8, Type: ObjectProperty)
    void* CockpitRespawnSound; // 0x25C0 (Size: 0x8, Type: ObjectProperty)
    void* Native_DamageStateSound; // 0x25C8 (Size: 0x8, Type: ObjectProperty)
    void* Native_DamageStateLastLifeSound; // 0x25D0 (Size: 0x8, Type: ObjectProperty)
    void* CockpitDeactivatedForceFeedback; // 0x25D8 (Size: 0x8, Type: ObjectProperty)
    void* CockpitDestroyedCamShake; // 0x25E0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> TractorBeamDisallowedClasses; // 0x25E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortNevadaVehicle, ServerReplicatedState) == 8224, "Offset mismatch for UFortNevadaVehicle::ServerReplicatedState");
static_assert(offsetof(UFortNevadaVehicle, FortNevadaVehicleConfigs) == 8248, "Offset mismatch for UFortNevadaVehicle::FortNevadaVehicleConfigs");
static_assert(offsetof(UFortNevadaVehicle, FortNevadaAudioControllerClass) == 8256, "Offset mismatch for UFortNevadaVehicle::FortNevadaAudioControllerClass");
static_assert(offsetof(UFortNevadaVehicle, AudioControllerActor) == 8264, "Offset mismatch for UFortNevadaVehicle::AudioControllerActor");
static_assert(offsetof(UFortNevadaVehicle, FortNevadaAudioController) == 8272, "Offset mismatch for UFortNevadaVehicle::FortNevadaAudioController");
static_assert(offsetof(UFortNevadaVehicle, LiftInputs) == 8280, "Offset mismatch for UFortNevadaVehicle::LiftInputs");
static_assert(offsetof(UFortNevadaVehicle, LastBatteryRegenTickTime) == 8288, "Offset mismatch for UFortNevadaVehicle::LastBatteryRegenTickTime");
static_assert(offsetof(UFortNevadaVehicle, bBoostThrust) == 8292, "Offset mismatch for UFortNevadaVehicle::bBoostThrust");
static_assert(offsetof(UFortNevadaVehicle, bBoostDrag) == 8293, "Offset mismatch for UFortNevadaVehicle::bBoostDrag");
static_assert(offsetof(UFortNevadaVehicle, bBoostInputReleased) == 8294, "Offset mismatch for UFortNevadaVehicle::bBoostInputReleased");
static_assert(offsetof(UFortNevadaVehicle, bUseTractorBeamUprightForce) == 8295, "Offset mismatch for UFortNevadaVehicle::bUseTractorBeamUprightForce");
static_assert(offsetof(UFortNevadaVehicle, bDeadBattery) == 8296, "Offset mismatch for UFortNevadaVehicle::bDeadBattery");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamExtraLengthForExtents) == 8300, "Offset mismatch for UFortNevadaVehicle::TractorBeamExtraLengthForExtents");
static_assert(offsetof(UFortNevadaVehicle, CrashingDesiredUp) == 8304, "Offset mismatch for UFortNevadaVehicle::CrashingDesiredUp");
static_assert(offsetof(UFortNevadaVehicle, BoostStartTime) == 8328, "Offset mismatch for UFortNevadaVehicle::BoostStartTime");
static_assert(offsetof(UFortNevadaVehicle, BoostPitchAlpha) == 8332, "Offset mismatch for UFortNevadaVehicle::BoostPitchAlpha");
static_assert(offsetof(UFortNevadaVehicle, BoostChargeProgress) == 8336, "Offset mismatch for UFortNevadaVehicle::BoostChargeProgress");
static_assert(offsetof(UFortNevadaVehicle, BoostChargesAvailable) == 8340, "Offset mismatch for UFortNevadaVehicle::BoostChargesAvailable");
static_assert(offsetof(UFortNevadaVehicle, CachedBoostMoveDir) == 8344, "Offset mismatch for UFortNevadaVehicle::CachedBoostMoveDir");
static_assert(offsetof(UFortNevadaVehicle, CurrentStateStartTime) == 8368, "Offset mismatch for UFortNevadaVehicle::CurrentStateStartTime");
static_assert(offsetof(UFortNevadaVehicle, HeightAtLandingTime) == 8372, "Offset mismatch for UFortNevadaVehicle::HeightAtLandingTime");
static_assert(offsetof(UFortNevadaVehicle, CrashingScrapingTime) == 8376, "Offset mismatch for UFortNevadaVehicle::CrashingScrapingTime");
static_assert(offsetof(UFortNevadaVehicle, CrashingNotMovingTimer) == 8380, "Offset mismatch for UFortNevadaVehicle::CrashingNotMovingTimer");
static_assert(offsetof(UFortNevadaVehicle, AltimeterTraceHitDistance) == 8384, "Offset mismatch for UFortNevadaVehicle::AltimeterTraceHitDistance");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamAppliedForceMagnitude) == 8388, "Offset mismatch for UFortNevadaVehicle::TractorBeamAppliedForceMagnitude");
static_assert(offsetof(UFortNevadaVehicle, AnimParamDriverSeatLeftRight) == 8392, "Offset mismatch for UFortNevadaVehicle::AnimParamDriverSeatLeftRight");
static_assert(offsetof(UFortNevadaVehicle, AnimParamDriverSeatForwardBack) == 8396, "Offset mismatch for UFortNevadaVehicle::AnimParamDriverSeatForwardBack");
static_assert(offsetof(UFortNevadaVehicle, bForceNegativeLift) == 8400, "Offset mismatch for UFortNevadaVehicle::bForceNegativeLift");
static_assert(offsetof(UFortNevadaVehicle, bForcePositiveLift) == 8401, "Offset mismatch for UFortNevadaVehicle::bForcePositiveLift");
static_assert(offsetof(UFortNevadaVehicle, bInitialLift) == 8402, "Offset mismatch for UFortNevadaVehicle::bInitialLift");
static_assert(offsetof(UFortNevadaVehicle, CurrentVehicleState) == 8403, "Offset mismatch for UFortNevadaVehicle::CurrentVehicleState");
static_assert(offsetof(UFortNevadaVehicle, CachedLandscapeProxy) == 8480, "Offset mismatch for UFortNevadaVehicle::CachedLandscapeProxy");
static_assert(offsetof(UFortNevadaVehicle, PassengerCameraModeClass) == 8488, "Offset mismatch for UFortNevadaVehicle::PassengerCameraModeClass");
static_assert(offsetof(UFortNevadaVehicle, bTractorBeamChargeStarted) == 8496, "Offset mismatch for UFortNevadaVehicle::bTractorBeamChargeStarted");
static_assert(offsetof(UFortNevadaVehicle, TowHookParams) == 8504, "Offset mismatch for UFortNevadaVehicle::TowHookParams");
static_assert(offsetof(UFortNevadaVehicle, AttachedPawnHiddenVehicle) == 8712, "Offset mismatch for UFortNevadaVehicle::AttachedPawnHiddenVehicle");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamAttachedPrimitive) == 8720, "Offset mismatch for UFortNevadaVehicle::TractorBeamAttachedPrimitive");
static_assert(offsetof(UFortNevadaVehicle, SpawnedTractorBeamVictimVehicle) == 8728, "Offset mismatch for UFortNevadaVehicle::SpawnedTractorBeamVictimVehicle");
static_assert(offsetof(UFortNevadaVehicle, PreviousTractorBeamAttachedPrimitive) == 8736, "Offset mismatch for UFortNevadaVehicle::PreviousTractorBeamAttachedPrimitive");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamTargetedActors) == 8744, "Offset mismatch for UFortNevadaVehicle::TractorBeamTargetedActors");
static_assert(offsetof(UFortNevadaVehicle, PreviouslyTargetedActors) == 8760, "Offset mismatch for UFortNevadaVehicle::PreviouslyTargetedActors");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamAttachedActor) == 8776, "Offset mismatch for UFortNevadaVehicle::TractorBeamAttachedActor");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamTargetedActor) == 8784, "Offset mismatch for UFortNevadaVehicle::TractorBeamTargetedActor");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamTargetPosition) == 8792, "Offset mismatch for UFortNevadaVehicle::TractorBeamTargetPosition");
static_assert(offsetof(UFortNevadaVehicle, bBeamButtonReleased) == 8817, "Offset mismatch for UFortNevadaVehicle::bBeamButtonReleased");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamObjectsTypes) == 8824, "Offset mismatch for UFortNevadaVehicle::TractorBeamObjectsTypes");
static_assert(offsetof(UFortNevadaVehicle, DisallowedBeamTags) == 8840, "Offset mismatch for UFortNevadaVehicle::DisallowedBeamTags");
static_assert(offsetof(UFortNevadaVehicle, AlwaysAllowedBeamTags) == 8872, "Offset mismatch for UFortNevadaVehicle::AlwaysAllowedBeamTags");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamFX_Unattached) == 9056, "Offset mismatch for UFortNevadaVehicle::TractorBeamFX_Unattached");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamFX_Attached) == 9064, "Offset mismatch for UFortNevadaVehicle::TractorBeamFX_Attached");
static_assert(offsetof(UFortNevadaVehicle, BeamPSC) == 9072, "Offset mismatch for UFortNevadaVehicle::BeamPSC");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamState) == 9160, "Offset mismatch for UFortNevadaVehicle::TractorBeamState");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamDeactivationTimestamp) == 9208, "Offset mismatch for UFortNevadaVehicle::TractorBeamDeactivationTimestamp");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamDisruptedTimestamp) == 9212, "Offset mismatch for UFortNevadaVehicle::TractorBeamDisruptedTimestamp");
static_assert(offsetof(UFortNevadaVehicle, CockpitHealth) == 9296, "Offset mismatch for UFortNevadaVehicle::CockpitHealth");
static_assert(offsetof(UFortNevadaVehicle, Native_CockpitEnabled) == 9300, "Offset mismatch for UFortNevadaVehicle::Native_CockpitEnabled");
static_assert(offsetof(UFortNevadaVehicle, LastCockpitHealthTickTime) == 9304, "Offset mismatch for UFortNevadaVehicle::LastCockpitHealthTickTime");
static_assert(offsetof(UFortNevadaVehicle, LastCockpitDamageTime) == 9308, "Offset mismatch for UFortNevadaVehicle::LastCockpitDamageTime");
static_assert(offsetof(UFortNevadaVehicle, CockpitDissolveStartTime) == 9312, "Offset mismatch for UFortNevadaVehicle::CockpitDissolveStartTime");
static_assert(offsetof(UFortNevadaVehicle, CockpitMaxHealth) == 9320, "Offset mismatch for UFortNevadaVehicle::CockpitMaxHealth");
static_assert(offsetof(UFortNevadaVehicle, CockpitHealthTickRate) == 9360, "Offset mismatch for UFortNevadaVehicle::CockpitHealthTickRate");
static_assert(offsetof(UFortNevadaVehicle, CockpitHealthPerTick) == 9400, "Offset mismatch for UFortNevadaVehicle::CockpitHealthPerTick");
static_assert(offsetof(UFortNevadaVehicle, CockpitRegenDelay) == 9440, "Offset mismatch for UFortNevadaVehicle::CockpitRegenDelay");
static_assert(offsetof(UFortNevadaVehicle, CockpitHitMaterialWobble) == 9480, "Offset mismatch for UFortNevadaVehicle::CockpitHitMaterialWobble");
static_assert(offsetof(UFortNevadaVehicle, LastDamageAlpha) == 9488, "Offset mismatch for UFortNevadaVehicle::LastDamageAlpha");
static_assert(offsetof(UFortNevadaVehicle, bDissolvingCockpit) == 9492, "Offset mismatch for UFortNevadaVehicle::bDissolvingCockpit");
static_assert(offsetof(UFortNevadaVehicle, bRestoringCockpit) == 9493, "Offset mismatch for UFortNevadaVehicle::bRestoringCockpit");
static_assert(offsetof(UFortNevadaVehicle, bCockpitWobble) == 9494, "Offset mismatch for UFortNevadaVehicle::bCockpitWobble");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_ShieldMesh) == 9496, "Offset mismatch for UFortNevadaVehicle::NativeComp_ShieldMesh");
static_assert(offsetof(UFortNevadaVehicle, Native_CockpitMaterial) == 9504, "Offset mismatch for UFortNevadaVehicle::Native_CockpitMaterial");
static_assert(offsetof(UFortNevadaVehicle, Native_EnergyRingMatInstance) == 9512, "Offset mismatch for UFortNevadaVehicle::Native_EnergyRingMatInstance");
static_assert(offsetof(UFortNevadaVehicle, Native_EnergyFieldMatInstance) == 9520, "Offset mismatch for UFortNevadaVehicle::Native_EnergyFieldMatInstance");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_DamageStateLastLife) == 9528, "Offset mismatch for UFortNevadaVehicle::NativeComp_DamageStateLastLife");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_DamageState) == 9536, "Offset mismatch for UFortNevadaVehicle::NativeComp_DamageState");
static_assert(offsetof(UFortNevadaVehicle, Native_LastHitLocation) == 9544, "Offset mismatch for UFortNevadaVehicle::Native_LastHitLocation");
static_assert(offsetof(UFortNevadaVehicle, Native_LastHitNormal) == 9568, "Offset mismatch for UFortNevadaVehicle::Native_LastHitNormal");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_DamageStateFX) == 9592, "Offset mismatch for UFortNevadaVehicle::NativeComp_DamageStateFX");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_HologramScreen) == 9600, "Offset mismatch for UFortNevadaVehicle::NativeComp_HologramScreen");
static_assert(offsetof(UFortNevadaVehicle, NativeComp_SpeedLines) == 9608, "Offset mismatch for UFortNevadaVehicle::NativeComp_SpeedLines");
static_assert(offsetof(UFortNevadaVehicle, Native_EnergyRingMat) == 9616, "Offset mismatch for UFortNevadaVehicle::Native_EnergyRingMat");
static_assert(offsetof(UFortNevadaVehicle, Native_EnergyFieldMat) == 9624, "Offset mismatch for UFortNevadaVehicle::Native_EnergyFieldMat");
static_assert(offsetof(UFortNevadaVehicle, NativeSys_DamageStateFX) == 9632, "Offset mismatch for UFortNevadaVehicle::NativeSys_DamageStateFX");
static_assert(offsetof(UFortNevadaVehicle, NativeSys_CockpitDestroyed) == 9640, "Offset mismatch for UFortNevadaVehicle::NativeSys_CockpitDestroyed");
static_assert(offsetof(UFortNevadaVehicle, CockpitDamagedSound) == 9648, "Offset mismatch for UFortNevadaVehicle::CockpitDamagedSound");
static_assert(offsetof(UFortNevadaVehicle, CockpitDestroyedSound) == 9656, "Offset mismatch for UFortNevadaVehicle::CockpitDestroyedSound");
static_assert(offsetof(UFortNevadaVehicle, CockpitRespawnSound) == 9664, "Offset mismatch for UFortNevadaVehicle::CockpitRespawnSound");
static_assert(offsetof(UFortNevadaVehicle, Native_DamageStateSound) == 9672, "Offset mismatch for UFortNevadaVehicle::Native_DamageStateSound");
static_assert(offsetof(UFortNevadaVehicle, Native_DamageStateLastLifeSound) == 9680, "Offset mismatch for UFortNevadaVehicle::Native_DamageStateLastLifeSound");
static_assert(offsetof(UFortNevadaVehicle, CockpitDeactivatedForceFeedback) == 9688, "Offset mismatch for UFortNevadaVehicle::CockpitDeactivatedForceFeedback");
static_assert(offsetof(UFortNevadaVehicle, CockpitDestroyedCamShake) == 9696, "Offset mismatch for UFortNevadaVehicle::CockpitDestroyedCamShake");
static_assert(offsetof(UFortNevadaVehicle, TractorBeamDisallowedClasses) == 9704, "Offset mismatch for UFortNevadaVehicle::TractorBeamDisallowedClasses");

// /Script/NevadaRuntime.FortNevadaVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortNevadaVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* NevadaVehicle; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTractorBeam_IsAttached; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_IsCharging; // 0x0509 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_IsActive; // 0x050A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_IsInactive; // 0x050B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_IsOn; // 0x050C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_HasTarget; // 0x050D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractorBeam_ShouldApplyCustomAO; // 0x050E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x050F
    float TractorBeam_LookAtPitch; // 0x0510 (Size: 0x4, Type: FloatProperty)
    float TractorBeam_LookAtYaw; // 0x0514 (Size: 0x4, Type: FloatProperty)
    float LeanLeftRight; // 0x0518 (Size: 0x4, Type: FloatProperty)
    float LeanForwardBackward; // 0x051C (Size: 0x4, Type: FloatProperty)
    float LeanValue; // 0x0520 (Size: 0x4, Type: FloatProperty)
    float PreviousLeanValue; // 0x0524 (Size: 0x4, Type: FloatProperty)
    float VelocityZValue; // 0x0528 (Size: 0x4, Type: FloatProperty)
    float LeanDelta; // 0x052C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTurnAgain; // 0x0530 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHadDriver; // 0x0531 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustGotDriver; // 0x0532 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustLostDriver; // 0x0533 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasBoosting; // 0x0534 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x0535 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0536
    std::int32_t PreviousBoostCount; // 0x0538 (Size: 0x4, Type: IntProperty)
    std::int32_t BoostCount; // 0x053C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBoostingAgain; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0541 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0542
    float WingsPlayRate; // 0x0544 (Size: 0x4, Type: FloatProperty)
    float TractorBeamAlpha; // 0x0548 (Size: 0x4, Type: FloatProperty)
    float AimPitch; // 0x054C (Size: 0x4, Type: FloatProperty)
    float AimYaw; // 0x0550 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFiringCannon; // 0x0554 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0555
    float DistanceFromGround; // 0x0558 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLanding; // 0x055C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasLanded; // 0x055D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x055E
    float LandingAlpha; // 0x0560 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNotLandingMode; // 0x0564 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHadBattery; // 0x0565 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutOfBattery; // 0x0566 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustGotBattery; // 0x0567 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLaunchToDepart; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLaunchToIdle; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPartsLanding; // 0x056A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x056B
    std::uint8_t TractorBeamSocketName[0x4]; // 0x056C (Size: 0x4, Type: NameProperty)
    std::uint8_t TractorBeamAimCurveName[0x4]; // 0x0570 (Size: 0x4, Type: NameProperty)
    std::uint8_t NevadaVehicleInterruptName[0x4]; // 0x0574 (Size: 0x4, Type: NameProperty)
    std::uint8_t LandingTraceRightName[0x4]; // 0x0578 (Size: 0x4, Type: NameProperty)
    std::uint8_t LandingTraceLeftName[0x4]; // 0x057C (Size: 0x4, Type: NameProperty)
    float MaxLeanDeltaInterruptMagnitude; // 0x0580 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedToBeMoving; // 0x0584 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedToPlayWings; // 0x0588 (Size: 0x4, Type: FloatProperty)
    float MinWingsPlayRate; // 0x058C (Size: 0x4, Type: FloatProperty)
    float MaxWingsPlayRate; // 0x0590 (Size: 0x4, Type: FloatProperty)
    float WingsPlayRateInterpSpeed; // 0x0594 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CannonFiringMontage[0x20]; // 0x0598 (Size: 0x20, Type: SoftObjectProperty)
    float LandingGearTraceLength; // 0x05B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortNevadaVehicleAnimInstance, NevadaVehicle) == 1280, "Offset mismatch for UFortNevadaVehicleAnimInstance::NevadaVehicle");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsAttached) == 1288, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_IsAttached");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsCharging) == 1289, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_IsCharging");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsActive) == 1290, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_IsActive");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsInactive) == 1291, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_IsInactive");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsOn) == 1292, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_IsOn");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_HasTarget) == 1293, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_HasTarget");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_ShouldApplyCustomAO) == 1294, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTractorBeam_ShouldApplyCustomAO");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeam_LookAtPitch) == 1296, "Offset mismatch for UFortNevadaVehicleAnimInstance::TractorBeam_LookAtPitch");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeam_LookAtYaw) == 1300, "Offset mismatch for UFortNevadaVehicleAnimInstance::TractorBeam_LookAtYaw");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanLeftRight) == 1304, "Offset mismatch for UFortNevadaVehicleAnimInstance::LeanLeftRight");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanForwardBackward) == 1308, "Offset mismatch for UFortNevadaVehicleAnimInstance::LeanForwardBackward");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanValue) == 1312, "Offset mismatch for UFortNevadaVehicleAnimInstance::LeanValue");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, PreviousLeanValue) == 1316, "Offset mismatch for UFortNevadaVehicleAnimInstance::PreviousLeanValue");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, VelocityZValue) == 1320, "Offset mismatch for UFortNevadaVehicleAnimInstance::VelocityZValue");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanDelta) == 1324, "Offset mismatch for UFortNevadaVehicleAnimInstance::LeanDelta");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTurnAgain) == 1328, "Offset mismatch for UFortNevadaVehicleAnimInstance::bTurnAgain");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHadDriver) == 1329, "Offset mismatch for UFortNevadaVehicleAnimInstance::bHadDriver");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustGotDriver) == 1330, "Offset mismatch for UFortNevadaVehicleAnimInstance::bJustGotDriver");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustLostDriver) == 1331, "Offset mismatch for UFortNevadaVehicleAnimInstance::bJustLostDriver");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bWasBoosting) == 1332, "Offset mismatch for UFortNevadaVehicleAnimInstance::bWasBoosting");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsBoosting) == 1333, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsBoosting");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, PreviousBoostCount) == 1336, "Offset mismatch for UFortNevadaVehicleAnimInstance::PreviousBoostCount");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, BoostCount) == 1340, "Offset mismatch for UFortNevadaVehicleAnimInstance::BoostCount");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsBoostingAgain) == 1344, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsBoostingAgain");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsMoving) == 1345, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsMoving");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, WingsPlayRate) == 1348, "Offset mismatch for UFortNevadaVehicleAnimInstance::WingsPlayRate");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamAlpha) == 1352, "Offset mismatch for UFortNevadaVehicleAnimInstance::TractorBeamAlpha");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, AimPitch) == 1356, "Offset mismatch for UFortNevadaVehicleAnimInstance::AimPitch");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, AimYaw) == 1360, "Offset mismatch for UFortNevadaVehicleAnimInstance::AimYaw");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsFiringCannon) == 1364, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsFiringCannon");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, DistanceFromGround) == 1368, "Offset mismatch for UFortNevadaVehicleAnimInstance::DistanceFromGround");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsLanding) == 1372, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsLanding");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHasLanded) == 1373, "Offset mismatch for UFortNevadaVehicleAnimInstance::bHasLanded");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingAlpha) == 1376, "Offset mismatch for UFortNevadaVehicleAnimInstance::LandingAlpha");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bNotLandingMode) == 1380, "Offset mismatch for UFortNevadaVehicleAnimInstance::bNotLandingMode");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHadBattery) == 1381, "Offset mismatch for UFortNevadaVehicleAnimInstance::bHadBattery");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bOutOfBattery) == 1382, "Offset mismatch for UFortNevadaVehicleAnimInstance::bOutOfBattery");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustGotBattery) == 1383, "Offset mismatch for UFortNevadaVehicleAnimInstance::bJustGotBattery");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bLaunchToDepart) == 1384, "Offset mismatch for UFortNevadaVehicleAnimInstance::bLaunchToDepart");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bLaunchToIdle) == 1385, "Offset mismatch for UFortNevadaVehicleAnimInstance::bLaunchToIdle");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsPartsLanding) == 1386, "Offset mismatch for UFortNevadaVehicleAnimInstance::bIsPartsLanding");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamSocketName) == 1388, "Offset mismatch for UFortNevadaVehicleAnimInstance::TractorBeamSocketName");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamAimCurveName) == 1392, "Offset mismatch for UFortNevadaVehicleAnimInstance::TractorBeamAimCurveName");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, NevadaVehicleInterruptName) == 1396, "Offset mismatch for UFortNevadaVehicleAnimInstance::NevadaVehicleInterruptName");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingTraceRightName) == 1400, "Offset mismatch for UFortNevadaVehicleAnimInstance::LandingTraceRightName");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingTraceLeftName) == 1404, "Offset mismatch for UFortNevadaVehicleAnimInstance::LandingTraceLeftName");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MaxLeanDeltaInterruptMagnitude) == 1408, "Offset mismatch for UFortNevadaVehicleAnimInstance::MaxLeanDeltaInterruptMagnitude");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinForwardSpeedToBeMoving) == 1412, "Offset mismatch for UFortNevadaVehicleAnimInstance::MinForwardSpeedToBeMoving");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinForwardSpeedToPlayWings) == 1416, "Offset mismatch for UFortNevadaVehicleAnimInstance::MinForwardSpeedToPlayWings");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinWingsPlayRate) == 1420, "Offset mismatch for UFortNevadaVehicleAnimInstance::MinWingsPlayRate");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MaxWingsPlayRate) == 1424, "Offset mismatch for UFortNevadaVehicleAnimInstance::MaxWingsPlayRate");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, WingsPlayRateInterpSpeed) == 1428, "Offset mismatch for UFortNevadaVehicleAnimInstance::WingsPlayRateInterpSpeed");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, CannonFiringMontage) == 1432, "Offset mismatch for UFortNevadaVehicleAnimInstance::CannonFiringMontage");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingGearTraceLength) == 1464, "Offset mismatch for UFortNevadaVehicleAnimInstance::LandingGearTraceLength");

// /Script/NevadaRuntime.FortNevadaVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortNevadaVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    std::uint8_t BaseMovement[0x14]; // 0x0990 (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostMovement[0x14]; // 0x09A4 (Size: 0x14, Type: StructProperty)
    std::uint8_t ChargingMovement[0x14]; // 0x09B8 (Size: 0x14, Type: StructProperty)
    std::uint8_t UprightSpringForce[0xC]; // 0x09CC (Size: 0xC, Type: StructProperty)
    float DebaseLaunchspeed; // 0x09D8 (Size: 0x4, Type: FloatProperty)
    float MaxHeight; // 0x09DC (Size: 0x4, Type: FloatProperty)
    float MinHeight; // 0x09E0 (Size: 0x4, Type: FloatProperty)
    float OnEnterPitchAlpha; // 0x09E4 (Size: 0x4, Type: FloatProperty)
    float FallDamageHeightBuffer; // 0x09E8 (Size: 0x4, Type: FloatProperty)
    float TurningForce; // 0x09EC (Size: 0x4, Type: FloatProperty)
    float ThrustRotationAlpha; // 0x09F0 (Size: 0x4, Type: FloatProperty)
    float PitchDrag; // 0x09F4 (Size: 0x4, Type: FloatProperty)
    float YawDrag; // 0x09F8 (Size: 0x4, Type: FloatProperty)
    float RollDrag; // 0x09FC (Size: 0x4, Type: FloatProperty)
    float BoostThrustDuration; // 0x0A00 (Size: 0x4, Type: FloatProperty)
    float BoostDragDuration; // 0x0A04 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumBoostCharges; // 0x0A08 (Size: 0x4, Type: IntProperty)
    float BoostChargeDuration; // 0x0A0C (Size: 0x4, Type: FloatProperty)
    float BoostChargeDelay; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float BoostDragFinishSpeed; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float TractorBeamRadius; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float TractorBeamWithTargetRadius; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TractorBeamSweepLength[0x28]; // 0x0A20 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamChargeTime[0x28]; // 0x0A48 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamDurationTime[0x28]; // 0x0A70 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamTossImpulseStrengthForward[0x28]; // 0x0A98 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamTossImpulseStrengthUpward[0x28]; // 0x0AC0 (Size: 0x28, Type: StructProperty)
    float TractorBeamShutdownTime; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0AEC
    std::uint8_t TractorBeamTurnOffDamage[0x28]; // 0x0AF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowTractorBeamAIPawns[0x28]; // 0x0B18 (Size: 0x28, Type: StructProperty)
    float TractorBeamBreakForceMagnitude; // 0x0B40 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0B44
    std::uint8_t TractorBeamActive[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamCooldown[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t TractorBeamDisruptionCooldown[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    FName TractorBeamSocket; // 0x0BC0 (Size: 0x8, Type: NameProperty)
    std::uint8_t TractorBeamAttachPositionOffset[0x18]; // 0x0BC8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TractorBeamTargetOverridenErrorCorrection[0x34]; // 0x0BE0 (Size: 0x34, Type: StructProperty)
    float VictimPitchDrag; // 0x0C14 (Size: 0x4, Type: FloatProperty)
    float VictimYawDrag; // 0x0C18 (Size: 0x4, Type: FloatProperty)
    float VictimRollDrag; // 0x0C1C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TractorBeamVictimUprightForce[0xC]; // 0x0C20 (Size: 0xC, Type: StructProperty)
    std::int32_t NumReboots; // 0x0C2C (Size: 0x4, Type: IntProperty)
    std::int32_t NumRebootsDefault; // 0x0C30 (Size: 0x4, Type: IntProperty)
    float MaxCrashingTime; // 0x0C34 (Size: 0x4, Type: FloatProperty)
    float MaxCrashingScrapingTime; // 0x0C38 (Size: 0x4, Type: FloatProperty)
    float MaxCrashingTimeSpentNotMoving; // 0x0C3C (Size: 0x4, Type: FloatProperty)
    float SpeedThresholdForCrashed; // 0x0C40 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0C44
    std::uint8_t RebootDuration[0x28]; // 0x0C48 (Size: 0x28, Type: StructProperty)
    std::uint8_t RebootDelay[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    float LandingTraceRange; // 0x0C98 (Size: 0x4, Type: FloatProperty)
    float DesiredLandingDistance; // 0x0C9C (Size: 0x4, Type: FloatProperty)
    float LandingDelay_Max; // 0x0CA0 (Size: 0x4, Type: FloatProperty)
    float LandingDelay_Min; // 0x0CA4 (Size: 0x4, Type: FloatProperty)
    float HeightForMinLandingDelay; // 0x0CA8 (Size: 0x4, Type: FloatProperty)
    float HeightForMaxLandingDelay; // 0x0CAC (Size: 0x4, Type: FloatProperty)
    float LandingPitchAlphaMax; // 0x0CB0 (Size: 0x4, Type: FloatProperty)
    float LandingPitchAlphaMin; // 0x0CB4 (Size: 0x4, Type: FloatProperty)
    float DriverSeatRotationAnimBlendSpeed; // 0x0CB8 (Size: 0x4, Type: FloatProperty)
    float CrashingDesiredUpLerpFactor; // 0x0CBC (Size: 0x4, Type: FloatProperty)
    float CrashedLinearDrag; // 0x0CC0 (Size: 0x4, Type: FloatProperty)
    float LandedDragCoef; // 0x0CC4 (Size: 0x4, Type: FloatProperty)
    float LandedDragCoef2; // 0x0CC8 (Size: 0x4, Type: FloatProperty)
    float LandedMaxDragSpeed; // 0x0CCC (Size: 0x4, Type: FloatProperty)
    float CrashedAngularDragMultiplier; // 0x0CD0 (Size: 0x4, Type: FloatProperty)
    float BoostFOV; // 0x0CD4 (Size: 0x4, Type: FloatProperty)
    float ExtraTraceInteractRange; // 0x0CD8 (Size: 0x4, Type: FloatProperty)
    float AntiGravityMult; // 0x0CDC (Size: 0x4, Type: FloatProperty)
    float InitialLiftDuration; // 0x0CE0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0CE4
    std::uint8_t BatteryCostDuringFlight[0x28]; // 0x0CE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BatteryRegenDelay[0x28]; // 0x0D10 (Size: 0x28, Type: StructProperty)
    std::uint8_t BatteryRegenTickRate[0x28]; // 0x0D38 (Size: 0x28, Type: StructProperty)
    std::uint8_t BatteryRegenAmount[0x28]; // 0x0D60 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBattery[0x28]; // 0x0D88 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBatteryForFlight[0x28]; // 0x0DB0 (Size: 0x28, Type: StructProperty)
    TArray<void*> CockpitShapeNames; // 0x0DD8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CockpitDamageMult[0x28]; // 0x0DE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CockpitHealth[0x1]; // 0x0E10 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortNevadaVehicleConfigs, BaseMovement) == 2448, "Offset mismatch for UFortNevadaVehicleConfigs::BaseMovement");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostMovement) == 2468, "Offset mismatch for UFortNevadaVehicleConfigs::BoostMovement");
static_assert(offsetof(UFortNevadaVehicleConfigs, ChargingMovement) == 2488, "Offset mismatch for UFortNevadaVehicleConfigs::ChargingMovement");
static_assert(offsetof(UFortNevadaVehicleConfigs, UprightSpringForce) == 2508, "Offset mismatch for UFortNevadaVehicleConfigs::UprightSpringForce");
static_assert(offsetof(UFortNevadaVehicleConfigs, DebaseLaunchspeed) == 2520, "Offset mismatch for UFortNevadaVehicleConfigs::DebaseLaunchspeed");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxHeight) == 2524, "Offset mismatch for UFortNevadaVehicleConfigs::MaxHeight");
static_assert(offsetof(UFortNevadaVehicleConfigs, MinHeight) == 2528, "Offset mismatch for UFortNevadaVehicleConfigs::MinHeight");
static_assert(offsetof(UFortNevadaVehicleConfigs, OnEnterPitchAlpha) == 2532, "Offset mismatch for UFortNevadaVehicleConfigs::OnEnterPitchAlpha");
static_assert(offsetof(UFortNevadaVehicleConfigs, FallDamageHeightBuffer) == 2536, "Offset mismatch for UFortNevadaVehicleConfigs::FallDamageHeightBuffer");
static_assert(offsetof(UFortNevadaVehicleConfigs, TurningForce) == 2540, "Offset mismatch for UFortNevadaVehicleConfigs::TurningForce");
static_assert(offsetof(UFortNevadaVehicleConfigs, ThrustRotationAlpha) == 2544, "Offset mismatch for UFortNevadaVehicleConfigs::ThrustRotationAlpha");
static_assert(offsetof(UFortNevadaVehicleConfigs, PitchDrag) == 2548, "Offset mismatch for UFortNevadaVehicleConfigs::PitchDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, YawDrag) == 2552, "Offset mismatch for UFortNevadaVehicleConfigs::YawDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, RollDrag) == 2556, "Offset mismatch for UFortNevadaVehicleConfigs::RollDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostThrustDuration) == 2560, "Offset mismatch for UFortNevadaVehicleConfigs::BoostThrustDuration");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostDragDuration) == 2564, "Offset mismatch for UFortNevadaVehicleConfigs::BoostDragDuration");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumBoostCharges) == 2568, "Offset mismatch for UFortNevadaVehicleConfigs::NumBoostCharges");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostChargeDuration) == 2572, "Offset mismatch for UFortNevadaVehicleConfigs::BoostChargeDuration");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostChargeDelay) == 2576, "Offset mismatch for UFortNevadaVehicleConfigs::BoostChargeDelay");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostDragFinishSpeed) == 2580, "Offset mismatch for UFortNevadaVehicleConfigs::BoostDragFinishSpeed");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamRadius) == 2584, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamRadius");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamWithTargetRadius) == 2588, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamWithTargetRadius");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamSweepLength) == 2592, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamSweepLength");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamChargeTime) == 2632, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamChargeTime");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamDurationTime) == 2672, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamDurationTime");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTossImpulseStrengthForward) == 2712, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamTossImpulseStrengthForward");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTossImpulseStrengthUpward) == 2752, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamTossImpulseStrengthUpward");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamShutdownTime) == 2792, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamShutdownTime");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTurnOffDamage) == 2800, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamTurnOffDamage");
static_assert(offsetof(UFortNevadaVehicleConfigs, AllowTractorBeamAIPawns) == 2840, "Offset mismatch for UFortNevadaVehicleConfigs::AllowTractorBeamAIPawns");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamBreakForceMagnitude) == 2880, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamBreakForceMagnitude");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamActive) == 2888, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamActive");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamCooldown) == 2928, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamCooldown");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamDisruptionCooldown) == 2968, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamDisruptionCooldown");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamSocket) == 3008, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamSocket");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamAttachPositionOffset) == 3016, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamAttachPositionOffset");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTargetOverridenErrorCorrection) == 3040, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamTargetOverridenErrorCorrection");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimPitchDrag) == 3092, "Offset mismatch for UFortNevadaVehicleConfigs::VictimPitchDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimYawDrag) == 3096, "Offset mismatch for UFortNevadaVehicleConfigs::VictimYawDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimRollDrag) == 3100, "Offset mismatch for UFortNevadaVehicleConfigs::VictimRollDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamVictimUprightForce) == 3104, "Offset mismatch for UFortNevadaVehicleConfigs::TractorBeamVictimUprightForce");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumReboots) == 3116, "Offset mismatch for UFortNevadaVehicleConfigs::NumReboots");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumRebootsDefault) == 3120, "Offset mismatch for UFortNevadaVehicleConfigs::NumRebootsDefault");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingTime) == 3124, "Offset mismatch for UFortNevadaVehicleConfigs::MaxCrashingTime");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingScrapingTime) == 3128, "Offset mismatch for UFortNevadaVehicleConfigs::MaxCrashingScrapingTime");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingTimeSpentNotMoving) == 3132, "Offset mismatch for UFortNevadaVehicleConfigs::MaxCrashingTimeSpentNotMoving");
static_assert(offsetof(UFortNevadaVehicleConfigs, SpeedThresholdForCrashed) == 3136, "Offset mismatch for UFortNevadaVehicleConfigs::SpeedThresholdForCrashed");
static_assert(offsetof(UFortNevadaVehicleConfigs, RebootDuration) == 3144, "Offset mismatch for UFortNevadaVehicleConfigs::RebootDuration");
static_assert(offsetof(UFortNevadaVehicleConfigs, RebootDelay) == 3184, "Offset mismatch for UFortNevadaVehicleConfigs::RebootDelay");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingTraceRange) == 3224, "Offset mismatch for UFortNevadaVehicleConfigs::LandingTraceRange");
static_assert(offsetof(UFortNevadaVehicleConfigs, DesiredLandingDistance) == 3228, "Offset mismatch for UFortNevadaVehicleConfigs::DesiredLandingDistance");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingDelay_Max) == 3232, "Offset mismatch for UFortNevadaVehicleConfigs::LandingDelay_Max");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingDelay_Min) == 3236, "Offset mismatch for UFortNevadaVehicleConfigs::LandingDelay_Min");
static_assert(offsetof(UFortNevadaVehicleConfigs, HeightForMinLandingDelay) == 3240, "Offset mismatch for UFortNevadaVehicleConfigs::HeightForMinLandingDelay");
static_assert(offsetof(UFortNevadaVehicleConfigs, HeightForMaxLandingDelay) == 3244, "Offset mismatch for UFortNevadaVehicleConfigs::HeightForMaxLandingDelay");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingPitchAlphaMax) == 3248, "Offset mismatch for UFortNevadaVehicleConfigs::LandingPitchAlphaMax");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingPitchAlphaMin) == 3252, "Offset mismatch for UFortNevadaVehicleConfigs::LandingPitchAlphaMin");
static_assert(offsetof(UFortNevadaVehicleConfigs, DriverSeatRotationAnimBlendSpeed) == 3256, "Offset mismatch for UFortNevadaVehicleConfigs::DriverSeatRotationAnimBlendSpeed");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashingDesiredUpLerpFactor) == 3260, "Offset mismatch for UFortNevadaVehicleConfigs::CrashingDesiredUpLerpFactor");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashedLinearDrag) == 3264, "Offset mismatch for UFortNevadaVehicleConfigs::CrashedLinearDrag");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedDragCoef) == 3268, "Offset mismatch for UFortNevadaVehicleConfigs::LandedDragCoef");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedDragCoef2) == 3272, "Offset mismatch for UFortNevadaVehicleConfigs::LandedDragCoef2");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedMaxDragSpeed) == 3276, "Offset mismatch for UFortNevadaVehicleConfigs::LandedMaxDragSpeed");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashedAngularDragMultiplier) == 3280, "Offset mismatch for UFortNevadaVehicleConfigs::CrashedAngularDragMultiplier");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostFOV) == 3284, "Offset mismatch for UFortNevadaVehicleConfigs::BoostFOV");
static_assert(offsetof(UFortNevadaVehicleConfigs, ExtraTraceInteractRange) == 3288, "Offset mismatch for UFortNevadaVehicleConfigs::ExtraTraceInteractRange");
static_assert(offsetof(UFortNevadaVehicleConfigs, AntiGravityMult) == 3292, "Offset mismatch for UFortNevadaVehicleConfigs::AntiGravityMult");
static_assert(offsetof(UFortNevadaVehicleConfigs, InitialLiftDuration) == 3296, "Offset mismatch for UFortNevadaVehicleConfigs::InitialLiftDuration");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryCostDuringFlight) == 3304, "Offset mismatch for UFortNevadaVehicleConfigs::BatteryCostDuringFlight");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenDelay) == 3344, "Offset mismatch for UFortNevadaVehicleConfigs::BatteryRegenDelay");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenTickRate) == 3384, "Offset mismatch for UFortNevadaVehicleConfigs::BatteryRegenTickRate");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenAmount) == 3424, "Offset mismatch for UFortNevadaVehicleConfigs::BatteryRegenAmount");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxBattery) == 3464, "Offset mismatch for UFortNevadaVehicleConfigs::MaxBattery");
static_assert(offsetof(UFortNevadaVehicleConfigs, MinBatteryForFlight) == 3504, "Offset mismatch for UFortNevadaVehicleConfigs::MinBatteryForFlight");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitShapeNames) == 3544, "Offset mismatch for UFortNevadaVehicleConfigs::CockpitShapeNames");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitDamageMult) == 3560, "Offset mismatch for UFortNevadaVehicleConfigs::CockpitDamageMult");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitHealth) == 3600, "Offset mismatch for UFortNevadaVehicleConfigs::CockpitHealth");

// /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// Kind: Class; super: FortPlayerAnimInstance_OctopusDriver
class UFortPlayerAnimInstance_NevadaDriver
{
public:
    std::uint8_t Pad_0000[0x13B0]; // 0x0000
    void* NevadaVehicle; // 0x13B0 (Size: 0x8, Type: ObjectProperty)
    float AnimLeftRight; // 0x13B8 (Size: 0x4, Type: FloatProperty)
    float AnimForwardBackward; // 0x13BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RootAttachmentLoc[0x18]; // 0x13C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootAttachmentRot[0x18]; // 0x13D8 (Size: 0x18, Type: StructProperty)
    std::int32_t BoostCount; // 0x13F0 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousBoostCount; // 0x13F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBoostingAgain; // 0x13F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x13F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x13FA
    float MinVehicleVelocityToBeMoving; // 0x13FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriverSocketName[0x4]; // 0x1400 (Size: 0x4, Type: NameProperty)
    std::uint8_t RightHandAttachmentSocketName[0x4]; // 0x1404 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeftHandAttachmentSocketName[0x4]; // 0x1408 (Size: 0x4, Type: NameProperty)
    std::uint8_t RightFootAttachmentSocketName[0x4]; // 0x140C (Size: 0x4, Type: NameProperty)
    FName LeftFootAttachementSocketName; // 0x1410 (Size: 0x8, Type: NameProperty)
    std::uint8_t RightHandRotationOffset[0x18]; // 0x1418 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandRotationOffset[0x18]; // 0x1430 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightFootRotationOffset[0x18]; // 0x1448 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftFootRotationOffset[0x18]; // 0x1460 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootAttachmentOffset[0x1]; // 0x1478 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, NevadaVehicle) == 5040, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::NevadaVehicle");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, AnimLeftRight) == 5048, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::AnimLeftRight");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, AnimForwardBackward) == 5052, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::AnimForwardBackward");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentLoc) == 5056, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RootAttachmentLoc");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentRot) == 5080, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RootAttachmentRot");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, BoostCount) == 5104, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::BoostCount");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, PreviousBoostCount) == 5108, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::PreviousBoostCount");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, bIsBoostingAgain) == 5112, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::bIsBoostingAgain");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, bIsMoving) == 5113, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::bIsMoving");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, MinVehicleVelocityToBeMoving) == 5116, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::MinVehicleVelocityToBeMoving");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, DriverSocketName) == 5120, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::DriverSocketName");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightHandAttachmentSocketName) == 5124, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RightHandAttachmentSocketName");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftHandAttachmentSocketName) == 5128, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::LeftHandAttachmentSocketName");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightFootAttachmentSocketName) == 5132, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RightFootAttachmentSocketName");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftFootAttachementSocketName) == 5136, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::LeftFootAttachementSocketName");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightHandRotationOffset) == 5144, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RightHandRotationOffset");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftHandRotationOffset) == 5168, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::LeftHandRotationOffset");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightFootRotationOffset) == 5192, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RightFootRotationOffset");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftFootRotationOffset) == 5216, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::LeftFootRotationOffset");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentOffset) == 5240, "Offset mismatch for UFortPlayerAnimInstance_NevadaDriver::RootAttachmentOffset");
