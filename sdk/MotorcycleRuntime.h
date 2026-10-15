/**
 * decamp dumper generated SDK
 * Package: /Script/MotorcycleRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MotorcycleRuntime.MotorcycleRuntimeBoostInfo
// Kind: ScriptStruct; super: none
struct FMotorcycleRuntimeBoostInfo
{
public:
    std::uint8_t bCanBoost; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bUsesRechargeableBoost (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BoostPushForce; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedForceMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RechargeableBoostRateOfRegen; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RechargeableBoostRateOfUse; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotorcycleRuntimeBoostInfo, bCanBoost) == 0, "Offset mismatch for FMotorcycleRuntimeBoostInfo::bCanBoost");
static_assert(offsetof(FMotorcycleRuntimeBoostInfo, BoostPushForce) == 4, "Offset mismatch for FMotorcycleRuntimeBoostInfo::BoostPushForce");
static_assert(offsetof(FMotorcycleRuntimeBoostInfo, BoostTopSpeedForceMultiplier) == 8, "Offset mismatch for FMotorcycleRuntimeBoostInfo::BoostTopSpeedForceMultiplier");
static_assert(offsetof(FMotorcycleRuntimeBoostInfo, BoostTopSpeedMultiplier) == 12, "Offset mismatch for FMotorcycleRuntimeBoostInfo::BoostTopSpeedMultiplier");
static_assert(offsetof(FMotorcycleRuntimeBoostInfo, RechargeableBoostRateOfRegen) == 16, "Offset mismatch for FMotorcycleRuntimeBoostInfo::RechargeableBoostRateOfRegen");
static_assert(offsetof(FMotorcycleRuntimeBoostInfo, RechargeableBoostRateOfUse) == 20, "Offset mismatch for FMotorcycleRuntimeBoostInfo::RechargeableBoostRateOfUse");

// /Script/MotorcycleRuntime.MotorcycleWheel
// Kind: ScriptStruct; super: none
struct FMotorcycleWheel
{
public:
    std::uint8_t WheelSocket[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Radius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TireWidth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpringLength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WheelieMinSpringLength; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpringStiff; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SpringDamp; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringLength; // 0x001C (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringStiff; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringDamp; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float PowerslideSpringStiff; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float PowerslideSpringDamp; // 0x002C (Size: 0x4, Type: FloatProperty)
    float WheelieSpringStiff; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float WheelieSpringDamp; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WheelTraceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMotorcycleWheel, WheelSocket) == 0, "Offset mismatch for FMotorcycleWheel::WheelSocket");
static_assert(offsetof(FMotorcycleWheel, Radius) == 4, "Offset mismatch for FMotorcycleWheel::Radius");
static_assert(offsetof(FMotorcycleWheel, TireWidth) == 8, "Offset mismatch for FMotorcycleWheel::TireWidth");
static_assert(offsetof(FMotorcycleWheel, SpringLength) == 12, "Offset mismatch for FMotorcycleWheel::SpringLength");
static_assert(offsetof(FMotorcycleWheel, WheelieMinSpringLength) == 16, "Offset mismatch for FMotorcycleWheel::WheelieMinSpringLength");
static_assert(offsetof(FMotorcycleWheel, SpringStiff) == 20, "Offset mismatch for FMotorcycleWheel::SpringStiff");
static_assert(offsetof(FMotorcycleWheel, SpringDamp) == 24, "Offset mismatch for FMotorcycleWheel::SpringDamp");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringLength) == 28, "Offset mismatch for FMotorcycleWheel::PoppedTireSpringLength");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringStiff) == 32, "Offset mismatch for FMotorcycleWheel::PoppedTireSpringStiff");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringDamp) == 36, "Offset mismatch for FMotorcycleWheel::PoppedTireSpringDamp");
static_assert(offsetof(FMotorcycleWheel, PowerslideSpringStiff) == 40, "Offset mismatch for FMotorcycleWheel::PowerslideSpringStiff");
static_assert(offsetof(FMotorcycleWheel, PowerslideSpringDamp) == 44, "Offset mismatch for FMotorcycleWheel::PowerslideSpringDamp");
static_assert(offsetof(FMotorcycleWheel, WheelieSpringStiff) == 48, "Offset mismatch for FMotorcycleWheel::WheelieSpringStiff");
static_assert(offsetof(FMotorcycleWheel, WheelieSpringDamp) == 52, "Offset mismatch for FMotorcycleWheel::WheelieSpringDamp");
static_assert(offsetof(FMotorcycleWheel, WheelTraceMode) == 56, "Offset mismatch for FMotorcycleWheel::WheelTraceMode");

// /Script/MotorcycleRuntime.FortCameraMode_Motorcycle
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UFortCameraMode_Motorcycle
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    std::uint8_t CameraOriginOffset[0x1]; // 0x2080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraMode_Motorcycle, CameraOriginOffset) == 8320, "Offset mismatch for UFortCameraMode_Motorcycle::CameraOriginOffset");

// /Script/MotorcycleRuntime.FortMotorcycleVehicle
// Kind: Class; super: FortAthenaSKMotorVehicle
class UFortMotorcycleVehicle
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    FMulticastInlineDelegate OnStartChargingJumpDelegate; // 0x20A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelChargingJumpDelegate; // 0x20B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJumpDelegate; // 0x20C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChargingJumpDelegate; // 0x20D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartAirTrickDelegate; // 0x20E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFinishAirTrickDelegate; // 0x20F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartWheelieDelegate; // 0x2100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReleaseWheelieDelegate; // 0x2110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLandWheelieDelegate; // 0x2120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailWheelieDelegate; // 0x2130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartStoppieDelegate; // 0x2140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReleaseStoppieDelegate; // 0x2150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLandStoppieDelegate; // 0x2160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInventoryModeChangedDelegate; // 0x2170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSuperSlidingChangedDelegate; // 0x2180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InventoryCameraModeClass; // 0x2190 (Size: 0x8, Type: ClassProperty)
    void* InventoryCameraModeClassADS; // 0x2198 (Size: 0x8, Type: ClassProperty)
    void* PassengerCameraModeClass; // 0x21A0 (Size: 0x8, Type: ClassProperty)
    void* PassengerCameraModeClassADS; // 0x21A8 (Size: 0x8, Type: ClassProperty)
    void* FortMotorcycleVehicleConfigs; // 0x21B0 (Size: 0x8, Type: ObjectProperty)
    FName RearAxleSocket; // 0x21B8 (Size: 0x8, Type: NameProperty)
    TArray<void*> ActionDefForUI; // 0x21C0 (Size: 0x10, Type: ArrayProperty)
    void* InputActionTrick; // 0x21D0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionToggleDrivingMode; // 0x21D8 (Size: 0x8, Type: ObjectProperty)
    float SwingArmRotation; // 0x21E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x3C]; // 0x21E4
    TArray<void*> BoostShapeIndices; // 0x2220 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsBoostAttacking; // 0x2230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x2231
    float RechargeableBoostPercent; // 0x2234 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoostInfo[0x28]; // 0x2238 (Size: 0x28, Type: StructProperty)
    std::uint8_t CachedTrickType; // 0x2260 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHadPassengerAtTrickStart; // 0x2261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x36]; // 0x2262
    TArray<void*> PassengerADSSockets; // 0x2298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PassengerADSRelativeOffsets; // 0x22A8 (Size: 0x10, Type: ArrayProperty)
    void* CachedNiagaraComponentRoadAndExhaust; // 0x22B8 (Size: 0x8, Type: ObjectProperty)
    FString RoadAndExhaustNiagaraComponentName; // 0x22C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t RoadAndExhaustVehicleSpeedName[0x4]; // 0x22D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustSlideDirectionName[0x4]; // 0x22D4 (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustMinSpeedForDust; // 0x22D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustDustRearName[0x4]; // 0x22DC (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustColorLerpName[0x4]; // 0x22E0 (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustDustColorLerp; // 0x22E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustDustAlphaMultiplierName[0x4]; // 0x22E8 (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustDustAlphaMultiplier; // 0x22EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustPeelOutColorIndexName[0x4]; // 0x22F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustPeelOutRearName[0x4]; // 0x22F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustIsPeelOutOnRoadName[0x4]; // 0x22F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustIsPeelOutOnRoadRewindName[0x4]; // 0x22FC (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustIsInAirName[0x4]; // 0x2300 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustCameraDirtGameplayCueTag[0x4]; // 0x2304 (Size: 0x4, Type: StructProperty)
    std::uint8_t RoadAndExhaustCameraWaterGameplayCueTag[0x8]; // 0x2308 (Size: 0x8, Type: StructProperty)
    TArray<void*> RoadAndExhaustSurfaceTypeArrayForFX; // 0x2310 (Size: 0x10, Type: ArrayProperty)
    void* DriverCameraShakeInstance; // 0x2320 (Size: 0x8, Type: ObjectProperty)
    void* AcceleratingCameraShakeInstance; // 0x2328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x2330
    std::uint8_t RoadAndExhaustHeadlightsName[0x4]; // 0x2338 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustBrakelightsName[0x4]; // 0x233C (Size: 0x4, Type: NameProperty)
    std::uint8_t DoorBashMinSpeed[0x28]; // 0x2340 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashMaxSpeed[0x28]; // 0x2368 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashForwardDistanceMin[0x28]; // 0x2390 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashForwardDistanceMax[0x28]; // 0x23B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashGameplayCueTag[0x8]; // 0x23E0 (Size: 0x8, Type: StructProperty)
    TArray<void*> DoorBashCollisionTypesForDoor; // 0x23E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoorBashCollisionTypesForPawn; // 0x23F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DoorBashSphereRadiusForPawnLaunch[0x28]; // 0x2408 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashScalarForPawnLaunch[0x28]; // 0x2430 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashPawnLaunchGameplayCueTag[0x8]; // 0x2458 (Size: 0x8, Type: StructProperty)
    std::uint8_t InventoryModeTagQuery[0x48]; // 0x2460 (Size: 0x48, Type: StructProperty)
    std::uint8_t InputContextBlockedTags[0x38]; // 0x24A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MobileHUDTag[0x1]; // 0x24E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMotorcycleVehicle, OnStartChargingJumpDelegate) == 8352, "Offset mismatch for UFortMotorcycleVehicle::OnStartChargingJumpDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnCancelChargingJumpDelegate) == 8368, "Offset mismatch for UFortMotorcycleVehicle::OnCancelChargingJumpDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnJumpDelegate) == 8384, "Offset mismatch for UFortMotorcycleVehicle::OnJumpDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnChargingJumpDelegate) == 8400, "Offset mismatch for UFortMotorcycleVehicle::OnChargingJumpDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnStartAirTrickDelegate) == 8416, "Offset mismatch for UFortMotorcycleVehicle::OnStartAirTrickDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnFinishAirTrickDelegate) == 8432, "Offset mismatch for UFortMotorcycleVehicle::OnFinishAirTrickDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnStartWheelieDelegate) == 8448, "Offset mismatch for UFortMotorcycleVehicle::OnStartWheelieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnReleaseWheelieDelegate) == 8464, "Offset mismatch for UFortMotorcycleVehicle::OnReleaseWheelieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnLandWheelieDelegate) == 8480, "Offset mismatch for UFortMotorcycleVehicle::OnLandWheelieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnFailWheelieDelegate) == 8496, "Offset mismatch for UFortMotorcycleVehicle::OnFailWheelieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnStartStoppieDelegate) == 8512, "Offset mismatch for UFortMotorcycleVehicle::OnStartStoppieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnReleaseStoppieDelegate) == 8528, "Offset mismatch for UFortMotorcycleVehicle::OnReleaseStoppieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnLandStoppieDelegate) == 8544, "Offset mismatch for UFortMotorcycleVehicle::OnLandStoppieDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnInventoryModeChangedDelegate) == 8560, "Offset mismatch for UFortMotorcycleVehicle::OnInventoryModeChangedDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, OnSuperSlidingChangedDelegate) == 8576, "Offset mismatch for UFortMotorcycleVehicle::OnSuperSlidingChangedDelegate");
static_assert(offsetof(UFortMotorcycleVehicle, InventoryCameraModeClass) == 8592, "Offset mismatch for UFortMotorcycleVehicle::InventoryCameraModeClass");
static_assert(offsetof(UFortMotorcycleVehicle, InventoryCameraModeClassADS) == 8600, "Offset mismatch for UFortMotorcycleVehicle::InventoryCameraModeClassADS");
static_assert(offsetof(UFortMotorcycleVehicle, PassengerCameraModeClass) == 8608, "Offset mismatch for UFortMotorcycleVehicle::PassengerCameraModeClass");
static_assert(offsetof(UFortMotorcycleVehicle, PassengerCameraModeClassADS) == 8616, "Offset mismatch for UFortMotorcycleVehicle::PassengerCameraModeClassADS");
static_assert(offsetof(UFortMotorcycleVehicle, FortMotorcycleVehicleConfigs) == 8624, "Offset mismatch for UFortMotorcycleVehicle::FortMotorcycleVehicleConfigs");
static_assert(offsetof(UFortMotorcycleVehicle, RearAxleSocket) == 8632, "Offset mismatch for UFortMotorcycleVehicle::RearAxleSocket");
static_assert(offsetof(UFortMotorcycleVehicle, ActionDefForUI) == 8640, "Offset mismatch for UFortMotorcycleVehicle::ActionDefForUI");
static_assert(offsetof(UFortMotorcycleVehicle, InputActionTrick) == 8656, "Offset mismatch for UFortMotorcycleVehicle::InputActionTrick");
static_assert(offsetof(UFortMotorcycleVehicle, InputActionToggleDrivingMode) == 8664, "Offset mismatch for UFortMotorcycleVehicle::InputActionToggleDrivingMode");
static_assert(offsetof(UFortMotorcycleVehicle, SwingArmRotation) == 8672, "Offset mismatch for UFortMotorcycleVehicle::SwingArmRotation");
static_assert(offsetof(UFortMotorcycleVehicle, BoostShapeIndices) == 8736, "Offset mismatch for UFortMotorcycleVehicle::BoostShapeIndices");
static_assert(offsetof(UFortMotorcycleVehicle, bIsBoostAttacking) == 8752, "Offset mismatch for UFortMotorcycleVehicle::bIsBoostAttacking");
static_assert(offsetof(UFortMotorcycleVehicle, RechargeableBoostPercent) == 8756, "Offset mismatch for UFortMotorcycleVehicle::RechargeableBoostPercent");
static_assert(offsetof(UFortMotorcycleVehicle, BoostInfo) == 8760, "Offset mismatch for UFortMotorcycleVehicle::BoostInfo");
static_assert(offsetof(UFortMotorcycleVehicle, CachedTrickType) == 8800, "Offset mismatch for UFortMotorcycleVehicle::CachedTrickType");
static_assert(offsetof(UFortMotorcycleVehicle, bHadPassengerAtTrickStart) == 8801, "Offset mismatch for UFortMotorcycleVehicle::bHadPassengerAtTrickStart");
static_assert(offsetof(UFortMotorcycleVehicle, PassengerADSSockets) == 8856, "Offset mismatch for UFortMotorcycleVehicle::PassengerADSSockets");
static_assert(offsetof(UFortMotorcycleVehicle, PassengerADSRelativeOffsets) == 8872, "Offset mismatch for UFortMotorcycleVehicle::PassengerADSRelativeOffsets");
static_assert(offsetof(UFortMotorcycleVehicle, CachedNiagaraComponentRoadAndExhaust) == 8888, "Offset mismatch for UFortMotorcycleVehicle::CachedNiagaraComponentRoadAndExhaust");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustNiagaraComponentName) == 8896, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustNiagaraComponentName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustVehicleSpeedName) == 8912, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustVehicleSpeedName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustSlideDirectionName) == 8916, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustSlideDirectionName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustMinSpeedForDust) == 8920, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustMinSpeedForDust");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustDustRearName) == 8924, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustDustRearName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustDustColorLerpName) == 8928, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustDustColorLerpName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustDustColorLerp) == 8932, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustDustColorLerp");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustDustAlphaMultiplierName) == 8936, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustDustAlphaMultiplierName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustDustAlphaMultiplier) == 8940, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustDustAlphaMultiplier");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustPeelOutColorIndexName) == 8944, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustPeelOutColorIndexName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustPeelOutRearName) == 8948, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustPeelOutRearName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustIsPeelOutOnRoadName) == 8952, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustIsPeelOutOnRoadName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustIsPeelOutOnRoadRewindName) == 8956, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustIsPeelOutOnRoadRewindName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustIsInAirName) == 8960, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustIsInAirName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustCameraDirtGameplayCueTag) == 8964, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustCameraDirtGameplayCueTag");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustCameraWaterGameplayCueTag) == 8968, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustCameraWaterGameplayCueTag");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustSurfaceTypeArrayForFX) == 8976, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustSurfaceTypeArrayForFX");
static_assert(offsetof(UFortMotorcycleVehicle, DriverCameraShakeInstance) == 8992, "Offset mismatch for UFortMotorcycleVehicle::DriverCameraShakeInstance");
static_assert(offsetof(UFortMotorcycleVehicle, AcceleratingCameraShakeInstance) == 9000, "Offset mismatch for UFortMotorcycleVehicle::AcceleratingCameraShakeInstance");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustHeadlightsName) == 9016, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustHeadlightsName");
static_assert(offsetof(UFortMotorcycleVehicle, RoadAndExhaustBrakelightsName) == 9020, "Offset mismatch for UFortMotorcycleVehicle::RoadAndExhaustBrakelightsName");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashMinSpeed) == 9024, "Offset mismatch for UFortMotorcycleVehicle::DoorBashMinSpeed");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashMaxSpeed) == 9064, "Offset mismatch for UFortMotorcycleVehicle::DoorBashMaxSpeed");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashForwardDistanceMin) == 9104, "Offset mismatch for UFortMotorcycleVehicle::DoorBashForwardDistanceMin");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashForwardDistanceMax) == 9144, "Offset mismatch for UFortMotorcycleVehicle::DoorBashForwardDistanceMax");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashGameplayCueTag) == 9184, "Offset mismatch for UFortMotorcycleVehicle::DoorBashGameplayCueTag");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashCollisionTypesForDoor) == 9192, "Offset mismatch for UFortMotorcycleVehicle::DoorBashCollisionTypesForDoor");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashCollisionTypesForPawn) == 9208, "Offset mismatch for UFortMotorcycleVehicle::DoorBashCollisionTypesForPawn");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashSphereRadiusForPawnLaunch) == 9224, "Offset mismatch for UFortMotorcycleVehicle::DoorBashSphereRadiusForPawnLaunch");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashScalarForPawnLaunch) == 9264, "Offset mismatch for UFortMotorcycleVehicle::DoorBashScalarForPawnLaunch");
static_assert(offsetof(UFortMotorcycleVehicle, DoorBashPawnLaunchGameplayCueTag) == 9304, "Offset mismatch for UFortMotorcycleVehicle::DoorBashPawnLaunchGameplayCueTag");
static_assert(offsetof(UFortMotorcycleVehicle, InventoryModeTagQuery) == 9312, "Offset mismatch for UFortMotorcycleVehicle::InventoryModeTagQuery");
static_assert(offsetof(UFortMotorcycleVehicle, InputContextBlockedTags) == 9384, "Offset mismatch for UFortMotorcycleVehicle::InputContextBlockedTags");
static_assert(offsetof(UFortMotorcycleVehicle, MobileHUDTag) == 9440, "Offset mismatch for UFortMotorcycleVehicle::MobileHUDTag");

// /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortMotorcycleVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* MotorcycleVehicle; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SwingArmRotation[0x18]; // 0x0508 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsInInventoryMode; // 0x0520 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0521
    void* DriverAnimInstance; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsBikeParked; // 0x0530 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBikeOn; // 0x0531 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBikeStopping; // 0x0532 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReversing; // 0x0533 (Size: 0x1, Type: BoolProperty)
    float TotalSpeed; // 0x0534 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSurfaceWater; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0539
    float AdditiveAlpha; // 0x053C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsRevving; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0541
    float AccelAlpha; // 0x0544 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsThrottling; // 0x0548 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHonking; // 0x0549 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSoloJumpTrickOutro; // 0x054A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumpTrickNone; // 0x054B (Size: 0x1, Type: BoolProperty)
    float BrakeLeverAlpha; // 0x054C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldExitFromLocomotion; // 0x0550 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFromRevvingToThrottle; // 0x0551 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayThrottleAnim; // 0x0552 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateTransitionRuleToMovingLoop; // 0x0553 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyOutFromMovingStart; // 0x0554 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldStop; // 0x0555 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldReverse; // 0x0556 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldReverseStop; // 0x0557 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldStopThrottling; // 0x0558 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFromJumpTrick; // 0x0559 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSoloJumpTrick; // 0x055A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldJump; // 0x055B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x055C (Size: 0x1, Type: BoolProperty)
    std::uint8_t AirTrickType; // 0x055D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsLandingInPlace; // 0x055E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFallingToMoving; // 0x055F (Size: 0x1, Type: BoolProperty)
    float JumpChargeFactor; // 0x0560 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x0564 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStoppie; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBraking; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBrake; // 0x056A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyOutBrakingOutro; // 0x056B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldJumpTrick; // 0x056C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateTransitionRuleToReverseLoop; // 0x056D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReverseNoFeet; // 0x056E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, MotorcycleVehicle) == 1280, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::MotorcycleVehicle");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, SwingArmRotation) == 1288, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::SwingArmRotation");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsInInventoryMode) == 1312, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsInInventoryMode");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, DriverAnimInstance) == 1320, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::DriverAnimInstance");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeParked) == 1328, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsBikeParked");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeOn) == 1329, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsBikeOn");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBikeStopping) == 1330, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsBikeStopping");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsReversing) == 1331, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsReversing");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, TotalSpeed) == 1332, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::TotalSpeed");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSurfaceWater) == 1336, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsSurfaceWater");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AdditiveAlpha) == 1340, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::AdditiveAlpha");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsRevving) == 1344, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsRevving");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AccelAlpha) == 1348, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::AccelAlpha");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsThrottling) == 1352, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsThrottling");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsHonking) == 1353, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsHonking");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSoloJumpTrickOutro) == 1354, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsSoloJumpTrickOutro");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsJumpTrickNone) == 1355, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsJumpTrickNone");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, BrakeLeverAlpha) == 1356, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::BrakeLeverAlpha");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldExitFromLocomotion) == 1360, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldExitFromLocomotion");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateRuleFromRevvingToThrottle) == 1361, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bStateRuleFromRevvingToThrottle");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldPlayThrottleAnim) == 1362, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldPlayThrottleAnim");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateTransitionRuleToMovingLoop) == 1363, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bStateTransitionRuleToMovingLoop");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bEarlyOutFromMovingStart) == 1364, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bEarlyOutFromMovingStart");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldStop) == 1365, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldStop");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldReverse) == 1366, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldReverse");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldReverseStop) == 1367, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldReverseStop");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldStopThrottling) == 1368, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldStopThrottling");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsFromJumpTrick) == 1369, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsFromJumpTrick");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsSoloJumpTrick) == 1370, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsSoloJumpTrick");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldJump) == 1371, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldJump");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsMoving) == 1372, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsMoving");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, AirTrickType) == 1373, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::AirTrickType");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsLandingInPlace) == 1374, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsLandingInPlace");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateRuleFallingToMoving) == 1375, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bStateRuleFallingToMoving");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, JumpChargeFactor) == 1376, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::JumpChargeFactor");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, ForwardSpeed) == 1380, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::ForwardSpeed");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStoppie) == 1384, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bStoppie");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsBraking) == 1385, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsBraking");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldBrake) == 1386, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldBrake");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bEarlyOutBrakingOutro) == 1387, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bEarlyOutBrakingOutro");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bShouldJumpTrick) == 1388, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bShouldJumpTrick");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bStateTransitionRuleToReverseLoop) == 1389, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bStateTransitionRuleToReverseLoop");
static_assert(offsetof(UFortMotorcycleVehicleAnimInstance, bIsReverseNoFeet) == 1390, "Offset mismatch for UFortMotorcycleVehicleAnimInstance::bIsReverseNoFeet");

// /Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortMotorcycleVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    TArray<void*> Wheels; // 0x0990 (Size: 0x10, Type: ArrayProperty)
    float SpringInterpDamp; // 0x09A0 (Size: 0x4, Type: FloatProperty)
    float WheelieSpringInterpDamp; // 0x09A4 (Size: 0x4, Type: FloatProperty)
    float WallPushStiff; // 0x09A8 (Size: 0x4, Type: FloatProperty)
    float WallPushDamp; // 0x09AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t WallPushXTraceOffset[0x18]; // 0x09B0 (Size: 0x18, Type: StructProperty)
    float WallPushForwardTraceLengthScale; // 0x09C8 (Size: 0x4, Type: FloatProperty)
    float WallPushBackTraceLengthScale; // 0x09CC (Size: 0x4, Type: FloatProperty)
    float WallPushRightTraceLength; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x09D4
    std::uint8_t WallPushRightTraceOffset[0x18]; // 0x09D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallPushRearRightTraceOffset[0x18]; // 0x09F0 (Size: 0x18, Type: StructProperty)
    float WallPushAngle; // 0x0A08 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseWallPushTracesForWalls; // 0x0A0C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseWallPushRearSideTracesForWalls; // 0x0A0D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0A0E
    float MaxJumpChargeTime; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float MinChargeJumpForce; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float MaxChargeJumpForce; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float MinJumpForwardAngle; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    float MaxJumpForwardAngle; // 0x0A20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0A24
    std::uint8_t JumpForceMinCOMOffset[0x18]; // 0x0A28 (Size: 0x18, Type: StructProperty)
    std::uint8_t JumpForceMaxCOMOffset[0x18]; // 0x0A40 (Size: 0x18, Type: StructProperty)
    float JumpChargeGraceTimeSeconds; // 0x0A58 (Size: 0x4, Type: FloatProperty)
    float JumpGraceTimeSeconds; // 0x0A5C (Size: 0x4, Type: FloatProperty)
    float LeanAngleScale; // 0x0A60 (Size: 0x4, Type: FloatProperty)
    float LeanStiff; // 0x0A64 (Size: 0x4, Type: FloatProperty)
    float LeanDamp; // 0x0A68 (Size: 0x4, Type: FloatProperty)
    float LeanStrength; // 0x0A6C (Size: 0x4, Type: FloatProperty)
    float SlideCatchupForceTime; // 0x0A70 (Size: 0x4, Type: FloatProperty)
    float SlideCatchupSpeed; // 0x0A74 (Size: 0x4, Type: FloatProperty)
    float SlideCatchupPushForce; // 0x0A78 (Size: 0x4, Type: FloatProperty)
    float AutoAirPitchAngle; // 0x0A7C (Size: 0x4, Type: FloatProperty)
    float MinSteeringAngleForModifiedFriction; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForModifiedFriction; // 0x0A84 (Size: 0x4, Type: FloatProperty)
    float MinSteeringAngleToConsiderTractionLost; // 0x0A88 (Size: 0x4, Type: FloatProperty)
    float FrictionRatioToConsiderTractionLost; // 0x0A8C (Size: 0x4, Type: FloatProperty)
    float WheeliePitchStiffMin; // 0x0A90 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchStiffMax; // 0x0A94 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchDampMin; // 0x0A98 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchDampMax; // 0x0A9C (Size: 0x4, Type: FloatProperty)
    float WheeliePitchAngleMin; // 0x0AA0 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchAngleMax; // 0x0AA4 (Size: 0x4, Type: FloatProperty)
    float StoppiePitchAngle; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float StoppiePitchStiff; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    float StoppiePitchDamp; // 0x0AB0 (Size: 0x4, Type: FloatProperty)
    float WheelieRampSeconds; // 0x0AB4 (Size: 0x4, Type: FloatProperty)
    float WheelieFailPitchAngle; // 0x0AB8 (Size: 0x4, Type: FloatProperty)
    float WheelieRecoveryRate; // 0x0ABC (Size: 0x4, Type: FloatProperty)
    float WheelieFailRecoveryRate; // 0x0AC0 (Size: 0x4, Type: FloatProperty)
    float WheelieMinStartSpeed; // 0x0AC4 (Size: 0x4, Type: FloatProperty)
    float StoppieMinStopSpeed; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    float WheelieSteerFactor; // 0x0ACC (Size: 0x4, Type: FloatProperty)
    float StoppieSteerFactor; // 0x0AD0 (Size: 0x4, Type: FloatProperty)
    float WheelieSteerAlphaThreshold; // 0x0AD4 (Size: 0x4, Type: FloatProperty)
    float WheelieStoppieMaxLeanAllowedToInitiate; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
    float WheelieGroundBufferTime; // 0x0ADC (Size: 0x4, Type: FloatProperty)
    float StoppieGroundBufferTime; // 0x0AE0 (Size: 0x4, Type: FloatProperty)
    float WheelieSpringLengthExponent; // 0x0AE4 (Size: 0x4, Type: FloatProperty)
    float WheelieWheelOffsetLerpMultiplier; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    float WheelieBrakeFactor; // 0x0AEC (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeed; // 0x0AF0 (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeedIce; // 0x0AF4 (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeedMud; // 0x0AF8 (Size: 0x4, Type: FloatProperty)
    float MinSpeedKmhForMaxStoppie; // 0x0AFC (Size: 0x4, Type: FloatProperty)
    float StoppieTurnAngleExponent; // 0x0B00 (Size: 0x4, Type: FloatProperty)
    float StoppieMaxTurnAngle; // 0x0B04 (Size: 0x4, Type: FloatProperty)
    float WheelieTireTractionMultiplier_Min; // 0x0B08 (Size: 0x4, Type: FloatProperty)
    float WheelieCameraMinStraightFactor; // 0x0B0C (Size: 0x4, Type: FloatProperty)
    float MaxLeanAccel; // 0x0B10 (Size: 0x4, Type: FloatProperty)
    float CruiseControlForwardAlpha; // 0x0B14 (Size: 0x4, Type: FloatProperty)
    float InventoryModeSpeedKmh; // 0x0B18 (Size: 0x4, Type: FloatProperty)
    float CruiseControlDisengageSpeedKmh; // 0x0B1C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPowerSlideIsSuperSlide; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0B21
    float PowerSlideFrontFrictionMultiplier; // 0x0B24 (Size: 0x4, Type: FloatProperty)
    float PowerSlideRearFrictionMultiplier; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    float PowerSlideRoadFrontFrictionMultiplier; // 0x0B2C (Size: 0x4, Type: FloatProperty)
    float PowerSlideRoadRearFrictionMultiplier; // 0x0B30 (Size: 0x4, Type: FloatProperty)
    float PowerSlideDirtFrontFrictionMultiplier; // 0x0B34 (Size: 0x4, Type: FloatProperty)
    float PowerSlideDirtRearFrictionMultiplier; // 0x0B38 (Size: 0x4, Type: FloatProperty)
    float PowerSlideGrassFrontFrictionMultiplier; // 0x0B3C (Size: 0x4, Type: FloatProperty)
    float PowerSlideGrassRearFrictionMultiplier; // 0x0B40 (Size: 0x4, Type: FloatProperty)
    float PowerSlideSnowFrontFrictionMultiplier; // 0x0B44 (Size: 0x4, Type: FloatProperty)
    float PowerSlideSnowRearFrictionMultiplier; // 0x0B48 (Size: 0x4, Type: FloatProperty)
    float PowerSlideIceFrontFrictionMultiplier; // 0x0B4C (Size: 0x4, Type: FloatProperty)
    float PowerSlideIceRearFrictionMultiplier; // 0x0B50 (Size: 0x4, Type: FloatProperty)
    float PowerSlideMudFrontFrictionMultiplier; // 0x0B54 (Size: 0x4, Type: FloatProperty)
    float PowerSlideMudRearFrictionMultiplier; // 0x0B58 (Size: 0x4, Type: FloatProperty)
    float PowerSlideFactor; // 0x0B5C (Size: 0x4, Type: FloatProperty)
    float PowerSlideDampFactor; // 0x0B60 (Size: 0x4, Type: FloatProperty)
    float FrictionDampFactor; // 0x0B64 (Size: 0x4, Type: FloatProperty)
    float PowerSlideLeanAngleScale; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    float SuperSlideLeanAngle; // 0x0B6C (Size: 0x4, Type: FloatProperty)
    float SuperSlideMinStartYawSpeedDegrees; // 0x0B70 (Size: 0x4, Type: FloatProperty)
    float SuperSlideMinStartSpeedKmh; // 0x0B74 (Size: 0x4, Type: FloatProperty)
    float SuperSlideMaxEndSpeedKmh; // 0x0B78 (Size: 0x4, Type: FloatProperty)
    float PowerslideInputWindow; // 0x0B7C (Size: 0x4, Type: FloatProperty)
    float ShootingMinSpeedSteeringAngle; // 0x0B80 (Size: 0x4, Type: FloatProperty)
    float ShootingMaxSpeedSteeringAngle; // 0x0B84 (Size: 0x4, Type: FloatProperty)
    float InventoryModeCameraYawConstraint; // 0x0B88 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0B8C
    std::uint8_t BoostTopSpeedMultiplier[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostPushForceMultiplier[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostMinPushForce[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostSteeringMultiplier[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesBoost[0x28]; // 0x0C30 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartWithFullBoost[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesRechargeableBoost[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfUse[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegen[0x28]; // 0x0CD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMin[0x28]; // 0x0CF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMax[0x28]; // 0x0D20 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RegenMaxMultTime[0x28]; // 0x0D48 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RequiredPercentToActivate[0x28]; // 0x0D70 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MinPercent[0x28]; // 0x0D98 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MaxPercent[0x28]; // 0x0DC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPlayHolsterAnimsOnClient; // 0x0DE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0DE9
    float FrontWheelSteeringFactor; // 0x0DEC (Size: 0x4, Type: FloatProperty)
    float FrontWheelRotationAcceleration; // 0x0DF0 (Size: 0x4, Type: FloatProperty)
    float PassengerInventoryCooldown; // 0x0DF4 (Size: 0x4, Type: FloatProperty)
    float DriverInventoryCooldown; // 0x0DF8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0DFC
    std::uint8_t BoostAttackShapes[0x10]; // 0x0E00 (Size: 0x10, Type: SetProperty)
    float CameraAssistStrengthMax; // 0x0E10 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthMin; // 0x0E14 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthRecovery; // 0x0E18 (Size: 0x4, Type: FloatProperty)
    float CameraAssistInterpSpeed; // 0x0E1C (Size: 0x4, Type: FloatProperty)
    float AirTrickIncrementInterval; // 0x0E20 (Size: 0x4, Type: FloatProperty)
    float AirTrickFeedStartTime; // 0x0E24 (Size: 0x4, Type: FloatProperty)
    float AirTrickPitchMultiplier; // 0x0E28 (Size: 0x4, Type: FloatProperty)
    float AirTrickYawMultiplier; // 0x0E2C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowAirTrickNeutral; // 0x0E30 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowAirTrickRight; // 0x0E31 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowAirTrickLeft; // 0x0E32 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x1]; // 0x0E33
    float PoppedTireTractionScalar_Front; // 0x0E34 (Size: 0x4, Type: FloatProperty)
    float PoppedTireTractionScalar_Rear; // 0x0E38 (Size: 0x4, Type: FloatProperty)
    float PoppedTireTractionScalar_Both; // 0x0E3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TopSpeedKmh[0x28]; // 0x0E40 (Size: 0x28, Type: StructProperty)
    float CachedTopSpeedKmh; // 0x0E68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCachedUsesRechargeableBoost; // 0x0E6C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMotorcycleVehicleConfigs, Wheels) == 2448, "Offset mismatch for UFortMotorcycleVehicleConfigs::Wheels");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SpringInterpDamp) == 2464, "Offset mismatch for UFortMotorcycleVehicleConfigs::SpringInterpDamp");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSpringInterpDamp) == 2468, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieSpringInterpDamp");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushStiff) == 2472, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushStiff");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushDamp) == 2476, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushDamp");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushXTraceOffset) == 2480, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushXTraceOffset");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushForwardTraceLengthScale) == 2504, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushForwardTraceLengthScale");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushBackTraceLengthScale) == 2508, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushBackTraceLengthScale");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRightTraceLength) == 2512, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushRightTraceLength");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRightTraceOffset) == 2520, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushRightTraceOffset");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushRearRightTraceOffset) == 2544, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushRearRightTraceOffset");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WallPushAngle) == 2568, "Offset mismatch for UFortMotorcycleVehicleConfigs::WallPushAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bUseWallPushTracesForWalls) == 2572, "Offset mismatch for UFortMotorcycleVehicleConfigs::bUseWallPushTracesForWalls");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bUseWallPushRearSideTracesForWalls) == 2573, "Offset mismatch for UFortMotorcycleVehicleConfigs::bUseWallPushRearSideTracesForWalls");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxJumpChargeTime) == 2576, "Offset mismatch for UFortMotorcycleVehicleConfigs::MaxJumpChargeTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinChargeJumpForce) == 2580, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinChargeJumpForce");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxChargeJumpForce) == 2584, "Offset mismatch for UFortMotorcycleVehicleConfigs::MaxChargeJumpForce");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinJumpForwardAngle) == 2588, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinJumpForwardAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxJumpForwardAngle) == 2592, "Offset mismatch for UFortMotorcycleVehicleConfigs::MaxJumpForwardAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpForceMinCOMOffset) == 2600, "Offset mismatch for UFortMotorcycleVehicleConfigs::JumpForceMinCOMOffset");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpForceMaxCOMOffset) == 2624, "Offset mismatch for UFortMotorcycleVehicleConfigs::JumpForceMaxCOMOffset");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpChargeGraceTimeSeconds) == 2648, "Offset mismatch for UFortMotorcycleVehicleConfigs::JumpChargeGraceTimeSeconds");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, JumpGraceTimeSeconds) == 2652, "Offset mismatch for UFortMotorcycleVehicleConfigs::JumpGraceTimeSeconds");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanAngleScale) == 2656, "Offset mismatch for UFortMotorcycleVehicleConfigs::LeanAngleScale");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanStiff) == 2660, "Offset mismatch for UFortMotorcycleVehicleConfigs::LeanStiff");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanDamp) == 2664, "Offset mismatch for UFortMotorcycleVehicleConfigs::LeanDamp");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, LeanStrength) == 2668, "Offset mismatch for UFortMotorcycleVehicleConfigs::LeanStrength");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupForceTime) == 2672, "Offset mismatch for UFortMotorcycleVehicleConfigs::SlideCatchupForceTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupSpeed) == 2676, "Offset mismatch for UFortMotorcycleVehicleConfigs::SlideCatchupSpeed");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SlideCatchupPushForce) == 2680, "Offset mismatch for UFortMotorcycleVehicleConfigs::SlideCatchupPushForce");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AutoAirPitchAngle) == 2684, "Offset mismatch for UFortMotorcycleVehicleConfigs::AutoAirPitchAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSteeringAngleForModifiedFriction) == 2688, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinSteeringAngleForModifiedFriction");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSpeedForModifiedFriction) == 2692, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinSpeedForModifiedFriction");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSteeringAngleToConsiderTractionLost) == 2696, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinSteeringAngleToConsiderTractionLost");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrictionRatioToConsiderTractionLost) == 2700, "Offset mismatch for UFortMotorcycleVehicleConfigs::FrictionRatioToConsiderTractionLost");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchStiffMin) == 2704, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchStiffMin");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchStiffMax) == 2708, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchStiffMax");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchDampMin) == 2712, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchDampMin");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchDampMax) == 2716, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchDampMax");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchAngleMin) == 2720, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchAngleMin");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheeliePitchAngleMax) == 2724, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheeliePitchAngleMax");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchAngle) == 2728, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppiePitchAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchStiff) == 2732, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppiePitchStiff");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppiePitchDamp) == 2736, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppiePitchDamp");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieRampSeconds) == 2740, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieRampSeconds");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieFailPitchAngle) == 2744, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieFailPitchAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieRecoveryRate) == 2748, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieRecoveryRate");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieFailRecoveryRate) == 2752, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieFailRecoveryRate");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieMinStartSpeed) == 2756, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieMinStartSpeed");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieMinStopSpeed) == 2760, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieMinStopSpeed");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSteerFactor) == 2764, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieSteerFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieSteerFactor) == 2768, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieSteerFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSteerAlphaThreshold) == 2772, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieSteerAlphaThreshold");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieStoppieMaxLeanAllowedToInitiate) == 2776, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieStoppieMaxLeanAllowedToInitiate");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieGroundBufferTime) == 2780, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieGroundBufferTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieGroundBufferTime) == 2784, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieGroundBufferTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieSpringLengthExponent) == 2788, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieSpringLengthExponent");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieWheelOffsetLerpMultiplier) == 2792, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieWheelOffsetLerpMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieBrakeFactor) == 2796, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieBrakeFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeed) == 2800, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeed");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeedIce) == 2804, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeedIce");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnInPlaceSpeedMud) == 2808, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieTurnInPlaceSpeedMud");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MinSpeedKmhForMaxStoppie) == 2812, "Offset mismatch for UFortMotorcycleVehicleConfigs::MinSpeedKmhForMaxStoppie");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieTurnAngleExponent) == 2816, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieTurnAngleExponent");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StoppieMaxTurnAngle) == 2820, "Offset mismatch for UFortMotorcycleVehicleConfigs::StoppieMaxTurnAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieTireTractionMultiplier_Min) == 2824, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieTireTractionMultiplier_Min");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, WheelieCameraMinStraightFactor) == 2828, "Offset mismatch for UFortMotorcycleVehicleConfigs::WheelieCameraMinStraightFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, MaxLeanAccel) == 2832, "Offset mismatch for UFortMotorcycleVehicleConfigs::MaxLeanAccel");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CruiseControlForwardAlpha) == 2836, "Offset mismatch for UFortMotorcycleVehicleConfigs::CruiseControlForwardAlpha");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, InventoryModeSpeedKmh) == 2840, "Offset mismatch for UFortMotorcycleVehicleConfigs::InventoryModeSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CruiseControlDisengageSpeedKmh) == 2844, "Offset mismatch for UFortMotorcycleVehicleConfigs::CruiseControlDisengageSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bPowerSlideIsSuperSlide) == 2848, "Offset mismatch for UFortMotorcycleVehicleConfigs::bPowerSlideIsSuperSlide");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideFrontFrictionMultiplier) == 2852, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRearFrictionMultiplier) == 2856, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRoadFrontFrictionMultiplier) == 2860, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideRoadFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideRoadRearFrictionMultiplier) == 2864, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideRoadRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDirtFrontFrictionMultiplier) == 2868, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideDirtFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDirtRearFrictionMultiplier) == 2872, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideDirtRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideGrassFrontFrictionMultiplier) == 2876, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideGrassFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideGrassRearFrictionMultiplier) == 2880, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideGrassRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideSnowFrontFrictionMultiplier) == 2884, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideSnowFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideSnowRearFrictionMultiplier) == 2888, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideSnowRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideIceFrontFrictionMultiplier) == 2892, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideIceFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideIceRearFrictionMultiplier) == 2896, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideIceRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideMudFrontFrictionMultiplier) == 2900, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideMudFrontFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideMudRearFrictionMultiplier) == 2904, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideMudRearFrictionMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideFactor) == 2908, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideDampFactor) == 2912, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideDampFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrictionDampFactor) == 2916, "Offset mismatch for UFortMotorcycleVehicleConfigs::FrictionDampFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerSlideLeanAngleScale) == 2920, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerSlideLeanAngleScale");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideLeanAngle) == 2924, "Offset mismatch for UFortMotorcycleVehicleConfigs::SuperSlideLeanAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMinStartYawSpeedDegrees) == 2928, "Offset mismatch for UFortMotorcycleVehicleConfigs::SuperSlideMinStartYawSpeedDegrees");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMinStartSpeedKmh) == 2932, "Offset mismatch for UFortMotorcycleVehicleConfigs::SuperSlideMinStartSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, SuperSlideMaxEndSpeedKmh) == 2936, "Offset mismatch for UFortMotorcycleVehicleConfigs::SuperSlideMaxEndSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PowerslideInputWindow) == 2940, "Offset mismatch for UFortMotorcycleVehicleConfigs::PowerslideInputWindow");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, ShootingMinSpeedSteeringAngle) == 2944, "Offset mismatch for UFortMotorcycleVehicleConfigs::ShootingMinSpeedSteeringAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, ShootingMaxSpeedSteeringAngle) == 2948, "Offset mismatch for UFortMotorcycleVehicleConfigs::ShootingMaxSpeedSteeringAngle");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, InventoryModeCameraYawConstraint) == 2952, "Offset mismatch for UFortMotorcycleVehicleConfigs::InventoryModeCameraYawConstraint");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostTopSpeedMultiplier) == 2960, "Offset mismatch for UFortMotorcycleVehicleConfigs::BoostTopSpeedMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostPushForceMultiplier) == 3000, "Offset mismatch for UFortMotorcycleVehicleConfigs::BoostPushForceMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostMinPushForce) == 3040, "Offset mismatch for UFortMotorcycleVehicleConfigs::BoostMinPushForce");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostSteeringMultiplier) == 3080, "Offset mismatch for UFortMotorcycleVehicleConfigs::BoostSteeringMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, UsesBoost) == 3120, "Offset mismatch for UFortMotorcycleVehicleConfigs::UsesBoost");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, StartWithFullBoost) == 3160, "Offset mismatch for UFortMotorcycleVehicleConfigs::StartWithFullBoost");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, UsesRechargeableBoost) == 3200, "Offset mismatch for UFortMotorcycleVehicleConfigs::UsesRechargeableBoost");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RateOfUse) == 3240, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RateOfUse");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RateOfRegen) == 3280, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RateOfRegen");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RateOfRegenMultMin) == 3320, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RateOfRegenMultMin");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RateOfRegenMultMax) == 3360, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RateOfRegenMultMax");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RegenMaxMultTime) == 3400, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RegenMaxMultTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_RequiredPercentToActivate) == 3440, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_RequiredPercentToActivate");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_MinPercent) == 3480, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_MinPercent");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, RechargeableBoost_MaxPercent) == 3520, "Offset mismatch for UFortMotorcycleVehicleConfigs::RechargeableBoost_MaxPercent");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bPlayHolsterAnimsOnClient) == 3560, "Offset mismatch for UFortMotorcycleVehicleConfigs::bPlayHolsterAnimsOnClient");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrontWheelSteeringFactor) == 3564, "Offset mismatch for UFortMotorcycleVehicleConfigs::FrontWheelSteeringFactor");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, FrontWheelRotationAcceleration) == 3568, "Offset mismatch for UFortMotorcycleVehicleConfigs::FrontWheelRotationAcceleration");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PassengerInventoryCooldown) == 3572, "Offset mismatch for UFortMotorcycleVehicleConfigs::PassengerInventoryCooldown");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, DriverInventoryCooldown) == 3576, "Offset mismatch for UFortMotorcycleVehicleConfigs::DriverInventoryCooldown");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, BoostAttackShapes) == 3584, "Offset mismatch for UFortMotorcycleVehicleConfigs::BoostAttackShapes");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthMax) == 3600, "Offset mismatch for UFortMotorcycleVehicleConfigs::CameraAssistStrengthMax");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthMin) == 3604, "Offset mismatch for UFortMotorcycleVehicleConfigs::CameraAssistStrengthMin");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistStrengthRecovery) == 3608, "Offset mismatch for UFortMotorcycleVehicleConfigs::CameraAssistStrengthRecovery");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CameraAssistInterpSpeed) == 3612, "Offset mismatch for UFortMotorcycleVehicleConfigs::CameraAssistInterpSpeed");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickIncrementInterval) == 3616, "Offset mismatch for UFortMotorcycleVehicleConfigs::AirTrickIncrementInterval");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickFeedStartTime) == 3620, "Offset mismatch for UFortMotorcycleVehicleConfigs::AirTrickFeedStartTime");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickPitchMultiplier) == 3624, "Offset mismatch for UFortMotorcycleVehicleConfigs::AirTrickPitchMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, AirTrickYawMultiplier) == 3628, "Offset mismatch for UFortMotorcycleVehicleConfigs::AirTrickYawMultiplier");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickNeutral) == 3632, "Offset mismatch for UFortMotorcycleVehicleConfigs::bAllowAirTrickNeutral");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickRight) == 3633, "Offset mismatch for UFortMotorcycleVehicleConfigs::bAllowAirTrickRight");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bAllowAirTrickLeft) == 3634, "Offset mismatch for UFortMotorcycleVehicleConfigs::bAllowAirTrickLeft");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Front) == 3636, "Offset mismatch for UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Front");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Rear) == 3640, "Offset mismatch for UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Rear");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, PoppedTireTractionScalar_Both) == 3644, "Offset mismatch for UFortMotorcycleVehicleConfigs::PoppedTireTractionScalar_Both");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, TopSpeedKmh) == 3648, "Offset mismatch for UFortMotorcycleVehicleConfigs::TopSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, CachedTopSpeedKmh) == 3688, "Offset mismatch for UFortMotorcycleVehicleConfigs::CachedTopSpeedKmh");
static_assert(offsetof(UFortMotorcycleVehicleConfigs, bCachedUsesRechargeableBoost) == 3692, "Offset mismatch for UFortMotorcycleVehicleConfigs::bCachedUsesRechargeableBoost");

// /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver
// Kind: Class; super: FortPlayerAnimInstance_MotorcycleRider
class UFortPlayerAnimInstance_MotorcycleDriver
{
public:
    std::uint8_t Pad_0000[0x760]; // 0x0000
    std::uint8_t bHasMoved; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0761
    float SteeringRotation; // 0x0764 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInInventoryMode; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldJump; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAllowHeadAO; // 0x076A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x076B
    float FeetDragPlayRate; // 0x076C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldJumpCharge; // 0x0770 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLandingInPlace; // 0x0771 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFallingToMoving; // 0x0772 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyChargingNoise; // 0x0773 (Size: 0x1, Type: BoolProperty)
    float JumpTimer; // 0x0774 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAllowJump; // 0x0778 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSurfaceWater; // 0x0779 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSlopeAlphaShouldIncrease; // 0x077A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x077B
    float SlopeAlpha; // 0x077C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasPassenger; // 0x0780 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOneHandedDualWield; // 0x0781 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyBodyTwistForMelee; // 0x0782 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMelee; // 0x0783 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRangedOrConsumable; // 0x0784 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyFeetNoise; // 0x0785 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0786
    float CachedFallingStartTime; // 0x0788 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWasFalling; // 0x078C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRevving; // 0x078D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x078E
    float StoppieLeanAlpha; // 0x0790 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPlayMovingJump; // 0x0794 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasJumpTrickLeftOrRight; // 0x0795 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFromJumpTrick; // 0x0796 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAllowMovingJumpLand; // 0x0797 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateTransitionRuleToReverseLoop; // 0x0798 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReverseNoFeet; // 0x0799 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x079A
    float WalkSPlayRate; // 0x079C (Size: 0x4, Type: FloatProperty)
    float LeanSpeed; // 0x07A0 (Size: 0x4, Type: FloatProperty)
    float LeanAlpha; // 0x07A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsCombatTransition; // 0x07A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBrake; // 0x07A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitFromLocomotion; // 0x07AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyOutBrakingOutro; // 0x07AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRightInput; // 0x07AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayReverseOutro; // 0x07AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyHipSuspension; // 0x07AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDefaultJumpTrick; // 0x07AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeftJumpTrick; // 0x07B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRightJumpTrick; // 0x07B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNoneJumpTrick; // 0x07B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSoloJumpTrick; // 0x07B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitFromDefaultJumpTrick; // 0x07B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyOutFromMoveStart; // 0x07B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldStop; // 0x07B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x07B7
    float CachedTrickIntroTime; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPlayJumpTrickIntroLeft; // 0x07BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayJumpTrickIntroRight; // 0x07BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleNeutralToJumpTrickLeft; // 0x07BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleNeutralToJumpTrickRight; // 0x07BF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldJumpTrick; // 0x07C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasJumpChargeStarted; // 0x07C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumpTrickLanding; // 0x07C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasSoloJumping; // 0x07C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasStoppieLanding; // 0x07C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x07C5
    float UpperBodyBlendAlpha; // 0x07C8 (Size: 0x4, Type: FloatProperty)
    float StoredJumpTrickIntroPosition; // 0x07CC (Size: 0x4, Type: FloatProperty)
    float JumpTrickIntroPosition; // 0x07D0 (Size: 0x4, Type: FloatProperty)
    float JumpChargeLegIKAlpha; // 0x07D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScytheMontage[0x18]; // 0x07D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t JumpTrickIntroPositionCurveName[0x4]; // 0x07F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FallStartCachedTime[0x14]; // 0x07F4 (Size: 0x14, Type: StructProperty)
    std::uint8_t TrickCachedTime[0x1]; // 0x0808 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasMoved) == 1888, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bHasMoved");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, SteeringRotation) == 1892, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::SteeringRotation");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsInInventoryMode) == 1896, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsInInventoryMode");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJump) == 1897, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowHeadAO) == 1898, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowHeadAO");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, FeetDragPlayRate) == 1900, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::FeetDragPlayRate");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJumpCharge) == 1904, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldJumpCharge");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsLandingInPlace) == 1905, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsLandingInPlace");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleFallingToMoving) == 1906, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleFallingToMoving");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyChargingNoise) == 1907, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyChargingNoise");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTimer) == 1908, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::JumpTimer");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowJump) == 1912, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsSurfaceWater) == 1913, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsSurfaceWater");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bSlopeAlphaShouldIncrease) == 1914, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bSlopeAlphaShouldIncrease");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, SlopeAlpha) == 1916, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::SlopeAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasPassenger) == 1920, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bHasPassenger");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsOneHandedDualWield) == 1921, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsOneHandedDualWield");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyBodyTwistForMelee) == 1922, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyBodyTwistForMelee");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsMelee) == 1923, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsMelee");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRangedOrConsumable) == 1924, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsRangedOrConsumable");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyFeetNoise) == 1925, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyFeetNoise");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, CachedFallingStartTime) == 1928, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::CachedFallingStartTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasFalling) == 1932, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bWasFalling");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRevving) == 1933, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsRevving");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, StoppieLeanAlpha) == 1936, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::StoppieLeanAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayMovingJump) == 1940, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayMovingJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasJumpTrickLeftOrRight) == 1941, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bWasJumpTrickLeftOrRight");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsFromJumpTrick) == 1942, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsFromJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldAllowMovingJumpLand) == 1943, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldAllowMovingJumpLand");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateTransitionRuleToReverseLoop) == 1944, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bStateTransitionRuleToReverseLoop");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsReverseNoFeet) == 1945, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsReverseNoFeet");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, WalkSPlayRate) == 1948, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::WalkSPlayRate");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, LeanSpeed) == 1952, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::LeanSpeed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, LeanAlpha) == 1956, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::LeanAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsCombatTransition) == 1960, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsCombatTransition");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldBrake) == 1961, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldBrake");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldExitFromLocomotion) == 1962, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldExitFromLocomotion");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bEarlyOutBrakingOutro) == 1963, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bEarlyOutBrakingOutro");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRightInput) == 1964, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsRightInput");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayReverseOutro) == 1965, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayReverseOutro");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldApplyHipSuspension) == 1966, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldApplyHipSuspension");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsDefaultJumpTrick) == 1967, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsDefaultJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsLeftJumpTrick) == 1968, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsLeftJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsRightJumpTrick) == 1969, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsRightJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsNoneJumpTrick) == 1970, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsNoneJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsSoloJumpTrick) == 1971, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsSoloJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldExitFromDefaultJumpTrick) == 1972, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldExitFromDefaultJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bEarlyOutFromMoveStart) == 1973, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bEarlyOutFromMoveStart");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldStop) == 1974, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldStop");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, CachedTrickIntroTime) == 1976, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::CachedTrickIntroTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayJumpTrickIntroLeft) == 1980, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayJumpTrickIntroLeft");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldPlayJumpTrickIntroRight) == 1981, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldPlayJumpTrickIntroRight");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleNeutralToJumpTrickLeft) == 1982, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleNeutralToJumpTrickLeft");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bStateRuleNeutralToJumpTrickRight) == 1983, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bStateRuleNeutralToJumpTrickRight");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bShouldJumpTrick) == 1984, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bShouldJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bHasJumpChargeStarted) == 1985, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bHasJumpChargeStarted");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bIsJumpTrickLanding) == 1986, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bIsJumpTrickLanding");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasSoloJumping) == 1987, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bWasSoloJumping");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, bWasStoppieLanding) == 1988, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::bWasStoppieLanding");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, UpperBodyBlendAlpha) == 1992, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::UpperBodyBlendAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, StoredJumpTrickIntroPosition) == 1996, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::StoredJumpTrickIntroPosition");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTrickIntroPosition) == 2000, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::JumpTrickIntroPosition");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpChargeLegIKAlpha) == 2004, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::JumpChargeLegIKAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, ScytheMontage) == 2008, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::ScytheMontage");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, JumpTrickIntroPositionCurveName) == 2032, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::JumpTrickIntroPositionCurveName");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, FallStartCachedTime) == 2036, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::FallStartCachedTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleDriver, TrickCachedTime) == 2056, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleDriver::TrickCachedTime");

// /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
// Kind: Class; super: FortPlayerAnimInstance_MotorcycleRider
class UFortPlayerAnimInstance_MotorcyclePassenger
{
public:
    std::uint8_t Pad_0000[0x760]; // 0x0000
    void* DriverAnimInstance; // 0x0760 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasDriver; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDriverJumping; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDriverInventoryMode; // 0x076A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSeatedAction; // 0x076B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsThrowingConsumable; // 0x076C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyOutStoppieOutro; // 0x076D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x076E
    float RunForwardAlpha; // 0x0770 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAimFWD; // 0x0774 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimBWD; // 0x0775 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimLFT; // 0x0776 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimRGT; // 0x0777 (Size: 0x1, Type: BoolProperty)
    float AimFWDDeltaAngleDegrees; // 0x0778 (Size: 0x4, Type: FloatProperty)
    float AimBWDDeltaAngleDegrees; // 0x077C (Size: 0x4, Type: FloatProperty)
    float AimLFTDeltaAngleDegrees; // 0x0780 (Size: 0x4, Type: FloatProperty)
    float AimRGTDeltaAngleDegrees; // 0x0784 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldJump; // 0x0788 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplySlopeCorrection; // 0x0789 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitFromLocomotion; // 0x078A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x078B
    std::uint8_t JumpIntroCachedTime[0x14]; // 0x078C (Size: 0x14, Type: StructProperty)
    float CachedJumpIntroTime; // 0x07A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, DriverAnimInstance) == 1888, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::DriverAnimInstance");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bHasDriver) == 1896, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bHasDriver");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsDriverJumping) == 1897, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bIsDriverJumping");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsDriverInventoryMode) == 1898, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bIsDriverInventoryMode");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsSeatedAction) == 1899, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bIsSeatedAction");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bIsThrowingConsumable) == 1900, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bIsThrowingConsumable");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bEarlyOutStoppieOutro) == 1901, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bEarlyOutStoppieOutro");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, RunForwardAlpha) == 1904, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::RunForwardAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimFWD) == 1908, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bAimFWD");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimBWD) == 1909, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bAimBWD");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimLFT) == 1910, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bAimLFT");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bAimRGT) == 1911, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bAimRGT");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimFWDDeltaAngleDegrees) == 1912, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::AimFWDDeltaAngleDegrees");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimBWDDeltaAngleDegrees) == 1916, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::AimBWDDeltaAngleDegrees");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimLFTDeltaAngleDegrees) == 1920, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::AimLFTDeltaAngleDegrees");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, AimRGTDeltaAngleDegrees) == 1924, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::AimRGTDeltaAngleDegrees");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldJump) == 1928, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bShouldJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldApplySlopeCorrection) == 1929, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bShouldApplySlopeCorrection");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, bShouldExitFromLocomotion) == 1930, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::bShouldExitFromLocomotion");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, JumpIntroCachedTime) == 1932, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::JumpIntroCachedTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcyclePassenger, CachedJumpIntroTime) == 1952, "Offset mismatch for UFortPlayerAnimInstance_MotorcyclePassenger::CachedJumpIntroTime");

// /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider
// Kind: Class; super: FortBaseLayerAnimInstance
class UFortPlayerAnimInstance_MotorcycleRider
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* Motorcycle; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* MotorcycleAnimInstance; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MotorcycleInput[0x58]; // 0x0350 (Size: 0x58, Type: StructProperty)
    void* FortPlayerPawn; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldVelocity[0x18]; // 0x03B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalVelocity[0x18]; // 0x03C8 (Size: 0x18, Type: StructProperty)
    float RightHandIKAlpha; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    float LeftHandIKAlpha; // 0x03E4 (Size: 0x4, Type: FloatProperty)
    float Speed2D; // 0x03E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocomotionCardinalDirection; // 0x03EC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsJumping; // 0x03ED (Size: 0x1, Type: BoolProperty)
    // 0x03ED BoolProperty bIsReloading (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x03EE
    std::uint8_t RiderCatchupRotation[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    float RiderZDisplacement; // 0x0410 (Size: 0x4, Type: FloatProperty)
    float RiderDisplacementDampUpFactor; // 0x0414 (Size: 0x4, Type: FloatProperty)
    float RiderDisplacementDampDownFactor; // 0x0418 (Size: 0x4, Type: FloatProperty)
    float RiderDisplacementLandingFallDistanceThreshold; // 0x041C (Size: 0x4, Type: FloatProperty)
    float RiderMinDisplacement; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float RiderMaxDisplacement; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float RiderDisplacementRampPerSecond; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float RiderRotationInterpSpeed; // 0x042C (Size: 0x4, Type: FloatProperty)
    std::uint8_t VelocityImpact[0xF0]; // 0x0430 (Size: 0xF0, Type: StructProperty)
    std::uint8_t ImpactDisplacement[0x18]; // 0x0520 (Size: 0x18, Type: StructProperty)
    float AbsSteerAngle; // 0x0538 (Size: 0x4, Type: FloatProperty)
    float LeanAngle; // 0x053C (Size: 0x4, Type: FloatProperty)
    float FallDistanceValue; // 0x0540 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0544
    std::uint8_t FootTraceLocation[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    float FootTraceSideOffset; // 0x0560 (Size: 0x4, Type: FloatProperty)
    float MaxFootLocationDistance; // 0x0564 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasFootTrace; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInAir; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInRollAngleThreshold; // 0x056A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDriveStarting; // 0x056B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x056C
    std::uint8_t LocalLeftOffset[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldPosLeft[0x18]; // 0x0588 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRotLeftOffset[0x18]; // 0x05A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldRotLeft[0x18]; // 0x05B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRightOffset[0x18]; // 0x05D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldPosRight[0x18]; // 0x05E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRotRightOffset[0x18]; // 0x0600 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldRotRight[0x18]; // 0x0618 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsSteeringRotating; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStopped; // 0x0631 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIdle; // 0x0632 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0633
    float IdleSpeedKmh; // 0x0634 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSlowingDown; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDrivingFast; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningRightHard; // 0x063A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningLeftHard; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBraking; // 0x063C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x063D
    std::uint8_t bIsBoosting; // 0x063E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumpTrick; // 0x063F (Size: 0x1, Type: BoolProperty)
    float JumpPlayRate; // 0x0640 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsJumpFlipping; // 0x0644 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldEnableAO; // 0x0645 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBodyDragging; // 0x0646 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x0647
    float FallDistanceJumpingThreshold; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float FallDistanceJumpTrickThreshold; // 0x064C (Size: 0x4, Type: FloatProperty)
    float RollAngleThreshold; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float StartSpeedThreshold; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float SlowingSpeedThreshold; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float FastSpeedThreshold; // 0x065C (Size: 0x4, Type: FloatProperty)
    float BrakingDeltaThreshold; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float SteerHardAngleThreshold; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float GroundTraceUpOffset; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float GroundTraceLength; // 0x066C (Size: 0x4, Type: FloatProperty)
    std::uint8_t JumpPlayRateInRange[0x10]; // 0x0670 (Size: 0x10, Type: StructProperty)
    std::uint8_t JumpPlayRateOutRange[0x10]; // 0x0680 (Size: 0x10, Type: StructProperty)
    float JumpChargeFactor; // 0x0690 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsChargingJump; // 0x0694 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMotorcycleJumping; // 0x0695 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMotorcycleLaunchedJump; // 0x0696 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWheelie; // 0x0697 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStoppie; // 0x0698 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AirTrickType; // 0x0699 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsJumpingAndNotRolling; // 0x069A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnGroundAndNotRolling; // 0x069B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnGroundAndBoosting; // 0x069C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPowerSliding; // 0x069D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x069E
    float PowerSlideSteeringAngleThreshold; // 0x06A0 (Size: 0x4, Type: FloatProperty)
    float PowerSlideSpeedThreshold; // 0x06A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x8]; // 0x06A8
    std::uint8_t LandStartPosInRange[0x10]; // 0x06B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LandStartPosOutRange[0x10]; // 0x06C0 (Size: 0x10, Type: StructProperty)
    float LandStartPosition; // 0x06D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPawnStandUp; // 0x06D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSmoothingYaw; // 0x06D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x2]; // 0x06D6
    float AimPitch; // 0x06D8 (Size: 0x4, Type: FloatProperty)
    float AimYaw; // 0x06DC (Size: 0x4, Type: FloatProperty)
    float AimYawLastFrame; // 0x06E0 (Size: 0x4, Type: FloatProperty)
    float AimYawSmoothed; // 0x06E4 (Size: 0x4, Type: FloatProperty)
    float BodyAimYaw; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    float NegativeBodyAimYaw; // 0x06EC (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x06F0 (Size: 0x4, Type: FloatProperty)
    float PreviousForwardSpeed; // 0x06F4 (Size: 0x4, Type: FloatProperty)
    float TotalSpeed; // 0x06F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsReversing; // 0x06FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x06FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAir; // 0x06FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsingConsumable; // 0x06FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t IntroCachedTime[0x14]; // 0x0700 (Size: 0x14, Type: StructProperty)
    float StoppieLandTime; // 0x0714 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPlayHitReact; // 0x0718 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingMontage; // 0x0719 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x071A
    float VehiclePitch; // 0x071C (Size: 0x4, Type: FloatProperty)
    float VehicleRoll; // 0x0720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x0724
    std::uint8_t MeleeTwistRot[0x18]; // 0x0728 (Size: 0x18, Type: StructProperty)
    std::uint8_t bStateTransitionRuleToMovingLoop; // 0x0740 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x0741
    float UpperBodyAdditiveAlpha; // 0x0744 (Size: 0x4, Type: FloatProperty)
    float UpperBodyAdditiveStrength; // 0x0748 (Size: 0x4, Type: FloatProperty)
    float MovingNoisePlayRate; // 0x074C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFemale; // 0x0750 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, Motorcycle) == 832, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::Motorcycle");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MotorcycleAnimInstance) == 840, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::MotorcycleAnimInstance");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MotorcycleInput) == 848, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::MotorcycleInput");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FortPlayerPawn) == 936, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FortPlayerPawn");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldVelocity) == 944, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::WorldVelocity");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalVelocity) == 968, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocalVelocity");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RightHandIKAlpha) == 992, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RightHandIKAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LeftHandIKAlpha) == 996, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LeftHandIKAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, Speed2D) == 1000, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::Speed2D");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocomotionCardinalDirection) == 1004, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocomotionCardinalDirection");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumping) == 1005, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsJumping");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderCatchupRotation) == 1008, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderCatchupRotation");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderZDisplacement) == 1040, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderZDisplacement");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementDampUpFactor) == 1044, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementDampUpFactor");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementDampDownFactor) == 1048, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementDampDownFactor");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementLandingFallDistanceThreshold) == 1052, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementLandingFallDistanceThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderMinDisplacement) == 1056, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderMinDisplacement");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderMaxDisplacement) == 1060, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderMaxDisplacement");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderDisplacementRampPerSecond) == 1064, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderDisplacementRampPerSecond");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RiderRotationInterpSpeed) == 1068, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RiderRotationInterpSpeed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VelocityImpact) == 1072, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::VelocityImpact");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, ImpactDisplacement) == 1312, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::ImpactDisplacement");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AbsSteerAngle) == 1336, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AbsSteerAngle");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LeanAngle) == 1340, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LeanAngle");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceValue) == 1344, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FallDistanceValue");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FootTraceLocation) == 1352, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FootTraceLocation");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FootTraceSideOffset) == 1376, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FootTraceSideOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MaxFootLocationDistance) == 1380, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::MaxFootLocationDistance");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bHasFootTrace) == 1384, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bHasFootTrace");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bInAir) == 1385, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bInAir");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsInRollAngleThreshold) == 1386, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsInRollAngleThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsDriveStarting) == 1387, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsDriveStarting");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalLeftOffset) == 1392, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocalLeftOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldPosLeft) == 1416, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::WorldPosLeft");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRotLeftOffset) == 1440, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocalRotLeftOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldRotLeft) == 1464, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::WorldRotLeft");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRightOffset) == 1488, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocalRightOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldPosRight) == 1512, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::WorldPosRight");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LocalRotRightOffset) == 1536, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LocalRotRightOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, WorldRotRight) == 1560, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::WorldRotRight");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSteeringRotating) == 1584, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsSteeringRotating");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsStopped) == 1585, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsStopped");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsIdle) == 1586, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsIdle");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, IdleSpeedKmh) == 1588, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::IdleSpeedKmh");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSlowingDown) == 1592, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsSlowingDown");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsDrivingFast) == 1593, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsDrivingFast");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsTurningRightHard) == 1594, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsTurningRightHard");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsTurningLeftHard) == 1595, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsTurningLeftHard");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBraking) == 1596, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsBraking");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBoosting) == 1598, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsBoosting");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpTrick) == 1599, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsJumpTrick");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRate) == 1600, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRate");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpFlipping) == 1604, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsJumpFlipping");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldEnableAO) == 1605, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bShouldEnableAO");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsBodyDragging) == 1606, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsBodyDragging");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceJumpingThreshold) == 1608, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FallDistanceJumpingThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FallDistanceJumpTrickThreshold) == 1612, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FallDistanceJumpTrickThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, RollAngleThreshold) == 1616, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::RollAngleThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, StartSpeedThreshold) == 1620, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::StartSpeedThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, SlowingSpeedThreshold) == 1624, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::SlowingSpeedThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, FastSpeedThreshold) == 1628, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::FastSpeedThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, BrakingDeltaThreshold) == 1632, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::BrakingDeltaThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, SteerHardAngleThreshold) == 1636, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::SteerHardAngleThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, GroundTraceUpOffset) == 1640, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::GroundTraceUpOffset");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, GroundTraceLength) == 1644, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::GroundTraceLength");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRateInRange) == 1648, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRateInRange");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpPlayRateOutRange) == 1664, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::JumpPlayRateOutRange");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, JumpChargeFactor) == 1680, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::JumpChargeFactor");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsChargingJump) == 1684, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsChargingJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsMotorcycleJumping) == 1685, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsMotorcycleJumping");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bMotorcycleLaunchedJump) == 1686, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bMotorcycleLaunchedJump");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bWheelie) == 1687, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bWheelie");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bStoppie) == 1688, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bStoppie");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AirTrickType) == 1689, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AirTrickType");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsJumpingAndNotRolling) == 1690, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsJumpingAndNotRolling");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsOnGroundAndNotRolling) == 1691, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsOnGroundAndNotRolling");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsOnGroundAndBoosting) == 1692, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsOnGroundAndBoosting");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsPowerSliding) == 1693, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsPowerSliding");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PowerSlideSteeringAngleThreshold) == 1696, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::PowerSlideSteeringAngleThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PowerSlideSpeedThreshold) == 1700, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::PowerSlideSpeedThreshold");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosInRange) == 1712, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LandStartPosInRange");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosOutRange) == 1728, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LandStartPosOutRange");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, LandStartPosition) == 1744, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::LandStartPosition");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldPawnStandUp) == 1748, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bShouldPawnStandUp");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsSmoothingYaw) == 1749, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsSmoothingYaw");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimPitch) == 1752, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AimPitch");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYaw) == 1756, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AimYaw");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYawLastFrame) == 1760, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AimYawLastFrame");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, AimYawSmoothed) == 1764, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::AimYawSmoothed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, BodyAimYaw) == 1768, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::BodyAimYaw");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, NegativeBodyAimYaw) == 1772, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::NegativeBodyAimYaw");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, ForwardSpeed) == 1776, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::ForwardSpeed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, PreviousForwardSpeed) == 1780, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::PreviousForwardSpeed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, TotalSpeed) == 1784, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::TotalSpeed");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsReversing) == 1788, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsReversing");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsMoving) == 1789, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsMoving");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsInAir) == 1790, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsInAir");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsUsingConsumable) == 1791, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsUsingConsumable");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, IntroCachedTime) == 1792, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::IntroCachedTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, StoppieLandTime) == 1812, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::StoppieLandTime");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bShouldPlayHitReact) == 1816, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bShouldPlayHitReact");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsPlayingMontage) == 1817, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsPlayingMontage");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VehiclePitch) == 1820, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::VehiclePitch");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, VehicleRoll) == 1824, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::VehicleRoll");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MeleeTwistRot) == 1832, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::MeleeTwistRot");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bStateTransitionRuleToMovingLoop) == 1856, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bStateTransitionRuleToMovingLoop");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, UpperBodyAdditiveAlpha) == 1860, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::UpperBodyAdditiveAlpha");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, UpperBodyAdditiveStrength) == 1864, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::UpperBodyAdditiveStrength");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, MovingNoisePlayRate) == 1868, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::MovingNoisePlayRate");
static_assert(offsetof(UFortPlayerAnimInstance_MotorcycleRider, bIsFemale) == 1872, "Offset mismatch for UFortPlayerAnimInstance_MotorcycleRider::bIsFemale");
