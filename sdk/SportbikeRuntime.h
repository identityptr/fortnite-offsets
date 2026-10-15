/**
 * decamp dumper generated SDK
 * Package: /Script/SportbikeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SportbikeRuntime.FortSportbikeAnimInstance
// Kind: Class; super: FortMotorcycleVehicleAnimInstance
class UFortSportbikeAnimInstance
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t LimitedWheelRotationFR[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    double WheelRotationRoll; // 0x0588 (Size: 0x8, Type: DoubleProperty)
    double WheelRotationRollClamp; // 0x0590 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HasPassenger; // 0x0598 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldPlayGroundTrick; // 0x0599 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsWheelie; // 0x059A (Size: 0x1, Type: BoolProperty)
    std::uint8_t StateRuleFromWheelieToGroundTrickOutro; // 0x059B (Size: 0x1, Type: BoolProperty)
    std::uint8_t SportBikeWheelieEarlyOut; // 0x059C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldExitFromLocomotion; // 0x059D (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsChangingGear; // 0x059E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSportbikeAnimInstance, LimitedWheelRotationFR) == 1392, "Offset mismatch for UFortSportbikeAnimInstance::LimitedWheelRotationFR");
static_assert(offsetof(UFortSportbikeAnimInstance, WheelRotationRoll) == 1416, "Offset mismatch for UFortSportbikeAnimInstance::WheelRotationRoll");
static_assert(offsetof(UFortSportbikeAnimInstance, WheelRotationRollClamp) == 1424, "Offset mismatch for UFortSportbikeAnimInstance::WheelRotationRollClamp");
static_assert(offsetof(UFortSportbikeAnimInstance, HasPassenger) == 1432, "Offset mismatch for UFortSportbikeAnimInstance::HasPassenger");
static_assert(offsetof(UFortSportbikeAnimInstance, ShouldPlayGroundTrick) == 1433, "Offset mismatch for UFortSportbikeAnimInstance::ShouldPlayGroundTrick");
static_assert(offsetof(UFortSportbikeAnimInstance, IsWheelie) == 1434, "Offset mismatch for UFortSportbikeAnimInstance::IsWheelie");
static_assert(offsetof(UFortSportbikeAnimInstance, StateRuleFromWheelieToGroundTrickOutro) == 1435, "Offset mismatch for UFortSportbikeAnimInstance::StateRuleFromWheelieToGroundTrickOutro");
static_assert(offsetof(UFortSportbikeAnimInstance, SportBikeWheelieEarlyOut) == 1436, "Offset mismatch for UFortSportbikeAnimInstance::SportBikeWheelieEarlyOut");
static_assert(offsetof(UFortSportbikeAnimInstance, ShouldExitFromLocomotion) == 1437, "Offset mismatch for UFortSportbikeAnimInstance::ShouldExitFromLocomotion");
static_assert(offsetof(UFortSportbikeAnimInstance, IsChangingGear) == 1438, "Offset mismatch for UFortSportbikeAnimInstance::IsChangingGear");

// /Script/SportbikeRuntime.FortSportbikeDriverAnimInstance
// Kind: Class; super: FortPlayerAnimInstance_MotorcycleDriver
class UFortSportbikeDriverAnimInstance
{
public:
    std::uint8_t Pad_0000[0x820]; // 0x0000
    std::uint8_t SportBikeWheelieEarlyOut; // 0x0820 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StateRuleFromWheelieToGroundTrickOutro; // 0x0821 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EarlyExitFromGroundTrick; // 0x0822 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsBoostingWithNoPassenger; // 0x0823 (Size: 0x1, Type: BoolProperty)
    std::int32_t MotorcycleGear; // 0x0824 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentGear; // 0x0828 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousGear; // 0x082C (Size: 0x4, Type: IntProperty)
    std::uint8_t IsChangingGear; // 0x0830 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0831
    float SuperSlideBlendAlpha; // 0x0834 (Size: 0x4, Type: FloatProperty)
    float SuperSlideBlendStart; // 0x0838 (Size: 0x4, Type: FloatProperty)
    float SuperSlideBlendEnd; // 0x083C (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsSuperSliding; // 0x0840 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSportbikeDriverAnimInstance, SportBikeWheelieEarlyOut) == 2080, "Offset mismatch for UFortSportbikeDriverAnimInstance::SportBikeWheelieEarlyOut");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, StateRuleFromWheelieToGroundTrickOutro) == 2081, "Offset mismatch for UFortSportbikeDriverAnimInstance::StateRuleFromWheelieToGroundTrickOutro");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, EarlyExitFromGroundTrick) == 2082, "Offset mismatch for UFortSportbikeDriverAnimInstance::EarlyExitFromGroundTrick");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsBoostingWithNoPassenger) == 2083, "Offset mismatch for UFortSportbikeDriverAnimInstance::IsBoostingWithNoPassenger");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, MotorcycleGear) == 2084, "Offset mismatch for UFortSportbikeDriverAnimInstance::MotorcycleGear");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, CurrentGear) == 2088, "Offset mismatch for UFortSportbikeDriverAnimInstance::CurrentGear");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, PreviousGear) == 2092, "Offset mismatch for UFortSportbikeDriverAnimInstance::PreviousGear");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsChangingGear) == 2096, "Offset mismatch for UFortSportbikeDriverAnimInstance::IsChangingGear");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendAlpha) == 2100, "Offset mismatch for UFortSportbikeDriverAnimInstance::SuperSlideBlendAlpha");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendStart) == 2104, "Offset mismatch for UFortSportbikeDriverAnimInstance::SuperSlideBlendStart");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendEnd) == 2108, "Offset mismatch for UFortSportbikeDriverAnimInstance::SuperSlideBlendEnd");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsSuperSliding) == 2112, "Offset mismatch for UFortSportbikeDriverAnimInstance::IsSuperSliding");

// /Script/SportbikeRuntime.FortSportbikeVehicle
// Kind: Class; super: FortMotorcycleVehicle
class UFortSportbikeVehicle
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

static_assert(offsetof(UFortSportbikeVehicle, OnStartChargingJumpDelegate) == 8352, "Offset mismatch for UFortSportbikeVehicle::OnStartChargingJumpDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnCancelChargingJumpDelegate) == 8368, "Offset mismatch for UFortSportbikeVehicle::OnCancelChargingJumpDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnJumpDelegate) == 8384, "Offset mismatch for UFortSportbikeVehicle::OnJumpDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnChargingJumpDelegate) == 8400, "Offset mismatch for UFortSportbikeVehicle::OnChargingJumpDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnStartAirTrickDelegate) == 8416, "Offset mismatch for UFortSportbikeVehicle::OnStartAirTrickDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnFinishAirTrickDelegate) == 8432, "Offset mismatch for UFortSportbikeVehicle::OnFinishAirTrickDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnStartWheelieDelegate) == 8448, "Offset mismatch for UFortSportbikeVehicle::OnStartWheelieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnReleaseWheelieDelegate) == 8464, "Offset mismatch for UFortSportbikeVehicle::OnReleaseWheelieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnLandWheelieDelegate) == 8480, "Offset mismatch for UFortSportbikeVehicle::OnLandWheelieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnFailWheelieDelegate) == 8496, "Offset mismatch for UFortSportbikeVehicle::OnFailWheelieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnStartStoppieDelegate) == 8512, "Offset mismatch for UFortSportbikeVehicle::OnStartStoppieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnReleaseStoppieDelegate) == 8528, "Offset mismatch for UFortSportbikeVehicle::OnReleaseStoppieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnLandStoppieDelegate) == 8544, "Offset mismatch for UFortSportbikeVehicle::OnLandStoppieDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnInventoryModeChangedDelegate) == 8560, "Offset mismatch for UFortSportbikeVehicle::OnInventoryModeChangedDelegate");
static_assert(offsetof(UFortSportbikeVehicle, OnSuperSlidingChangedDelegate) == 8576, "Offset mismatch for UFortSportbikeVehicle::OnSuperSlidingChangedDelegate");
static_assert(offsetof(UFortSportbikeVehicle, InventoryCameraModeClass) == 8592, "Offset mismatch for UFortSportbikeVehicle::InventoryCameraModeClass");
static_assert(offsetof(UFortSportbikeVehicle, InventoryCameraModeClassADS) == 8600, "Offset mismatch for UFortSportbikeVehicle::InventoryCameraModeClassADS");
static_assert(offsetof(UFortSportbikeVehicle, PassengerCameraModeClass) == 8608, "Offset mismatch for UFortSportbikeVehicle::PassengerCameraModeClass");
static_assert(offsetof(UFortSportbikeVehicle, PassengerCameraModeClassADS) == 8616, "Offset mismatch for UFortSportbikeVehicle::PassengerCameraModeClassADS");
static_assert(offsetof(UFortSportbikeVehicle, FortMotorcycleVehicleConfigs) == 8624, "Offset mismatch for UFortSportbikeVehicle::FortMotorcycleVehicleConfigs");
static_assert(offsetof(UFortSportbikeVehicle, RearAxleSocket) == 8632, "Offset mismatch for UFortSportbikeVehicle::RearAxleSocket");
static_assert(offsetof(UFortSportbikeVehicle, ActionDefForUI) == 8640, "Offset mismatch for UFortSportbikeVehicle::ActionDefForUI");
static_assert(offsetof(UFortSportbikeVehicle, InputActionTrick) == 8656, "Offset mismatch for UFortSportbikeVehicle::InputActionTrick");
static_assert(offsetof(UFortSportbikeVehicle, InputActionToggleDrivingMode) == 8664, "Offset mismatch for UFortSportbikeVehicle::InputActionToggleDrivingMode");
static_assert(offsetof(UFortSportbikeVehicle, SwingArmRotation) == 8672, "Offset mismatch for UFortSportbikeVehicle::SwingArmRotation");
static_assert(offsetof(UFortSportbikeVehicle, BoostShapeIndices) == 8736, "Offset mismatch for UFortSportbikeVehicle::BoostShapeIndices");
static_assert(offsetof(UFortSportbikeVehicle, bIsBoostAttacking) == 8752, "Offset mismatch for UFortSportbikeVehicle::bIsBoostAttacking");
static_assert(offsetof(UFortSportbikeVehicle, RechargeableBoostPercent) == 8756, "Offset mismatch for UFortSportbikeVehicle::RechargeableBoostPercent");
static_assert(offsetof(UFortSportbikeVehicle, BoostInfo) == 8760, "Offset mismatch for UFortSportbikeVehicle::BoostInfo");
static_assert(offsetof(UFortSportbikeVehicle, CachedTrickType) == 8800, "Offset mismatch for UFortSportbikeVehicle::CachedTrickType");
static_assert(offsetof(UFortSportbikeVehicle, bHadPassengerAtTrickStart) == 8801, "Offset mismatch for UFortSportbikeVehicle::bHadPassengerAtTrickStart");
static_assert(offsetof(UFortSportbikeVehicle, PassengerADSSockets) == 8856, "Offset mismatch for UFortSportbikeVehicle::PassengerADSSockets");
static_assert(offsetof(UFortSportbikeVehicle, PassengerADSRelativeOffsets) == 8872, "Offset mismatch for UFortSportbikeVehicle::PassengerADSRelativeOffsets");
static_assert(offsetof(UFortSportbikeVehicle, CachedNiagaraComponentRoadAndExhaust) == 8888, "Offset mismatch for UFortSportbikeVehicle::CachedNiagaraComponentRoadAndExhaust");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustNiagaraComponentName) == 8896, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustNiagaraComponentName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustVehicleSpeedName) == 8912, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustVehicleSpeedName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustSlideDirectionName) == 8916, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustSlideDirectionName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustMinSpeedForDust) == 8920, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustMinSpeedForDust");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustDustRearName) == 8924, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustDustRearName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustDustColorLerpName) == 8928, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustDustColorLerpName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustDustColorLerp) == 8932, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustDustColorLerp");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustDustAlphaMultiplierName) == 8936, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustDustAlphaMultiplierName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustDustAlphaMultiplier) == 8940, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustDustAlphaMultiplier");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustPeelOutColorIndexName) == 8944, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustPeelOutColorIndexName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustPeelOutRearName) == 8948, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustPeelOutRearName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustIsPeelOutOnRoadName) == 8952, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustIsPeelOutOnRoadName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustIsPeelOutOnRoadRewindName) == 8956, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustIsPeelOutOnRoadRewindName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustIsInAirName) == 8960, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustIsInAirName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustCameraDirtGameplayCueTag) == 8964, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustCameraDirtGameplayCueTag");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustCameraWaterGameplayCueTag) == 8968, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustCameraWaterGameplayCueTag");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustSurfaceTypeArrayForFX) == 8976, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustSurfaceTypeArrayForFX");
static_assert(offsetof(UFortSportbikeVehicle, DriverCameraShakeInstance) == 8992, "Offset mismatch for UFortSportbikeVehicle::DriverCameraShakeInstance");
static_assert(offsetof(UFortSportbikeVehicle, AcceleratingCameraShakeInstance) == 9000, "Offset mismatch for UFortSportbikeVehicle::AcceleratingCameraShakeInstance");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustHeadlightsName) == 9016, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustHeadlightsName");
static_assert(offsetof(UFortSportbikeVehicle, RoadAndExhaustBrakelightsName) == 9020, "Offset mismatch for UFortSportbikeVehicle::RoadAndExhaustBrakelightsName");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashMinSpeed) == 9024, "Offset mismatch for UFortSportbikeVehicle::DoorBashMinSpeed");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashMaxSpeed) == 9064, "Offset mismatch for UFortSportbikeVehicle::DoorBashMaxSpeed");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashForwardDistanceMin) == 9104, "Offset mismatch for UFortSportbikeVehicle::DoorBashForwardDistanceMin");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashForwardDistanceMax) == 9144, "Offset mismatch for UFortSportbikeVehicle::DoorBashForwardDistanceMax");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashGameplayCueTag) == 9184, "Offset mismatch for UFortSportbikeVehicle::DoorBashGameplayCueTag");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashCollisionTypesForDoor) == 9192, "Offset mismatch for UFortSportbikeVehicle::DoorBashCollisionTypesForDoor");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashCollisionTypesForPawn) == 9208, "Offset mismatch for UFortSportbikeVehicle::DoorBashCollisionTypesForPawn");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashSphereRadiusForPawnLaunch) == 9224, "Offset mismatch for UFortSportbikeVehicle::DoorBashSphereRadiusForPawnLaunch");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashScalarForPawnLaunch) == 9264, "Offset mismatch for UFortSportbikeVehicle::DoorBashScalarForPawnLaunch");
static_assert(offsetof(UFortSportbikeVehicle, DoorBashPawnLaunchGameplayCueTag) == 9304, "Offset mismatch for UFortSportbikeVehicle::DoorBashPawnLaunchGameplayCueTag");
static_assert(offsetof(UFortSportbikeVehicle, InventoryModeTagQuery) == 9312, "Offset mismatch for UFortSportbikeVehicle::InventoryModeTagQuery");
static_assert(offsetof(UFortSportbikeVehicle, InputContextBlockedTags) == 9384, "Offset mismatch for UFortSportbikeVehicle::InputContextBlockedTags");
static_assert(offsetof(UFortSportbikeVehicle, MobileHUDTag) == 9440, "Offset mismatch for UFortSportbikeVehicle::MobileHUDTag");

// /Script/SportbikeRuntime.FortSportbikeVehicleConfigs
// Kind: Class; super: FortMotorcycleVehicleConfigs
class UFortSportbikeVehicleConfigs
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

static_assert(offsetof(UFortSportbikeVehicleConfigs, Wheels) == 2448, "Offset mismatch for UFortSportbikeVehicleConfigs::Wheels");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SpringInterpDamp) == 2464, "Offset mismatch for UFortSportbikeVehicleConfigs::SpringInterpDamp");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieSpringInterpDamp) == 2468, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieSpringInterpDamp");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushStiff) == 2472, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushStiff");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushDamp) == 2476, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushDamp");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushXTraceOffset) == 2480, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushXTraceOffset");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushForwardTraceLengthScale) == 2504, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushForwardTraceLengthScale");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushBackTraceLengthScale) == 2508, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushBackTraceLengthScale");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushRightTraceLength) == 2512, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushRightTraceLength");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushRightTraceOffset) == 2520, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushRightTraceOffset");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushRearRightTraceOffset) == 2544, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushRearRightTraceOffset");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WallPushAngle) == 2568, "Offset mismatch for UFortSportbikeVehicleConfigs::WallPushAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bUseWallPushTracesForWalls) == 2572, "Offset mismatch for UFortSportbikeVehicleConfigs::bUseWallPushTracesForWalls");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bUseWallPushRearSideTracesForWalls) == 2573, "Offset mismatch for UFortSportbikeVehicleConfigs::bUseWallPushRearSideTracesForWalls");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MaxJumpChargeTime) == 2576, "Offset mismatch for UFortSportbikeVehicleConfigs::MaxJumpChargeTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinChargeJumpForce) == 2580, "Offset mismatch for UFortSportbikeVehicleConfigs::MinChargeJumpForce");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MaxChargeJumpForce) == 2584, "Offset mismatch for UFortSportbikeVehicleConfigs::MaxChargeJumpForce");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinJumpForwardAngle) == 2588, "Offset mismatch for UFortSportbikeVehicleConfigs::MinJumpForwardAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MaxJumpForwardAngle) == 2592, "Offset mismatch for UFortSportbikeVehicleConfigs::MaxJumpForwardAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, JumpForceMinCOMOffset) == 2600, "Offset mismatch for UFortSportbikeVehicleConfigs::JumpForceMinCOMOffset");
static_assert(offsetof(UFortSportbikeVehicleConfigs, JumpForceMaxCOMOffset) == 2624, "Offset mismatch for UFortSportbikeVehicleConfigs::JumpForceMaxCOMOffset");
static_assert(offsetof(UFortSportbikeVehicleConfigs, JumpChargeGraceTimeSeconds) == 2648, "Offset mismatch for UFortSportbikeVehicleConfigs::JumpChargeGraceTimeSeconds");
static_assert(offsetof(UFortSportbikeVehicleConfigs, JumpGraceTimeSeconds) == 2652, "Offset mismatch for UFortSportbikeVehicleConfigs::JumpGraceTimeSeconds");
static_assert(offsetof(UFortSportbikeVehicleConfigs, LeanAngleScale) == 2656, "Offset mismatch for UFortSportbikeVehicleConfigs::LeanAngleScale");
static_assert(offsetof(UFortSportbikeVehicleConfigs, LeanStiff) == 2660, "Offset mismatch for UFortSportbikeVehicleConfigs::LeanStiff");
static_assert(offsetof(UFortSportbikeVehicleConfigs, LeanDamp) == 2664, "Offset mismatch for UFortSportbikeVehicleConfigs::LeanDamp");
static_assert(offsetof(UFortSportbikeVehicleConfigs, LeanStrength) == 2668, "Offset mismatch for UFortSportbikeVehicleConfigs::LeanStrength");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SlideCatchupForceTime) == 2672, "Offset mismatch for UFortSportbikeVehicleConfigs::SlideCatchupForceTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SlideCatchupSpeed) == 2676, "Offset mismatch for UFortSportbikeVehicleConfigs::SlideCatchupSpeed");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SlideCatchupPushForce) == 2680, "Offset mismatch for UFortSportbikeVehicleConfigs::SlideCatchupPushForce");
static_assert(offsetof(UFortSportbikeVehicleConfigs, AutoAirPitchAngle) == 2684, "Offset mismatch for UFortSportbikeVehicleConfigs::AutoAirPitchAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinSteeringAngleForModifiedFriction) == 2688, "Offset mismatch for UFortSportbikeVehicleConfigs::MinSteeringAngleForModifiedFriction");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinSpeedForModifiedFriction) == 2692, "Offset mismatch for UFortSportbikeVehicleConfigs::MinSpeedForModifiedFriction");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinSteeringAngleToConsiderTractionLost) == 2696, "Offset mismatch for UFortSportbikeVehicleConfigs::MinSteeringAngleToConsiderTractionLost");
static_assert(offsetof(UFortSportbikeVehicleConfigs, FrictionRatioToConsiderTractionLost) == 2700, "Offset mismatch for UFortSportbikeVehicleConfigs::FrictionRatioToConsiderTractionLost");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchStiffMin) == 2704, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchStiffMin");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchStiffMax) == 2708, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchStiffMax");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchDampMin) == 2712, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchDampMin");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchDampMax) == 2716, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchDampMax");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchAngleMin) == 2720, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchAngleMin");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheeliePitchAngleMax) == 2724, "Offset mismatch for UFortSportbikeVehicleConfigs::WheeliePitchAngleMax");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppiePitchAngle) == 2728, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppiePitchAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppiePitchStiff) == 2732, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppiePitchStiff");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppiePitchDamp) == 2736, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppiePitchDamp");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieRampSeconds) == 2740, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieRampSeconds");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieFailPitchAngle) == 2744, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieFailPitchAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieRecoveryRate) == 2748, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieRecoveryRate");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieFailRecoveryRate) == 2752, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieFailRecoveryRate");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieMinStartSpeed) == 2756, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieMinStartSpeed");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieMinStopSpeed) == 2760, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieMinStopSpeed");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieSteerFactor) == 2764, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieSteerFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieSteerFactor) == 2768, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieSteerFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieSteerAlphaThreshold) == 2772, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieSteerAlphaThreshold");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieStoppieMaxLeanAllowedToInitiate) == 2776, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieStoppieMaxLeanAllowedToInitiate");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieGroundBufferTime) == 2780, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieGroundBufferTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieGroundBufferTime) == 2784, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieGroundBufferTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieSpringLengthExponent) == 2788, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieSpringLengthExponent");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieWheelOffsetLerpMultiplier) == 2792, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieWheelOffsetLerpMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieBrakeFactor) == 2796, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieBrakeFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieTurnInPlaceSpeed) == 2800, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieTurnInPlaceSpeed");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieTurnInPlaceSpeedIce) == 2804, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieTurnInPlaceSpeedIce");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieTurnInPlaceSpeedMud) == 2808, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieTurnInPlaceSpeedMud");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MinSpeedKmhForMaxStoppie) == 2812, "Offset mismatch for UFortSportbikeVehicleConfigs::MinSpeedKmhForMaxStoppie");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieTurnAngleExponent) == 2816, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieTurnAngleExponent");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StoppieMaxTurnAngle) == 2820, "Offset mismatch for UFortSportbikeVehicleConfigs::StoppieMaxTurnAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieTireTractionMultiplier_Min) == 2824, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieTireTractionMultiplier_Min");
static_assert(offsetof(UFortSportbikeVehicleConfigs, WheelieCameraMinStraightFactor) == 2828, "Offset mismatch for UFortSportbikeVehicleConfigs::WheelieCameraMinStraightFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, MaxLeanAccel) == 2832, "Offset mismatch for UFortSportbikeVehicleConfigs::MaxLeanAccel");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CruiseControlForwardAlpha) == 2836, "Offset mismatch for UFortSportbikeVehicleConfigs::CruiseControlForwardAlpha");
static_assert(offsetof(UFortSportbikeVehicleConfigs, InventoryModeSpeedKmh) == 2840, "Offset mismatch for UFortSportbikeVehicleConfigs::InventoryModeSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CruiseControlDisengageSpeedKmh) == 2844, "Offset mismatch for UFortSportbikeVehicleConfigs::CruiseControlDisengageSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bPowerSlideIsSuperSlide) == 2848, "Offset mismatch for UFortSportbikeVehicleConfigs::bPowerSlideIsSuperSlide");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideFrontFrictionMultiplier) == 2852, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideRearFrictionMultiplier) == 2856, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideRoadFrontFrictionMultiplier) == 2860, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideRoadFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideRoadRearFrictionMultiplier) == 2864, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideRoadRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideDirtFrontFrictionMultiplier) == 2868, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideDirtFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideDirtRearFrictionMultiplier) == 2872, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideDirtRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideGrassFrontFrictionMultiplier) == 2876, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideGrassFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideGrassRearFrictionMultiplier) == 2880, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideGrassRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideSnowFrontFrictionMultiplier) == 2884, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideSnowFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideSnowRearFrictionMultiplier) == 2888, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideSnowRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideIceFrontFrictionMultiplier) == 2892, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideIceFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideIceRearFrictionMultiplier) == 2896, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideIceRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideMudFrontFrictionMultiplier) == 2900, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideMudFrontFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideMudRearFrictionMultiplier) == 2904, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideMudRearFrictionMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideFactor) == 2908, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideDampFactor) == 2912, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideDampFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, FrictionDampFactor) == 2916, "Offset mismatch for UFortSportbikeVehicleConfigs::FrictionDampFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerSlideLeanAngleScale) == 2920, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerSlideLeanAngleScale");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SuperSlideLeanAngle) == 2924, "Offset mismatch for UFortSportbikeVehicleConfigs::SuperSlideLeanAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SuperSlideMinStartYawSpeedDegrees) == 2928, "Offset mismatch for UFortSportbikeVehicleConfigs::SuperSlideMinStartYawSpeedDegrees");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SuperSlideMinStartSpeedKmh) == 2932, "Offset mismatch for UFortSportbikeVehicleConfigs::SuperSlideMinStartSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, SuperSlideMaxEndSpeedKmh) == 2936, "Offset mismatch for UFortSportbikeVehicleConfigs::SuperSlideMaxEndSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PowerslideInputWindow) == 2940, "Offset mismatch for UFortSportbikeVehicleConfigs::PowerslideInputWindow");
static_assert(offsetof(UFortSportbikeVehicleConfigs, ShootingMinSpeedSteeringAngle) == 2944, "Offset mismatch for UFortSportbikeVehicleConfigs::ShootingMinSpeedSteeringAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, ShootingMaxSpeedSteeringAngle) == 2948, "Offset mismatch for UFortSportbikeVehicleConfigs::ShootingMaxSpeedSteeringAngle");
static_assert(offsetof(UFortSportbikeVehicleConfigs, InventoryModeCameraYawConstraint) == 2952, "Offset mismatch for UFortSportbikeVehicleConfigs::InventoryModeCameraYawConstraint");
static_assert(offsetof(UFortSportbikeVehicleConfigs, BoostTopSpeedMultiplier) == 2960, "Offset mismatch for UFortSportbikeVehicleConfigs::BoostTopSpeedMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, BoostPushForceMultiplier) == 3000, "Offset mismatch for UFortSportbikeVehicleConfigs::BoostPushForceMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, BoostMinPushForce) == 3040, "Offset mismatch for UFortSportbikeVehicleConfigs::BoostMinPushForce");
static_assert(offsetof(UFortSportbikeVehicleConfigs, BoostSteeringMultiplier) == 3080, "Offset mismatch for UFortSportbikeVehicleConfigs::BoostSteeringMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, UsesBoost) == 3120, "Offset mismatch for UFortSportbikeVehicleConfigs::UsesBoost");
static_assert(offsetof(UFortSportbikeVehicleConfigs, StartWithFullBoost) == 3160, "Offset mismatch for UFortSportbikeVehicleConfigs::StartWithFullBoost");
static_assert(offsetof(UFortSportbikeVehicleConfigs, UsesRechargeableBoost) == 3200, "Offset mismatch for UFortSportbikeVehicleConfigs::UsesRechargeableBoost");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RateOfUse) == 3240, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RateOfUse");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RateOfRegen) == 3280, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RateOfRegen");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RateOfRegenMultMin) == 3320, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RateOfRegenMultMin");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RateOfRegenMultMax) == 3360, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RateOfRegenMultMax");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RegenMaxMultTime) == 3400, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RegenMaxMultTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_RequiredPercentToActivate) == 3440, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_RequiredPercentToActivate");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_MinPercent) == 3480, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_MinPercent");
static_assert(offsetof(UFortSportbikeVehicleConfigs, RechargeableBoost_MaxPercent) == 3520, "Offset mismatch for UFortSportbikeVehicleConfigs::RechargeableBoost_MaxPercent");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bPlayHolsterAnimsOnClient) == 3560, "Offset mismatch for UFortSportbikeVehicleConfigs::bPlayHolsterAnimsOnClient");
static_assert(offsetof(UFortSportbikeVehicleConfigs, FrontWheelSteeringFactor) == 3564, "Offset mismatch for UFortSportbikeVehicleConfigs::FrontWheelSteeringFactor");
static_assert(offsetof(UFortSportbikeVehicleConfigs, FrontWheelRotationAcceleration) == 3568, "Offset mismatch for UFortSportbikeVehicleConfigs::FrontWheelRotationAcceleration");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PassengerInventoryCooldown) == 3572, "Offset mismatch for UFortSportbikeVehicleConfigs::PassengerInventoryCooldown");
static_assert(offsetof(UFortSportbikeVehicleConfigs, DriverInventoryCooldown) == 3576, "Offset mismatch for UFortSportbikeVehicleConfigs::DriverInventoryCooldown");
static_assert(offsetof(UFortSportbikeVehicleConfigs, BoostAttackShapes) == 3584, "Offset mismatch for UFortSportbikeVehicleConfigs::BoostAttackShapes");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CameraAssistStrengthMax) == 3600, "Offset mismatch for UFortSportbikeVehicleConfigs::CameraAssistStrengthMax");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CameraAssistStrengthMin) == 3604, "Offset mismatch for UFortSportbikeVehicleConfigs::CameraAssistStrengthMin");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CameraAssistStrengthRecovery) == 3608, "Offset mismatch for UFortSportbikeVehicleConfigs::CameraAssistStrengthRecovery");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CameraAssistInterpSpeed) == 3612, "Offset mismatch for UFortSportbikeVehicleConfigs::CameraAssistInterpSpeed");
static_assert(offsetof(UFortSportbikeVehicleConfigs, AirTrickIncrementInterval) == 3616, "Offset mismatch for UFortSportbikeVehicleConfigs::AirTrickIncrementInterval");
static_assert(offsetof(UFortSportbikeVehicleConfigs, AirTrickFeedStartTime) == 3620, "Offset mismatch for UFortSportbikeVehicleConfigs::AirTrickFeedStartTime");
static_assert(offsetof(UFortSportbikeVehicleConfigs, AirTrickPitchMultiplier) == 3624, "Offset mismatch for UFortSportbikeVehicleConfigs::AirTrickPitchMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, AirTrickYawMultiplier) == 3628, "Offset mismatch for UFortSportbikeVehicleConfigs::AirTrickYawMultiplier");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bAllowAirTrickNeutral) == 3632, "Offset mismatch for UFortSportbikeVehicleConfigs::bAllowAirTrickNeutral");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bAllowAirTrickRight) == 3633, "Offset mismatch for UFortSportbikeVehicleConfigs::bAllowAirTrickRight");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bAllowAirTrickLeft) == 3634, "Offset mismatch for UFortSportbikeVehicleConfigs::bAllowAirTrickLeft");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PoppedTireTractionScalar_Front) == 3636, "Offset mismatch for UFortSportbikeVehicleConfigs::PoppedTireTractionScalar_Front");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PoppedTireTractionScalar_Rear) == 3640, "Offset mismatch for UFortSportbikeVehicleConfigs::PoppedTireTractionScalar_Rear");
static_assert(offsetof(UFortSportbikeVehicleConfigs, PoppedTireTractionScalar_Both) == 3644, "Offset mismatch for UFortSportbikeVehicleConfigs::PoppedTireTractionScalar_Both");
static_assert(offsetof(UFortSportbikeVehicleConfigs, TopSpeedKmh) == 3648, "Offset mismatch for UFortSportbikeVehicleConfigs::TopSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, CachedTopSpeedKmh) == 3688, "Offset mismatch for UFortSportbikeVehicleConfigs::CachedTopSpeedKmh");
static_assert(offsetof(UFortSportbikeVehicleConfigs, bCachedUsesRechargeableBoost) == 3692, "Offset mismatch for UFortSportbikeVehicleConfigs::bCachedUsesRechargeableBoost");
