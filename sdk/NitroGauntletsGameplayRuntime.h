/**
 * decamp dumper generated SDK
 * Package: /Script/NitroGauntletsGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NitroGauntletsGameplayRuntime.NitroGauntletCustomCharacterPartAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UNitroGauntletCustomCharacterPartAnimInstance
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    FMulticastInlineDelegate CharacterCustomizationFinished; // 0x0458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentWeapon; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanPlayCustomAnimations; // 0x0470 (Size: 0x1, Type: BoolProperty)
    // 0x0470 BoolProperty bHideUntilFirstAnimationUpdate (shared storage)
    // 0x0470 BoolProperty bIgnoreSignificanceManagerAndAlwaysTick (shared storage)
    // 0x0470 BoolProperty bIsRelaxedLevel2 (shared storage)
    // 0x0470 BoolProperty bIsRiding (shared storage)
    // 0x0470 BoolProperty bUnhideOnNextUpdate (shared storage)
    // 0x0470 BoolProperty bUpdateOwnerAnimInputProperty (shared storage)
    // 0x0470 BoolProperty bUsesDayPhaseChange (shared storage)
    std::uint8_t bIsCrouching; // 0x0471 (Size: 0x1, Type: BoolProperty)
    // 0x0471 BoolProperty bIsInFirstPerson (shared storage)
    // 0x0471 BoolProperty bIsParachuteOpened (shared storage)
    // 0x0471 BoolProperty bIsSkydiveDiveMode (shared storage)
    // 0x0471 BoolProperty bIsSkydiveFloating (shared storage)
    // 0x0471 BoolProperty bIsSkydiving (shared storage)
    // 0x0471 BoolProperty bIsSkydivingFromBus (shared storage)
    // 0x0471 BoolProperty bParachuteOpenedAndStandingUpright (shared storage)
    std::uint8_t bIsAccelerating2D; // 0x0472 (Size: 0x1, Type: BoolProperty)
    // 0x0472 BoolProperty bIsBackpedaling (shared storage)
    // 0x0472 BoolProperty bIsMoving2D (shared storage)
    // 0x0472 BoolProperty bIsSprinting (shared storage)
    // 0x0472 BoolProperty bIsUsingJetpack (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x0473
    std::uint8_t bGoopJumpExecuted; // 0x0474 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0475
    std::uint8_t bIsInFrontEnd; // 0x0478 (Size: 0x1, Type: BoolProperty)
    // 0x0478 BoolProperty bIsPlayingEmote (shared storage)
    // 0x0478 BoolProperty bIsPlayingFullBodySlotInFrontEnd (shared storage)
    // 0x0478 BoolProperty bIsPlayingMeleeAnim (shared storage)
    // 0x0478 BoolProperty bIsSlopeSliding (shared storage)
    // 0x0478 BoolProperty bIsSurfaceSwimming (shared storage)
    // 0x0478 BoolProperty bIsSwimSprinting (shared storage)
    // 0x0478 BoolProperty bIsWaterJump (shared storage)
    std::uint8_t bIsInCannon; // 0x0479 (Size: 0x1, Type: BoolProperty)
    // 0x0479 BoolProperty bIsInShoppingCart (shared storage)
    // 0x0479 BoolProperty bIsInVehicle (shared storage)
    // 0x0479 BoolProperty bIsOnPawn (shared storage)
    // 0x0479 BoolProperty bIsPreviewingItemInFrontEnd (shared storage)
    // 0x0479 BoolProperty bIsValetDriver (shared storage)
    // 0x0479 BoolProperty bIsValetPassenger (shared storage)
    // 0x0479 BoolProperty bShouldDisplayFrontendReactivity (shared storage)
    std::uint8_t bIsCrouchSprinting; // 0x047A (Size: 0x1, Type: BoolProperty)
    // 0x047A BoolProperty bIsDBNO (shared storage)
    // 0x047A BoolProperty bIsTargeting (shared storage)
    // 0x047A BoolProperty bIsTargetingConsumableThrow (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x047B
    std::uint8_t bIsInAir; // 0x047C (Size: 0x1, Type: BoolProperty)
    // 0x047C BoolProperty bIsOnGround (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x047D
    std::uint8_t bIsFerretVehicleDriver; // 0x0480 (Size: 0x1, Type: BoolProperty)
    // 0x0480 BoolProperty bIsFerretVehiclePassenger (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleBackPassenger (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleDriver (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleFrontPassenger (shared storage)
    // 0x0480 BoolProperty bIsInVehicleSeat (shared storage)
    // 0x0480 BoolProperty bIsLandingPredicted (shared storage)
    // 0x0480 BoolProperty bVehicleSeatForcesCrouch (shared storage)
    std::uint8_t bHasMotorcyclePassenger; // 0x0481 (Size: 0x1, Type: BoolProperty)
    // 0x0481 BoolProperty bIsAntelopeVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsAntelopeVehiclePassenger (shared storage)
    // 0x0481 BoolProperty bIsJackalVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsMotorcycleDriver (shared storage)
    // 0x0481 BoolProperty bIsMotorcyclePassenger (shared storage)
    // 0x0481 BoolProperty bIsOctopusVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsOstrichVehicleDriver (shared storage)
    std::uint8_t bIsDBNOCarried; // 0x0482 (Size: 0x1, Type: BoolProperty)
    // 0x0482 BoolProperty bIsDBNOCarrying (shared storage)
    // 0x0482 BoolProperty bIsLeftArmHidden (shared storage)
    // 0x0482 BoolProperty bIsMeatballDriver (shared storage)
    // 0x0482 BoolProperty bIsMeatballPassenger (shared storage)
    // 0x0482 BoolProperty bIsOstrichVehicleGunner (shared storage)
    // 0x0482 BoolProperty bIsRightArmHidden (shared storage)
    // 0x0482 BoolProperty bIsTacticalSprinting (shared storage)
    std::uint8_t bIsLeftLegHidden; // 0x0483 (Size: 0x1, Type: BoolProperty)
    // 0x0483 BoolProperty bIsNeckHeadHidden (shared storage)
    // 0x0483 BoolProperty bIsRightLegHidden (shared storage)
    std::uint8_t bCachedIsWearingBackbling; // 0x0484 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCachedIsBackblingACape; // 0x0485 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0486
    std::uint8_t bOverrideRBANSimSpaceInFrontEnd; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0489
    std::int32_t VehicleSeatIndex; // 0x048C (Size: 0x4, Type: IntProperty)
    std::uint8_t VehicleSlotExposure; // 0x0490 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0491
    std::uint8_t GameplayTagAnimations[0x10]; // 0x0498 (Size: 0x10, Type: StructProperty)
    float CrouchingWithRigidBodyEnabled; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    float RidingSpeed2D; // 0x04AC (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentLOD; // 0x04B0 (Size: 0x4, Type: IntProperty)
    std::int32_t SignificanceLOD; // 0x04B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SkydivingExternalForceInput[0xE8]; // 0x04B8 (Size: 0xE8, Type: StructProperty)
    std::uint8_t SlopeInfoInput[0x60]; // 0x05A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t PlayerGliderType; // 0x0600 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WeaponCoreAnim; // 0x0601 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsFlyingHorizontally; // 0x0602 (Size: 0x1, Type: BoolProperty)
    // 0x0602 BoolProperty bIsFlyingVertically (shared storage)
    // 0x0602 BoolProperty bIsOnAscender (shared storage)
    // 0x0602 BoolProperty bIsOnGrindRail (shared storage)
    // 0x0602 BoolProperty bIsZiplining (shared storage)
    // 0x0602 BoolProperty bPbBlendEnabled (shared storage)
    std::uint8_t Pad_0008[0x1]; // 0x0603
    std::uint8_t bRegisteredForDayPhaseChange; // 0x0604 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0605
    std::uint8_t PartType; // 0x0608 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x3]; // 0x0609
    TWeakObjectPtr<void> OwnerSkeletalMeshComponent; // 0x060C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000B[0x4]; // 0x0614
    void* PendingCustomizationFinishedEvent; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* PendingPickaxeCustomizationFinishedEvent; // 0x0620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, CharacterCustomizationFinished) == 1112, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::CharacterCustomizationFinished");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, CurrentWeapon) == 1128, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::CurrentWeapon");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bCanPlayCustomAnimations) == 1136, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bCanPlayCustomAnimations");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsCrouching) == 1137, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsCrouching");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsAccelerating2D) == 1138, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsAccelerating2D");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bGoopJumpExecuted) == 1140, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bGoopJumpExecuted");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsInFrontEnd) == 1144, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsInFrontEnd");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsInCannon) == 1145, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsInCannon");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsCrouchSprinting) == 1146, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsCrouchSprinting");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsInAir) == 1148, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsInAir");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsFerretVehicleDriver) == 1152, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsFerretVehicleDriver");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bHasMotorcyclePassenger) == 1153, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bHasMotorcyclePassenger");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsDBNOCarried) == 1154, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsDBNOCarried");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsLeftLegHidden) == 1155, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsLeftLegHidden");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bCachedIsWearingBackbling) == 1156, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bCachedIsWearingBackbling");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bCachedIsBackblingACape) == 1157, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bCachedIsBackblingACape");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bOverrideRBANSimSpaceInFrontEnd) == 1160, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bOverrideRBANSimSpaceInFrontEnd");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, VehicleSeatIndex) == 1164, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::VehicleSeatIndex");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, VehicleSlotExposure) == 1168, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::VehicleSlotExposure");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, GameplayTagAnimations) == 1176, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::GameplayTagAnimations");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, CrouchingWithRigidBodyEnabled) == 1192, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::CrouchingWithRigidBodyEnabled");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, RidingSpeed2D) == 1196, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::RidingSpeed2D");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, CurrentLOD) == 1200, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::CurrentLOD");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, SignificanceLOD) == 1204, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::SignificanceLOD");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, SkydivingExternalForceInput) == 1208, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::SkydivingExternalForceInput");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, SlopeInfoInput) == 1440, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::SlopeInfoInput");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, PlayerGliderType) == 1536, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::PlayerGliderType");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, WeaponCoreAnim) == 1537, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::WeaponCoreAnim");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bIsFlyingHorizontally) == 1538, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bIsFlyingHorizontally");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, bRegisteredForDayPhaseChange) == 1540, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::bRegisteredForDayPhaseChange");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, PartType) == 1544, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::PartType");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, OwnerSkeletalMeshComponent) == 1548, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::OwnerSkeletalMeshComponent");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, PendingCustomizationFinishedEvent) == 1560, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::PendingCustomizationFinishedEvent");
static_assert(offsetof(UNitroGauntletCustomCharacterPartAnimInstance, PendingPickaxeCustomizationFinishedEvent) == 1568, "Offset mismatch for UNitroGauntletCustomCharacterPartAnimInstance::PendingPickaxeCustomizationFinishedEvent");

// /Script/NitroGauntletsGameplayRuntime.NitroGauntletsLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNitroGauntletsLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bMeteorStrike; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    float MeteorPitchAlpha; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float MeteorPitchTotal; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x117C
    std::uint8_t UpperBodyTwistRotator[0x18]; // 0x1180 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeteorActiveTag[0x1]; // 0x1198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNitroGauntletsLayerAnimInstance, bMeteorStrike) == 4464, "Offset mismatch for UNitroGauntletsLayerAnimInstance::bMeteorStrike");
static_assert(offsetof(UNitroGauntletsLayerAnimInstance, MeteorPitchAlpha) == 4468, "Offset mismatch for UNitroGauntletsLayerAnimInstance::MeteorPitchAlpha");
static_assert(offsetof(UNitroGauntletsLayerAnimInstance, MeteorPitchTotal) == 4472, "Offset mismatch for UNitroGauntletsLayerAnimInstance::MeteorPitchTotal");
static_assert(offsetof(UNitroGauntletsLayerAnimInstance, UpperBodyTwistRotator) == 4480, "Offset mismatch for UNitroGauntletsLayerAnimInstance::UpperBodyTwistRotator");
static_assert(offsetof(UNitroGauntletsLayerAnimInstance, MeteorActiveTag) == 4504, "Offset mismatch for UNitroGauntletsLayerAnimInstance::MeteorActiveTag");
