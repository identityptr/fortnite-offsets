/**
 * decamp dumper generated SDK
 * Package: /Script/JethroVRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JethroVRuntime.DampedJethroSpringConfig
// Kind: ScriptStruct; super: none
struct FDampedJethroSpringConfig
{
public:
    float Stiffness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxAccel; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDampedJethroSpringConfig, Stiffness) == 0, "Offset mismatch for FDampedJethroSpringConfig::Stiffness");
static_assert(offsetof(FDampedJethroSpringConfig, Damping) == 4, "Offset mismatch for FDampedJethroSpringConfig::Damping");
static_assert(offsetof(FDampedJethroSpringConfig, MaxAccel) == 8, "Offset mismatch for FDampedJethroSpringConfig::MaxAccel");

// /Script/JethroVRuntime.FortJethroFlightModel
// Kind: ScriptStruct; super: none
struct FFortJethroFlightModel
{
public:
    void* Configs; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortJethroFlightModel, Configs) == 0, "Offset mismatch for FFortJethroFlightModel::Configs");

// /Script/JethroVRuntime.JethroAsyncInPersistent
// Kind: ScriptStruct; super: BiplaneAsyncInPersistent
struct FJethroAsyncInPersistent
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    void* FortAirVehicleConfigs; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJethroAsyncInPersistent, FortAirVehicleConfigs) == 456, "Offset mismatch for FJethroAsyncInPersistent::FortAirVehicleConfigs");

// /Script/JethroVRuntime.JethroAsyncOutPersistent
// Kind: ScriptStruct; super: BiplaneAsyncOutPersistent
struct FJethroAsyncOutPersistent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsEngineOn; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlying; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoStartEngineInAir; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEngineStartIsBeingHeld; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t AileronRoll[0xE0]; // 0x0030 (Size: 0xE0, Type: StructProperty)
    std::uint8_t BoostAction[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJethroAsyncOutPersistent, bIsEngineOn) == 40, "Offset mismatch for FJethroAsyncOutPersistent::bIsEngineOn");
static_assert(offsetof(FJethroAsyncOutPersistent, bIsFlying) == 41, "Offset mismatch for FJethroAsyncOutPersistent::bIsFlying");
static_assert(offsetof(FJethroAsyncOutPersistent, bAutoStartEngineInAir) == 42, "Offset mismatch for FJethroAsyncOutPersistent::bAutoStartEngineInAir");
static_assert(offsetof(FJethroAsyncOutPersistent, bEngineStartIsBeingHeld) == 43, "Offset mismatch for FJethroAsyncOutPersistent::bEngineStartIsBeingHeld");
static_assert(offsetof(FJethroAsyncOutPersistent, AileronRoll) == 48, "Offset mismatch for FJethroAsyncOutPersistent::AileronRoll");
static_assert(offsetof(FJethroAsyncOutPersistent, BoostAction) == 272, "Offset mismatch for FJethroAsyncOutPersistent::BoostAction");

// /Script/JethroVRuntime.JethroVehicleStatus
// Kind: ScriptStruct; super: none
struct FJethroVehicleStatus
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StateStartTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t LivesRemaining; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJethroVehicleStatus, State) == 0, "Offset mismatch for FJethroVehicleStatus::State");
static_assert(offsetof(FJethroVehicleStatus, StateStartTime) == 4, "Offset mismatch for FJethroVehicleStatus::StateStartTime");
static_assert(offsetof(FJethroVehicleStatus, LivesRemaining) == 8, "Offset mismatch for FJethroVehicleStatus::LivesRemaining");

// /Script/JethroVRuntime.FortAthenaJethroVehicle
// Kind: Class; super: FortAthenaFerretVehicle
class UFortAthenaJethroVehicle
{
public:
    std::uint8_t Pad_0000[0x28FC]; // 0x0000
    std::uint8_t JethroVehicleStatus[0xC]; // 0x28FC (Size: 0xC, Type: StructProperty)
    float DamageAlphaToTriggerDamageFX; // 0x2908 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x290C
    void* NativeComp_DamageStateFX; // 0x2910 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_DamageStateLastLife; // 0x2918 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_DamageState; // 0x2920 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_DamageStateFX; // 0x2928 (Size: 0x8, Type: ObjectProperty)
    void* Native_DamageStateSound; // 0x2930 (Size: 0x8, Type: ObjectProperty)
    void* Native_DamageStateLastLifeSound; // 0x2938 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CrashingDesiredUp[0x18]; // 0x2940 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnClientVehicleDamaged; // 0x2958 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x30]; // 0x2968
    float LocalJethroStateStartTime; // 0x2998 (Size: 0x4, Type: FloatProperty)
    float CrashingScrapingTime; // 0x299C (Size: 0x4, Type: FloatProperty)
    float CrashingNotMovingTimer; // 0x29A0 (Size: 0x4, Type: FloatProperty)
    float LastDamageAlpha; // 0x29A4 (Size: 0x4, Type: FloatProperty)
    FMulticastInlineDelegate OnJethroStateChangedDelegate; // 0x29A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> OpenPoseShapeIndices; // 0x29B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClosedPoseShapeIndices; // 0x29C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AltimeterTraceResult[0xF8]; // 0x29D8 (Size: 0xF8, Type: StructProperty)
    FMulticastInlineDelegate OnLandInputRejected; // 0x2AD0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x8]; // 0x2AE0
    TArray<void*> PrimaryWeaponMuzzleSocketFiringPattern; // 0x2AE8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x4]; // 0x2AF8
    std::uint8_t CurrentWeaponMuzzleSocketIndex; // 0x2AFC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x13]; // 0x2AFD
    void* FortJethroVehicleConfigs; // 0x2B10 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x2B18
    std::uint8_t JethroFlightModel[0x198]; // 0x2B20 (Size: 0x198, Type: StructProperty)
    void* InputActionToggleAlternateWeapon; // 0x2CB8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionToggleBoostMode; // 0x2CC0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionFreeLookEnable; // 0x2CC8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionLand; // 0x2CD0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionLookGamepad; // 0x2CD8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionMoveAndLookMouse; // 0x2CE0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionShoot; // 0x2CE8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionBankLeft; // 0x2CF0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionBankRight; // 0x2CF8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionThrottleDown; // 0x2D00 (Size: 0x8, Type: ObjectProperty)
    void* InputActionThrottleUp; // 0x2D08 (Size: 0x8, Type: ObjectProperty)
    void* CursorPawnComponentClass; // 0x2D10 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bShouldCursorAffectSteering; // 0x2D18 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x2D19
    std::uint8_t CursorSteeringDeadzone[0x10]; // 0x2D20 (Size: 0x10, Type: StructProperty)
    std::uint8_t CursorSteeringEasingFunc; // 0x2D30 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0008[0x3]; // 0x2D31
    float CursorSteeringBlendExp; // 0x2D34 (Size: 0x4, Type: FloatProperty)
    std::int32_t CursorSteeringSteps; // 0x2D38 (Size: 0x4, Type: IntProperty)
    std::int32_t NumDebugCursorEllipseSides; // 0x2D3C (Size: 0x4, Type: IntProperty)
    std::int32_t NumDebugCursorCircleSides; // 0x2D40 (Size: 0x4, Type: IntProperty)
    float DebugCursorCircleRadius; // 0x2D44 (Size: 0x4, Type: FloatProperty)
    float DebugCursorLineThickness; // 0x2D48 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaJethroVehicle, JethroVehicleStatus) == 10492, "Offset mismatch for UFortAthenaJethroVehicle::JethroVehicleStatus");
static_assert(offsetof(UFortAthenaJethroVehicle, DamageAlphaToTriggerDamageFX) == 10504, "Offset mismatch for UFortAthenaJethroVehicle::DamageAlphaToTriggerDamageFX");
static_assert(offsetof(UFortAthenaJethroVehicle, NativeComp_DamageStateFX) == 10512, "Offset mismatch for UFortAthenaJethroVehicle::NativeComp_DamageStateFX");
static_assert(offsetof(UFortAthenaJethroVehicle, NativeComp_DamageStateLastLife) == 10520, "Offset mismatch for UFortAthenaJethroVehicle::NativeComp_DamageStateLastLife");
static_assert(offsetof(UFortAthenaJethroVehicle, NativeComp_DamageState) == 10528, "Offset mismatch for UFortAthenaJethroVehicle::NativeComp_DamageState");
static_assert(offsetof(UFortAthenaJethroVehicle, NativeSys_DamageStateFX) == 10536, "Offset mismatch for UFortAthenaJethroVehicle::NativeSys_DamageStateFX");
static_assert(offsetof(UFortAthenaJethroVehicle, Native_DamageStateSound) == 10544, "Offset mismatch for UFortAthenaJethroVehicle::Native_DamageStateSound");
static_assert(offsetof(UFortAthenaJethroVehicle, Native_DamageStateLastLifeSound) == 10552, "Offset mismatch for UFortAthenaJethroVehicle::Native_DamageStateLastLifeSound");
static_assert(offsetof(UFortAthenaJethroVehicle, CrashingDesiredUp) == 10560, "Offset mismatch for UFortAthenaJethroVehicle::CrashingDesiredUp");
static_assert(offsetof(UFortAthenaJethroVehicle, OnClientVehicleDamaged) == 10584, "Offset mismatch for UFortAthenaJethroVehicle::OnClientVehicleDamaged");
static_assert(offsetof(UFortAthenaJethroVehicle, LocalJethroStateStartTime) == 10648, "Offset mismatch for UFortAthenaJethroVehicle::LocalJethroStateStartTime");
static_assert(offsetof(UFortAthenaJethroVehicle, CrashingScrapingTime) == 10652, "Offset mismatch for UFortAthenaJethroVehicle::CrashingScrapingTime");
static_assert(offsetof(UFortAthenaJethroVehicle, CrashingNotMovingTimer) == 10656, "Offset mismatch for UFortAthenaJethroVehicle::CrashingNotMovingTimer");
static_assert(offsetof(UFortAthenaJethroVehicle, LastDamageAlpha) == 10660, "Offset mismatch for UFortAthenaJethroVehicle::LastDamageAlpha");
static_assert(offsetof(UFortAthenaJethroVehicle, OnJethroStateChangedDelegate) == 10664, "Offset mismatch for UFortAthenaJethroVehicle::OnJethroStateChangedDelegate");
static_assert(offsetof(UFortAthenaJethroVehicle, OpenPoseShapeIndices) == 10680, "Offset mismatch for UFortAthenaJethroVehicle::OpenPoseShapeIndices");
static_assert(offsetof(UFortAthenaJethroVehicle, ClosedPoseShapeIndices) == 10696, "Offset mismatch for UFortAthenaJethroVehicle::ClosedPoseShapeIndices");
static_assert(offsetof(UFortAthenaJethroVehicle, AltimeterTraceResult) == 10712, "Offset mismatch for UFortAthenaJethroVehicle::AltimeterTraceResult");
static_assert(offsetof(UFortAthenaJethroVehicle, OnLandInputRejected) == 10960, "Offset mismatch for UFortAthenaJethroVehicle::OnLandInputRejected");
static_assert(offsetof(UFortAthenaJethroVehicle, PrimaryWeaponMuzzleSocketFiringPattern) == 10984, "Offset mismatch for UFortAthenaJethroVehicle::PrimaryWeaponMuzzleSocketFiringPattern");
static_assert(offsetof(UFortAthenaJethroVehicle, CurrentWeaponMuzzleSocketIndex) == 11004, "Offset mismatch for UFortAthenaJethroVehicle::CurrentWeaponMuzzleSocketIndex");
static_assert(offsetof(UFortAthenaJethroVehicle, FortJethroVehicleConfigs) == 11024, "Offset mismatch for UFortAthenaJethroVehicle::FortJethroVehicleConfigs");
static_assert(offsetof(UFortAthenaJethroVehicle, JethroFlightModel) == 11040, "Offset mismatch for UFortAthenaJethroVehicle::JethroFlightModel");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionToggleAlternateWeapon) == 11448, "Offset mismatch for UFortAthenaJethroVehicle::InputActionToggleAlternateWeapon");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionToggleBoostMode) == 11456, "Offset mismatch for UFortAthenaJethroVehicle::InputActionToggleBoostMode");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionFreeLookEnable) == 11464, "Offset mismatch for UFortAthenaJethroVehicle::InputActionFreeLookEnable");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionLand) == 11472, "Offset mismatch for UFortAthenaJethroVehicle::InputActionLand");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionLookGamepad) == 11480, "Offset mismatch for UFortAthenaJethroVehicle::InputActionLookGamepad");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionMoveAndLookMouse) == 11488, "Offset mismatch for UFortAthenaJethroVehicle::InputActionMoveAndLookMouse");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionShoot) == 11496, "Offset mismatch for UFortAthenaJethroVehicle::InputActionShoot");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionBankLeft) == 11504, "Offset mismatch for UFortAthenaJethroVehicle::InputActionBankLeft");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionBankRight) == 11512, "Offset mismatch for UFortAthenaJethroVehicle::InputActionBankRight");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionThrottleDown) == 11520, "Offset mismatch for UFortAthenaJethroVehicle::InputActionThrottleDown");
static_assert(offsetof(UFortAthenaJethroVehicle, InputActionThrottleUp) == 11528, "Offset mismatch for UFortAthenaJethroVehicle::InputActionThrottleUp");
static_assert(offsetof(UFortAthenaJethroVehicle, CursorPawnComponentClass) == 11536, "Offset mismatch for UFortAthenaJethroVehicle::CursorPawnComponentClass");
static_assert(offsetof(UFortAthenaJethroVehicle, bShouldCursorAffectSteering) == 11544, "Offset mismatch for UFortAthenaJethroVehicle::bShouldCursorAffectSteering");
static_assert(offsetof(UFortAthenaJethroVehicle, CursorSteeringDeadzone) == 11552, "Offset mismatch for UFortAthenaJethroVehicle::CursorSteeringDeadzone");
static_assert(offsetof(UFortAthenaJethroVehicle, CursorSteeringEasingFunc) == 11568, "Offset mismatch for UFortAthenaJethroVehicle::CursorSteeringEasingFunc");
static_assert(offsetof(UFortAthenaJethroVehicle, CursorSteeringBlendExp) == 11572, "Offset mismatch for UFortAthenaJethroVehicle::CursorSteeringBlendExp");
static_assert(offsetof(UFortAthenaJethroVehicle, CursorSteeringSteps) == 11576, "Offset mismatch for UFortAthenaJethroVehicle::CursorSteeringSteps");
static_assert(offsetof(UFortAthenaJethroVehicle, NumDebugCursorEllipseSides) == 11580, "Offset mismatch for UFortAthenaJethroVehicle::NumDebugCursorEllipseSides");
static_assert(offsetof(UFortAthenaJethroVehicle, NumDebugCursorCircleSides) == 11584, "Offset mismatch for UFortAthenaJethroVehicle::NumDebugCursorCircleSides");
static_assert(offsetof(UFortAthenaJethroVehicle, DebugCursorCircleRadius) == 11588, "Offset mismatch for UFortAthenaJethroVehicle::DebugCursorCircleRadius");
static_assert(offsetof(UFortAthenaJethroVehicle, DebugCursorLineThickness) == 11592, "Offset mismatch for UFortAthenaJethroVehicle::DebugCursorLineThickness");

// /Script/JethroVRuntime.FortJethroVehicleConfigs
// Kind: Class; super: FortFerretVehicleConfigs
class UFortJethroVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0xC30]; // 0x0000
    std::int32_t NumRebootsDefault; // 0x0C30 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C34
    std::uint8_t RebootDuration[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t RebootDelay[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    float MaxCrashingTime; // 0x0C88 (Size: 0x4, Type: FloatProperty)
    float MaxCrashingScrapingTime; // 0x0C8C (Size: 0x4, Type: FloatProperty)
    float MaxCrashingTimeSpentNotMoving; // 0x0C90 (Size: 0x4, Type: FloatProperty)
    float SpeedThresholdForCrashed; // 0x0C94 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOrientDuringCrash; // 0x0C98 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0C99
    std::uint8_t CrashingDesiredUp[0x18]; // 0x0CA0 (Size: 0x18, Type: StructProperty)
    float CrashingDesiredUpLerpFactor; // 0x0CB8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UprightSpringForce[0xC]; // 0x0CBC (Size: 0xC, Type: StructProperty)
    std::uint8_t StartupLiftForceCurve[0x48]; // 0x0CC8 (Size: 0x48, Type: StructProperty)
    float StartupLiftTime; // 0x0D10 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0D14
    std::uint8_t LandingLiftForceCurve[0x48]; // 0x0D18 (Size: 0x48, Type: StructProperty)
    float LandingLiftTime; // 0x0D60 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0D64
    std::uint8_t DesiredLandingSpeedKmh[0x28]; // 0x0D68 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandingSpeedCorrectionMagnitude[0x28]; // 0x0D90 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowVTOL; // 0x0DB8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0DB9
    float MinDesiredFlightSpeedKmh; // 0x0DBC (Size: 0x4, Type: FloatProperty)
    float AutoAccelerateOutOfRangeBySpeedKmh; // 0x0DC0 (Size: 0x4, Type: FloatProperty)
    float AutoAccelerateForwardAlpha; // 0x0DC4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MiddleMuzzleSocketName[0x4]; // 0x0DC8 (Size: 0x4, Type: NameProperty)
    float LiftoffHoverHeight; // 0x0DCC (Size: 0x4, Type: FloatProperty)
    float HoverBrakeForceMultiplier; // 0x0DD0 (Size: 0x4, Type: FloatProperty)
    float HoverTorqueBrakeMultiplier; // 0x0DD4 (Size: 0x4, Type: FloatProperty)
    float FlightSlowdownBrakeForce; // 0x0DD8 (Size: 0x4, Type: FloatProperty)
    float HoverStiffness; // 0x0DDC (Size: 0x4, Type: FloatProperty)
    float HoverDamping; // 0x0DE0 (Size: 0x4, Type: FloatProperty)
    float HoverMaxAccel; // 0x0DE4 (Size: 0x4, Type: FloatProperty)
    float HoverYawStiffness; // 0x0DE8 (Size: 0x4, Type: FloatProperty)
    float HoverYawDamping; // 0x0DEC (Size: 0x4, Type: FloatProperty)
    float HoverYawMaxAccel; // 0x0DF0 (Size: 0x4, Type: FloatProperty)
    float FlightSlowdownExitLinearVelocity; // 0x0DF4 (Size: 0x4, Type: FloatProperty)
    float FlightSlowdownExitAngularVelocity; // 0x0DF8 (Size: 0x4, Type: FloatProperty)
    float ForceCurveLandingRotationSpeed; // 0x0DFC (Size: 0x4, Type: FloatProperty)
    float ForceCurveLandingTorqueGain; // 0x0E00 (Size: 0x4, Type: FloatProperty)
    float ConstantSpeedVTOLLandingForce; // 0x0E04 (Size: 0x4, Type: FloatProperty)
    float ConstantSpeedLandingTopSpeed; // 0x0E08 (Size: 0x4, Type: FloatProperty)
    float ConstantSpeedLandingBrakeForce; // 0x0E0C (Size: 0x4, Type: FloatProperty)
    float HeightToTriggerLandingCurve; // 0x0E10 (Size: 0x4, Type: FloatProperty)
    float LandingToFlightDelay; // 0x0E14 (Size: 0x4, Type: FloatProperty)
    float FreeLookRecenteredToleranceRadians; // 0x0E18 (Size: 0x4, Type: FloatProperty)
    float MinForwardInputToStart; // 0x0E1C (Size: 0x4, Type: FloatProperty)
    float MinForwardInputToStartTouch; // 0x0E20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAutoLiftoffWhenDriverEnters; // 0x0E24 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0E25
    std::uint8_t AllowedDamageSourceTagsToDriver[0x20]; // 0x0E28 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowFlipWhileOnVehicle; // 0x0E48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0E49
    float MinLinearVelocityToAllowSleep; // 0x0E4C (Size: 0x4, Type: FloatProperty)
    float MinAngularVelocityToAllowSleep; // 0x0E50 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InitialJethroState; // 0x0E54 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableStuckLogic; // 0x0E55 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x2]; // 0x0E56
    float StuckMaxForwardSpeedToScaleHeadingControl; // 0x0E58 (Size: 0x4, Type: FloatProperty)
    float StuckMinForwardSpeedRunningVarianceSq; // 0x0E5C (Size: 0x4, Type: FloatProperty)
    float StuckRunningAverageWindowSize; // 0x0E60 (Size: 0x4, Type: FloatProperty)
    float StuckTimerThresholdTimeSeconds; // 0x0E64 (Size: 0x4, Type: FloatProperty)
    float StuckHeadingControlMagnifier; // 0x0E68 (Size: 0x4, Type: FloatProperty)
    float StuckMaxForwardAlpha; // 0x0E6C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortJethroVehicleConfigs, NumRebootsDefault) == 3120, "Offset mismatch for UFortJethroVehicleConfigs::NumRebootsDefault");
static_assert(offsetof(UFortJethroVehicleConfigs, RebootDuration) == 3128, "Offset mismatch for UFortJethroVehicleConfigs::RebootDuration");
static_assert(offsetof(UFortJethroVehicleConfigs, RebootDelay) == 3168, "Offset mismatch for UFortJethroVehicleConfigs::RebootDelay");
static_assert(offsetof(UFortJethroVehicleConfigs, MaxCrashingTime) == 3208, "Offset mismatch for UFortJethroVehicleConfigs::MaxCrashingTime");
static_assert(offsetof(UFortJethroVehicleConfigs, MaxCrashingScrapingTime) == 3212, "Offset mismatch for UFortJethroVehicleConfigs::MaxCrashingScrapingTime");
static_assert(offsetof(UFortJethroVehicleConfigs, MaxCrashingTimeSpentNotMoving) == 3216, "Offset mismatch for UFortJethroVehicleConfigs::MaxCrashingTimeSpentNotMoving");
static_assert(offsetof(UFortJethroVehicleConfigs, SpeedThresholdForCrashed) == 3220, "Offset mismatch for UFortJethroVehicleConfigs::SpeedThresholdForCrashed");
static_assert(offsetof(UFortJethroVehicleConfigs, bOrientDuringCrash) == 3224, "Offset mismatch for UFortJethroVehicleConfigs::bOrientDuringCrash");
static_assert(offsetof(UFortJethroVehicleConfigs, CrashingDesiredUp) == 3232, "Offset mismatch for UFortJethroVehicleConfigs::CrashingDesiredUp");
static_assert(offsetof(UFortJethroVehicleConfigs, CrashingDesiredUpLerpFactor) == 3256, "Offset mismatch for UFortJethroVehicleConfigs::CrashingDesiredUpLerpFactor");
static_assert(offsetof(UFortJethroVehicleConfigs, UprightSpringForce) == 3260, "Offset mismatch for UFortJethroVehicleConfigs::UprightSpringForce");
static_assert(offsetof(UFortJethroVehicleConfigs, StartupLiftForceCurve) == 3272, "Offset mismatch for UFortJethroVehicleConfigs::StartupLiftForceCurve");
static_assert(offsetof(UFortJethroVehicleConfigs, StartupLiftTime) == 3344, "Offset mismatch for UFortJethroVehicleConfigs::StartupLiftTime");
static_assert(offsetof(UFortJethroVehicleConfigs, LandingLiftForceCurve) == 3352, "Offset mismatch for UFortJethroVehicleConfigs::LandingLiftForceCurve");
static_assert(offsetof(UFortJethroVehicleConfigs, LandingLiftTime) == 3424, "Offset mismatch for UFortJethroVehicleConfigs::LandingLiftTime");
static_assert(offsetof(UFortJethroVehicleConfigs, DesiredLandingSpeedKmh) == 3432, "Offset mismatch for UFortJethroVehicleConfigs::DesiredLandingSpeedKmh");
static_assert(offsetof(UFortJethroVehicleConfigs, LandingSpeedCorrectionMagnitude) == 3472, "Offset mismatch for UFortJethroVehicleConfigs::LandingSpeedCorrectionMagnitude");
static_assert(offsetof(UFortJethroVehicleConfigs, bAllowVTOL) == 3512, "Offset mismatch for UFortJethroVehicleConfigs::bAllowVTOL");
static_assert(offsetof(UFortJethroVehicleConfigs, MinDesiredFlightSpeedKmh) == 3516, "Offset mismatch for UFortJethroVehicleConfigs::MinDesiredFlightSpeedKmh");
static_assert(offsetof(UFortJethroVehicleConfigs, AutoAccelerateOutOfRangeBySpeedKmh) == 3520, "Offset mismatch for UFortJethroVehicleConfigs::AutoAccelerateOutOfRangeBySpeedKmh");
static_assert(offsetof(UFortJethroVehicleConfigs, AutoAccelerateForwardAlpha) == 3524, "Offset mismatch for UFortJethroVehicleConfigs::AutoAccelerateForwardAlpha");
static_assert(offsetof(UFortJethroVehicleConfigs, MiddleMuzzleSocketName) == 3528, "Offset mismatch for UFortJethroVehicleConfigs::MiddleMuzzleSocketName");
static_assert(offsetof(UFortJethroVehicleConfigs, LiftoffHoverHeight) == 3532, "Offset mismatch for UFortJethroVehicleConfigs::LiftoffHoverHeight");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverBrakeForceMultiplier) == 3536, "Offset mismatch for UFortJethroVehicleConfigs::HoverBrakeForceMultiplier");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverTorqueBrakeMultiplier) == 3540, "Offset mismatch for UFortJethroVehicleConfigs::HoverTorqueBrakeMultiplier");
static_assert(offsetof(UFortJethroVehicleConfigs, FlightSlowdownBrakeForce) == 3544, "Offset mismatch for UFortJethroVehicleConfigs::FlightSlowdownBrakeForce");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverStiffness) == 3548, "Offset mismatch for UFortJethroVehicleConfigs::HoverStiffness");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverDamping) == 3552, "Offset mismatch for UFortJethroVehicleConfigs::HoverDamping");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverMaxAccel) == 3556, "Offset mismatch for UFortJethroVehicleConfigs::HoverMaxAccel");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverYawStiffness) == 3560, "Offset mismatch for UFortJethroVehicleConfigs::HoverYawStiffness");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverYawDamping) == 3564, "Offset mismatch for UFortJethroVehicleConfigs::HoverYawDamping");
static_assert(offsetof(UFortJethroVehicleConfigs, HoverYawMaxAccel) == 3568, "Offset mismatch for UFortJethroVehicleConfigs::HoverYawMaxAccel");
static_assert(offsetof(UFortJethroVehicleConfigs, FlightSlowdownExitLinearVelocity) == 3572, "Offset mismatch for UFortJethroVehicleConfigs::FlightSlowdownExitLinearVelocity");
static_assert(offsetof(UFortJethroVehicleConfigs, FlightSlowdownExitAngularVelocity) == 3576, "Offset mismatch for UFortJethroVehicleConfigs::FlightSlowdownExitAngularVelocity");
static_assert(offsetof(UFortJethroVehicleConfigs, ForceCurveLandingRotationSpeed) == 3580, "Offset mismatch for UFortJethroVehicleConfigs::ForceCurveLandingRotationSpeed");
static_assert(offsetof(UFortJethroVehicleConfigs, ForceCurveLandingTorqueGain) == 3584, "Offset mismatch for UFortJethroVehicleConfigs::ForceCurveLandingTorqueGain");
static_assert(offsetof(UFortJethroVehicleConfigs, ConstantSpeedVTOLLandingForce) == 3588, "Offset mismatch for UFortJethroVehicleConfigs::ConstantSpeedVTOLLandingForce");
static_assert(offsetof(UFortJethroVehicleConfigs, ConstantSpeedLandingTopSpeed) == 3592, "Offset mismatch for UFortJethroVehicleConfigs::ConstantSpeedLandingTopSpeed");
static_assert(offsetof(UFortJethroVehicleConfigs, ConstantSpeedLandingBrakeForce) == 3596, "Offset mismatch for UFortJethroVehicleConfigs::ConstantSpeedLandingBrakeForce");
static_assert(offsetof(UFortJethroVehicleConfigs, HeightToTriggerLandingCurve) == 3600, "Offset mismatch for UFortJethroVehicleConfigs::HeightToTriggerLandingCurve");
static_assert(offsetof(UFortJethroVehicleConfigs, LandingToFlightDelay) == 3604, "Offset mismatch for UFortJethroVehicleConfigs::LandingToFlightDelay");
static_assert(offsetof(UFortJethroVehicleConfigs, FreeLookRecenteredToleranceRadians) == 3608, "Offset mismatch for UFortJethroVehicleConfigs::FreeLookRecenteredToleranceRadians");
static_assert(offsetof(UFortJethroVehicleConfigs, MinForwardInputToStart) == 3612, "Offset mismatch for UFortJethroVehicleConfigs::MinForwardInputToStart");
static_assert(offsetof(UFortJethroVehicleConfigs, MinForwardInputToStartTouch) == 3616, "Offset mismatch for UFortJethroVehicleConfigs::MinForwardInputToStartTouch");
static_assert(offsetof(UFortJethroVehicleConfigs, bShouldAutoLiftoffWhenDriverEnters) == 3620, "Offset mismatch for UFortJethroVehicleConfigs::bShouldAutoLiftoffWhenDriverEnters");
static_assert(offsetof(UFortJethroVehicleConfigs, AllowedDamageSourceTagsToDriver) == 3624, "Offset mismatch for UFortJethroVehicleConfigs::AllowedDamageSourceTagsToDriver");
static_assert(offsetof(UFortJethroVehicleConfigs, bAllowFlipWhileOnVehicle) == 3656, "Offset mismatch for UFortJethroVehicleConfigs::bAllowFlipWhileOnVehicle");
static_assert(offsetof(UFortJethroVehicleConfigs, MinLinearVelocityToAllowSleep) == 3660, "Offset mismatch for UFortJethroVehicleConfigs::MinLinearVelocityToAllowSleep");
static_assert(offsetof(UFortJethroVehicleConfigs, MinAngularVelocityToAllowSleep) == 3664, "Offset mismatch for UFortJethroVehicleConfigs::MinAngularVelocityToAllowSleep");
static_assert(offsetof(UFortJethroVehicleConfigs, InitialJethroState) == 3668, "Offset mismatch for UFortJethroVehicleConfigs::InitialJethroState");
static_assert(offsetof(UFortJethroVehicleConfigs, bEnableStuckLogic) == 3669, "Offset mismatch for UFortJethroVehicleConfigs::bEnableStuckLogic");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckMaxForwardSpeedToScaleHeadingControl) == 3672, "Offset mismatch for UFortJethroVehicleConfigs::StuckMaxForwardSpeedToScaleHeadingControl");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckMinForwardSpeedRunningVarianceSq) == 3676, "Offset mismatch for UFortJethroVehicleConfigs::StuckMinForwardSpeedRunningVarianceSq");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckRunningAverageWindowSize) == 3680, "Offset mismatch for UFortJethroVehicleConfigs::StuckRunningAverageWindowSize");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckTimerThresholdTimeSeconds) == 3684, "Offset mismatch for UFortJethroVehicleConfigs::StuckTimerThresholdTimeSeconds");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckHeadingControlMagnifier) == 3688, "Offset mismatch for UFortJethroVehicleConfigs::StuckHeadingControlMagnifier");
static_assert(offsetof(UFortJethroVehicleConfigs, StuckMaxForwardAlpha) == 3692, "Offset mismatch for UFortJethroVehicleConfigs::StuckMaxForwardAlpha");
