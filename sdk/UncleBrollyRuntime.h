/**
 * decamp dumper generated SDK
 * Package: /Script/UncleBrollyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/UncleBrollyRuntime.UncleBrollyItemLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance
class UUncleBrollyItemLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    std::uint8_t UmbrellaGliderOpenStateDataArray[0x18]; // 0x05E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WrapTranslation[0x18]; // 0x05F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WrapRotation[0x18]; // 0x0610 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootRotationOffset[0x18]; // 0x0628 (Size: 0x18, Type: StructProperty)
    float LandingPredictedTimer; // 0x0640 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldUpdateYawCorrection; // 0x0644 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasAcceleratingBeforeDodge; // 0x0645 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0646
    float UncleBrollyDeployCurveValue; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float DashChargeTier; // 0x064C (Size: 0x4, Type: FloatProperty)
    float DashChargeAdditivePlayrate; // 0x0650 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsUmbrellaFailing; // 0x0654 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMeleeGuarding; // 0x0655 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSprinting; // 0x0656 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAir; // 0x0657 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLandingPredicted; // 0x0658 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumping; // 0x0659 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDodging; // 0x065A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDodgingEast; // 0x065B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDodgingSouth; // 0x065C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDodgingWest; // 0x065D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashing; // 0x065E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashCharging; // 0x065F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashPredictingEnd; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChargeTier1; // 0x0661 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChargeTier2; // 0x0662 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChargeTier3; // 0x0663 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeleeGuardingOrUmbrellaFailing; // 0x0664 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Default_to_GuardLoop; // 0x0665 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Default_to_GuardIntro; // 0x0666 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_GuardIntro_to_Default; // 0x0667 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpperBodyShouldPassThrough; // 0x0668 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUmbrellaGliderIsOpen; // 0x0669 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, UmbrellaGliderOpenStateDataArray) == 1504, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::UmbrellaGliderOpenStateDataArray");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, WrapTranslation) == 1528, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::WrapTranslation");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, WrapRotation) == 1552, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::WrapRotation");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, RootRotationOffset) == 1576, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::RootRotationOffset");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, LandingPredictedTimer) == 1600, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::LandingPredictedTimer");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bShouldUpdateYawCorrection) == 1604, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bShouldUpdateYawCorrection");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bWasAcceleratingBeforeDodge) == 1605, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bWasAcceleratingBeforeDodge");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, UncleBrollyDeployCurveValue) == 1608, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::UncleBrollyDeployCurveValue");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, DashChargeTier) == 1612, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::DashChargeTier");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, DashChargeAdditivePlayrate) == 1616, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::DashChargeAdditivePlayrate");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsUmbrellaFailing) == 1620, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsUmbrellaFailing");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsMeleeGuarding) == 1621, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsMeleeGuarding");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsSprinting) == 1622, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsSprinting");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsInAir) == 1623, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsInAir");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsLandingPredicted) == 1624, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsLandingPredicted");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsJumping) == 1625, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsJumping");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDodging) == 1626, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDodging");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDodgingEast) == 1627, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDodgingEast");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDodgingSouth) == 1628, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDodgingSouth");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDodgingWest) == 1629, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDodgingWest");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDashing) == 1630, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDashing");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDashCharging) == 1631, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDashCharging");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsDashPredictingEnd) == 1632, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsDashPredictingEnd");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsChargeTier1) == 1633, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsChargeTier1");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsChargeTier2) == 1634, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsChargeTier2");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bIsChargeTier3) == 1635, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bIsChargeTier3");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bMeleeGuardingOrUmbrellaFailing) == 1636, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bMeleeGuardingOrUmbrellaFailing");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bTransition_Default_to_GuardLoop) == 1637, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bTransition_Default_to_GuardLoop");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bTransition_Default_to_GuardIntro) == 1638, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bTransition_Default_to_GuardIntro");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bTransition_GuardIntro_to_Default) == 1639, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bTransition_GuardIntro_to_Default");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bUpperBodyShouldPassThrough) == 1640, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bUpperBodyShouldPassThrough");
static_assert(offsetof(UUncleBrollyItemLayerAnimInstance, bUmbrellaGliderIsOpen) == 1641, "Offset mismatch for UUncleBrollyItemLayerAnimInstance::bUmbrellaGliderIsOpen");

// /Script/UncleBrollyRuntime.UncleBrollyMantisWeaponAnimInstance
// Kind: Class; super: AnimInstance
class UUncleBrollyMantisWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* UncleBrollyItemLayer; // 0x0260 (Size: 0x8, Type: ClassProperty)
    std::uint8_t UmbrellaRotation[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    float UmbrellaSpinSpeed; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float BlockDeployEndPlayrate; // 0x0284 (Size: 0x4, Type: FloatProperty)
    float BlockDeployEndStartPosition; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDodging; // 0x028C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingMeleeAnim; // 0x028D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUmbrellaFailing; // 0x028E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMeleeGuarding; // 0x028F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAir; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashing; // 0x0291 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSprinting; // 0x0292 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPredictingEnd; // 0x0293 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashCharging; // 0x0294 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDashPredictingEnd; // 0x0295 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInAirAndMeleeGuarding; // 0x0296 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Default_to_DeployStart; // 0x0297 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_DeployStart_to_Default; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Fail_to_FailToDeploy; // 0x0299 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_FailLoop_to_DeployEnd; // 0x029A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, UncleBrollyItemLayer) == 608, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::UncleBrollyItemLayer");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, UmbrellaRotation) == 616, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::UmbrellaRotation");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, UmbrellaSpinSpeed) == 640, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::UmbrellaSpinSpeed");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, BlockDeployEndPlayrate) == 644, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::BlockDeployEndPlayrate");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, BlockDeployEndStartPosition) == 648, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::BlockDeployEndStartPosition");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsDodging) == 652, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsDodging");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsPlayingMeleeAnim) == 653, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsPlayingMeleeAnim");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsUmbrellaFailing) == 654, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsUmbrellaFailing");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsMeleeGuarding) == 655, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsMeleeGuarding");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsInAir) == 656, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsInAir");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsDashing) == 657, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsDashing");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsSprinting) == 658, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsSprinting");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsPredictingEnd) == 659, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsPredictingEnd");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsDashCharging) == 660, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsDashCharging");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bIsDashPredictingEnd) == 661, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bIsDashPredictingEnd");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bInAirAndMeleeGuarding) == 662, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bInAirAndMeleeGuarding");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bTransition_Default_to_DeployStart) == 663, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bTransition_Default_to_DeployStart");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bTransition_DeployStart_to_Default) == 664, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bTransition_DeployStart_to_Default");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bTransition_Fail_to_FailToDeploy) == 665, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bTransition_Fail_to_FailToDeploy");
static_assert(offsetof(UUncleBrollyMantisWeaponAnimInstance, bTransition_FailLoop_to_DeployEnd) == 666, "Offset mismatch for UUncleBrollyMantisWeaponAnimInstance::bTransition_FailLoop_to_DeployEnd");
