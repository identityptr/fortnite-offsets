/**
 * decamp dumper generated SDK
 * Package: /Script/ClamberingCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ClamberingCodeRuntime.ClamberMontageInput
// Kind: ScriptStruct; super: none
struct FClamberMontageInput
{
public:
    std::uint8_t BaseSynchedActionInfo[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t FutureLedgeWarpPoint[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsLedgeLaunch; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasFutureLedge; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClamberFromFalling; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWindowClamber; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReachBack; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClamberMontageInput, BaseSynchedActionInfo) == 0, "Offset mismatch for FClamberMontageInput::BaseSynchedActionInfo");
static_assert(offsetof(FClamberMontageInput, FutureLedgeWarpPoint) == 48, "Offset mismatch for FClamberMontageInput::FutureLedgeWarpPoint");
static_assert(offsetof(FClamberMontageInput, bIsLedgeLaunch) == 72, "Offset mismatch for FClamberMontageInput::bIsLedgeLaunch");
static_assert(offsetof(FClamberMontageInput, bHasFutureLedge) == 73, "Offset mismatch for FClamberMontageInput::bHasFutureLedge");
static_assert(offsetof(FClamberMontageInput, bClamberFromFalling) == 74, "Offset mismatch for FClamberMontageInput::bClamberFromFalling");
static_assert(offsetof(FClamberMontageInput, bWindowClamber) == 75, "Offset mismatch for FClamberMontageInput::bWindowClamber");
static_assert(offsetof(FClamberMontageInput, bIsReachBack) == 76, "Offset mismatch for FClamberMontageInput::bIsReachBack");

// /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
// Kind: ScriptStruct; super: none
struct FClamberingAnalytics_ClamberEvent
{
public:
    std::int32_t MatchTime; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ClamberType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ClamberLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t FailureReason; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FClamberingAnalytics_ClamberEvent, MatchTime) == 0, "Offset mismatch for FClamberingAnalytics_ClamberEvent::MatchTime");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, ClamberType) == 4, "Offset mismatch for FClamberingAnalytics_ClamberEvent::ClamberType");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, ClamberLocation) == 8, "Offset mismatch for FClamberingAnalytics_ClamberEvent::ClamberLocation");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, FailureReason) == 32, "Offset mismatch for FClamberingAnalytics_ClamberEvent::FailureReason");

// /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
// Kind: ScriptStruct; super: TableRowBase
struct FClamberingAnimationEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Montage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float MinClamberHeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLedgeLaunch; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClamberingAnimationEntry, Montage) == 8, "Offset mismatch for FClamberingAnimationEntry::Montage");
static_assert(offsetof(FClamberingAnimationEntry, MinClamberHeight) == 16, "Offset mismatch for FClamberingAnimationEntry::MinClamberHeight");
static_assert(offsetof(FClamberingAnimationEntry, bLedgeLaunch) == 20, "Offset mismatch for FClamberingAnimationEntry::bLedgeLaunch");

// /Script/ClamberingCodeRuntime.ClamberingInputConfig
// Kind: ScriptStruct; super: none
struct FClamberingInputConfig
{
public:
    std::uint8_t ClamberActivationHorizontalRange[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberActivationVerticalRange[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberLookAtThreshold[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableInputDelay[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t QueuedInputWindow[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeldInputDuration[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActivationMode; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x00F1
    std::uint8_t AutoStartMovementThreshold[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoStartLookAtThreshold[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoStartWallCheckCastRadius[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoStartWallCheckHorizontalRange[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoStartWallCheckLookAtThresholdMultiplier[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInvalidateDistance[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetAimInvalidateAngle[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetActorMovementInvalidateDistance[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeLaunchEnabled[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDirectionalLedgeLaunchAngle[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t PBWLedgeLaunchMaxHorizontalTranslation[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultLedgeLaunchVerticalTranslation[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PBWLedgeLaunchVerticalTranslation[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PBWNextLedgeLaunchVerticalTranslation[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeLaunchWarpingWindow[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberExcludeLowTargetEnabled[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberLowTargetMaxHeight[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberLowTargetMaxFallHeight[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberDisplayPromptOnWallStickEnabled[0x1]; // 0x03C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClamberingInputConfig, ClamberActivationHorizontalRange) == 0, "Offset mismatch for FClamberingInputConfig::ClamberActivationHorizontalRange");
static_assert(offsetof(FClamberingInputConfig, ClamberActivationVerticalRange) == 40, "Offset mismatch for FClamberingInputConfig::ClamberActivationVerticalRange");
static_assert(offsetof(FClamberingInputConfig, ClamberLookAtThreshold) == 80, "Offset mismatch for FClamberingInputConfig::ClamberLookAtThreshold");
static_assert(offsetof(FClamberingInputConfig, EnableInputDelay) == 120, "Offset mismatch for FClamberingInputConfig::EnableInputDelay");
static_assert(offsetof(FClamberingInputConfig, QueuedInputWindow) == 160, "Offset mismatch for FClamberingInputConfig::QueuedInputWindow");
static_assert(offsetof(FClamberingInputConfig, HeldInputDuration) == 200, "Offset mismatch for FClamberingInputConfig::HeldInputDuration");
static_assert(offsetof(FClamberingInputConfig, ActivationMode) == 240, "Offset mismatch for FClamberingInputConfig::ActivationMode");
static_assert(offsetof(FClamberingInputConfig, AutoStartMovementThreshold) == 248, "Offset mismatch for FClamberingInputConfig::AutoStartMovementThreshold");
static_assert(offsetof(FClamberingInputConfig, AutoStartLookAtThreshold) == 288, "Offset mismatch for FClamberingInputConfig::AutoStartLookAtThreshold");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckCastRadius) == 328, "Offset mismatch for FClamberingInputConfig::AutoStartWallCheckCastRadius");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckHorizontalRange) == 368, "Offset mismatch for FClamberingInputConfig::AutoStartWallCheckHorizontalRange");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckLookAtThresholdMultiplier) == 408, "Offset mismatch for FClamberingInputConfig::AutoStartWallCheckLookAtThresholdMultiplier");
static_assert(offsetof(FClamberingInputConfig, TargetInvalidateDistance) == 448, "Offset mismatch for FClamberingInputConfig::TargetInvalidateDistance");
static_assert(offsetof(FClamberingInputConfig, TargetAimInvalidateAngle) == 488, "Offset mismatch for FClamberingInputConfig::TargetAimInvalidateAngle");
static_assert(offsetof(FClamberingInputConfig, TargetActorMovementInvalidateDistance) == 528, "Offset mismatch for FClamberingInputConfig::TargetActorMovementInvalidateDistance");
static_assert(offsetof(FClamberingInputConfig, LedgeLaunchEnabled) == 568, "Offset mismatch for FClamberingInputConfig::LedgeLaunchEnabled");
static_assert(offsetof(FClamberingInputConfig, MaxDirectionalLedgeLaunchAngle) == 608, "Offset mismatch for FClamberingInputConfig::MaxDirectionalLedgeLaunchAngle");
static_assert(offsetof(FClamberingInputConfig, PBWLedgeLaunchMaxHorizontalTranslation) == 648, "Offset mismatch for FClamberingInputConfig::PBWLedgeLaunchMaxHorizontalTranslation");
static_assert(offsetof(FClamberingInputConfig, DefaultLedgeLaunchVerticalTranslation) == 688, "Offset mismatch for FClamberingInputConfig::DefaultLedgeLaunchVerticalTranslation");
static_assert(offsetof(FClamberingInputConfig, PBWLedgeLaunchVerticalTranslation) == 728, "Offset mismatch for FClamberingInputConfig::PBWLedgeLaunchVerticalTranslation");
static_assert(offsetof(FClamberingInputConfig, PBWNextLedgeLaunchVerticalTranslation) == 768, "Offset mismatch for FClamberingInputConfig::PBWNextLedgeLaunchVerticalTranslation");
static_assert(offsetof(FClamberingInputConfig, LedgeLaunchWarpingWindow) == 808, "Offset mismatch for FClamberingInputConfig::LedgeLaunchWarpingWindow");
static_assert(offsetof(FClamberingInputConfig, ClamberExcludeLowTargetEnabled) == 848, "Offset mismatch for FClamberingInputConfig::ClamberExcludeLowTargetEnabled");
static_assert(offsetof(FClamberingInputConfig, ClamberLowTargetMaxHeight) == 888, "Offset mismatch for FClamberingInputConfig::ClamberLowTargetMaxHeight");
static_assert(offsetof(FClamberingInputConfig, ClamberLowTargetMaxFallHeight) == 928, "Offset mismatch for FClamberingInputConfig::ClamberLowTargetMaxFallHeight");
static_assert(offsetof(FClamberingInputConfig, ClamberDisplayPromptOnWallStickEnabled) == 968, "Offset mismatch for FClamberingInputConfig::ClamberDisplayPromptOnWallStickEnabled");

// /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
// Kind: ScriptStruct; super: none
struct FClamberingInputConfig_CachedValues
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
// Kind: ScriptStruct; super: none
struct FClamberingMovementConfig_Ledge
{
public:
    std::uint8_t duration[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockCheckTickRate[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClamberingMovementConfig_Ledge, duration) == 0, "Offset mismatch for FClamberingMovementConfig_Ledge::duration");
static_assert(offsetof(FClamberingMovementConfig_Ledge, BlockCheckTickRate) == 40, "Offset mismatch for FClamberingMovementConfig_Ledge::BlockCheckTickRate");

// /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
// Kind: ScriptStruct; super: none
struct FClamberingTargetingConfig_Ledge
{
public:
    std::uint8_t ForwardCastDistance[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardCastRadius[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t FowardCast2D[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerticalSurfaceThreshold[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t HorizontalSurfaceThreshold[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpwardDistanceCapsuleHeightMultiplier[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpwardStartDistanceCapsuleHeightMultiplier[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownwardDistanceCapsuleHeightMultiplier[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumLedgeHeight[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumLedgeHeightWater[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallingSpeedThreshold[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumLedgeFallingHeight[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumLedgeFallingWaterHeight[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardSphereCastRadius[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownwardSphereCastRadius[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowNonWalkableSurfaces[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetValidationEnabled[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetValidationCapsuleRadiusModifier[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetValidationCapsuleHalfHeightModifier[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetValidationCapsuleBottomVerticalOffset[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FutureLedgeLaunchMaxVerticalDetectionRange[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t FutureLedgeLaunchMaxHorizontalDetectionRange[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeExtentThresholdToUseMidpointTargeting[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t FloorCheckCastWallOffset[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t FloorCheckDownDistance[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FloorCheckMaxAllowedAngle[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WindowTargetingHorizontalSweepBreadth[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t WindowTargetingHorizontalSweepHeight[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t WindowTargetingHorizontalOpeningSweepBreadth[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    std::uint8_t WindowTargetingVerticalOffsetCheckInWindowFrame[0x28]; // 0x0488 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberScoringModifier[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberLedgeLaunchScoringModifier[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseMultiSweepCheckForSurfaces[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseReachBackClamber[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReachBackDistanceSweep[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    std::uint8_t MantleHeightCheckCastWallOffset[0x28]; // 0x0578 (Size: 0x28, Type: StructProperty)
    std::uint8_t MantleHeightCapsuleRadius[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MantleHeightMaxHeight[0x28]; // 0x05C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_SearchBoxSize[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t NavigationEdges_CapsuleOfffset[0x28]; // 0x0608 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MinGroundClearanceSize[0x28]; // 0x0630 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_VisibilityCastRadius[0x28]; // 0x0658 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MaximumCapsuleHalfHeight[0x28]; // 0x0680 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MinWallDistanceClearance[0x28]; // 0x06A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MinFrontDistanceClearance[0x28]; // 0x06D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MinEdgeSize[0x28]; // 0x06F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MinWallOffset[0x28]; // 0x0720 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdges_MaxAngleDiffFromRef[0x1]; // 0x0748 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardCastDistance) == 0, "Offset mismatch for FClamberingTargetingConfig_Ledge::ForwardCastDistance");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardCastRadius) == 40, "Offset mismatch for FClamberingTargetingConfig_Ledge::ForwardCastRadius");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FowardCast2D) == 80, "Offset mismatch for FClamberingTargetingConfig_Ledge::FowardCast2D");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, VerticalSurfaceThreshold) == 120, "Offset mismatch for FClamberingTargetingConfig_Ledge::VerticalSurfaceThreshold");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, HorizontalSurfaceThreshold) == 160, "Offset mismatch for FClamberingTargetingConfig_Ledge::HorizontalSurfaceThreshold");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UpwardDistanceCapsuleHeightMultiplier) == 200, "Offset mismatch for FClamberingTargetingConfig_Ledge::UpwardDistanceCapsuleHeightMultiplier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UpwardStartDistanceCapsuleHeightMultiplier) == 240, "Offset mismatch for FClamberingTargetingConfig_Ledge::UpwardStartDistanceCapsuleHeightMultiplier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, DownwardDistanceCapsuleHeightMultiplier) == 280, "Offset mismatch for FClamberingTargetingConfig_Ledge::DownwardDistanceCapsuleHeightMultiplier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeHeight) == 320, "Offset mismatch for FClamberingTargetingConfig_Ledge::MinimumLedgeHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeHeightWater) == 360, "Offset mismatch for FClamberingTargetingConfig_Ledge::MinimumLedgeHeightWater");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FallingSpeedThreshold) == 400, "Offset mismatch for FClamberingTargetingConfig_Ledge::FallingSpeedThreshold");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeFallingHeight) == 440, "Offset mismatch for FClamberingTargetingConfig_Ledge::MinimumLedgeFallingHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeFallingWaterHeight) == 480, "Offset mismatch for FClamberingTargetingConfig_Ledge::MinimumLedgeFallingWaterHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardSphereCastRadius) == 520, "Offset mismatch for FClamberingTargetingConfig_Ledge::ForwardSphereCastRadius");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, DownwardSphereCastRadius) == 560, "Offset mismatch for FClamberingTargetingConfig_Ledge::DownwardSphereCastRadius");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, AllowNonWalkableSurfaces) == 600, "Offset mismatch for FClamberingTargetingConfig_Ledge::AllowNonWalkableSurfaces");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationEnabled) == 640, "Offset mismatch for FClamberingTargetingConfig_Ledge::TargetValidationEnabled");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleRadiusModifier) == 680, "Offset mismatch for FClamberingTargetingConfig_Ledge::TargetValidationCapsuleRadiusModifier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleHalfHeightModifier) == 720, "Offset mismatch for FClamberingTargetingConfig_Ledge::TargetValidationCapsuleHalfHeightModifier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleBottomVerticalOffset) == 760, "Offset mismatch for FClamberingTargetingConfig_Ledge::TargetValidationCapsuleBottomVerticalOffset");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FutureLedgeLaunchMaxVerticalDetectionRange) == 800, "Offset mismatch for FClamberingTargetingConfig_Ledge::FutureLedgeLaunchMaxVerticalDetectionRange");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FutureLedgeLaunchMaxHorizontalDetectionRange) == 840, "Offset mismatch for FClamberingTargetingConfig_Ledge::FutureLedgeLaunchMaxHorizontalDetectionRange");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, LedgeExtentThresholdToUseMidpointTargeting) == 880, "Offset mismatch for FClamberingTargetingConfig_Ledge::LedgeExtentThresholdToUseMidpointTargeting");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FloorCheckCastWallOffset) == 920, "Offset mismatch for FClamberingTargetingConfig_Ledge::FloorCheckCastWallOffset");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FloorCheckDownDistance) == 960, "Offset mismatch for FClamberingTargetingConfig_Ledge::FloorCheckDownDistance");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FloorCheckMaxAllowedAngle) == 1000, "Offset mismatch for FClamberingTargetingConfig_Ledge::FloorCheckMaxAllowedAngle");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, WindowTargetingHorizontalSweepBreadth) == 1040, "Offset mismatch for FClamberingTargetingConfig_Ledge::WindowTargetingHorizontalSweepBreadth");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, WindowTargetingHorizontalSweepHeight) == 1080, "Offset mismatch for FClamberingTargetingConfig_Ledge::WindowTargetingHorizontalSweepHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, WindowTargetingHorizontalOpeningSweepBreadth) == 1120, "Offset mismatch for FClamberingTargetingConfig_Ledge::WindowTargetingHorizontalOpeningSweepBreadth");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, WindowTargetingVerticalOffsetCheckInWindowFrame) == 1160, "Offset mismatch for FClamberingTargetingConfig_Ledge::WindowTargetingVerticalOffsetCheckInWindowFrame");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ClamberScoringModifier) == 1200, "Offset mismatch for FClamberingTargetingConfig_Ledge::ClamberScoringModifier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ClamberLedgeLaunchScoringModifier) == 1240, "Offset mismatch for FClamberingTargetingConfig_Ledge::ClamberLedgeLaunchScoringModifier");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UseMultiSweepCheckForSurfaces) == 1280, "Offset mismatch for FClamberingTargetingConfig_Ledge::UseMultiSweepCheckForSurfaces");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UseReachBackClamber) == 1320, "Offset mismatch for FClamberingTargetingConfig_Ledge::UseReachBackClamber");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ReachBackDistanceSweep) == 1360, "Offset mismatch for FClamberingTargetingConfig_Ledge::ReachBackDistanceSweep");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MantleHeightCheckCastWallOffset) == 1400, "Offset mismatch for FClamberingTargetingConfig_Ledge::MantleHeightCheckCastWallOffset");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MantleHeightCapsuleRadius) == 1440, "Offset mismatch for FClamberingTargetingConfig_Ledge::MantleHeightCapsuleRadius");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MantleHeightMaxHeight) == 1480, "Offset mismatch for FClamberingTargetingConfig_Ledge::MantleHeightMaxHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdge_SearchBoxSize) == 1520, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdge_SearchBoxSize");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_CapsuleOfffset) == 1544, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_CapsuleOfffset");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MinGroundClearanceSize) == 1584, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MinGroundClearanceSize");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_VisibilityCastRadius) == 1624, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_VisibilityCastRadius");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MaximumCapsuleHalfHeight) == 1664, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MaximumCapsuleHalfHeight");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MinWallDistanceClearance) == 1704, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MinWallDistanceClearance");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MinFrontDistanceClearance) == 1744, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MinFrontDistanceClearance");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MinEdgeSize) == 1784, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MinEdgeSize");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MinWallOffset) == 1824, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MinWallOffset");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, NavigationEdges_MaxAngleDiffFromRef) == 1864, "Offset mismatch for FClamberingTargetingConfig_Ledge::NavigationEdges_MaxAngleDiffFromRef");

// /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
// Kind: ScriptStruct; super: none
struct FClamberingTargetingConfig_Ledge_CachedContextualValues
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingData
// Kind: ScriptStruct; super: ContextualTraversalTargetingData
struct FClamberingTargetingData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Type; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanStandOnLedge; // 0x0049 (Size: 0x1, Type: BoolProperty)
    // 0x0049 BoolProperty bIsWindow (shared storage)
    // 0x0049 BoolProperty bValid (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    void* SourceActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceLocation[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t SourceAim[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallLocation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallNormal[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetNormal[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    void* TargetObject; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* TargetActorComponent; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* TargetOverrideComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetActorComponentLocation[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    FName TargetActorBoneName; // 0x0118 (Size: 0x8, Type: NameProperty)
    TArray<void*> NextLedgeLaunchWarpPoints; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsReachBack; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0131
    float DistanceToGround; // 0x0134 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClamberingTargetingData, Type) == 72, "Offset mismatch for FClamberingTargetingData::Type");
static_assert(offsetof(FClamberingTargetingData, bCanStandOnLedge) == 73, "Offset mismatch for FClamberingTargetingData::bCanStandOnLedge");
static_assert(offsetof(FClamberingTargetingData, SourceActor) == 80, "Offset mismatch for FClamberingTargetingData::SourceActor");
static_assert(offsetof(FClamberingTargetingData, SourceLocation) == 88, "Offset mismatch for FClamberingTargetingData::SourceLocation");
static_assert(offsetof(FClamberingTargetingData, SourceAim) == 112, "Offset mismatch for FClamberingTargetingData::SourceAim");
static_assert(offsetof(FClamberingTargetingData, WallLocation) == 136, "Offset mismatch for FClamberingTargetingData::WallLocation");
static_assert(offsetof(FClamberingTargetingData, WallNormal) == 160, "Offset mismatch for FClamberingTargetingData::WallNormal");
static_assert(offsetof(FClamberingTargetingData, TargetLocation) == 184, "Offset mismatch for FClamberingTargetingData::TargetLocation");
static_assert(offsetof(FClamberingTargetingData, TargetNormal) == 208, "Offset mismatch for FClamberingTargetingData::TargetNormal");
static_assert(offsetof(FClamberingTargetingData, TargetObject) == 232, "Offset mismatch for FClamberingTargetingData::TargetObject");
static_assert(offsetof(FClamberingTargetingData, TargetActorComponent) == 240, "Offset mismatch for FClamberingTargetingData::TargetActorComponent");
static_assert(offsetof(FClamberingTargetingData, TargetOverrideComponent) == 248, "Offset mismatch for FClamberingTargetingData::TargetOverrideComponent");
static_assert(offsetof(FClamberingTargetingData, TargetActorComponentLocation) == 256, "Offset mismatch for FClamberingTargetingData::TargetActorComponentLocation");
static_assert(offsetof(FClamberingTargetingData, TargetActorBoneName) == 280, "Offset mismatch for FClamberingTargetingData::TargetActorBoneName");
static_assert(offsetof(FClamberingTargetingData, NextLedgeLaunchWarpPoints) == 288, "Offset mismatch for FClamberingTargetingData::NextLedgeLaunchWarpPoints");
static_assert(offsetof(FClamberingTargetingData, bIsReachBack) == 304, "Offset mismatch for FClamberingTargetingData::bIsReachBack");
static_assert(offsetof(FClamberingTargetingData, DistanceToGround) == 308, "Offset mismatch for FClamberingTargetingData::DistanceToGround");

// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
// Kind: ScriptStruct; super: none
struct FClamberingTargetingDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
// Kind: ScriptStruct; super: ClamberingTargetingDebugData
struct FClamberingTargetingDebugData_Ledge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
// Kind: ScriptStruct; super: none
struct FClamberingTargetingDebugDrawData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Box
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData_Box
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData_Capsule
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData_Capsule
struct FClamberingTargetingDebugDrawData_CapsuleCast
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData_DirectionalArrow
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData_Line
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData
struct FClamberingTargetingDebugDrawData_Sphere
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
// Kind: ScriptStruct; super: ClamberingTargetingDebugDrawData_Sphere
struct FClamberingTargetingDebugDrawData_SphereCast
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingCreationData
// Kind: ScriptStruct; super: FortMovementMode_TraversalBaseCreationData
struct FFortMovementMode_ClamberingCreationData
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    TArray<void*> LedgeLaunchWarpPointInfos; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LedgeLaunchWarpPointIndex; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanStandOnLedge; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasFixedLedgeLaunchWarpPoint; // 0x0145 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClamberFromFalling; // 0x0146 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReachBack; // 0x0147 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_ClamberingCreationData, LedgeLaunchWarpPointInfos) == 304, "Offset mismatch for FFortMovementMode_ClamberingCreationData::LedgeLaunchWarpPointInfos");
static_assert(offsetof(FFortMovementMode_ClamberingCreationData, LedgeLaunchWarpPointIndex) == 320, "Offset mismatch for FFortMovementMode_ClamberingCreationData::LedgeLaunchWarpPointIndex");
static_assert(offsetof(FFortMovementMode_ClamberingCreationData, bCanStandOnLedge) == 324, "Offset mismatch for FFortMovementMode_ClamberingCreationData::bCanStandOnLedge");
static_assert(offsetof(FFortMovementMode_ClamberingCreationData, bHasFixedLedgeLaunchWarpPoint) == 325, "Offset mismatch for FFortMovementMode_ClamberingCreationData::bHasFixedLedgeLaunchWarpPoint");
static_assert(offsetof(FFortMovementMode_ClamberingCreationData, bClamberFromFalling) == 326, "Offset mismatch for FFortMovementMode_ClamberingCreationData::bClamberFromFalling");
static_assert(offsetof(FFortMovementMode_ClamberingCreationData, bIsReachBack) == 327, "Offset mismatch for FFortMovementMode_ClamberingCreationData::bIsReachBack");

// /Script/ClamberingCodeRuntime.LedgeLaunchConfigEntry
// Kind: ScriptStruct; super: none
struct FLedgeLaunchConfigEntry
{
public:
    TArray<void*> LedgeTransforms; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WindowLedgeTransforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLedgeLaunchConfigEntry, LedgeTransforms) == 0, "Offset mismatch for FLedgeLaunchConfigEntry::LedgeTransforms");
static_assert(offsetof(FLedgeLaunchConfigEntry, WindowLedgeTransforms) == 16, "Offset mismatch for FLedgeLaunchConfigEntry::WindowLedgeTransforms");

// /Script/ClamberingCodeRuntime.LedgeLaunchTransformConfigEntry
// Kind: ScriptStruct; super: none
struct FLedgeLaunchTransformConfigEntry
{
public:
    TMap<void*, void*> Transforms; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLedgeLaunchTransformConfigEntry, Transforms) == 0, "Offset mismatch for FLedgeLaunchTransformConfigEntry::Transforms");

// /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
// Kind: ScriptStruct; super: none
struct FReplicatedClamberingTargetingData
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t SourceLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallLocation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint16_t WallNormalYawQuantized; // 0x0038 (Size: 0x2, Type: UInt16Property)
    std::uint16_t WallNormalPitchQuantized; // 0x003A (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t TargetLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint16_t TargetNormalYawQuantized; // 0x0058 (Size: 0x2, Type: UInt16Property)
    std::uint16_t TargetNormalPitchQuantized; // 0x005A (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0002[0x4]; // 0x005C
    void* TargetObject; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TargetActorComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* TargetOverrideComponent; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    FName TargetActorBoneName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FReplicatedClamberingTargetingData, Type) == 0, "Offset mismatch for FReplicatedClamberingTargetingData::Type");
static_assert(offsetof(FReplicatedClamberingTargetingData, SourceLocation) == 8, "Offset mismatch for FReplicatedClamberingTargetingData::SourceLocation");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallLocation) == 32, "Offset mismatch for FReplicatedClamberingTargetingData::WallLocation");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallNormalYawQuantized) == 56, "Offset mismatch for FReplicatedClamberingTargetingData::WallNormalYawQuantized");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallNormalPitchQuantized) == 58, "Offset mismatch for FReplicatedClamberingTargetingData::WallNormalPitchQuantized");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetLocation) == 64, "Offset mismatch for FReplicatedClamberingTargetingData::TargetLocation");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetNormalYawQuantized) == 88, "Offset mismatch for FReplicatedClamberingTargetingData::TargetNormalYawQuantized");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetNormalPitchQuantized) == 90, "Offset mismatch for FReplicatedClamberingTargetingData::TargetNormalPitchQuantized");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetObject) == 96, "Offset mismatch for FReplicatedClamberingTargetingData::TargetObject");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetActorComponent) == 104, "Offset mismatch for FReplicatedClamberingTargetingData::TargetActorComponent");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetOverrideComponent) == 112, "Offset mismatch for FReplicatedClamberingTargetingData::TargetOverrideComponent");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetActorBoneName) == 120, "Offset mismatch for FReplicatedClamberingTargetingData::TargetActorBoneName");

// /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
// Kind: ScriptStruct; super: none
struct FReplicatedClamberingTargetingData_SimClient
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0001
    std::uint16_t WallNormalYawQuantized; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x4]; // 0x0004
    std::uint8_t TargetLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* TargetObject; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* TargetActorComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* TargetOverrideComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName TargetActorBoneName; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, Type) == 0, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::Type");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, WallNormalYawQuantized) == 2, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::WallNormalYawQuantized");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetLocation) == 8, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::TargetLocation");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetObject) == 32, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::TargetObject");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetActorComponent) == 40, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::TargetActorComponent");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetOverrideComponent) == 48, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::TargetOverrideComponent");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetActorBoneName) == 56, "Offset mismatch for FReplicatedClamberingTargetingData_SimClient::TargetActorBoneName");

// /Script/ClamberingCodeRuntime.ClamberingAnalytics
// Kind: Class; super: Object
class UClamberingAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingComponent
// Kind: Class; super: FortPawnOverrideComponent
class UClamberingComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t LocalClamberingState; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ReplicatedClamberingState; // 0x00D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00D2
    std::uint8_t LockedTargetingData[0x148]; // 0x00D8 (Size: 0x148, Type: StructProperty)
    std::uint8_t ReplicatedTargetingData[0x48]; // 0x0220 (Size: 0x48, Type: StructProperty)
    std::uint8_t ClamberingEnabled[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberIndicatorEnabled[0x30]; // 0x0290 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClamberStartMaxFallingDamageFraction[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPerformTargetingWhileWalking; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPerformTargetingWhileSwimming; // 0x02E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x02EA
    std::uint8_t ServerFailDelay[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerValidatePlayerMaxDistance[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputConfig[0x3F0]; // 0x0340 (Size: 0x3F0, Type: StructProperty)
    std::uint8_t TargetingConfig_Ledge[0x770]; // 0x0730 (Size: 0x770, Type: StructProperty)
    std::uint8_t InputConfigCachedValues[0x70]; // 0x0EA0 (Size: 0x70, Type: StructProperty)
    std::uint8_t TargetingConfig_Ledge_CachedContextualValues[0xD8]; // 0x0F10 (Size: 0xD8, Type: StructProperty)
    std::uint8_t MoveConfig_Ledge[0x50]; // 0x0FE8 (Size: 0x50, Type: StructProperty)
    std::uint8_t ClamberSyncTargetLedgeOffset[0x28]; // 0x1038 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClamberingMaxAnalyticsEvents[0x28]; // 0x1060 (Size: 0x28, Type: StructProperty)
    std::uint8_t SynchedActionFailDelay[0x28]; // 0x1088 (Size: 0x28, Type: StructProperty)
    void* MovementModeExtension; // 0x10B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SynchedActionMMETag[0x4]; // 0x10B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AllowTargetingTag[0x4]; // 0x10BC (Size: 0x4, Type: StructProperty)
    FName LedgeLaunchSyncPointName; // 0x10C0 (Size: 0x8, Type: NameProperty)
    double LastTeleportTime; // 0x10C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bTutorialModeEnabled; // 0x10D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x10D1
    std::uint8_t LocalTargetingData[0x138]; // 0x10D8 (Size: 0x138, Type: StructProperty)
    std::uint8_t ParallelTargetingData[0x138]; // 0x1210 (Size: 0x138, Type: StructProperty)
    float QueuedInputTimer; // 0x1348 (Size: 0x4, Type: FloatProperty)
    float InputEnabledTimer; // 0x134C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bJumpInputPressed; // 0x1350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x1351
    float JumpHeldInAirTime; // 0x1354 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x50]; // 0x1358
    std::uint8_t Tag_DisableClambering[0x1]; // 0x13A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UClamberingComponent, LocalClamberingState) == 208, "Offset mismatch for UClamberingComponent::LocalClamberingState");
static_assert(offsetof(UClamberingComponent, ReplicatedClamberingState) == 209, "Offset mismatch for UClamberingComponent::ReplicatedClamberingState");
static_assert(offsetof(UClamberingComponent, LockedTargetingData) == 216, "Offset mismatch for UClamberingComponent::LockedTargetingData");
static_assert(offsetof(UClamberingComponent, ReplicatedTargetingData) == 544, "Offset mismatch for UClamberingComponent::ReplicatedTargetingData");
static_assert(offsetof(UClamberingComponent, ClamberingEnabled) == 616, "Offset mismatch for UClamberingComponent::ClamberingEnabled");
static_assert(offsetof(UClamberingComponent, ClamberIndicatorEnabled) == 656, "Offset mismatch for UClamberingComponent::ClamberIndicatorEnabled");
static_assert(offsetof(UClamberingComponent, ClamberStartMaxFallingDamageFraction) == 704, "Offset mismatch for UClamberingComponent::ClamberStartMaxFallingDamageFraction");
static_assert(offsetof(UClamberingComponent, bPerformTargetingWhileWalking) == 744, "Offset mismatch for UClamberingComponent::bPerformTargetingWhileWalking");
static_assert(offsetof(UClamberingComponent, bPerformTargetingWhileSwimming) == 745, "Offset mismatch for UClamberingComponent::bPerformTargetingWhileSwimming");
static_assert(offsetof(UClamberingComponent, ServerFailDelay) == 752, "Offset mismatch for UClamberingComponent::ServerFailDelay");
static_assert(offsetof(UClamberingComponent, ServerValidatePlayerMaxDistance) == 792, "Offset mismatch for UClamberingComponent::ServerValidatePlayerMaxDistance");
static_assert(offsetof(UClamberingComponent, InputConfig) == 832, "Offset mismatch for UClamberingComponent::InputConfig");
static_assert(offsetof(UClamberingComponent, TargetingConfig_Ledge) == 1840, "Offset mismatch for UClamberingComponent::TargetingConfig_Ledge");
static_assert(offsetof(UClamberingComponent, InputConfigCachedValues) == 3744, "Offset mismatch for UClamberingComponent::InputConfigCachedValues");
static_assert(offsetof(UClamberingComponent, TargetingConfig_Ledge_CachedContextualValues) == 3856, "Offset mismatch for UClamberingComponent::TargetingConfig_Ledge_CachedContextualValues");
static_assert(offsetof(UClamberingComponent, MoveConfig_Ledge) == 4072, "Offset mismatch for UClamberingComponent::MoveConfig_Ledge");
static_assert(offsetof(UClamberingComponent, ClamberSyncTargetLedgeOffset) == 4152, "Offset mismatch for UClamberingComponent::ClamberSyncTargetLedgeOffset");
static_assert(offsetof(UClamberingComponent, ClamberingMaxAnalyticsEvents) == 4192, "Offset mismatch for UClamberingComponent::ClamberingMaxAnalyticsEvents");
static_assert(offsetof(UClamberingComponent, SynchedActionFailDelay) == 4232, "Offset mismatch for UClamberingComponent::SynchedActionFailDelay");
static_assert(offsetof(UClamberingComponent, MovementModeExtension) == 4272, "Offset mismatch for UClamberingComponent::MovementModeExtension");
static_assert(offsetof(UClamberingComponent, SynchedActionMMETag) == 4280, "Offset mismatch for UClamberingComponent::SynchedActionMMETag");
static_assert(offsetof(UClamberingComponent, AllowTargetingTag) == 4284, "Offset mismatch for UClamberingComponent::AllowTargetingTag");
static_assert(offsetof(UClamberingComponent, LedgeLaunchSyncPointName) == 4288, "Offset mismatch for UClamberingComponent::LedgeLaunchSyncPointName");
static_assert(offsetof(UClamberingComponent, LastTeleportTime) == 4296, "Offset mismatch for UClamberingComponent::LastTeleportTime");
static_assert(offsetof(UClamberingComponent, bTutorialModeEnabled) == 4304, "Offset mismatch for UClamberingComponent::bTutorialModeEnabled");
static_assert(offsetof(UClamberingComponent, LocalTargetingData) == 4312, "Offset mismatch for UClamberingComponent::LocalTargetingData");
static_assert(offsetof(UClamberingComponent, ParallelTargetingData) == 4624, "Offset mismatch for UClamberingComponent::ParallelTargetingData");
static_assert(offsetof(UClamberingComponent, QueuedInputTimer) == 4936, "Offset mismatch for UClamberingComponent::QueuedInputTimer");
static_assert(offsetof(UClamberingComponent, InputEnabledTimer) == 4940, "Offset mismatch for UClamberingComponent::InputEnabledTimer");
static_assert(offsetof(UClamberingComponent, bJumpInputPressed) == 4944, "Offset mismatch for UClamberingComponent::bJumpInputPressed");
static_assert(offsetof(UClamberingComponent, JumpHeldInAirTime) == 4948, "Offset mismatch for UClamberingComponent::JumpHeldInAirTime");
static_assert(offsetof(UClamberingComponent, Tag_DisableClambering) == 5032, "Offset mismatch for UClamberingComponent::Tag_DisableClambering");

// /Script/ClamberingCodeRuntime.ClamberingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UClamberingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClamberingCodeRuntime.ClamberingOverrideComponent
// Kind: Class; super: ActorComponent
class UClamberingOverrideComponent
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

static_assert(offsetof(UClamberingOverrideComponent, PrimaryComponentTick) == 56, "Offset mismatch for UClamberingOverrideComponent::PrimaryComponentTick");
static_assert(offsetof(UClamberingOverrideComponent, ComponentTags) == 104, "Offset mismatch for UClamberingOverrideComponent::ComponentTags");
static_assert(offsetof(UClamberingOverrideComponent, AssetUserData) == 120, "Offset mismatch for UClamberingOverrideComponent::AssetUserData");
static_assert(offsetof(UClamberingOverrideComponent, UCSSerializationIndex) == 144, "Offset mismatch for UClamberingOverrideComponent::UCSSerializationIndex");
static_assert(offsetof(UClamberingOverrideComponent, bNetAddressable) == 152, "Offset mismatch for UClamberingOverrideComponent::bNetAddressable");
static_assert(offsetof(UClamberingOverrideComponent, bAutoActivate) == 154, "Offset mismatch for UClamberingOverrideComponent::bAutoActivate");
static_assert(offsetof(UClamberingOverrideComponent, bIsEditorOnly) == 155, "Offset mismatch for UClamberingOverrideComponent::bIsEditorOnly");
static_assert(offsetof(UClamberingOverrideComponent, CreationMethod) == 185, "Offset mismatch for UClamberingOverrideComponent::CreationMethod");
static_assert(offsetof(UClamberingOverrideComponent, OnComponentActivated) == 186, "Offset mismatch for UClamberingOverrideComponent::OnComponentActivated");
static_assert(offsetof(UClamberingOverrideComponent, OnComponentDeactivated) == 187, "Offset mismatch for UClamberingOverrideComponent::OnComponentDeactivated");

// /Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_LedgeLaunch
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    TArray<void*> CurrentWalls; // 0x03C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSpawnLedge; // 0x03D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_LedgeLaunch, CurrentWalls) == 960, "Offset mismatch for UFortAthenaMutator_LedgeLaunch::CurrentWalls");
static_assert(offsetof(UFortAthenaMutator_LedgeLaunch, bShouldSpawnLedge) == 976, "Offset mismatch for UFortAthenaMutator_LedgeLaunch::bShouldSpawnLedge");

// /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData
// Kind: Class; super: FortMovementMode_TraversalBaseRuntimeData
class UFortMovementMode_ClamberingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* AnimMontage; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MontageStartSectionName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    FName MontageMiddleSectionName; // 0x0044 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t SynchedActionWarpPointInfo[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ClamberingRuntimeData, AnimMontage) == 56, "Offset mismatch for UFortMovementMode_ClamberingRuntimeData::AnimMontage");
static_assert(offsetof(UFortMovementMode_ClamberingRuntimeData, MontageStartSectionName) == 64, "Offset mismatch for UFortMovementMode_ClamberingRuntimeData::MontageStartSectionName");
static_assert(offsetof(UFortMovementMode_ClamberingRuntimeData, MontageMiddleSectionName) == 68, "Offset mismatch for UFortMovementMode_ClamberingRuntimeData::MontageMiddleSectionName");
static_assert(offsetof(UFortMovementMode_ClamberingRuntimeData, SynchedActionWarpPointInfo) == 80, "Offset mismatch for UFortMovementMode_ClamberingRuntimeData::SynchedActionWarpPointInfo");

// /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering
// Kind: Class; super: FortMovementMode_ExtLogicTraversalBase
class UFortMovementMode_ExtClambering
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* LedgeLaunchCameraMode; // 0x0280 (Size: 0x8, Type: ClassProperty)
    void* WindowClamberCameraMode; // 0x0288 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ClamberingTag[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    std::uint8_t ClamberingStartedTag[0x8]; // 0x02B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ClamberingFinishedTag[0x20]; // 0x02B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x8]; // 0x02D8 (Size: 0x8, Type: StructProperty)
    void* CameraShake; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    float LedgeLaunchSyncPointInterpSpeed; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float LedgeLaunchPlayerCollideBounceSpeed; // 0x02EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEndWithGroundMovementWhenOnValidFloor; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02F1
    std::uint8_t ClearFallingOnFinalRootMotionFrame[0x1]; // 0x02F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtClambering, LedgeLaunchCameraMode) == 640, "Offset mismatch for UFortMovementMode_ExtClambering::LedgeLaunchCameraMode");
static_assert(offsetof(UFortMovementMode_ExtClambering, WindowClamberCameraMode) == 648, "Offset mismatch for UFortMovementMode_ExtClambering::WindowClamberCameraMode");
static_assert(offsetof(UFortMovementMode_ExtClambering, ClamberingTag) == 656, "Offset mismatch for UFortMovementMode_ExtClambering::ClamberingTag");
static_assert(offsetof(UFortMovementMode_ExtClambering, ClamberingStartedTag) == 688, "Offset mismatch for UFortMovementMode_ExtClambering::ClamberingStartedTag");
static_assert(offsetof(UFortMovementMode_ExtClambering, ClamberingFinishedTag) == 696, "Offset mismatch for UFortMovementMode_ExtClambering::ClamberingFinishedTag");
static_assert(offsetof(UFortMovementMode_ExtClambering, TagPreventHeldObjectDrop) == 728, "Offset mismatch for UFortMovementMode_ExtClambering::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ExtClambering, CameraShake) == 736, "Offset mismatch for UFortMovementMode_ExtClambering::CameraShake");
static_assert(offsetof(UFortMovementMode_ExtClambering, LedgeLaunchSyncPointInterpSpeed) == 744, "Offset mismatch for UFortMovementMode_ExtClambering::LedgeLaunchSyncPointInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtClambering, LedgeLaunchPlayerCollideBounceSpeed) == 748, "Offset mismatch for UFortMovementMode_ExtClambering::LedgeLaunchPlayerCollideBounceSpeed");
static_assert(offsetof(UFortMovementMode_ExtClambering, bEndWithGroundMovementWhenOnValidFloor) == 752, "Offset mismatch for UFortMovementMode_ExtClambering::bEndWithGroundMovementWhenOnValidFloor");
static_assert(offsetof(UFortMovementMode_ExtClambering, ClearFallingOnFinalRootMotionFrame) == 760, "Offset mismatch for UFortMovementMode_ExtClambering::ClearFallingOnFinalRootMotionFrame");

// /Script/ClamberingCodeRuntime.InstancedLedgeActor
// Kind: Class; super: FortClientOnlyActor
class UInstancedLedgeActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* InstancedStaticMeshComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInstancedLedgeActor, InstancedStaticMeshComponent) == 632, "Offset mismatch for UInstancedLedgeActor::InstancedStaticMeshComponent");

// /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem
// Kind: Class; super: BuildingWallSubsystem
class ULedgeLaunchWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ConfigurationData[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstancedLedgeActorClass[0x20]; // 0x0058 (Size: 0x20, Type: SoftClassProperty)
    void* CachedConfigurationData; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* InstancedLedgeActor; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CachedLedgeLaunchMap; // 0x0088 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULedgeLaunchWorldSubsystem, ConfigurationData) == 56, "Offset mismatch for ULedgeLaunchWorldSubsystem::ConfigurationData");
static_assert(offsetof(ULedgeLaunchWorldSubsystem, InstancedLedgeActorClass) == 88, "Offset mismatch for ULedgeLaunchWorldSubsystem::InstancedLedgeActorClass");
static_assert(offsetof(ULedgeLaunchWorldSubsystem, CachedConfigurationData) == 120, "Offset mismatch for ULedgeLaunchWorldSubsystem::CachedConfigurationData");
static_assert(offsetof(ULedgeLaunchWorldSubsystem, InstancedLedgeActor) == 128, "Offset mismatch for ULedgeLaunchWorldSubsystem::InstancedLedgeActor");
static_assert(offsetof(ULedgeLaunchWorldSubsystem, CachedLedgeLaunchMap) == 136, "Offset mismatch for ULedgeLaunchWorldSubsystem::CachedLedgeLaunchMap");

// /Script/ClamberingCodeRuntime.PBWLedgeConfigurationData
// Kind: Class; super: DataAsset
class UPBWLedgeConfigurationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MetalWalls; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StoneWalls; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> WoodWalls; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Transforms; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerMaterialTransforms; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPBWLedgeConfigurationData, MetalWalls) == 40, "Offset mismatch for UPBWLedgeConfigurationData::MetalWalls");
static_assert(offsetof(UPBWLedgeConfigurationData, StoneWalls) == 56, "Offset mismatch for UPBWLedgeConfigurationData::StoneWalls");
static_assert(offsetof(UPBWLedgeConfigurationData, WoodWalls) == 72, "Offset mismatch for UPBWLedgeConfigurationData::WoodWalls");
static_assert(offsetof(UPBWLedgeConfigurationData, Transforms) == 88, "Offset mismatch for UPBWLedgeConfigurationData::Transforms");
static_assert(offsetof(UPBWLedgeConfigurationData, PerMaterialTransforms) == 104, "Offset mismatch for UPBWLedgeConfigurationData::PerMaterialTransforms");
