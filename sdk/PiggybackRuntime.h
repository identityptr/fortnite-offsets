/**
 * decamp dumper generated SDK
 * Package: /Script/PiggybackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PiggybackRuntime.FortMovementMode_PiggybackCarrierCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_PiggybackCarrierCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> RidingActorComp; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMovementMode_PiggybackCarrierCreationData, RidingActorComp) == 16, "Offset mismatch for FFortMovementMode_PiggybackCarrierCreationData::RidingActorComp");

// /Script/PiggybackRuntime.FortMovementMode_PiggybackRiderCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_PiggybackRiderCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> CarryingComponent; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMovementMode_PiggybackRiderCreationData, CarryingComponent) == 16, "Offset mismatch for FFortMovementMode_PiggybackRiderCreationData::CarryingComponent");

// /Script/PiggybackRuntime.FortMovementMode_ExtPiggybackCarrier
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtPiggybackCarrier
{
public:
    std::uint8_t Pad_0000[0x1C4]; // 0x0000
    std::uint8_t CarrierTag[0x4]; // 0x01C4 (Size: 0x4, Type: StructProperty)
    void* PiggybackCarrierAnimLayer; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PiggybackAnimDataOverride[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtPiggybackCarrier, CarrierTag) == 452, "Offset mismatch for UFortMovementMode_ExtPiggybackCarrier::CarrierTag");
static_assert(offsetof(UFortMovementMode_ExtPiggybackCarrier, PiggybackCarrierAnimLayer) == 456, "Offset mismatch for UFortMovementMode_ExtPiggybackCarrier::PiggybackCarrierAnimLayer");
static_assert(offsetof(UFortMovementMode_ExtPiggybackCarrier, PiggybackAnimDataOverride) == 464, "Offset mismatch for UFortMovementMode_ExtPiggybackCarrier::PiggybackAnimDataOverride");

// /Script/PiggybackRuntime.FortMovementMode_ExtPiggybackRider
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtPiggybackRider
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t RiderTag[0x4]; // 0x01C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t LaunchTag[0x4]; // 0x01CC (Size: 0x4, Type: StructProperty)
    FName CarrierAttachmentSocket; // 0x01D0 (Size: 0x8, Type: NameProperty)
    std::uint8_t RiderAttachmentOffset[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RiderBoundsScaleMult[0x30]; // 0x01F0 (Size: 0x30, Type: StructProperty)
    void* PiggybackRiderAnimLayer; // 0x0220 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, RiderTag) == 456, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::RiderTag");
static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, LaunchTag) == 460, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::LaunchTag");
static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, CarrierAttachmentSocket) == 464, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::CarrierAttachmentSocket");
static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, RiderAttachmentOffset) == 472, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::RiderAttachmentOffset");
static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, RiderBoundsScaleMult) == 496, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::RiderBoundsScaleMult");
static_assert(offsetof(UFortMovementMode_ExtPiggybackRider, PiggybackRiderAnimLayer) == 544, "Offset mismatch for UFortMovementMode_ExtPiggybackRider::PiggybackRiderAnimLayer");

// /Script/PiggybackRuntime.FortMovementMode_PiggybackCarrierRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_PiggybackCarrierRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> NetRidingComponent; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t NetState; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndReason; // 0x0041 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortMovementMode_PiggybackCarrierRuntimeData, NetRidingComponent) == 56, "Offset mismatch for UFortMovementMode_PiggybackCarrierRuntimeData::NetRidingComponent");
static_assert(offsetof(UFortMovementMode_PiggybackCarrierRuntimeData, NetState) == 64, "Offset mismatch for UFortMovementMode_PiggybackCarrierRuntimeData::NetState");
static_assert(offsetof(UFortMovementMode_PiggybackCarrierRuntimeData, EndReason) == 65, "Offset mismatch for UFortMovementMode_PiggybackCarrierRuntimeData::EndReason");

// /Script/PiggybackRuntime.FortMovementMode_PiggybackRiderRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_PiggybackRiderRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> NetCarryingComponent; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t NetState; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0041
    std::uint8_t EndReason; // 0x0043 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortMovementMode_PiggybackRiderRuntimeData, NetCarryingComponent) == 56, "Offset mismatch for UFortMovementMode_PiggybackRiderRuntimeData::NetCarryingComponent");
static_assert(offsetof(UFortMovementMode_PiggybackRiderRuntimeData, NetState) == 64, "Offset mismatch for UFortMovementMode_PiggybackRiderRuntimeData::NetState");
static_assert(offsetof(UFortMovementMode_PiggybackRiderRuntimeData, EndReason) == 67, "Offset mismatch for UFortMovementMode_PiggybackRiderRuntimeData::EndReason");

// /Script/PiggybackRuntime.PiggybackComponent
// Kind: Class; super: FortControllerComponent
class UPiggybackComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TWeakObjectPtr<void> PiggybackRider; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PiggybackCarrier; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PiggybackRootCarrierComp; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> PiggybackStack; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CapsuleOverlapHeight[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalCapsuleHeightAdjustment[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    float ThrowStrengthXY; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float ThrowStrengthZ; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float JumpStrengthXY; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float JumpStrengthZ; // 0x015C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CarrierAbilityTagsToCancel[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t RiderAbilityTagsToCancel[0x20]; // 0x0180 (Size: 0x20, Type: StructProperty)
    std::uint8_t EventThrowCurrentRiderTag[0x4]; // 0x01A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventThrowRiderKnownTag[0x4]; // 0x01A4 (Size: 0x4, Type: StructProperty)
    void* PiggybackRiderMMEClass; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* PiggybackCarrierMMEClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ObstructingObjects; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxStackSize[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPiggybackComponent, PiggybackRider) == 208, "Offset mismatch for UPiggybackComponent::PiggybackRider");
static_assert(offsetof(UPiggybackComponent, PiggybackCarrier) == 216, "Offset mismatch for UPiggybackComponent::PiggybackCarrier");
static_assert(offsetof(UPiggybackComponent, PiggybackRootCarrierComp) == 224, "Offset mismatch for UPiggybackComponent::PiggybackRootCarrierComp");
static_assert(offsetof(UPiggybackComponent, PiggybackStack) == 232, "Offset mismatch for UPiggybackComponent::PiggybackStack");
static_assert(offsetof(UPiggybackComponent, CapsuleOverlapHeight) == 248, "Offset mismatch for UPiggybackComponent::CapsuleOverlapHeight");
static_assert(offsetof(UPiggybackComponent, FinalCapsuleHeightAdjustment) == 288, "Offset mismatch for UPiggybackComponent::FinalCapsuleHeightAdjustment");
static_assert(offsetof(UPiggybackComponent, ThrowStrengthXY) == 336, "Offset mismatch for UPiggybackComponent::ThrowStrengthXY");
static_assert(offsetof(UPiggybackComponent, ThrowStrengthZ) == 340, "Offset mismatch for UPiggybackComponent::ThrowStrengthZ");
static_assert(offsetof(UPiggybackComponent, JumpStrengthXY) == 344, "Offset mismatch for UPiggybackComponent::JumpStrengthXY");
static_assert(offsetof(UPiggybackComponent, JumpStrengthZ) == 348, "Offset mismatch for UPiggybackComponent::JumpStrengthZ");
static_assert(offsetof(UPiggybackComponent, CarrierAbilityTagsToCancel) == 352, "Offset mismatch for UPiggybackComponent::CarrierAbilityTagsToCancel");
static_assert(offsetof(UPiggybackComponent, RiderAbilityTagsToCancel) == 384, "Offset mismatch for UPiggybackComponent::RiderAbilityTagsToCancel");
static_assert(offsetof(UPiggybackComponent, EventThrowCurrentRiderTag) == 416, "Offset mismatch for UPiggybackComponent::EventThrowCurrentRiderTag");
static_assert(offsetof(UPiggybackComponent, EventThrowRiderKnownTag) == 420, "Offset mismatch for UPiggybackComponent::EventThrowRiderKnownTag");
static_assert(offsetof(UPiggybackComponent, PiggybackRiderMMEClass) == 424, "Offset mismatch for UPiggybackComponent::PiggybackRiderMMEClass");
static_assert(offsetof(UPiggybackComponent, PiggybackCarrierMMEClass) == 432, "Offset mismatch for UPiggybackComponent::PiggybackCarrierMMEClass");
static_assert(offsetof(UPiggybackComponent, ObstructingObjects) == 440, "Offset mismatch for UPiggybackComponent::ObstructingObjects");
static_assert(offsetof(UPiggybackComponent, MaxStackSize) == 456, "Offset mismatch for UPiggybackComponent::MaxStackSize");

// /Script/PiggybackRuntime.PiggybackDanceItemDefinition
// Kind: Class; super: AthenaDanceItemDefinition
class UPiggybackDanceItemDefinition
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t AbilityTag[0x1]; // 0x0630 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPiggybackDanceItemDefinition, AbilityTag) == 1584, "Offset mismatch for UPiggybackDanceItemDefinition::AbilityTag");

// /Script/PiggybackRuntime.ShoulderRideCarrierLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UShoulderRideCarrierLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float ForceCarrierUpperBodyPoseNOTAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float CarrierAngularVelocity; // 0x1174 (Size: 0x4, Type: FloatProperty)
    double CarrierBasePoseGripWidth; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double CarrierAOYaw_ABSOLUTE_FINAL; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double CarrierLoco_LoopAdditive_PlaybackRate; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double CarrierZiplineVerticalOffset; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCarrierLoco_IsMovingOnGround; // 0x1198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceCarrierUpperBodyPose; // 0x1199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipJumpJoinAdditve; // 0x119A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrierIsJumping_Delayed; // 0x119B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasEmoteJoinTag; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnZipline; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnGrindRail; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostJumping; // 0x119F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnAscender; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustLanded; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x11A2
    void* PawnRootCarrier; // 0x11A8 (Size: 0x8, Type: ObjectProperty)
    void* PawnTopRider; // 0x11B0 (Size: 0x8, Type: ObjectProperty)
    void* RiderAboveMe; // 0x11B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, ForceCarrierUpperBodyPoseNOTAlpha) == 4464, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::ForceCarrierUpperBodyPoseNOTAlpha");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, CarrierAngularVelocity) == 4468, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::CarrierAngularVelocity");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, CarrierBasePoseGripWidth) == 4472, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::CarrierBasePoseGripWidth");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, CarrierAOYaw_ABSOLUTE_FINAL) == 4480, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::CarrierAOYaw_ABSOLUTE_FINAL");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, CarrierLoco_LoopAdditive_PlaybackRate) == 4488, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::CarrierLoco_LoopAdditive_PlaybackRate");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, CarrierZiplineVerticalOffset) == 4496, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::CarrierZiplineVerticalOffset");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bCarrierLoco_IsMovingOnGround) == 4504, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bCarrierLoco_IsMovingOnGround");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bForceCarrierUpperBodyPose) == 4505, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bForceCarrierUpperBodyPose");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bSkipJumpJoinAdditve) == 4506, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bSkipJumpJoinAdditve");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bCarrierIsJumping_Delayed) == 4507, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bCarrierIsJumping_Delayed");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bHasEmoteJoinTag) == 4508, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bHasEmoteJoinTag");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bIsOnZipline) == 4509, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bIsOnZipline");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bIsOnGrindRail) == 4510, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bIsOnGrindRail");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bIsBoostJumping) == 4511, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bIsBoostJumping");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bIsOnAscender) == 4512, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bIsOnAscender");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, bJustLanded) == 4513, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::bJustLanded");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, PawnRootCarrier) == 4520, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::PawnRootCarrier");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, PawnTopRider) == 4528, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::PawnTopRider");
static_assert(offsetof(UShoulderRideCarrierLayerAnimInstance, RiderAboveMe) == 4536, "Offset mismatch for UShoulderRideCarrierLayerAnimInstance::RiderAboveMe");

// /Script/PiggybackRuntime.ShoulderRideRiderLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UShoulderRideRiderLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t RiderPelvisTranslationOffset[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    float RiderAOYaw_Normalized_RootCarrierRelative; // 0x1188 (Size: 0x4, Type: FloatProperty)
    float RiderAOYaw_Final_UpperBody_Lerped; // 0x118C (Size: 0x4, Type: FloatProperty)
    float RiderSlidePoseAlpha; // 0x1190 (Size: 0x4, Type: FloatProperty)
    float RiderPelvisYawOffset; // 0x1194 (Size: 0x4, Type: FloatProperty)
    float RiderLeanDirection; // 0x1198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x119C
    double RiderLoco_AdditiveAlpha; // 0x11A0 (Size: 0x8, Type: DoubleProperty)
    double RiderLoco_PlayRate; // 0x11A8 (Size: 0x8, Type: DoubleProperty)
    double RiderAOYaw_Final_UpperBody; // 0x11B0 (Size: 0x8, Type: DoubleProperty)
    double RiderAOYaw_ABSOLUTE_FINAL; // 0x11B8 (Size: 0x8, Type: DoubleProperty)
    double MidStackRiderRootYawFinal; // 0x11C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSkipJumpJoinAdditive; // 0x11C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrierJustLanded; // 0x11C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrierIsJumping; // 0x11CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrierIsJumping_Delayed; // 0x11CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrier_IsMovingOnFoot; // 0x11CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoYawLerp; // 0x11CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCarrierIsSliding; // 0x11CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRootControl; // 0x11CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasEmoteJoinTag; // 0x11D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x11D1
    void* PawnRootCarrier; // 0x11D8 (Size: 0x8, Type: ObjectProperty)
    void* PawnTopRider; // 0x11E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderPelvisTranslationOffset) == 4464, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderPelvisTranslationOffset");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderAOYaw_Normalized_RootCarrierRelative) == 4488, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderAOYaw_Normalized_RootCarrierRelative");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderAOYaw_Final_UpperBody_Lerped) == 4492, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderAOYaw_Final_UpperBody_Lerped");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderSlidePoseAlpha) == 4496, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderSlidePoseAlpha");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderPelvisYawOffset) == 4500, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderPelvisYawOffset");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderLeanDirection) == 4504, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderLeanDirection");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderLoco_AdditiveAlpha) == 4512, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderLoco_AdditiveAlpha");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderLoco_PlayRate) == 4520, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderLoco_PlayRate");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderAOYaw_Final_UpperBody) == 4528, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderAOYaw_Final_UpperBody");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, RiderAOYaw_ABSOLUTE_FINAL) == 4536, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::RiderAOYaw_ABSOLUTE_FINAL");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, MidStackRiderRootYawFinal) == 4544, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::MidStackRiderRootYawFinal");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bSkipJumpJoinAdditive) == 4552, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bSkipJumpJoinAdditive");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bCarrierJustLanded) == 4553, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bCarrierJustLanded");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bCarrierIsJumping) == 4554, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bCarrierIsJumping");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bCarrierIsJumping_Delayed) == 4555, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bCarrierIsJumping_Delayed");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bCarrier_IsMovingOnFoot) == 4556, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bCarrier_IsMovingOnFoot");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bDoYawLerp) == 4557, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bDoYawLerp");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bCarrierIsSliding) == 4558, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bCarrierIsSliding");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bAllowRootControl) == 4559, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bAllowRootControl");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, bHasEmoteJoinTag) == 4560, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::bHasEmoteJoinTag");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, PawnRootCarrier) == 4568, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::PawnRootCarrier");
static_assert(offsetof(UShoulderRideRiderLayerAnimInstance, PawnTopRider) == 4576, "Offset mismatch for UShoulderRideRiderLayerAnimInstance::PawnTopRider");
