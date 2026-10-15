/**
 * decamp dumper generated SDK
 * Package: /Script/HoverGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HoverGameplayRuntime.FortGameplayCueNotifyLoop_Hover
// Kind: Class; super: FortGameplayCueNotifyLoop_SoundIndicator
class UFortGameplayCueNotifyLoop_Hover
{
public:
    std::uint8_t Pad_0000[0xC90]; // 0x0000
    TWeakObjectPtr<void> TargetPawn; // 0x0C90 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> BackpackMesh; // 0x0C98 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MovementModeRuntimeData; // 0x0CA0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t FuelAttribute[0x38]; // 0x0CA8 (Size: 0x38, Type: StructProperty)
    FName GroundTraceSocketName; // 0x0CE0 (Size: 0x8, Type: NameProperty)
    std::uint8_t GroundFXLocation[0x18]; // 0x0CE8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroundFXRotation[0x18]; // 0x0D00 (Size: 0x18, Type: StructProperty)
    float GroundFXHeight; // 0x0D18 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSimulatedProxy; // 0x0D1C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0D1D
    std::uint8_t FXUpdateRate[0x28]; // 0x0D20 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxGroundFXDistance[0x30]; // 0x0D48 (Size: 0x30, Type: StructProperty)
    std::uint8_t LowFuelThreshold[0x30]; // 0x0D78 (Size: 0x30, Type: StructProperty)
    std::uint8_t AscendFailBuffer[0x30]; // 0x0DA8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AscendFailThrusterFXOverride[0x30]; // 0x0DD8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxFuel[0x30]; // 0x0E08 (Size: 0x30, Type: StructProperty)
    std::uint8_t VelocityAudioInterpSpeed[0x30]; // 0x0E38 (Size: 0x30, Type: StructProperty)
    std::uint8_t AudioMaxHeight[0x1]; // 0x0E68 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, TargetPawn) == 3216, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::TargetPawn");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, BackpackMesh) == 3224, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::BackpackMesh");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, MovementModeRuntimeData) == 3232, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::MovementModeRuntimeData");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, FuelAttribute) == 3240, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::FuelAttribute");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, GroundTraceSocketName) == 3296, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::GroundTraceSocketName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, GroundFXLocation) == 3304, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::GroundFXLocation");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, GroundFXRotation) == 3328, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::GroundFXRotation");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, GroundFXHeight) == 3352, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::GroundFXHeight");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, bIsSimulatedProxy) == 3356, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::bIsSimulatedProxy");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, FXUpdateRate) == 3360, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::FXUpdateRate");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, MaxGroundFXDistance) == 3400, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::MaxGroundFXDistance");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, LowFuelThreshold) == 3448, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::LowFuelThreshold");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, AscendFailBuffer) == 3496, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::AscendFailBuffer");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, AscendFailThrusterFXOverride) == 3544, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::AscendFailThrusterFXOverride");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, MaxFuel) == 3592, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::MaxFuel");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, VelocityAudioInterpSpeed) == 3640, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::VelocityAudioInterpSpeed");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Hover, AudioMaxHeight) == 3688, "Offset mismatch for UFortGameplayCueNotifyLoop_Hover::AudioMaxHeight");

// /Script/HoverGameplayRuntime.FortHoverPawnComponent
// Kind: Class; super: FortPawnComponent
class UFortHoverPawnComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* DownwardsTargetingPreset; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* AboveHeadTargetingPreset; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DownwardsTargetingHandle[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t AboveHeadTargetingHandle[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> WeakRuntimeData; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HeightLimitUpdateRate[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxWorldHeightLimit[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicAscensionLimit[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t AboveHeadDistance[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortHoverPawnComponent, DownwardsTargetingPreset) == 208, "Offset mismatch for UFortHoverPawnComponent::DownwardsTargetingPreset");
static_assert(offsetof(UFortHoverPawnComponent, AboveHeadTargetingPreset) == 216, "Offset mismatch for UFortHoverPawnComponent::AboveHeadTargetingPreset");
static_assert(offsetof(UFortHoverPawnComponent, DownwardsTargetingHandle) == 224, "Offset mismatch for UFortHoverPawnComponent::DownwardsTargetingHandle");
static_assert(offsetof(UFortHoverPawnComponent, AboveHeadTargetingHandle) == 228, "Offset mismatch for UFortHoverPawnComponent::AboveHeadTargetingHandle");
static_assert(offsetof(UFortHoverPawnComponent, WeakRuntimeData) == 232, "Offset mismatch for UFortHoverPawnComponent::WeakRuntimeData");
static_assert(offsetof(UFortHoverPawnComponent, HeightLimitUpdateRate) == 240, "Offset mismatch for UFortHoverPawnComponent::HeightLimitUpdateRate");
static_assert(offsetof(UFortHoverPawnComponent, MaxWorldHeightLimit) == 280, "Offset mismatch for UFortHoverPawnComponent::MaxWorldHeightLimit");
static_assert(offsetof(UFortHoverPawnComponent, DynamicAscensionLimit) == 320, "Offset mismatch for UFortHoverPawnComponent::DynamicAscensionLimit");
static_assert(offsetof(UFortHoverPawnComponent, AboveHeadDistance) == 360, "Offset mismatch for UFortHoverPawnComponent::AboveHeadDistance");

// /Script/HoverGameplayRuntime.FortMovementMode_ExtHover
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtHover
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t Row_LateralMovementStrength[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_AscendStrength[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_DescendStrength[0x30]; // 0x0218 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostStrength[0x30]; // 0x0248 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_SustainedBoostStrength[0x30]; // 0x0278 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_LateralBrakingStrength[0x30]; // 0x02A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_VerticalBrakingStrength[0x30]; // 0x02D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_DirectionalChangeBonus[0x30]; // 0x0308 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_VerticleForceVelocityThreshold[0x30]; // 0x0338 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_DescendAtHeightLimitThreshold[0x30]; // 0x0368 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_AllowedTimeAboveHeightLimit[0x30]; // 0x0398 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostDuration[0x30]; // 0x03C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostingDirectionChangeMax[0x30]; // 0x03F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostingDirectionChangeMinMultiplier[0x30]; // 0x0428 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_VelocityBrakeMulitplier[0x30]; // 0x0458 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_HeightLimitZBrakeMultiplier[0x30]; // 0x0488 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_LaunchBrakeMultiplier[0x30]; // 0x04B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_LateralMaxSpeed[0x30]; // 0x04E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_AscendingMaxSpeed[0x30]; // 0x0518 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_ManuallyDescendingEnabled[0x30]; // 0x0548 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostingMaxSpeed[0x30]; // 0x0578 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_BoostingSustainedMaxSpeed[0x30]; // 0x05A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_MinSpeed[0x30]; // 0x05D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_MinBoostSpeed[0x30]; // 0x0608 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_MaxBoostVelocityAngleChangeRate[0x30]; // 0x0638 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_MaxBoostRotationDelta[0x30]; // 0x0668 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_SoftHeightLimitSize[0x30]; // 0x0698 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_HeightLimitMaxInterpDistance[0x30]; // 0x06C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_HeightLimitRiseSpeed[0x30]; // 0x06F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_HeightLimitFallSpeed[0x30]; // 0x0728 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_LaunchResponseMaxTime[0x30]; // 0x0758 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_LaunchResponseMinTime[0x30]; // 0x0788 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_EndHoverOnLanding[0x30]; // 0x07B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Row_RequireHoverTagGranted[0x30]; // 0x07E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoostTutorialDurationRequirement[0x28]; // 0x0818 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBoostToggling[0x28]; // 0x0840 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableAscendFailFeedback[0x28]; // 0x0868 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendFailBelowHeightBuffer[0x28]; // 0x0890 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendFailCooldownTime[0x28]; // 0x08B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBoostInitialCost[0x28]; // 0x08E0 (Size: 0x28, Type: StructProperty)
    void* BaseFuelConsumeEffect; // 0x0908 (Size: 0x8, Type: ClassProperty)
    void* InAirModifiersEffect; // 0x0910 (Size: 0x8, Type: ClassProperty)
    void* BoostCooldownEffect; // 0x0918 (Size: 0x8, Type: ClassProperty)
    void* BoostEffect; // 0x0920 (Size: 0x8, Type: ClassProperty)
    void* AscendEffect; // 0x0928 (Size: 0x8, Type: ClassProperty)
    void* FallDamageImmunityEffect; // 0x0930 (Size: 0x8, Type: ClassProperty)
    void* AscendFailEffect; // 0x0938 (Size: 0x8, Type: ClassProperty)
    void* BoostInitialCostEffect; // 0x0940 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HoverFallDamageImmunityTag[0x4]; // 0x0948 (Size: 0x4, Type: StructProperty)
    std::uint8_t JumpInAirEventTag[0x4]; // 0x094C (Size: 0x4, Type: StructProperty)
    std::uint8_t UsedLaunchPadEventTag[0x4]; // 0x0950 (Size: 0x4, Type: StructProperty)
    std::uint8_t HoverEndedEventTag[0x4]; // 0x0954 (Size: 0x4, Type: StructProperty)
    std::uint8_t HoverEndedCueTag[0x4]; // 0x0958 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoostingGameplayCueTag[0x4]; // 0x095C (Size: 0x4, Type: StructProperty)
    void* HoverInputContext; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    void* HoverAscendAction; // 0x0968 (Size: 0x8, Type: ObjectProperty)
    void* HoverBoostAction; // 0x0970 (Size: 0x8, Type: ObjectProperty)
    void* HoverCancelAction; // 0x0978 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakRuntimeData; // 0x0980 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakHoverPawnComponent; // 0x0988 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakInputSubsystem; // 0x0990 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BaseFuelConsumeHandle[0x14]; // 0x0998 (Size: 0x14, Type: StructProperty)
    std::uint8_t InAirModifiersHandle[0x14]; // 0x09AC (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostCooldownHandle[0x14]; // 0x09C0 (Size: 0x14, Type: StructProperty)
    std::uint8_t AscendHandle[0x14]; // 0x09D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostHandle[0x20]; // 0x09E8 (Size: 0x20, Type: StructProperty)
    void* WaitForLaunchAction; // 0x0A08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanPlayAutomaticAscendFailFeedback; // 0x0A10 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0A11
    float CurrentAscendFailCooldown; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBoostTutorialComplete; // 0x0A18 (Size: 0x1, Type: BoolProperty)
    // 0x0A18 BoolProperty bCanGrantFallDamageImmunity (shared storage)
    // 0x0A18 BoolProperty bHasStoppedAscendSinceFeedback (shared storage)
    // 0x0A18 BoolProperty bShouldApplyEndHoverCues (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0A19
    void* RuntimeDataClass; // 0x0A20 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer; // 0x0A28 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BoostCooldownTag[0x8]; // 0x0A30 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoostBlockTags[0x20]; // 0x0A38 (Size: 0x20, Type: StructProperty)
    std::uint8_t FuelAttribute[0x38]; // 0x0A58 (Size: 0x38, Type: StructProperty)
    std::uint8_t CancelTutorialStartTag[0x4]; // 0x0A90 (Size: 0x4, Type: StructProperty)
    std::uint8_t CancelTutorialCompleteTag[0x4]; // 0x0A94 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoostTutorialStartTag[0x4]; // 0x0A98 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoostTutorialCompleteTag[0x4]; // 0x0A9C (Size: 0x4, Type: StructProperty)
    std::uint8_t LaunchResponseTagQuery[0x48]; // 0x0AA0 (Size: 0x48, Type: StructProperty)
    std::int32_t HoverInputContextPriority; // 0x0AE8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortMovementMode_ExtHover, Row_LateralMovementStrength) == 440, "Offset mismatch for UFortMovementMode_ExtHover::Row_LateralMovementStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_AscendStrength) == 488, "Offset mismatch for UFortMovementMode_ExtHover::Row_AscendStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_DescendStrength) == 536, "Offset mismatch for UFortMovementMode_ExtHover::Row_DescendStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostStrength) == 584, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_SustainedBoostStrength) == 632, "Offset mismatch for UFortMovementMode_ExtHover::Row_SustainedBoostStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_LateralBrakingStrength) == 680, "Offset mismatch for UFortMovementMode_ExtHover::Row_LateralBrakingStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_VerticalBrakingStrength) == 728, "Offset mismatch for UFortMovementMode_ExtHover::Row_VerticalBrakingStrength");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_DirectionalChangeBonus) == 776, "Offset mismatch for UFortMovementMode_ExtHover::Row_DirectionalChangeBonus");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_VerticleForceVelocityThreshold) == 824, "Offset mismatch for UFortMovementMode_ExtHover::Row_VerticleForceVelocityThreshold");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_DescendAtHeightLimitThreshold) == 872, "Offset mismatch for UFortMovementMode_ExtHover::Row_DescendAtHeightLimitThreshold");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_AllowedTimeAboveHeightLimit) == 920, "Offset mismatch for UFortMovementMode_ExtHover::Row_AllowedTimeAboveHeightLimit");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostDuration) == 968, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostDuration");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostingDirectionChangeMax) == 1016, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostingDirectionChangeMax");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostingDirectionChangeMinMultiplier) == 1064, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostingDirectionChangeMinMultiplier");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_VelocityBrakeMulitplier) == 1112, "Offset mismatch for UFortMovementMode_ExtHover::Row_VelocityBrakeMulitplier");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_HeightLimitZBrakeMultiplier) == 1160, "Offset mismatch for UFortMovementMode_ExtHover::Row_HeightLimitZBrakeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_LaunchBrakeMultiplier) == 1208, "Offset mismatch for UFortMovementMode_ExtHover::Row_LaunchBrakeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_LateralMaxSpeed) == 1256, "Offset mismatch for UFortMovementMode_ExtHover::Row_LateralMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_AscendingMaxSpeed) == 1304, "Offset mismatch for UFortMovementMode_ExtHover::Row_AscendingMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_ManuallyDescendingEnabled) == 1352, "Offset mismatch for UFortMovementMode_ExtHover::Row_ManuallyDescendingEnabled");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostingMaxSpeed) == 1400, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostingMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_BoostingSustainedMaxSpeed) == 1448, "Offset mismatch for UFortMovementMode_ExtHover::Row_BoostingSustainedMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_MinSpeed) == 1496, "Offset mismatch for UFortMovementMode_ExtHover::Row_MinSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_MinBoostSpeed) == 1544, "Offset mismatch for UFortMovementMode_ExtHover::Row_MinBoostSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_MaxBoostVelocityAngleChangeRate) == 1592, "Offset mismatch for UFortMovementMode_ExtHover::Row_MaxBoostVelocityAngleChangeRate");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_MaxBoostRotationDelta) == 1640, "Offset mismatch for UFortMovementMode_ExtHover::Row_MaxBoostRotationDelta");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_SoftHeightLimitSize) == 1688, "Offset mismatch for UFortMovementMode_ExtHover::Row_SoftHeightLimitSize");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_HeightLimitMaxInterpDistance) == 1736, "Offset mismatch for UFortMovementMode_ExtHover::Row_HeightLimitMaxInterpDistance");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_HeightLimitRiseSpeed) == 1784, "Offset mismatch for UFortMovementMode_ExtHover::Row_HeightLimitRiseSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_HeightLimitFallSpeed) == 1832, "Offset mismatch for UFortMovementMode_ExtHover::Row_HeightLimitFallSpeed");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_LaunchResponseMaxTime) == 1880, "Offset mismatch for UFortMovementMode_ExtHover::Row_LaunchResponseMaxTime");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_LaunchResponseMinTime) == 1928, "Offset mismatch for UFortMovementMode_ExtHover::Row_LaunchResponseMinTime");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_EndHoverOnLanding) == 1976, "Offset mismatch for UFortMovementMode_ExtHover::Row_EndHoverOnLanding");
static_assert(offsetof(UFortMovementMode_ExtHover, Row_RequireHoverTagGranted) == 2024, "Offset mismatch for UFortMovementMode_ExtHover::Row_RequireHoverTagGranted");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostTutorialDurationRequirement) == 2072, "Offset mismatch for UFortMovementMode_ExtHover::BoostTutorialDurationRequirement");
static_assert(offsetof(UFortMovementMode_ExtHover, EnableBoostToggling) == 2112, "Offset mismatch for UFortMovementMode_ExtHover::EnableBoostToggling");
static_assert(offsetof(UFortMovementMode_ExtHover, EnableAscendFailFeedback) == 2152, "Offset mismatch for UFortMovementMode_ExtHover::EnableAscendFailFeedback");
static_assert(offsetof(UFortMovementMode_ExtHover, AscendFailBelowHeightBuffer) == 2192, "Offset mismatch for UFortMovementMode_ExtHover::AscendFailBelowHeightBuffer");
static_assert(offsetof(UFortMovementMode_ExtHover, AscendFailCooldownTime) == 2232, "Offset mismatch for UFortMovementMode_ExtHover::AscendFailCooldownTime");
static_assert(offsetof(UFortMovementMode_ExtHover, EnableBoostInitialCost) == 2272, "Offset mismatch for UFortMovementMode_ExtHover::EnableBoostInitialCost");
static_assert(offsetof(UFortMovementMode_ExtHover, BaseFuelConsumeEffect) == 2312, "Offset mismatch for UFortMovementMode_ExtHover::BaseFuelConsumeEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, InAirModifiersEffect) == 2320, "Offset mismatch for UFortMovementMode_ExtHover::InAirModifiersEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostCooldownEffect) == 2328, "Offset mismatch for UFortMovementMode_ExtHover::BoostCooldownEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostEffect) == 2336, "Offset mismatch for UFortMovementMode_ExtHover::BoostEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, AscendEffect) == 2344, "Offset mismatch for UFortMovementMode_ExtHover::AscendEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, FallDamageImmunityEffect) == 2352, "Offset mismatch for UFortMovementMode_ExtHover::FallDamageImmunityEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, AscendFailEffect) == 2360, "Offset mismatch for UFortMovementMode_ExtHover::AscendFailEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostInitialCostEffect) == 2368, "Offset mismatch for UFortMovementMode_ExtHover::BoostInitialCostEffect");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverFallDamageImmunityTag) == 2376, "Offset mismatch for UFortMovementMode_ExtHover::HoverFallDamageImmunityTag");
static_assert(offsetof(UFortMovementMode_ExtHover, JumpInAirEventTag) == 2380, "Offset mismatch for UFortMovementMode_ExtHover::JumpInAirEventTag");
static_assert(offsetof(UFortMovementMode_ExtHover, UsedLaunchPadEventTag) == 2384, "Offset mismatch for UFortMovementMode_ExtHover::UsedLaunchPadEventTag");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverEndedEventTag) == 2388, "Offset mismatch for UFortMovementMode_ExtHover::HoverEndedEventTag");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverEndedCueTag) == 2392, "Offset mismatch for UFortMovementMode_ExtHover::HoverEndedCueTag");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostingGameplayCueTag) == 2396, "Offset mismatch for UFortMovementMode_ExtHover::BoostingGameplayCueTag");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverInputContext) == 2400, "Offset mismatch for UFortMovementMode_ExtHover::HoverInputContext");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverAscendAction) == 2408, "Offset mismatch for UFortMovementMode_ExtHover::HoverAscendAction");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverBoostAction) == 2416, "Offset mismatch for UFortMovementMode_ExtHover::HoverBoostAction");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverCancelAction) == 2424, "Offset mismatch for UFortMovementMode_ExtHover::HoverCancelAction");
static_assert(offsetof(UFortMovementMode_ExtHover, WeakRuntimeData) == 2432, "Offset mismatch for UFortMovementMode_ExtHover::WeakRuntimeData");
static_assert(offsetof(UFortMovementMode_ExtHover, WeakHoverPawnComponent) == 2440, "Offset mismatch for UFortMovementMode_ExtHover::WeakHoverPawnComponent");
static_assert(offsetof(UFortMovementMode_ExtHover, WeakInputSubsystem) == 2448, "Offset mismatch for UFortMovementMode_ExtHover::WeakInputSubsystem");
static_assert(offsetof(UFortMovementMode_ExtHover, BaseFuelConsumeHandle) == 2456, "Offset mismatch for UFortMovementMode_ExtHover::BaseFuelConsumeHandle");
static_assert(offsetof(UFortMovementMode_ExtHover, InAirModifiersHandle) == 2476, "Offset mismatch for UFortMovementMode_ExtHover::InAirModifiersHandle");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostCooldownHandle) == 2496, "Offset mismatch for UFortMovementMode_ExtHover::BoostCooldownHandle");
static_assert(offsetof(UFortMovementMode_ExtHover, AscendHandle) == 2516, "Offset mismatch for UFortMovementMode_ExtHover::AscendHandle");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostHandle) == 2536, "Offset mismatch for UFortMovementMode_ExtHover::BoostHandle");
static_assert(offsetof(UFortMovementMode_ExtHover, WaitForLaunchAction) == 2568, "Offset mismatch for UFortMovementMode_ExtHover::WaitForLaunchAction");
static_assert(offsetof(UFortMovementMode_ExtHover, bCanPlayAutomaticAscendFailFeedback) == 2576, "Offset mismatch for UFortMovementMode_ExtHover::bCanPlayAutomaticAscendFailFeedback");
static_assert(offsetof(UFortMovementMode_ExtHover, CurrentAscendFailCooldown) == 2580, "Offset mismatch for UFortMovementMode_ExtHover::CurrentAscendFailCooldown");
static_assert(offsetof(UFortMovementMode_ExtHover, bBoostTutorialComplete) == 2584, "Offset mismatch for UFortMovementMode_ExtHover::bBoostTutorialComplete");
static_assert(offsetof(UFortMovementMode_ExtHover, RuntimeDataClass) == 2592, "Offset mismatch for UFortMovementMode_ExtHover::RuntimeDataClass");
static_assert(offsetof(UFortMovementMode_ExtHover, AnimLayer) == 2600, "Offset mismatch for UFortMovementMode_ExtHover::AnimLayer");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostCooldownTag) == 2608, "Offset mismatch for UFortMovementMode_ExtHover::BoostCooldownTag");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostBlockTags) == 2616, "Offset mismatch for UFortMovementMode_ExtHover::BoostBlockTags");
static_assert(offsetof(UFortMovementMode_ExtHover, FuelAttribute) == 2648, "Offset mismatch for UFortMovementMode_ExtHover::FuelAttribute");
static_assert(offsetof(UFortMovementMode_ExtHover, CancelTutorialStartTag) == 2704, "Offset mismatch for UFortMovementMode_ExtHover::CancelTutorialStartTag");
static_assert(offsetof(UFortMovementMode_ExtHover, CancelTutorialCompleteTag) == 2708, "Offset mismatch for UFortMovementMode_ExtHover::CancelTutorialCompleteTag");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostTutorialStartTag) == 2712, "Offset mismatch for UFortMovementMode_ExtHover::BoostTutorialStartTag");
static_assert(offsetof(UFortMovementMode_ExtHover, BoostTutorialCompleteTag) == 2716, "Offset mismatch for UFortMovementMode_ExtHover::BoostTutorialCompleteTag");
static_assert(offsetof(UFortMovementMode_ExtHover, LaunchResponseTagQuery) == 2720, "Offset mismatch for UFortMovementMode_ExtHover::LaunchResponseTagQuery");
static_assert(offsetof(UFortMovementMode_ExtHover, HoverInputContextPriority) == 2792, "Offset mismatch for UFortMovementMode_ExtHover::HoverInputContextPriority");

// /Script/HoverGameplayRuntime.FortMovementMode_HoverRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_HoverRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bAscend; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDescend; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoosting; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    float TimeInBoost; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasInteruptedForwardBoost; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float TargetHeightLimit; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float CurrentHeightLimit; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TimeAboveHeightLimit; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bObstacleAboveHead; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopHover; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLanded; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0053
    std::uint8_t bLocalAscending; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalDescending; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalBoosting; // 0x0056 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalStopHover; // 0x0057 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PreviousBoostVelocity[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    float TimeSinceLaunched; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bAscend) == 56, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bAscend");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bDescend) == 57, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bDescend");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bBoosting) == 58, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bBoosting");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, TimeInBoost) == 60, "Offset mismatch for UFortMovementMode_HoverRuntimeData::TimeInBoost");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bHasInteruptedForwardBoost) == 64, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bHasInteruptedForwardBoost");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, TargetHeightLimit) == 68, "Offset mismatch for UFortMovementMode_HoverRuntimeData::TargetHeightLimit");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, CurrentHeightLimit) == 72, "Offset mismatch for UFortMovementMode_HoverRuntimeData::CurrentHeightLimit");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, TimeAboveHeightLimit) == 76, "Offset mismatch for UFortMovementMode_HoverRuntimeData::TimeAboveHeightLimit");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bObstacleAboveHead) == 80, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bObstacleAboveHead");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bStopHover) == 81, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bStopHover");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bLanded) == 82, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bLanded");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bLocalAscending) == 84, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bLocalAscending");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bLocalDescending) == 85, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bLocalDescending");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bLocalBoosting) == 86, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bLocalBoosting");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, bLocalStopHover) == 87, "Offset mismatch for UFortMovementMode_HoverRuntimeData::bLocalStopHover");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, PreviousBoostVelocity) == 88, "Offset mismatch for UFortMovementMode_HoverRuntimeData::PreviousBoostVelocity");
static_assert(offsetof(UFortMovementMode_HoverRuntimeData, TimeSinceLaunched) == 112, "Offset mismatch for UFortMovementMode_HoverRuntimeData::TimeSinceLaunched");

// /Script/HoverGameplayRuntime.HoverAttributeSet
// Kind: Class; super: FortAttributeSet
class UHoverAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaxFuel[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Fuel[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHoverAttributeSet, MaxFuel) == 80, "Offset mismatch for UHoverAttributeSet::MaxFuel");
static_assert(offsetof(UHoverAttributeSet, Fuel) == 120, "Offset mismatch for UHoverAttributeSet::Fuel");
