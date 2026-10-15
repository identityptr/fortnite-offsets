/**
 * decamp dumper generated SDK
 * Package: /Script/ToyFoxGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ToyFoxGameplayRuntime.ToyFoxCameraModifierAbilitySettings
// Kind: ScriptStruct; super: none
struct FToyFoxCameraModifierAbilitySettings
{
public:
    float ViewLocationOffsetUp; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ViewLocationOffsetRight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ViewLocationOffsetBack; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float FovOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ViewSpaceOffsetInterpSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FToyFoxCameraModifierAbilitySettings, ViewLocationOffsetUp) == 0, "Offset mismatch for FToyFoxCameraModifierAbilitySettings::ViewLocationOffsetUp");
static_assert(offsetof(FToyFoxCameraModifierAbilitySettings, ViewLocationOffsetRight) == 4, "Offset mismatch for FToyFoxCameraModifierAbilitySettings::ViewLocationOffsetRight");
static_assert(offsetof(FToyFoxCameraModifierAbilitySettings, ViewLocationOffsetBack) == 8, "Offset mismatch for FToyFoxCameraModifierAbilitySettings::ViewLocationOffsetBack");
static_assert(offsetof(FToyFoxCameraModifierAbilitySettings, FovOffset) == 12, "Offset mismatch for FToyFoxCameraModifierAbilitySettings::FovOffset");
static_assert(offsetof(FToyFoxCameraModifierAbilitySettings, ViewSpaceOffsetInterpSpeed) == 16, "Offset mismatch for FToyFoxCameraModifierAbilitySettings::ViewSpaceOffsetInterpSpeed");

// /Script/ToyFoxGameplayRuntime.FortCameraModifier_ToyFox
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_ToyFox
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t GameplayViewRotation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t LatestPilotCinematicViewRotation[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t LatestPilotCinematicViewLocation[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    float LatestPilotCinematicFov; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    double CurrentOffsetUp; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    double CurrentOffsetRight; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double CurrentOffsetBackward; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double PilotCinematicAlpha; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DefaultCameraSettings[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    double ViewSpaceOffsetInterpSpeed; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    double MaxCombinedOffset; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    TMap<void*, void*> CameraAbilitySettingsMap; // 0x0118 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortCameraModifier_ToyFox, GameplayViewRotation) == 128, "Offset mismatch for UFortCameraModifier_ToyFox::GameplayViewRotation");
static_assert(offsetof(UFortCameraModifier_ToyFox, LatestPilotCinematicViewRotation) == 152, "Offset mismatch for UFortCameraModifier_ToyFox::LatestPilotCinematicViewRotation");
static_assert(offsetof(UFortCameraModifier_ToyFox, LatestPilotCinematicViewLocation) == 176, "Offset mismatch for UFortCameraModifier_ToyFox::LatestPilotCinematicViewLocation");
static_assert(offsetof(UFortCameraModifier_ToyFox, LatestPilotCinematicFov) == 200, "Offset mismatch for UFortCameraModifier_ToyFox::LatestPilotCinematicFov");
static_assert(offsetof(UFortCameraModifier_ToyFox, CurrentOffsetUp) == 208, "Offset mismatch for UFortCameraModifier_ToyFox::CurrentOffsetUp");
static_assert(offsetof(UFortCameraModifier_ToyFox, CurrentOffsetRight) == 216, "Offset mismatch for UFortCameraModifier_ToyFox::CurrentOffsetRight");
static_assert(offsetof(UFortCameraModifier_ToyFox, CurrentOffsetBackward) == 224, "Offset mismatch for UFortCameraModifier_ToyFox::CurrentOffsetBackward");
static_assert(offsetof(UFortCameraModifier_ToyFox, PilotCinematicAlpha) == 232, "Offset mismatch for UFortCameraModifier_ToyFox::PilotCinematicAlpha");
static_assert(offsetof(UFortCameraModifier_ToyFox, DefaultCameraSettings) == 240, "Offset mismatch for UFortCameraModifier_ToyFox::DefaultCameraSettings");
static_assert(offsetof(UFortCameraModifier_ToyFox, ViewSpaceOffsetInterpSpeed) == 264, "Offset mismatch for UFortCameraModifier_ToyFox::ViewSpaceOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_ToyFox, MaxCombinedOffset) == 272, "Offset mismatch for UFortCameraModifier_ToyFox::MaxCombinedOffset");
static_assert(offsetof(UFortCameraModifier_ToyFox, CameraAbilitySettingsMap) == 280, "Offset mismatch for UFortCameraModifier_ToyFox::CameraAbilitySettingsMap");

// /Script/ToyFoxGameplayRuntime.FortControllerComponent_ToyFox
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_ToyFox
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFortControllerComponent_ToyFox, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_ToyFox::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_ToyFox, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_ToyFox::ComponentTags");
static_assert(offsetof(UFortControllerComponent_ToyFox, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_ToyFox::AssetUserData");
static_assert(offsetof(UFortControllerComponent_ToyFox, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_ToyFox::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_ToyFox, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_ToyFox::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_ToyFox, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_ToyFox::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_ToyFox, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_ToyFox::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_ToyFox, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_ToyFox::CreationMethod");
static_assert(offsetof(UFortControllerComponent_ToyFox, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_ToyFox::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_ToyFox, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_ToyFox::OnComponentDeactivated");

// /Script/ToyFoxGameplayRuntime.FortMovementMode_ToyFoxWalking
// Kind: Class; super: FortMovementMode_GiantWalking
class UFortMovementMode_ToyFoxWalking
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t RotationInterpSpeedForStopped[0x30]; // 0x01F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinRotationInterpSpeed[0x30]; // 0x0228 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxRotationInterpSpeedForMoving[0x30]; // 0x0258 (Size: 0x30, Type: StructProperty)
    std::uint8_t AngleForMovingMaxRotationInterpSpeed[0x30]; // 0x0288 (Size: 0x30, Type: StructProperty)
    std::uint8_t AngleThresholdForStopAndTurn[0x30]; // 0x02B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AngleToResumeFromStopAndTurn[0x30]; // 0x02E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxGiantWalkingSpeed[0x30]; // 0x0318 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> MaxGiantWalkingSpeedOverrideMap; // 0x0348 (Size: 0x10, Type: MapProperty)
    std::uint8_t MaxGiantReverseWalkingSpeed[0x30]; // 0x0358 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> MaxGiantReverseWalkingSpeedOverrideMap; // 0x0388 (Size: 0x10, Type: MapProperty)
    std::uint8_t MaxWalkStepHeightUp[0x30]; // 0x0398 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxWalkStepHeightDown[0x30]; // 0x03C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t GiantWalkingAccelerateSpeed[0x30]; // 0x03F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpingAllowed[0x30]; // 0x0428 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlannedJumpInitialDist[0x30]; // 0x0458 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlannedJumpMinZSpeed[0x30]; // 0x0488 (Size: 0x30, Type: StructProperty)
    std::uint8_t ResetJumpTrajectoryMinZSpeed[0x30]; // 0x04B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PreJumpMoveDelay[0x30]; // 0x04E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlannedJumpLocationMaxIteration[0x30]; // 0x0518 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxAngleVarianceToContinuePlanJump[0x30]; // 0x0548 (Size: 0x30, Type: StructProperty)
    std::uint8_t WaitDurationToConfirmPlannedJump[0x30]; // 0x0578 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxJumpUpHeight[0x30]; // 0x05A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxInputAngleVarianceToKeepJumping[0x30]; // 0x05D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t InAirSlideAlongSurfaceAngleThreshold[0x30]; // 0x0608 (Size: 0x30, Type: StructProperty)
    std::uint8_t PostJumpMoveDelay[0x30]; // 0x0638 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpingDesiredSpeed2D[0x30]; // 0x0668 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpingAccelerationXY[0x30]; // 0x0698 (Size: 0x30, Type: StructProperty)
    std::uint8_t DistanceToleranceToEndJumping[0x30]; // 0x06C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartJumpingMinSpeed[0x30]; // 0x06F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AscendingAccelerateSpeed[0x30]; // 0x0728 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxAscendingSpeed[0x30]; // 0x0758 (Size: 0x30, Type: StructProperty)
    std::uint8_t DeltaZToleranceForJumping[0x30]; // 0x0788 (Size: 0x30, Type: StructProperty)
    std::uint8_t FallingAccelerateSpeed[0x30]; // 0x07B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxFallingSpeed[0x30]; // 0x07E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t FallingSnapToGroundDistance[0x30]; // 0x0818 (Size: 0x30, Type: StructProperty)
    std::uint8_t FallingSnapToGridDistance[0x30]; // 0x0848 (Size: 0x30, Type: StructProperty)
    std::uint8_t FallingResolveCollisionSpeed[0x30]; // 0x0878 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxWalkableUpSlopeAngle[0x30]; // 0x08A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxWalkableDownSlopeAngle[0x30]; // 0x08D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxSlidableSlopeAngle[0x30]; // 0x0908 (Size: 0x30, Type: StructProperty)
    std::uint8_t ExtraLengthToProjectExtremeLocation[0x30]; // 0x0938 (Size: 0x30, Type: StructProperty)
    std::uint8_t CapsuleHoverHeight[0x30]; // 0x0968 (Size: 0x30, Type: StructProperty)
    std::uint8_t ServerCorrectionDistanceTolerance[0x30]; // 0x0998 (Size: 0x30, Type: StructProperty)
    std::uint8_t GroundGridConfig[0x20]; // 0x09C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockMoveTags[0x20]; // 0x09E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockTurningTags[0x1]; // 0x0A08 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ToyFoxWalking, RotationInterpSpeedForStopped) == 504, "Offset mismatch for UFortMovementMode_ToyFoxWalking::RotationInterpSpeedForStopped");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MinRotationInterpSpeed) == 552, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MinRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxRotationInterpSpeedForMoving) == 600, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxRotationInterpSpeedForMoving");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, AngleForMovingMaxRotationInterpSpeed) == 648, "Offset mismatch for UFortMovementMode_ToyFoxWalking::AngleForMovingMaxRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, AngleThresholdForStopAndTurn) == 696, "Offset mismatch for UFortMovementMode_ToyFoxWalking::AngleThresholdForStopAndTurn");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, AngleToResumeFromStopAndTurn) == 744, "Offset mismatch for UFortMovementMode_ToyFoxWalking::AngleToResumeFromStopAndTurn");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxGiantWalkingSpeed) == 792, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxGiantWalkingSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxGiantWalkingSpeedOverrideMap) == 840, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxGiantWalkingSpeedOverrideMap");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxGiantReverseWalkingSpeed) == 856, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxGiantReverseWalkingSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxGiantReverseWalkingSpeedOverrideMap) == 904, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxGiantReverseWalkingSpeedOverrideMap");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxWalkStepHeightUp) == 920, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxWalkStepHeightUp");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxWalkStepHeightDown) == 968, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxWalkStepHeightDown");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, GiantWalkingAccelerateSpeed) == 1016, "Offset mismatch for UFortMovementMode_ToyFoxWalking::GiantWalkingAccelerateSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, JumpingAllowed) == 1064, "Offset mismatch for UFortMovementMode_ToyFoxWalking::JumpingAllowed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, PlannedJumpInitialDist) == 1112, "Offset mismatch for UFortMovementMode_ToyFoxWalking::PlannedJumpInitialDist");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, PlannedJumpMinZSpeed) == 1160, "Offset mismatch for UFortMovementMode_ToyFoxWalking::PlannedJumpMinZSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, ResetJumpTrajectoryMinZSpeed) == 1208, "Offset mismatch for UFortMovementMode_ToyFoxWalking::ResetJumpTrajectoryMinZSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, PreJumpMoveDelay) == 1256, "Offset mismatch for UFortMovementMode_ToyFoxWalking::PreJumpMoveDelay");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, PlannedJumpLocationMaxIteration) == 1304, "Offset mismatch for UFortMovementMode_ToyFoxWalking::PlannedJumpLocationMaxIteration");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxAngleVarianceToContinuePlanJump) == 1352, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxAngleVarianceToContinuePlanJump");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, WaitDurationToConfirmPlannedJump) == 1400, "Offset mismatch for UFortMovementMode_ToyFoxWalking::WaitDurationToConfirmPlannedJump");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxJumpUpHeight) == 1448, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxJumpUpHeight");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxInputAngleVarianceToKeepJumping) == 1496, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxInputAngleVarianceToKeepJumping");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, InAirSlideAlongSurfaceAngleThreshold) == 1544, "Offset mismatch for UFortMovementMode_ToyFoxWalking::InAirSlideAlongSurfaceAngleThreshold");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, PostJumpMoveDelay) == 1592, "Offset mismatch for UFortMovementMode_ToyFoxWalking::PostJumpMoveDelay");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, JumpingDesiredSpeed2D) == 1640, "Offset mismatch for UFortMovementMode_ToyFoxWalking::JumpingDesiredSpeed2D");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, JumpingAccelerationXY) == 1688, "Offset mismatch for UFortMovementMode_ToyFoxWalking::JumpingAccelerationXY");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, DistanceToleranceToEndJumping) == 1736, "Offset mismatch for UFortMovementMode_ToyFoxWalking::DistanceToleranceToEndJumping");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, StartJumpingMinSpeed) == 1784, "Offset mismatch for UFortMovementMode_ToyFoxWalking::StartJumpingMinSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, AscendingAccelerateSpeed) == 1832, "Offset mismatch for UFortMovementMode_ToyFoxWalking::AscendingAccelerateSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxAscendingSpeed) == 1880, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxAscendingSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, DeltaZToleranceForJumping) == 1928, "Offset mismatch for UFortMovementMode_ToyFoxWalking::DeltaZToleranceForJumping");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, FallingAccelerateSpeed) == 1976, "Offset mismatch for UFortMovementMode_ToyFoxWalking::FallingAccelerateSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxFallingSpeed) == 2024, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxFallingSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, FallingSnapToGroundDistance) == 2072, "Offset mismatch for UFortMovementMode_ToyFoxWalking::FallingSnapToGroundDistance");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, FallingSnapToGridDistance) == 2120, "Offset mismatch for UFortMovementMode_ToyFoxWalking::FallingSnapToGridDistance");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, FallingResolveCollisionSpeed) == 2168, "Offset mismatch for UFortMovementMode_ToyFoxWalking::FallingResolveCollisionSpeed");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxWalkableUpSlopeAngle) == 2216, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxWalkableUpSlopeAngle");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxWalkableDownSlopeAngle) == 2264, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxWalkableDownSlopeAngle");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, MaxSlidableSlopeAngle) == 2312, "Offset mismatch for UFortMovementMode_ToyFoxWalking::MaxSlidableSlopeAngle");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, ExtraLengthToProjectExtremeLocation) == 2360, "Offset mismatch for UFortMovementMode_ToyFoxWalking::ExtraLengthToProjectExtremeLocation");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, CapsuleHoverHeight) == 2408, "Offset mismatch for UFortMovementMode_ToyFoxWalking::CapsuleHoverHeight");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, ServerCorrectionDistanceTolerance) == 2456, "Offset mismatch for UFortMovementMode_ToyFoxWalking::ServerCorrectionDistanceTolerance");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, GroundGridConfig) == 2504, "Offset mismatch for UFortMovementMode_ToyFoxWalking::GroundGridConfig");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, BlockMoveTags) == 2536, "Offset mismatch for UFortMovementMode_ToyFoxWalking::BlockMoveTags");
static_assert(offsetof(UFortMovementMode_ToyFoxWalking, BlockTurningTags) == 2568, "Offset mismatch for UFortMovementMode_ToyFoxWalking::BlockTurningTags");

// /Script/ToyFoxGameplayRuntime.FortMovementMode_ToyFoxWalkingRuntimeData
// Kind: Class; super: FortMovementMode_GiantWalkingRuntimeData
class UFortMovementMode_ToyFoxWalkingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_ToyFoxWalkingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_ToyFoxWalkingRuntimeData::EndReasonFlags");

// /Script/ToyFoxGameplayRuntime.FortPawnComponent_CacheInventoryItem
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_CacheInventoryItem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> CachedInventoryItems; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InventoryItemsToRemove[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t InventoryItemsToKeep[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCacheAllItems; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPawnComponent_CacheInventoryItem, CachedInventoryItems) == 200, "Offset mismatch for UFortPawnComponent_CacheInventoryItem::CachedInventoryItems");
static_assert(offsetof(UFortPawnComponent_CacheInventoryItem, InventoryItemsToRemove) == 216, "Offset mismatch for UFortPawnComponent_CacheInventoryItem::InventoryItemsToRemove");
static_assert(offsetof(UFortPawnComponent_CacheInventoryItem, InventoryItemsToKeep) == 248, "Offset mismatch for UFortPawnComponent_CacheInventoryItem::InventoryItemsToKeep");
static_assert(offsetof(UFortPawnComponent_CacheInventoryItem, bCacheAllItems) == 280, "Offset mismatch for UFortPawnComponent_CacheInventoryItem::bCacheAllItems");

// /Script/ToyFoxGameplayRuntime.FortToyFoxMovementComponent
// Kind: Class; super: FortBikeKidMovementComponent
class UFortToyFoxMovementComponent
{
public:
    std::uint8_t Pad_0000[0x1060]; // 0x0000
    TArray<void*> OverlapIgnoredActors; // 0x1060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortToyFoxMovementComponent, OverlapIgnoredActors) == 4192, "Offset mismatch for UFortToyFoxMovementComponent::OverlapIgnoredActors");

// /Script/ToyFoxGameplayRuntime.ToyFoxCannonsAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UToyFoxCannonsAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t CannonShake[0x18]; // 0x0340 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimV2Right[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    std::uint8_t AimV2Left[0x10]; // 0x0368 (Size: 0x10, Type: StructProperty)
    float TurnOffSkirt; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x037C
    double ShakeAlpha; // 0x0380 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FirstPCannonSpread[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t NegativeFirstPCannonSpread[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FirstPCannonOffset[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FirstPCannonScale[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsFirstPersonView; // 0x03E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAbilityCannonFire; // 0x03E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseKickbackAnim; // 0x03EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x03EB
    double ShakeStrength; // 0x03F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseChargeShake; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x03F9
    std::uint8_t CannonAimTarget[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbilityCannonActive; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCannonShakeGateOpen; // 0x0421 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UToyFoxCannonsAnimInstance, CannonShake) == 832, "Offset mismatch for UToyFoxCannonsAnimInstance::CannonShake");
static_assert(offsetof(UToyFoxCannonsAnimInstance, AimV2Right) == 856, "Offset mismatch for UToyFoxCannonsAnimInstance::AimV2Right");
static_assert(offsetof(UToyFoxCannonsAnimInstance, AimV2Left) == 872, "Offset mismatch for UToyFoxCannonsAnimInstance::AimV2Left");
static_assert(offsetof(UToyFoxCannonsAnimInstance, TurnOffSkirt) == 888, "Offset mismatch for UToyFoxCannonsAnimInstance::TurnOffSkirt");
static_assert(offsetof(UToyFoxCannonsAnimInstance, ShakeAlpha) == 896, "Offset mismatch for UToyFoxCannonsAnimInstance::ShakeAlpha");
static_assert(offsetof(UToyFoxCannonsAnimInstance, FirstPCannonSpread) == 904, "Offset mismatch for UToyFoxCannonsAnimInstance::FirstPCannonSpread");
static_assert(offsetof(UToyFoxCannonsAnimInstance, NegativeFirstPCannonSpread) == 928, "Offset mismatch for UToyFoxCannonsAnimInstance::NegativeFirstPCannonSpread");
static_assert(offsetof(UToyFoxCannonsAnimInstance, FirstPCannonOffset) == 952, "Offset mismatch for UToyFoxCannonsAnimInstance::FirstPCannonOffset");
static_assert(offsetof(UToyFoxCannonsAnimInstance, FirstPCannonScale) == 976, "Offset mismatch for UToyFoxCannonsAnimInstance::FirstPCannonScale");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bIsFirstPersonView) == 1000, "Offset mismatch for UToyFoxCannonsAnimInstance::bIsFirstPersonView");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bAbilityCannonFire) == 1001, "Offset mismatch for UToyFoxCannonsAnimInstance::bAbilityCannonFire");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bUseKickbackAnim) == 1002, "Offset mismatch for UToyFoxCannonsAnimInstance::bUseKickbackAnim");
static_assert(offsetof(UToyFoxCannonsAnimInstance, ShakeStrength) == 1008, "Offset mismatch for UToyFoxCannonsAnimInstance::ShakeStrength");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bUseChargeShake) == 1016, "Offset mismatch for UToyFoxCannonsAnimInstance::bUseChargeShake");
static_assert(offsetof(UToyFoxCannonsAnimInstance, CannonAimTarget) == 1032, "Offset mismatch for UToyFoxCannonsAnimInstance::CannonAimTarget");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bAbilityCannonActive) == 1056, "Offset mismatch for UToyFoxCannonsAnimInstance::bAbilityCannonActive");
static_assert(offsetof(UToyFoxCannonsAnimInstance, bCannonShakeGateOpen) == 1057, "Offset mismatch for UToyFoxCannonsAnimInstance::bCannonShakeGateOpen");

// /Script/ToyFoxGameplayRuntime.ToyFoxGiantPawnAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UToyFoxGiantPawnAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t RootBoneRot[0x18]; // 0x0330 (Size: 0x18, Type: StructProperty)
    std::uint8_t Input2D[0x18]; // 0x0348 (Size: 0x18, Type: StructProperty)
    float SpeedAdjustedPlayRate; // 0x0360 (Size: 0x4, Type: FloatProperty)
    float Speed; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float CustomMeleeTwistYaw; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float MovementDirection_Walk; // 0x036C (Size: 0x4, Type: FloatProperty)
    float AimPitch_AO; // 0x0370 (Size: 0x4, Type: FloatProperty)
    float MovementDirection; // 0x0374 (Size: 0x4, Type: FloatProperty)
    float PivotAToBCustomBlend; // 0x0378 (Size: 0x4, Type: FloatProperty)
    float PivotBToACustomBlend; // 0x037C (Size: 0x4, Type: FloatProperty)
    float MovementDirectionInput; // 0x0380 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0384
    double TurnInPlaceAmount; // 0x0388 (Size: 0x8, Type: DoubleProperty)
    double SpeedScaleConstant; // 0x0390 (Size: 0x8, Type: DoubleProperty)
    double MinSpeed2DThreshold; // 0x0398 (Size: 0x8, Type: DoubleProperty)
    double AimYaw_AO; // 0x03A0 (Size: 0x8, Type: DoubleProperty)
    double SpeedPercentage; // 0x03A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pivot_CardinalDirection_Snap; // 0x03B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsMoveStartExit; // 0x03B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStop; // 0x03B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStartLFoot; // 0x03B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStop_LFoot; // 0x03B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAbilityCannonFire; // 0x03B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWalkStopAndTurn; // 0x03B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAbilityCannonActive; // 0x03B7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPivot; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWalk_UseFwdBlendspace; // 0x03B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPivotExit; // 0x03BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFirstPersonView; // 0x03BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInputing; // 0x03BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWalkStopToIdle; // 0x03BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCannonCanTransitionFireToPassThrough; // 0x03BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStomping; // 0x03BF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMeleeAttack; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x03C1
    std::uint8_t PivotInput2D[0x18]; // 0x03C8 (Size: 0x18, Type: StructProperty)
    float MovementDirectionDamped; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    float MovementDirection_Stop; // 0x03E4 (Size: 0x4, Type: FloatProperty)
    double WalkStopPhase; // 0x03E8 (Size: 0x8, Type: DoubleProperty)
    double SpeedMax; // 0x03F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsTurnInPlaceRight; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningInPlace; // 0x03F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnInPlaceLeft; // 0x03FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsOppositePivot; // 0x03FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWalkStopInPlace; // 0x03FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasInPivot; // 0x03FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStart; // 0x03FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRFFHips; // 0x03FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t ToyFoxLocoFootPhase; // 0x0400 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0401
    std::uint8_t PivotStateArray[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    std::uint8_t FireToPassThroughRelevancyData[0x14]; // 0x0420 (Size: 0x14, Type: StructProperty)
    std::uint8_t WantsToPivotAtoBTransitionData[0x18]; // 0x0434 (Size: 0x18, Type: StructProperty)
    std::uint8_t WantsToPivotBtoATransitionData[0x18]; // 0x044C (Size: 0x18, Type: StructProperty)
    std::uint8_t ActiveTagName[0x4]; // 0x0464 (Size: 0x4, Type: StructProperty)
    std::uint8_t StopAndTurnTagName[0x4]; // 0x0468 (Size: 0x4, Type: StructProperty)
    std::uint8_t FiringTagName[0x4]; // 0x046C (Size: 0x4, Type: StructProperty)
    void* ToyFoxStompMontage; // 0x0470 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UToyFoxGiantPawnAnimInstance, RootBoneRot) == 816, "Offset mismatch for UToyFoxGiantPawnAnimInstance::RootBoneRot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, Input2D) == 840, "Offset mismatch for UToyFoxGiantPawnAnimInstance::Input2D");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, SpeedAdjustedPlayRate) == 864, "Offset mismatch for UToyFoxGiantPawnAnimInstance::SpeedAdjustedPlayRate");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, Speed) == 868, "Offset mismatch for UToyFoxGiantPawnAnimInstance::Speed");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, CustomMeleeTwistYaw) == 872, "Offset mismatch for UToyFoxGiantPawnAnimInstance::CustomMeleeTwistYaw");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MovementDirection_Walk) == 876, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MovementDirection_Walk");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, AimPitch_AO) == 880, "Offset mismatch for UToyFoxGiantPawnAnimInstance::AimPitch_AO");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MovementDirection) == 884, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MovementDirection");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, PivotAToBCustomBlend) == 888, "Offset mismatch for UToyFoxGiantPawnAnimInstance::PivotAToBCustomBlend");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, PivotBToACustomBlend) == 892, "Offset mismatch for UToyFoxGiantPawnAnimInstance::PivotBToACustomBlend");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MovementDirectionInput) == 896, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MovementDirectionInput");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, TurnInPlaceAmount) == 904, "Offset mismatch for UToyFoxGiantPawnAnimInstance::TurnInPlaceAmount");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, SpeedScaleConstant) == 912, "Offset mismatch for UToyFoxGiantPawnAnimInstance::SpeedScaleConstant");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MinSpeed2DThreshold) == 920, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MinSpeed2DThreshold");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, AimYaw_AO) == 928, "Offset mismatch for UToyFoxGiantPawnAnimInstance::AimYaw_AO");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, SpeedPercentage) == 936, "Offset mismatch for UToyFoxGiantPawnAnimInstance::SpeedPercentage");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, Pivot_CardinalDirection_Snap) == 944, "Offset mismatch for UToyFoxGiantPawnAnimInstance::Pivot_CardinalDirection_Snap");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMoveStartExit) == 945, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMoveStartExit");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMoveStop) == 946, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMoveStop");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMoveStartLFoot) == 947, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMoveStartLFoot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMoveStop_LFoot) == 948, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMoveStop_LFoot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bAbilityCannonFire) == 949, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bAbilityCannonFire");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWalkStopAndTurn) == 950, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWalkStopAndTurn");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bAbilityCannonActive) == 951, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bAbilityCannonActive");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bDoPivot) == 952, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bDoPivot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWalk_UseFwdBlendspace) == 953, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWalk_UseFwdBlendspace");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsPivotExit) == 954, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsPivotExit");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsFirstPersonView) == 955, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsFirstPersonView");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsInputing) == 956, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsInputing");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWalkStopToIdle) == 957, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWalkStopToIdle");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bCannonCanTransitionFireToPassThrough) == 958, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bCannonCanTransitionFireToPassThrough");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsStomping) == 959, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsStomping");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMeleeAttack) == 960, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMeleeAttack");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, PivotInput2D) == 968, "Offset mismatch for UToyFoxGiantPawnAnimInstance::PivotInput2D");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MovementDirectionDamped) == 992, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MovementDirectionDamped");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, MovementDirection_Stop) == 996, "Offset mismatch for UToyFoxGiantPawnAnimInstance::MovementDirection_Stop");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, WalkStopPhase) == 1000, "Offset mismatch for UToyFoxGiantPawnAnimInstance::WalkStopPhase");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, SpeedMax) == 1008, "Offset mismatch for UToyFoxGiantPawnAnimInstance::SpeedMax");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsTurnInPlaceRight) == 1016, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsTurnInPlaceRight");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsTurningInPlace) == 1017, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsTurningInPlace");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsTurnInPlaceLeft) == 1018, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsTurnInPlaceLeft");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWantsOppositePivot) == 1019, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWantsOppositePivot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWalkStopInPlace) == 1020, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWalkStopInPlace");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bWasInPivot) == 1021, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bWasInPivot");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsMoveStart) == 1022, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsMoveStart");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, bIsRFFHips) == 1023, "Offset mismatch for UToyFoxGiantPawnAnimInstance::bIsRFFHips");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, ToyFoxLocoFootPhase) == 1024, "Offset mismatch for UToyFoxGiantPawnAnimInstance::ToyFoxLocoFootPhase");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, PivotStateArray) == 1032, "Offset mismatch for UToyFoxGiantPawnAnimInstance::PivotStateArray");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, FireToPassThroughRelevancyData) == 1056, "Offset mismatch for UToyFoxGiantPawnAnimInstance::FireToPassThroughRelevancyData");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, WantsToPivotAtoBTransitionData) == 1076, "Offset mismatch for UToyFoxGiantPawnAnimInstance::WantsToPivotAtoBTransitionData");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, WantsToPivotBtoATransitionData) == 1100, "Offset mismatch for UToyFoxGiantPawnAnimInstance::WantsToPivotBtoATransitionData");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, ActiveTagName) == 1124, "Offset mismatch for UToyFoxGiantPawnAnimInstance::ActiveTagName");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, StopAndTurnTagName) == 1128, "Offset mismatch for UToyFoxGiantPawnAnimInstance::StopAndTurnTagName");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, FiringTagName) == 1132, "Offset mismatch for UToyFoxGiantPawnAnimInstance::FiringTagName");
static_assert(offsetof(UToyFoxGiantPawnAnimInstance, ToyFoxStompMontage) == 1136, "Offset mismatch for UToyFoxGiantPawnAnimInstance::ToyFoxStompMontage");

// /Script/ToyFoxGameplayRuntime.ToyFoxGiantPlayerPawn
// Kind: Class; super: FortGiantPlayerPawn
class UToyFoxGiantPlayerPawn
{
public:
    std::uint8_t Pad_0000[0x5FE0]; // 0x0000
    std::uint8_t WeakpointApproximateRangeSquared[0x30]; // 0x5FE0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSpawnUsingOverrideAbilitySystemComponent; // 0x6010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitingForDestroyed; // 0x6011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x6012
    TArray<void*> WeakpointComponents; // 0x6018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttachedActors; // 0x6028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UToyFoxGiantPlayerPawn, WeakpointApproximateRangeSquared) == 24544, "Offset mismatch for UToyFoxGiantPlayerPawn::WeakpointApproximateRangeSquared");
static_assert(offsetof(UToyFoxGiantPlayerPawn, bSpawnUsingOverrideAbilitySystemComponent) == 24592, "Offset mismatch for UToyFoxGiantPlayerPawn::bSpawnUsingOverrideAbilitySystemComponent");
static_assert(offsetof(UToyFoxGiantPlayerPawn, bWaitingForDestroyed) == 24593, "Offset mismatch for UToyFoxGiantPlayerPawn::bWaitingForDestroyed");
static_assert(offsetof(UToyFoxGiantPlayerPawn, WeakpointComponents) == 24600, "Offset mismatch for UToyFoxGiantPlayerPawn::WeakpointComponents");
static_assert(offsetof(UToyFoxGiantPlayerPawn, AttachedActors) == 24616, "Offset mismatch for UToyFoxGiantPlayerPawn::AttachedActors");

// /Script/ToyFoxGameplayRuntime.ToyFoxPilotCinematicSequenceActor
// Kind: Class; super: LevelSequenceActor
class UToyFoxPilotCinematicSequenceActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t PlaybackSettings[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    void* SequencePlayer; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* LevelSequenceAsset; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraSettings[0x8]; // 0x02C0 (Size: 0x8, Type: StructProperty)
    void* BurnInOptions; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* BindingOverrides; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoPlay; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    // 0x02D8 BoolProperty bOverrideInstanceData (shared storage)
    // 0x02D8 BoolProperty bReplicatePlayback (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02D9
    void* DefaultInstanceData; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* BurnInInstance; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowBurnin; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02F1
    std::uint8_t WorldPartitionResolveData[0x1]; // 0x02F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, PlaybackSettings) == 648, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::PlaybackSettings");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, SequencePlayer) == 688, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::SequencePlayer");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, LevelSequenceAsset) == 696, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::LevelSequenceAsset");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, CameraSettings) == 704, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::CameraSettings");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, BurnInOptions) == 712, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::BurnInOptions");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, BindingOverrides) == 720, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::BindingOverrides");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, bAutoPlay) == 728, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::bAutoPlay");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, DefaultInstanceData) == 736, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::DefaultInstanceData");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, BurnInInstance) == 744, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::BurnInInstance");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, bShowBurnin) == 752, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::bShowBurnin");
static_assert(offsetof(UToyFoxPilotCinematicSequenceActor, WorldPartitionResolveData) == 756, "Offset mismatch for UToyFoxPilotCinematicSequenceActor::WorldPartitionResolveData");

// /Script/ToyFoxGameplayRuntime.ToyFoxSecondaryPilotPawnInterface
// Kind: Class; super: Interface
class UToyFoxSecondaryPilotPawnInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ToyFoxGameplayRuntime.ToyFoxWeakpointCapsuleComponent
// Kind: Class; super: CapsuleComponent
class UToyFoxWeakpointCapsuleComponent
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    float CapsuleHalfHeight; // 0x0590 (Size: 0x4, Type: FloatProperty)
    float CapsuleRadius; // 0x0594 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UToyFoxWeakpointCapsuleComponent, CapsuleHalfHeight) == 1424, "Offset mismatch for UToyFoxWeakpointCapsuleComponent::CapsuleHalfHeight");
static_assert(offsetof(UToyFoxWeakpointCapsuleComponent, CapsuleRadius) == 1428, "Offset mismatch for UToyFoxWeakpointCapsuleComponent::CapsuleRadius");
