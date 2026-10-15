/**
 * decamp dumper generated SDK
 * Package: /Script/BeastGirlRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeastGirlRuntime.BeastGirlTransformationAnimations
// Kind: ScriptStruct; super: none
struct FBeastGirlTransformationAnimations
{
public:
    void* OnGround; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InWater; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBeastGirlTransformationAnimations, OnGround) == 0, "Offset mismatch for FBeastGirlTransformationAnimations::OnGround");
static_assert(offsetof(FBeastGirlTransformationAnimations, InWater) == 8, "Offset mismatch for FBeastGirlTransformationAnimations::InWater");

// /Script/BeastGirlRuntime.BeastGirlTransformationData
// Kind: ScriptStruct; super: none
struct FBeastGirlTransformationData
{
public:
    std::uint8_t bIsInWater; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bIsOptOut (shared storage)
    // 0x0000 BoolProperty bTransforming (shared storage)
};

static_assert(offsetof(FBeastGirlTransformationData, bIsInWater) == 0, "Offset mismatch for FBeastGirlTransformationData::bIsInWater");

// /Script/BeastGirlRuntime.CachedDamageData
// Kind: ScriptStruct; super: none
struct FCachedDamageData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeastGirlRuntime.BeastGirlStandInPawn
// Kind: Class; super: FortStandInPlayerPawn
class UBeastGirlStandInPawn
{
public:
    std::uint8_t Pad_0000[0x5EE8]; // 0x0000
    FMulticastInlineDelegate OnPossessedByController; // 0x5EE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnPhysicalHit; // 0x5EF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName HolsterId; // 0x5F08 (Size: 0x8, Type: NameProperty)
    TArray<void*> InventoryItemsToRemove; // 0x5F10 (Size: 0x10, Type: ArrayProperty)
    void* DefaultWeaponDefinition; // 0x5F20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HF_OutOfHealthImmediateHeal[0x28]; // 0x5F28 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_OutOfHealthImmediateShield[0x28]; // 0x5F50 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReplicatedTransformationData[0x8]; // 0x5F78 (Size: 0x8, Type: StructProperty)
    TArray<void*> CharacterParts; // 0x5F80 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OptOutTransformationAnimations[0x10]; // 0x5F90 (Size: 0x10, Type: StructProperty)
    std::uint8_t WeakenedTransformationAnimations[0x10]; // 0x5FA0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpriteTag[0x4]; // 0x5FB0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bHadSpriteEquipped; // 0x5FB4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x5FB5
    float CachedPreviousHealth; // 0x5FD4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PrimaryWeaponActiveTag[0x4]; // 0x5FD8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SecondaryWeaponActiveTag[0x4]; // 0x5FDC (Size: 0x4, Type: StructProperty)
    std::uint8_t SprintActiveTag[0x4]; // 0x5FE0 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> AttachedBaseForTransformation; // 0x5FE4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> DefaultWeaponInstance; // 0x5FEC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsTransformingInto; // 0x5FF4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x5FF5
    void* PawnAbilitySet; // 0x5FF8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BeastGirlActiveDurationTag[0x8]; // 0x6000 (Size: 0x8, Type: StructProperty)
    void* BeastGirlTempCharacter; // 0x6008 (Size: 0x8, Type: ObjectProperty)
    void* CachedCharacter; // 0x6010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilitySetHandle[0x1]; // 0x6018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeastGirlStandInPawn, OnPossessedByController) == 24296, "Offset mismatch for UBeastGirlStandInPawn::OnPossessedByController");
static_assert(offsetof(UBeastGirlStandInPawn, OnPawnPhysicalHit) == 24312, "Offset mismatch for UBeastGirlStandInPawn::OnPawnPhysicalHit");
static_assert(offsetof(UBeastGirlStandInPawn, HolsterId) == 24328, "Offset mismatch for UBeastGirlStandInPawn::HolsterId");
static_assert(offsetof(UBeastGirlStandInPawn, InventoryItemsToRemove) == 24336, "Offset mismatch for UBeastGirlStandInPawn::InventoryItemsToRemove");
static_assert(offsetof(UBeastGirlStandInPawn, DefaultWeaponDefinition) == 24352, "Offset mismatch for UBeastGirlStandInPawn::DefaultWeaponDefinition");
static_assert(offsetof(UBeastGirlStandInPawn, HF_OutOfHealthImmediateHeal) == 24360, "Offset mismatch for UBeastGirlStandInPawn::HF_OutOfHealthImmediateHeal");
static_assert(offsetof(UBeastGirlStandInPawn, HF_OutOfHealthImmediateShield) == 24400, "Offset mismatch for UBeastGirlStandInPawn::HF_OutOfHealthImmediateShield");
static_assert(offsetof(UBeastGirlStandInPawn, ReplicatedTransformationData) == 24440, "Offset mismatch for UBeastGirlStandInPawn::ReplicatedTransformationData");
static_assert(offsetof(UBeastGirlStandInPawn, CharacterParts) == 24448, "Offset mismatch for UBeastGirlStandInPawn::CharacterParts");
static_assert(offsetof(UBeastGirlStandInPawn, OptOutTransformationAnimations) == 24464, "Offset mismatch for UBeastGirlStandInPawn::OptOutTransformationAnimations");
static_assert(offsetof(UBeastGirlStandInPawn, WeakenedTransformationAnimations) == 24480, "Offset mismatch for UBeastGirlStandInPawn::WeakenedTransformationAnimations");
static_assert(offsetof(UBeastGirlStandInPawn, SpriteTag) == 24496, "Offset mismatch for UBeastGirlStandInPawn::SpriteTag");
static_assert(offsetof(UBeastGirlStandInPawn, bHadSpriteEquipped) == 24500, "Offset mismatch for UBeastGirlStandInPawn::bHadSpriteEquipped");
static_assert(offsetof(UBeastGirlStandInPawn, CachedPreviousHealth) == 24532, "Offset mismatch for UBeastGirlStandInPawn::CachedPreviousHealth");
static_assert(offsetof(UBeastGirlStandInPawn, PrimaryWeaponActiveTag) == 24536, "Offset mismatch for UBeastGirlStandInPawn::PrimaryWeaponActiveTag");
static_assert(offsetof(UBeastGirlStandInPawn, SecondaryWeaponActiveTag) == 24540, "Offset mismatch for UBeastGirlStandInPawn::SecondaryWeaponActiveTag");
static_assert(offsetof(UBeastGirlStandInPawn, SprintActiveTag) == 24544, "Offset mismatch for UBeastGirlStandInPawn::SprintActiveTag");
static_assert(offsetof(UBeastGirlStandInPawn, AttachedBaseForTransformation) == 24548, "Offset mismatch for UBeastGirlStandInPawn::AttachedBaseForTransformation");
static_assert(offsetof(UBeastGirlStandInPawn, DefaultWeaponInstance) == 24556, "Offset mismatch for UBeastGirlStandInPawn::DefaultWeaponInstance");
static_assert(offsetof(UBeastGirlStandInPawn, bIsTransformingInto) == 24564, "Offset mismatch for UBeastGirlStandInPawn::bIsTransformingInto");
static_assert(offsetof(UBeastGirlStandInPawn, PawnAbilitySet) == 24568, "Offset mismatch for UBeastGirlStandInPawn::PawnAbilitySet");
static_assert(offsetof(UBeastGirlStandInPawn, BeastGirlActiveDurationTag) == 24576, "Offset mismatch for UBeastGirlStandInPawn::BeastGirlActiveDurationTag");
static_assert(offsetof(UBeastGirlStandInPawn, BeastGirlTempCharacter) == 24584, "Offset mismatch for UBeastGirlStandInPawn::BeastGirlTempCharacter");
static_assert(offsetof(UBeastGirlStandInPawn, CachedCharacter) == 24592, "Offset mismatch for UBeastGirlStandInPawn::CachedCharacter");
static_assert(offsetof(UBeastGirlStandInPawn, AbilitySetHandle) == 24600, "Offset mismatch for UBeastGirlStandInPawn::AbilitySetHandle");

// /Script/BeastGirlRuntime.BeastGirlTransformationManager
// Kind: Class; super: ActorComponent
class UBeastGirlTransformationManager
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t HF_RevertTransformFinishHealthToAdd[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RevertTransformFinishShieldToAdd[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_MinimumBeastHealth[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    void* ReverseTransformationAbility; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x18]; // 0x01A8
    void* OptOutTransformationAbility; // 0x01C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x18]; // 0x01C8
    void* SpawnedBeastGirlPawn; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    void* ConsumableItemDefinition; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOptingOut; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBeastGirlTransformationManager, HF_RevertTransformFinishHealthToAdd) == 296, "Offset mismatch for UBeastGirlTransformationManager::HF_RevertTransformFinishHealthToAdd");
static_assert(offsetof(UBeastGirlTransformationManager, HF_RevertTransformFinishShieldToAdd) == 336, "Offset mismatch for UBeastGirlTransformationManager::HF_RevertTransformFinishShieldToAdd");
static_assert(offsetof(UBeastGirlTransformationManager, HF_MinimumBeastHealth) == 376, "Offset mismatch for UBeastGirlTransformationManager::HF_MinimumBeastHealth");
static_assert(offsetof(UBeastGirlTransformationManager, ReverseTransformationAbility) == 416, "Offset mismatch for UBeastGirlTransformationManager::ReverseTransformationAbility");
static_assert(offsetof(UBeastGirlTransformationManager, OptOutTransformationAbility) == 448, "Offset mismatch for UBeastGirlTransformationManager::OptOutTransformationAbility");
static_assert(offsetof(UBeastGirlTransformationManager, SpawnedBeastGirlPawn) == 480, "Offset mismatch for UBeastGirlTransformationManager::SpawnedBeastGirlPawn");
static_assert(offsetof(UBeastGirlTransformationManager, ConsumableItemDefinition) == 488, "Offset mismatch for UBeastGirlTransformationManager::ConsumableItemDefinition");
static_assert(offsetof(UBeastGirlTransformationManager, bOptingOut) == 496, "Offset mismatch for UBeastGirlTransformationManager::bOptingOut");

// /Script/BeastGirlRuntime.BeastLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UBeastLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t DivePitchAdjustmentRotator[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    double IdleCorrectiveAlpha; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double HipOffsetVertical; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDiveAbilityLanded; // 0x1198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveAbilityActive; // 0x1199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayJumpStart; // 0x119A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowLandingAdditive; // 0x119B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlendLowerBodyCorrective; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_Loop; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandingAdditiveAllowLowerBody; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransformAllowLowerBody; // 0x119F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapLowerBodyCorrective; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_Land; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_Transition; // 0x11A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_Inactive; // 0x11A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterTransformState; // 0x11A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_EnterChargeState; // 0x11A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiveState_Roar_AllowLowerBody; // 0x11A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLowerBodyCorrective_BlendOff; // 0x11A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowAdditiveIdleLoop; // 0x11A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowLowerbodyLandingOverride; // 0x11A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransformExitActive; // 0x11AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransformExitManual; // 0x11AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t DiveActiveTagName[0x4]; // 0x11AC (Size: 0x4, Type: StructProperty)
    std::uint8_t FromAirTagName[0x4]; // 0x11B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t FromGroundTagName[0x4]; // 0x11B4 (Size: 0x4, Type: StructProperty)
    void* BeastGirlTransformBackFastStartCLMAnimSequence; // 0x11B8 (Size: 0x8, Type: ObjectProperty)
    void* BeastGirltransformBackStartCLMAnimSequence; // 0x11C0 (Size: 0x8, Type: ObjectProperty)
    void* BeastGirltransformBackInWaterStartCLMAnimSequence; // 0x11C8 (Size: 0x8, Type: ObjectProperty)
    void* CheerTransformPart2CMLAnimSequence; // 0x11D0 (Size: 0x8, Type: ObjectProperty)
    void* CheerTransformPart2InWaterCMLAnimSequence; // 0x11D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDiveState_Charge; // 0x11E0 (Size: 0x1, Type: BoolProperty)
    // 0x11E0 BoolProperty bDiveState_Launch (shared storage)
    // 0x11E0 BoolProperty bIsPlayingMantis (shared storage)
    // 0x11E0 BoolProperty bIsPlayingMantisInAir (shared storage)
    // 0x11E0 BoolProperty bWantsToTurn (shared storage)
    // 0x11E0 BoolProperty bWasFalling (shared storage)
    // 0x11E0 BoolProperty bWasPlayingMantis (shared storage)
    std::uint8_t bShouldCloseGate; // 0x11E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayingEndTransformAnimation; // 0x11E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x11E3
    float DivePitchAdjustment; // 0x11E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeastLayerAnimInstance, DivePitchAdjustmentRotator) == 4464, "Offset mismatch for UBeastLayerAnimInstance::DivePitchAdjustmentRotator");
static_assert(offsetof(UBeastLayerAnimInstance, IdleCorrectiveAlpha) == 4488, "Offset mismatch for UBeastLayerAnimInstance::IdleCorrectiveAlpha");
static_assert(offsetof(UBeastLayerAnimInstance, HipOffsetVertical) == 4496, "Offset mismatch for UBeastLayerAnimInstance::HipOffsetVertical");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveAbilityLanded) == 4504, "Offset mismatch for UBeastLayerAnimInstance::bDiveAbilityLanded");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveAbilityActive) == 4505, "Offset mismatch for UBeastLayerAnimInstance::bDiveAbilityActive");
static_assert(offsetof(UBeastLayerAnimInstance, bPlayJumpStart) == 4506, "Offset mismatch for UBeastLayerAnimInstance::bPlayJumpStart");
static_assert(offsetof(UBeastLayerAnimInstance, bAllowLandingAdditive) == 4507, "Offset mismatch for UBeastLayerAnimInstance::bAllowLandingAdditive");
static_assert(offsetof(UBeastLayerAnimInstance, bBlendLowerBodyCorrective) == 4508, "Offset mismatch for UBeastLayerAnimInstance::bBlendLowerBodyCorrective");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Loop) == 4509, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Loop");
static_assert(offsetof(UBeastLayerAnimInstance, bLandingAdditiveAllowLowerBody) == 4510, "Offset mismatch for UBeastLayerAnimInstance::bLandingAdditiveAllowLowerBody");
static_assert(offsetof(UBeastLayerAnimInstance, bTransformAllowLowerBody) == 4511, "Offset mismatch for UBeastLayerAnimInstance::bTransformAllowLowerBody");
static_assert(offsetof(UBeastLayerAnimInstance, bSnapLowerBodyCorrective) == 4512, "Offset mismatch for UBeastLayerAnimInstance::bSnapLowerBodyCorrective");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Land) == 4513, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Land");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Transition) == 4514, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Transition");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Inactive) == 4515, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Inactive");
static_assert(offsetof(UBeastLayerAnimInstance, bEnterTransformState) == 4516, "Offset mismatch for UBeastLayerAnimInstance::bEnterTransformState");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_EnterChargeState) == 4517, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_EnterChargeState");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Roar_AllowLowerBody) == 4518, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Roar_AllowLowerBody");
static_assert(offsetof(UBeastLayerAnimInstance, bLowerBodyCorrective_BlendOff) == 4519, "Offset mismatch for UBeastLayerAnimInstance::bLowerBodyCorrective_BlendOff");
static_assert(offsetof(UBeastLayerAnimInstance, bAllowAdditiveIdleLoop) == 4520, "Offset mismatch for UBeastLayerAnimInstance::bAllowAdditiveIdleLoop");
static_assert(offsetof(UBeastLayerAnimInstance, bAllowLowerbodyLandingOverride) == 4521, "Offset mismatch for UBeastLayerAnimInstance::bAllowLowerbodyLandingOverride");
static_assert(offsetof(UBeastLayerAnimInstance, bTransformExitActive) == 4522, "Offset mismatch for UBeastLayerAnimInstance::bTransformExitActive");
static_assert(offsetof(UBeastLayerAnimInstance, bTransformExitManual) == 4523, "Offset mismatch for UBeastLayerAnimInstance::bTransformExitManual");
static_assert(offsetof(UBeastLayerAnimInstance, DiveActiveTagName) == 4524, "Offset mismatch for UBeastLayerAnimInstance::DiveActiveTagName");
static_assert(offsetof(UBeastLayerAnimInstance, FromAirTagName) == 4528, "Offset mismatch for UBeastLayerAnimInstance::FromAirTagName");
static_assert(offsetof(UBeastLayerAnimInstance, FromGroundTagName) == 4532, "Offset mismatch for UBeastLayerAnimInstance::FromGroundTagName");
static_assert(offsetof(UBeastLayerAnimInstance, BeastGirlTransformBackFastStartCLMAnimSequence) == 4536, "Offset mismatch for UBeastLayerAnimInstance::BeastGirlTransformBackFastStartCLMAnimSequence");
static_assert(offsetof(UBeastLayerAnimInstance, BeastGirltransformBackStartCLMAnimSequence) == 4544, "Offset mismatch for UBeastLayerAnimInstance::BeastGirltransformBackStartCLMAnimSequence");
static_assert(offsetof(UBeastLayerAnimInstance, BeastGirltransformBackInWaterStartCLMAnimSequence) == 4552, "Offset mismatch for UBeastLayerAnimInstance::BeastGirltransformBackInWaterStartCLMAnimSequence");
static_assert(offsetof(UBeastLayerAnimInstance, CheerTransformPart2CMLAnimSequence) == 4560, "Offset mismatch for UBeastLayerAnimInstance::CheerTransformPart2CMLAnimSequence");
static_assert(offsetof(UBeastLayerAnimInstance, CheerTransformPart2InWaterCMLAnimSequence) == 4568, "Offset mismatch for UBeastLayerAnimInstance::CheerTransformPart2InWaterCMLAnimSequence");
static_assert(offsetof(UBeastLayerAnimInstance, bDiveState_Charge) == 4576, "Offset mismatch for UBeastLayerAnimInstance::bDiveState_Charge");
static_assert(offsetof(UBeastLayerAnimInstance, bShouldCloseGate) == 4577, "Offset mismatch for UBeastLayerAnimInstance::bShouldCloseGate");
static_assert(offsetof(UBeastLayerAnimInstance, bPlayingEndTransformAnimation) == 4578, "Offset mismatch for UBeastLayerAnimInstance::bPlayingEndTransformAnimation");
static_assert(offsetof(UBeastLayerAnimInstance, DivePitchAdjustment) == 4580, "Offset mismatch for UBeastLayerAnimInstance::DivePitchAdjustment");

// /Script/BeastGirlRuntime.BeastPlayerAnimationInterface
// Kind: Class; super: Interface
class UBeastPlayerAnimationInterface
{
public:
    std::uint8_t Opaque[1];
};
