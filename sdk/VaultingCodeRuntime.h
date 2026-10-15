/**
 * decamp dumper generated SDK
 * Package: /Script/VaultingCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VaultingCodeRuntime.FortMovementMode_HurdleCreationData
// Kind: ScriptStruct; super: FortMovementMode_TraversalBaseCreationData
struct FFortMovementMode_HurdleCreationData
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t Type; // 0x0130 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortMovementMode_HurdleCreationData, Type) == 304, "Offset mismatch for FFortMovementMode_HurdleCreationData::Type");

// /Script/VaultingCodeRuntime.HurdleInputConfig
// Kind: ScriptStruct; super: none
struct FHurdleInputConfig
{
public:
    std::uint8_t CastRadius[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAllowedFallDistance[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardCastDistance_Phase1[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_BaseMaxDistanceForValidation[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardCastDistance_Phase1_HurdleFromJog[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardCastDistance_Phase1_ManualHurdle[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase1_WallAngleToleranceFlat[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase1_SweepGroundBufferHeight[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase1_SweepGroundMaxHeight[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase1_Floor_WallOffset[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase1_Floor_MinHeightForHurlde[0xA0]; // 0x0190 (Size: 0xA0, Type: StructProperty)
    std::uint8_t Phase2_UpAngleTolerance[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase2_Floor_MaxHeightForHurlde[0x50]; // 0x0258 (Size: 0x50, Type: StructProperty)
    std::uint8_t Phase3_CapsuleOffset[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_ClearanceCapsuleSize[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_ForwardCastDistance[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_ForwardCastDistanceShortHurdle[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_MinTopClearanceForHurdleOn[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_AdjustHurdleHeightWithAngle[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_AllowShortHurdle[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase3_MinPerceivedHurdleHeight[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase4_MaxDownDistance[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase4_UpAngleTolerance[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase4_HurdleOnZTolerance[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase5_CapsuleOffset[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase5_ClearanceCapsuleSize[0x28]; // 0x0488 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalResult_GroundAimOffset[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHurdleDamageDealt[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HurdleOnlyWhenJumpBlocked[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    std::uint8_t HurdleJumpBlockDistance[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideBufferTime[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowHurdleOnto[0x28]; // 0x0578 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumSpeedToHurdle[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumForwardStickDeflection[0x28]; // 0x05C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RangeToIgnoreMinimumSpeedThreshold[0x28]; // 0x05F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumCapsuleRadius[0x28]; // 0x0618 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumCapsuleHalfHeight[0x28]; // 0x0640 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_HorizontalSweepBreadth[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_HorizontalSweepHeight[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_HorizontalOpeningSweepBreadth[0x28]; // 0x06B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_VerticalOffsetCheckInWindowFrame[0x28]; // 0x06E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow[0x28]; // 0x0708 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_MaxHorizontalSweepOffset[0x28]; // 0x0730 (Size: 0x28, Type: StructProperty)
    std::uint8_t Phase0_WallDistanceToSkipWindow[0x28]; // 0x0758 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxVerticalAngleFromLookAt[0x28]; // 0x0780 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxVerticalAngleFromLookAtNarrowOpening[0x28]; // 0x07A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementModeExtensionVersion[0x8]; // 0x07D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t NavigationEdge_SearchBoxSize[0x18]; // 0x07D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NavigationEdge_MinGroundClearanceSize[0x28]; // 0x07F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MinWallDistanceClearance[0x28]; // 0x0818 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MinFrontDistanceClearance[0x28]; // 0x0840 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MinEdgeSize[0x28]; // 0x0868 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MinWallOffset[0x28]; // 0x0890 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MaxAngleDiffFromRef[0x28]; // 0x08B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationEdge_MinimumFrontTargetRatio[0x1]; // 0x08E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHurdleInputConfig, CastRadius) == 0, "Offset mismatch for FHurdleInputConfig::CastRadius");
static_assert(offsetof(FHurdleInputConfig, MaxAllowedFallDistance) == 40, "Offset mismatch for FHurdleInputConfig::MaxAllowedFallDistance");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1) == 80, "Offset mismatch for FHurdleInputConfig::ForwardCastDistance_Phase1");
static_assert(offsetof(FHurdleInputConfig, Phase0_BaseMaxDistanceForValidation) == 120, "Offset mismatch for FHurdleInputConfig::Phase0_BaseMaxDistanceForValidation");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1_HurdleFromJog) == 160, "Offset mismatch for FHurdleInputConfig::ForwardCastDistance_Phase1_HurdleFromJog");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1_ManualHurdle) == 200, "Offset mismatch for FHurdleInputConfig::ForwardCastDistance_Phase1_ManualHurdle");
static_assert(offsetof(FHurdleInputConfig, Phase1_WallAngleToleranceFlat) == 240, "Offset mismatch for FHurdleInputConfig::Phase1_WallAngleToleranceFlat");
static_assert(offsetof(FHurdleInputConfig, Phase1_SweepGroundBufferHeight) == 280, "Offset mismatch for FHurdleInputConfig::Phase1_SweepGroundBufferHeight");
static_assert(offsetof(FHurdleInputConfig, Phase1_SweepGroundMaxHeight) == 320, "Offset mismatch for FHurdleInputConfig::Phase1_SweepGroundMaxHeight");
static_assert(offsetof(FHurdleInputConfig, Phase1_Floor_WallOffset) == 360, "Offset mismatch for FHurdleInputConfig::Phase1_Floor_WallOffset");
static_assert(offsetof(FHurdleInputConfig, Phase1_Floor_MinHeightForHurlde) == 400, "Offset mismatch for FHurdleInputConfig::Phase1_Floor_MinHeightForHurlde");
static_assert(offsetof(FHurdleInputConfig, Phase2_UpAngleTolerance) == 560, "Offset mismatch for FHurdleInputConfig::Phase2_UpAngleTolerance");
static_assert(offsetof(FHurdleInputConfig, Phase2_Floor_MaxHeightForHurlde) == 600, "Offset mismatch for FHurdleInputConfig::Phase2_Floor_MaxHeightForHurlde");
static_assert(offsetof(FHurdleInputConfig, Phase3_CapsuleOffset) == 680, "Offset mismatch for FHurdleInputConfig::Phase3_CapsuleOffset");
static_assert(offsetof(FHurdleInputConfig, Phase3_ClearanceCapsuleSize) == 720, "Offset mismatch for FHurdleInputConfig::Phase3_ClearanceCapsuleSize");
static_assert(offsetof(FHurdleInputConfig, Phase3_ForwardCastDistance) == 760, "Offset mismatch for FHurdleInputConfig::Phase3_ForwardCastDistance");
static_assert(offsetof(FHurdleInputConfig, Phase3_ForwardCastDistanceShortHurdle) == 800, "Offset mismatch for FHurdleInputConfig::Phase3_ForwardCastDistanceShortHurdle");
static_assert(offsetof(FHurdleInputConfig, Phase3_MinTopClearanceForHurdleOn) == 840, "Offset mismatch for FHurdleInputConfig::Phase3_MinTopClearanceForHurdleOn");
static_assert(offsetof(FHurdleInputConfig, Phase3_AdjustHurdleHeightWithAngle) == 880, "Offset mismatch for FHurdleInputConfig::Phase3_AdjustHurdleHeightWithAngle");
static_assert(offsetof(FHurdleInputConfig, Phase3_AllowShortHurdle) == 920, "Offset mismatch for FHurdleInputConfig::Phase3_AllowShortHurdle");
static_assert(offsetof(FHurdleInputConfig, Phase3_MinPerceivedHurdleHeight) == 960, "Offset mismatch for FHurdleInputConfig::Phase3_MinPerceivedHurdleHeight");
static_assert(offsetof(FHurdleInputConfig, Phase4_MaxDownDistance) == 1000, "Offset mismatch for FHurdleInputConfig::Phase4_MaxDownDistance");
static_assert(offsetof(FHurdleInputConfig, Phase4_UpAngleTolerance) == 1040, "Offset mismatch for FHurdleInputConfig::Phase4_UpAngleTolerance");
static_assert(offsetof(FHurdleInputConfig, Phase4_HurdleOnZTolerance) == 1080, "Offset mismatch for FHurdleInputConfig::Phase4_HurdleOnZTolerance");
static_assert(offsetof(FHurdleInputConfig, Phase5_CapsuleOffset) == 1120, "Offset mismatch for FHurdleInputConfig::Phase5_CapsuleOffset");
static_assert(offsetof(FHurdleInputConfig, Phase5_ClearanceCapsuleSize) == 1160, "Offset mismatch for FHurdleInputConfig::Phase5_ClearanceCapsuleSize");
static_assert(offsetof(FHurdleInputConfig, FinalResult_GroundAimOffset) == 1200, "Offset mismatch for FHurdleInputConfig::FinalResult_GroundAimOffset");
static_assert(offsetof(FHurdleInputConfig, MaxHurdleDamageDealt) == 1240, "Offset mismatch for FHurdleInputConfig::MaxHurdleDamageDealt");
static_assert(offsetof(FHurdleInputConfig, HurdleOnlyWhenJumpBlocked) == 1280, "Offset mismatch for FHurdleInputConfig::HurdleOnlyWhenJumpBlocked");
static_assert(offsetof(FHurdleInputConfig, HurdleJumpBlockDistance) == 1320, "Offset mismatch for FHurdleInputConfig::HurdleJumpBlockDistance");
static_assert(offsetof(FHurdleInputConfig, SlideBufferTime) == 1360, "Offset mismatch for FHurdleInputConfig::SlideBufferTime");
static_assert(offsetof(FHurdleInputConfig, AllowHurdleOnto) == 1400, "Offset mismatch for FHurdleInputConfig::AllowHurdleOnto");
static_assert(offsetof(FHurdleInputConfig, MinimumSpeedToHurdle) == 1440, "Offset mismatch for FHurdleInputConfig::MinimumSpeedToHurdle");
static_assert(offsetof(FHurdleInputConfig, MinimumForwardStickDeflection) == 1480, "Offset mismatch for FHurdleInputConfig::MinimumForwardStickDeflection");
static_assert(offsetof(FHurdleInputConfig, RangeToIgnoreMinimumSpeedThreshold) == 1520, "Offset mismatch for FHurdleInputConfig::RangeToIgnoreMinimumSpeedThreshold");
static_assert(offsetof(FHurdleInputConfig, MaximumCapsuleRadius) == 1560, "Offset mismatch for FHurdleInputConfig::MaximumCapsuleRadius");
static_assert(offsetof(FHurdleInputConfig, MaximumCapsuleHalfHeight) == 1600, "Offset mismatch for FHurdleInputConfig::MaximumCapsuleHalfHeight");
static_assert(offsetof(FHurdleInputConfig, Phase0_HorizontalSweepBreadth) == 1640, "Offset mismatch for FHurdleInputConfig::Phase0_HorizontalSweepBreadth");
static_assert(offsetof(FHurdleInputConfig, Phase0_HorizontalSweepHeight) == 1680, "Offset mismatch for FHurdleInputConfig::Phase0_HorizontalSweepHeight");
static_assert(offsetof(FHurdleInputConfig, Phase0_HorizontalOpeningSweepBreadth) == 1720, "Offset mismatch for FHurdleInputConfig::Phase0_HorizontalOpeningSweepBreadth");
static_assert(offsetof(FHurdleInputConfig, Phase0_VerticalOffsetCheckInWindowFrame) == 1760, "Offset mismatch for FHurdleInputConfig::Phase0_VerticalOffsetCheckInWindowFrame");
static_assert(offsetof(FHurdleInputConfig, Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow) == 1800, "Offset mismatch for FHurdleInputConfig::Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow");
static_assert(offsetof(FHurdleInputConfig, Phase0_MaxHorizontalSweepOffset) == 1840, "Offset mismatch for FHurdleInputConfig::Phase0_MaxHorizontalSweepOffset");
static_assert(offsetof(FHurdleInputConfig, Phase0_WallDistanceToSkipWindow) == 1880, "Offset mismatch for FHurdleInputConfig::Phase0_WallDistanceToSkipWindow");
static_assert(offsetof(FHurdleInputConfig, MaxVerticalAngleFromLookAt) == 1920, "Offset mismatch for FHurdleInputConfig::MaxVerticalAngleFromLookAt");
static_assert(offsetof(FHurdleInputConfig, MaxVerticalAngleFromLookAtNarrowOpening) == 1960, "Offset mismatch for FHurdleInputConfig::MaxVerticalAngleFromLookAtNarrowOpening");
static_assert(offsetof(FHurdleInputConfig, MovementModeExtensionVersion) == 2000, "Offset mismatch for FHurdleInputConfig::MovementModeExtensionVersion");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_SearchBoxSize) == 2008, "Offset mismatch for FHurdleInputConfig::NavigationEdge_SearchBoxSize");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinGroundClearanceSize) == 2032, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinGroundClearanceSize");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinWallDistanceClearance) == 2072, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinWallDistanceClearance");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinFrontDistanceClearance) == 2112, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinFrontDistanceClearance");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinEdgeSize) == 2152, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinEdgeSize");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinWallOffset) == 2192, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinWallOffset");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MaxAngleDiffFromRef) == 2232, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MaxAngleDiffFromRef");
static_assert(offsetof(FHurdleInputConfig, NavigationEdge_MinimumFrontTargetRatio) == 2272, "Offset mismatch for FHurdleInputConfig::NavigationEdge_MinimumFrontTargetRatio");

// /Script/VaultingCodeRuntime.HurdleInputConfigCache
// Kind: ScriptStruct; super: none
struct FHurdleInputConfigCache
{
public:
    float CastRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxAllowedFallDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AllowHurdleOnto; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ForwardCastDistance_Phase1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Phase0_BaseMaxDistanceForValidation; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ForwardCastDistance_Phase1_HurdleFromJog; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ForwardCastDistance_Phase1_ManualHurdle; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Phase1_WallAngleToleranceFlat; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Phase1_SweepGroundBufferHeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Phase1_SweepGroundMaxHeight; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float Phase1_Floor_WallOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Phase1_Floor_MinHeightForHurlde; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Phase1_Floor_MaxFloorSearchHeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Phase1_MaxVerticalAngleDeviationDownOnNormal; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Phase1_StartLocationWallOffset; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Phase2_UpAngleTolerance; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Phase2_Floor_MaxHeightForHurlde; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Phase2_Floor_HeightCorrectionMinFloorAngle; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Phase3_CapsuleOffset; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Phase3_ClearanceCapsuleSize; // 0x004C (Size: 0x4, Type: FloatProperty)
    float Phase3_ForwardCastDistance; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Phase3_ForwardCastDistanceShortHurdle; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float Phase3_MinTopClearanceForHurdleOn; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float Phase3_AdjustHurdleHeightWithAngle; // 0x005C (Size: 0x4, Type: FloatProperty)
    float Phase3_AllowShortHurdle; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float Phase3_MinPerceivedHurdleHeight; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float Phase4_MaxDownDistance; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Phase4_UpAngleTolerance; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Phase4_HurdleOnZTolerance; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Phase5_CapsuleOffset; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Phase5_ClearanceCapsuleSize; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float FinalResult_GroundAimOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxHurdleDamageDealt; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float HurdleOnlyWhenJumpBlocked; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float HurdleJumpBlockDistance; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float SlideBufferTime; // 0x008C (Size: 0x4, Type: FloatProperty)
    float MinimumSpeedToHurdle; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MinimumForwardStickDeflection; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float RangeToIgnoreMinimumSpeedThreshold; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float MaximumCapsuleRadius; // 0x009C (Size: 0x4, Type: FloatProperty)
    float MaximumCapsuleHalfHeight; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float Phase0_HorizontalSweepBreadth; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float Phase0_HorizontalSweepHeight; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float Phase0_HorizontalOpeningSweepBreadth; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float Phase0_VerticalOffsetCheckInWindowFrame; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float Phase0_MaxHorizontalSweepOffset; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float Phase0_WallDistanceToSkipWindow; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MaxVerticalAngleFromLookAt; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalAngleFromLookAtNarrowOpening; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementModeExtensionVersion[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t NavigationEdge_SearchBoxSize[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    float NavigationEdge_MinWallDistanceClearance; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MinGroundClearanceSize; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MinFrontDistanceClearance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MinEdgeSize; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MinWallOffset; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MaxAngleDiffFromRef; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float NavigationEdge_MinimumFrontTargetRatio; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHurdleInputConfigCache, CastRadius) == 0, "Offset mismatch for FHurdleInputConfigCache::CastRadius");
static_assert(offsetof(FHurdleInputConfigCache, MaxAllowedFallDistance) == 4, "Offset mismatch for FHurdleInputConfigCache::MaxAllowedFallDistance");
static_assert(offsetof(FHurdleInputConfigCache, AllowHurdleOnto) == 8, "Offset mismatch for FHurdleInputConfigCache::AllowHurdleOnto");
static_assert(offsetof(FHurdleInputConfigCache, ForwardCastDistance_Phase1) == 12, "Offset mismatch for FHurdleInputConfigCache::ForwardCastDistance_Phase1");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_BaseMaxDistanceForValidation) == 16, "Offset mismatch for FHurdleInputConfigCache::Phase0_BaseMaxDistanceForValidation");
static_assert(offsetof(FHurdleInputConfigCache, ForwardCastDistance_Phase1_HurdleFromJog) == 20, "Offset mismatch for FHurdleInputConfigCache::ForwardCastDistance_Phase1_HurdleFromJog");
static_assert(offsetof(FHurdleInputConfigCache, ForwardCastDistance_Phase1_ManualHurdle) == 24, "Offset mismatch for FHurdleInputConfigCache::ForwardCastDistance_Phase1_ManualHurdle");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_WallAngleToleranceFlat) == 28, "Offset mismatch for FHurdleInputConfigCache::Phase1_WallAngleToleranceFlat");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_SweepGroundBufferHeight) == 32, "Offset mismatch for FHurdleInputConfigCache::Phase1_SweepGroundBufferHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_SweepGroundMaxHeight) == 36, "Offset mismatch for FHurdleInputConfigCache::Phase1_SweepGroundMaxHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_Floor_WallOffset) == 40, "Offset mismatch for FHurdleInputConfigCache::Phase1_Floor_WallOffset");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_Floor_MinHeightForHurlde) == 44, "Offset mismatch for FHurdleInputConfigCache::Phase1_Floor_MinHeightForHurlde");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_Floor_MaxFloorSearchHeight) == 48, "Offset mismatch for FHurdleInputConfigCache::Phase1_Floor_MaxFloorSearchHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_MaxVerticalAngleDeviationDownOnNormal) == 52, "Offset mismatch for FHurdleInputConfigCache::Phase1_MaxVerticalAngleDeviationDownOnNormal");
static_assert(offsetof(FHurdleInputConfigCache, Phase1_StartLocationWallOffset) == 56, "Offset mismatch for FHurdleInputConfigCache::Phase1_StartLocationWallOffset");
static_assert(offsetof(FHurdleInputConfigCache, Phase2_UpAngleTolerance) == 60, "Offset mismatch for FHurdleInputConfigCache::Phase2_UpAngleTolerance");
static_assert(offsetof(FHurdleInputConfigCache, Phase2_Floor_MaxHeightForHurlde) == 64, "Offset mismatch for FHurdleInputConfigCache::Phase2_Floor_MaxHeightForHurlde");
static_assert(offsetof(FHurdleInputConfigCache, Phase2_Floor_HeightCorrectionMinFloorAngle) == 68, "Offset mismatch for FHurdleInputConfigCache::Phase2_Floor_HeightCorrectionMinFloorAngle");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_CapsuleOffset) == 72, "Offset mismatch for FHurdleInputConfigCache::Phase3_CapsuleOffset");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_ClearanceCapsuleSize) == 76, "Offset mismatch for FHurdleInputConfigCache::Phase3_ClearanceCapsuleSize");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_ForwardCastDistance) == 80, "Offset mismatch for FHurdleInputConfigCache::Phase3_ForwardCastDistance");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_ForwardCastDistanceShortHurdle) == 84, "Offset mismatch for FHurdleInputConfigCache::Phase3_ForwardCastDistanceShortHurdle");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_MinTopClearanceForHurdleOn) == 88, "Offset mismatch for FHurdleInputConfigCache::Phase3_MinTopClearanceForHurdleOn");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_AdjustHurdleHeightWithAngle) == 92, "Offset mismatch for FHurdleInputConfigCache::Phase3_AdjustHurdleHeightWithAngle");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_AllowShortHurdle) == 96, "Offset mismatch for FHurdleInputConfigCache::Phase3_AllowShortHurdle");
static_assert(offsetof(FHurdleInputConfigCache, Phase3_MinPerceivedHurdleHeight) == 100, "Offset mismatch for FHurdleInputConfigCache::Phase3_MinPerceivedHurdleHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase4_MaxDownDistance) == 104, "Offset mismatch for FHurdleInputConfigCache::Phase4_MaxDownDistance");
static_assert(offsetof(FHurdleInputConfigCache, Phase4_UpAngleTolerance) == 108, "Offset mismatch for FHurdleInputConfigCache::Phase4_UpAngleTolerance");
static_assert(offsetof(FHurdleInputConfigCache, Phase4_HurdleOnZTolerance) == 112, "Offset mismatch for FHurdleInputConfigCache::Phase4_HurdleOnZTolerance");
static_assert(offsetof(FHurdleInputConfigCache, Phase5_CapsuleOffset) == 116, "Offset mismatch for FHurdleInputConfigCache::Phase5_CapsuleOffset");
static_assert(offsetof(FHurdleInputConfigCache, Phase5_ClearanceCapsuleSize) == 120, "Offset mismatch for FHurdleInputConfigCache::Phase5_ClearanceCapsuleSize");
static_assert(offsetof(FHurdleInputConfigCache, FinalResult_GroundAimOffset) == 124, "Offset mismatch for FHurdleInputConfigCache::FinalResult_GroundAimOffset");
static_assert(offsetof(FHurdleInputConfigCache, MaxHurdleDamageDealt) == 128, "Offset mismatch for FHurdleInputConfigCache::MaxHurdleDamageDealt");
static_assert(offsetof(FHurdleInputConfigCache, HurdleOnlyWhenJumpBlocked) == 132, "Offset mismatch for FHurdleInputConfigCache::HurdleOnlyWhenJumpBlocked");
static_assert(offsetof(FHurdleInputConfigCache, HurdleJumpBlockDistance) == 136, "Offset mismatch for FHurdleInputConfigCache::HurdleJumpBlockDistance");
static_assert(offsetof(FHurdleInputConfigCache, SlideBufferTime) == 140, "Offset mismatch for FHurdleInputConfigCache::SlideBufferTime");
static_assert(offsetof(FHurdleInputConfigCache, MinimumSpeedToHurdle) == 144, "Offset mismatch for FHurdleInputConfigCache::MinimumSpeedToHurdle");
static_assert(offsetof(FHurdleInputConfigCache, MinimumForwardStickDeflection) == 148, "Offset mismatch for FHurdleInputConfigCache::MinimumForwardStickDeflection");
static_assert(offsetof(FHurdleInputConfigCache, RangeToIgnoreMinimumSpeedThreshold) == 152, "Offset mismatch for FHurdleInputConfigCache::RangeToIgnoreMinimumSpeedThreshold");
static_assert(offsetof(FHurdleInputConfigCache, MaximumCapsuleRadius) == 156, "Offset mismatch for FHurdleInputConfigCache::MaximumCapsuleRadius");
static_assert(offsetof(FHurdleInputConfigCache, MaximumCapsuleHalfHeight) == 160, "Offset mismatch for FHurdleInputConfigCache::MaximumCapsuleHalfHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_HorizontalSweepBreadth) == 164, "Offset mismatch for FHurdleInputConfigCache::Phase0_HorizontalSweepBreadth");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_HorizontalSweepHeight) == 168, "Offset mismatch for FHurdleInputConfigCache::Phase0_HorizontalSweepHeight");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_HorizontalOpeningSweepBreadth) == 172, "Offset mismatch for FHurdleInputConfigCache::Phase0_HorizontalOpeningSweepBreadth");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_VerticalOffsetCheckInWindowFrame) == 176, "Offset mismatch for FHurdleInputConfigCache::Phase0_VerticalOffsetCheckInWindowFrame");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow) == 180, "Offset mismatch for FHurdleInputConfigCache::Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_MaxHorizontalSweepOffset) == 184, "Offset mismatch for FHurdleInputConfigCache::Phase0_MaxHorizontalSweepOffset");
static_assert(offsetof(FHurdleInputConfigCache, Phase0_WallDistanceToSkipWindow) == 188, "Offset mismatch for FHurdleInputConfigCache::Phase0_WallDistanceToSkipWindow");
static_assert(offsetof(FHurdleInputConfigCache, MaxVerticalAngleFromLookAt) == 192, "Offset mismatch for FHurdleInputConfigCache::MaxVerticalAngleFromLookAt");
static_assert(offsetof(FHurdleInputConfigCache, MaxVerticalAngleFromLookAtNarrowOpening) == 196, "Offset mismatch for FHurdleInputConfigCache::MaxVerticalAngleFromLookAtNarrowOpening");
static_assert(offsetof(FHurdleInputConfigCache, MovementModeExtensionVersion) == 200, "Offset mismatch for FHurdleInputConfigCache::MovementModeExtensionVersion");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_SearchBoxSize) == 208, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_SearchBoxSize");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinWallDistanceClearance) == 232, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinWallDistanceClearance");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinGroundClearanceSize) == 236, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinGroundClearanceSize");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinFrontDistanceClearance) == 240, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinFrontDistanceClearance");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinEdgeSize) == 244, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinEdgeSize");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinWallOffset) == 248, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinWallOffset");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MaxAngleDiffFromRef) == 252, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MaxAngleDiffFromRef");
static_assert(offsetof(FHurdleInputConfigCache, NavigationEdge_MinimumFrontTargetRatio) == 256, "Offset mismatch for FHurdleInputConfigCache::NavigationEdge_MinimumFrontTargetRatio");

// /Script/VaultingCodeRuntime.HurdleTargetingData
// Kind: ScriptStruct; super: none
struct FHurdleTargetingData
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndMovementMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsEdgeHurdle; // 0x0002 (Size: 0x1, Type: BoolProperty)
    // 0x0002 BoolProperty bIsNarrowOpening (shared storage)
    // 0x0002 BoolProperty bValid (shared storage)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t FacingCornerLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t FacingCornerNormal[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t BackCornerLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalLandingPosition[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    void* SourceActor; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceLocation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t SourceAim[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallLocation[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallNormal[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetNormal[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> TargetObject; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetActorComponent; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TargetActorComponentLocation[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    FName TargetActorBoneName; // 0x0128 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FHurdleTargetingData, Type) == 0, "Offset mismatch for FHurdleTargetingData::Type");
static_assert(offsetof(FHurdleTargetingData, EndMovementMode) == 1, "Offset mismatch for FHurdleTargetingData::EndMovementMode");
static_assert(offsetof(FHurdleTargetingData, bIsEdgeHurdle) == 2, "Offset mismatch for FHurdleTargetingData::bIsEdgeHurdle");
static_assert(offsetof(FHurdleTargetingData, FacingCornerLocation) == 8, "Offset mismatch for FHurdleTargetingData::FacingCornerLocation");
static_assert(offsetof(FHurdleTargetingData, FacingCornerNormal) == 32, "Offset mismatch for FHurdleTargetingData::FacingCornerNormal");
static_assert(offsetof(FHurdleTargetingData, BackCornerLocation) == 56, "Offset mismatch for FHurdleTargetingData::BackCornerLocation");
static_assert(offsetof(FHurdleTargetingData, FinalLandingPosition) == 80, "Offset mismatch for FHurdleTargetingData::FinalLandingPosition");
static_assert(offsetof(FHurdleTargetingData, SourceActor) == 104, "Offset mismatch for FHurdleTargetingData::SourceActor");
static_assert(offsetof(FHurdleTargetingData, SourceLocation) == 112, "Offset mismatch for FHurdleTargetingData::SourceLocation");
static_assert(offsetof(FHurdleTargetingData, SourceAim) == 136, "Offset mismatch for FHurdleTargetingData::SourceAim");
static_assert(offsetof(FHurdleTargetingData, WallLocation) == 160, "Offset mismatch for FHurdleTargetingData::WallLocation");
static_assert(offsetof(FHurdleTargetingData, WallNormal) == 184, "Offset mismatch for FHurdleTargetingData::WallNormal");
static_assert(offsetof(FHurdleTargetingData, TargetLocation) == 208, "Offset mismatch for FHurdleTargetingData::TargetLocation");
static_assert(offsetof(FHurdleTargetingData, TargetNormal) == 232, "Offset mismatch for FHurdleTargetingData::TargetNormal");
static_assert(offsetof(FHurdleTargetingData, TargetObject) == 256, "Offset mismatch for FHurdleTargetingData::TargetObject");
static_assert(offsetof(FHurdleTargetingData, TargetActorComponent) == 264, "Offset mismatch for FHurdleTargetingData::TargetActorComponent");
static_assert(offsetof(FHurdleTargetingData, TargetActorComponentLocation) == 272, "Offset mismatch for FHurdleTargetingData::TargetActorComponentLocation");
static_assert(offsetof(FHurdleTargetingData, TargetActorBoneName) == 296, "Offset mismatch for FHurdleTargetingData::TargetActorBoneName");

// /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
// Kind: ScriptStruct; super: none
struct FReplicatedHurdleTargetingData
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndMovementMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t FacingCornerLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t FacingCornerNormal[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t BackCornerLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalLandingPosition[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t bValid; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FReplicatedHurdleTargetingData, Type) == 0, "Offset mismatch for FReplicatedHurdleTargetingData::Type");
static_assert(offsetof(FReplicatedHurdleTargetingData, EndMovementMode) == 1, "Offset mismatch for FReplicatedHurdleTargetingData::EndMovementMode");
static_assert(offsetof(FReplicatedHurdleTargetingData, FacingCornerLocation) == 8, "Offset mismatch for FReplicatedHurdleTargetingData::FacingCornerLocation");
static_assert(offsetof(FReplicatedHurdleTargetingData, FacingCornerNormal) == 32, "Offset mismatch for FReplicatedHurdleTargetingData::FacingCornerNormal");
static_assert(offsetof(FReplicatedHurdleTargetingData, BackCornerLocation) == 56, "Offset mismatch for FReplicatedHurdleTargetingData::BackCornerLocation");
static_assert(offsetof(FReplicatedHurdleTargetingData, FinalLandingPosition) == 80, "Offset mismatch for FReplicatedHurdleTargetingData::FinalLandingPosition");
static_assert(offsetof(FReplicatedHurdleTargetingData, bValid) == 104, "Offset mismatch for FReplicatedHurdleTargetingData::bValid");

// /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
// Kind: Class; super: FortMovementMode_ExtLogicTraversalBase
class UFortMovementMode_ExtLogicHurdle
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    std::uint8_t HurdleTag[0x20]; // 0x0280 (Size: 0x20, Type: StructProperty)
    std::uint8_t HurdleStartedTag[0x8]; // 0x02A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t HurdleFinishedTag[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x4]; // 0x02C8 (Size: 0x4, Type: StructProperty)
    float DestroyPropsSweepDistance; // 0x02CC (Size: 0x4, Type: FloatProperty)
    float DestroyPropsWindowSillOffsetDistance; // 0x02D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, HurdleTag) == 640, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::HurdleTag");
static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, HurdleStartedTag) == 672, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::HurdleStartedTag");
static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, HurdleFinishedTag) == 680, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::HurdleFinishedTag");
static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, TagPreventHeldObjectDrop) == 712, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, DestroyPropsSweepDistance) == 716, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::DestroyPropsSweepDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicHurdle, DestroyPropsWindowSillOffsetDistance) == 720, "Offset mismatch for UFortMovementMode_ExtLogicHurdle::DestroyPropsWindowSillOffsetDistance");

// /Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
// Kind: Class; super: FortMovementMode_TraversalBaseRuntimeData
class UFortMovementMode_HurdleRuntimeData
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t Type; // 0x0100 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortMovementMode_HurdleRuntimeData, Type) == 256, "Offset mismatch for UFortMovementMode_HurdleRuntimeData::Type");

// /Script/VaultingCodeRuntime.HurdleCameraMode
// Kind: Class; super: FortCameraMode_ThirdPerson
class UHurdleCameraMode
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    std::uint8_t StartCameraOriginInterpSpeed[0x18]; // 0x2080 (Size: 0x18, Type: StructProperty)
    std::uint8_t ApexCameraOriginInterpSpeed[0x18]; // 0x2098 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndCameraOriginInterpSpeed[0x18]; // 0x20B0 (Size: 0x18, Type: StructProperty)
    float ConstantSpeedCameraTrackInterpolationExponent; // 0x20C8 (Size: 0x4, Type: FloatProperty)
    float CameraOriginVerticalThreshold; // 0x20CC (Size: 0x4, Type: FloatProperty)
    float FallingVerticalInterpSpeed; // 0x20D0 (Size: 0x4, Type: FloatProperty)
    float FallSpeedThreshold; // 0x20D4 (Size: 0x4, Type: FloatProperty)
    float NonSprintFOV; // 0x20D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideSpectatorCamera; // 0x20DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x20DD
    std::uint8_t HurdleTargetingData[0x1]; // 0x20E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHurdleCameraMode, StartCameraOriginInterpSpeed) == 8320, "Offset mismatch for UHurdleCameraMode::StartCameraOriginInterpSpeed");
static_assert(offsetof(UHurdleCameraMode, ApexCameraOriginInterpSpeed) == 8344, "Offset mismatch for UHurdleCameraMode::ApexCameraOriginInterpSpeed");
static_assert(offsetof(UHurdleCameraMode, EndCameraOriginInterpSpeed) == 8368, "Offset mismatch for UHurdleCameraMode::EndCameraOriginInterpSpeed");
static_assert(offsetof(UHurdleCameraMode, ConstantSpeedCameraTrackInterpolationExponent) == 8392, "Offset mismatch for UHurdleCameraMode::ConstantSpeedCameraTrackInterpolationExponent");
static_assert(offsetof(UHurdleCameraMode, CameraOriginVerticalThreshold) == 8396, "Offset mismatch for UHurdleCameraMode::CameraOriginVerticalThreshold");
static_assert(offsetof(UHurdleCameraMode, FallingVerticalInterpSpeed) == 8400, "Offset mismatch for UHurdleCameraMode::FallingVerticalInterpSpeed");
static_assert(offsetof(UHurdleCameraMode, FallSpeedThreshold) == 8404, "Offset mismatch for UHurdleCameraMode::FallSpeedThreshold");
static_assert(offsetof(UHurdleCameraMode, NonSprintFOV) == 8408, "Offset mismatch for UHurdleCameraMode::NonSprintFOV");
static_assert(offsetof(UHurdleCameraMode, bOverrideSpectatorCamera) == 8412, "Offset mismatch for UHurdleCameraMode::bOverrideSpectatorCamera");
static_assert(offsetof(UHurdleCameraMode, HurdleTargetingData) == 8416, "Offset mismatch for UHurdleCameraMode::HurdleTargetingData");

// /Script/VaultingCodeRuntime.HurdleComponent
// Kind: Class; super: FortPawnComponent
class UHurdleComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* MovementModeExtension; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    std::uint8_t HurdleEnabled[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoHurdleEnabled[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t HurdleInputConfig[0x908]; // 0x0140 (Size: 0x908, Type: StructProperty)
    std::uint8_t HurdleInputConfigCache[0x118]; // 0x0A48 (Size: 0x118, Type: StructProperty)
    void* CachedBotController; // 0x0B60 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x148]; // 0x0B68
    std::uint8_t ReplayHurdleTargetingData[0x70]; // 0x0CB0 (Size: 0x70, Type: StructProperty)
    std::uint8_t ParallelTargetingData[0x180]; // 0x0D20 (Size: 0x180, Type: StructProperty)
    std::uint8_t HighlightPositionOffset[0x18]; // 0x0EA0 (Size: 0x18, Type: StructProperty)
    std::uint8_t HighlightNormalMultiplier[0x18]; // 0x0EB8 (Size: 0x18, Type: StructProperty)
    std::uint8_t HighlightScale[0x18]; // 0x0ED0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CanStartHurdleTag[0x7]; // 0x0EE8 (Size: 0x7, Type: StructProperty)
    std::uint8_t bShouldShowHurdleIndicator; // 0x0EEF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHurdleComponent, MovementModeExtension) == 216, "Offset mismatch for UHurdleComponent::MovementModeExtension");
static_assert(offsetof(UHurdleComponent, HurdleEnabled) == 232, "Offset mismatch for UHurdleComponent::HurdleEnabled");
static_assert(offsetof(UHurdleComponent, AutoHurdleEnabled) == 272, "Offset mismatch for UHurdleComponent::AutoHurdleEnabled");
static_assert(offsetof(UHurdleComponent, HurdleInputConfig) == 320, "Offset mismatch for UHurdleComponent::HurdleInputConfig");
static_assert(offsetof(UHurdleComponent, HurdleInputConfigCache) == 2632, "Offset mismatch for UHurdleComponent::HurdleInputConfigCache");
static_assert(offsetof(UHurdleComponent, CachedBotController) == 2912, "Offset mismatch for UHurdleComponent::CachedBotController");
static_assert(offsetof(UHurdleComponent, ReplayHurdleTargetingData) == 3248, "Offset mismatch for UHurdleComponent::ReplayHurdleTargetingData");
static_assert(offsetof(UHurdleComponent, ParallelTargetingData) == 3360, "Offset mismatch for UHurdleComponent::ParallelTargetingData");
static_assert(offsetof(UHurdleComponent, HighlightPositionOffset) == 3744, "Offset mismatch for UHurdleComponent::HighlightPositionOffset");
static_assert(offsetof(UHurdleComponent, HighlightNormalMultiplier) == 3768, "Offset mismatch for UHurdleComponent::HighlightNormalMultiplier");
static_assert(offsetof(UHurdleComponent, HighlightScale) == 3792, "Offset mismatch for UHurdleComponent::HighlightScale");
static_assert(offsetof(UHurdleComponent, CanStartHurdleTag) == 3816, "Offset mismatch for UHurdleComponent::CanStartHurdleTag");
static_assert(offsetof(UHurdleComponent, bShouldShowHurdleIndicator) == 3823, "Offset mismatch for UHurdleComponent::bShouldShowHurdleIndicator");

// /Script/VaultingCodeRuntime.HurdleLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UHurdleLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VaultingCodeRuntime.HurdleNavLinkProcessor
// Kind: Class; super: FortCustomNavLinkProcessor
class UHurdleNavLinkProcessor
{
public:
    std::uint8_t Opaque[1];
};
