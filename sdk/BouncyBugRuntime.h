/**
 * decamp dumper generated SDK
 * Package: /Script/BouncyBugRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BouncyBugRuntime.AccelerationSettings
// Kind: ScriptStruct; super: none
struct FAccelerationSettings
{
public:
    std::uint8_t BrakingForce[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationForce[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t BasemaxSpeedOffset[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t UphillMod_MaxSpeed[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownhillMod_MaxSpeed[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostingMod_MaxSpeed[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseDragMultiplier[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UphillMod_DragMultiplier[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownhillMod_DragMultiplier[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostingMod_DragMultiplier[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAccelerationSettings, BrakingForce) == 0, "Offset mismatch for FAccelerationSettings::BrakingForce");
static_assert(offsetof(FAccelerationSettings, AccelerationForce) == 40, "Offset mismatch for FAccelerationSettings::AccelerationForce");
static_assert(offsetof(FAccelerationSettings, BasemaxSpeedOffset) == 80, "Offset mismatch for FAccelerationSettings::BasemaxSpeedOffset");
static_assert(offsetof(FAccelerationSettings, UphillMod_MaxSpeed) == 120, "Offset mismatch for FAccelerationSettings::UphillMod_MaxSpeed");
static_assert(offsetof(FAccelerationSettings, DownhillMod_MaxSpeed) == 160, "Offset mismatch for FAccelerationSettings::DownhillMod_MaxSpeed");
static_assert(offsetof(FAccelerationSettings, BoostingMod_MaxSpeed) == 200, "Offset mismatch for FAccelerationSettings::BoostingMod_MaxSpeed");
static_assert(offsetof(FAccelerationSettings, BaseDragMultiplier) == 240, "Offset mismatch for FAccelerationSettings::BaseDragMultiplier");
static_assert(offsetof(FAccelerationSettings, UphillMod_DragMultiplier) == 280, "Offset mismatch for FAccelerationSettings::UphillMod_DragMultiplier");
static_assert(offsetof(FAccelerationSettings, DownhillMod_DragMultiplier) == 320, "Offset mismatch for FAccelerationSettings::DownhillMod_DragMultiplier");
static_assert(offsetof(FAccelerationSettings, BoostingMod_DragMultiplier) == 360, "Offset mismatch for FAccelerationSettings::BoostingMod_DragMultiplier");

// /Script/BouncyBugRuntime.BGA_RolyPolyOnPlayer
// Kind: Class; super: BuildingGameplayActor
class UBGA_RolyPolyOnPlayer
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    float KineticEnergyForwardAmount; // 0x0920 (Size: 0x4, Type: FloatProperty)
    float KineticEnergyMagnitude; // 0x0924 (Size: 0x4, Type: FloatProperty)
    float CurrentGroundZ; // 0x0928 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnGround; // 0x092C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInWater; // 0x092D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x092E
    float LastTouchedWaterTime; // 0x0930 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReadyToBoost; // 0x0934 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSuckedIn; // 0x0935 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0936
    std::uint8_t BouncyBugMovementActiveTag[0x4]; // 0x0938 (Size: 0x4, Type: StructProperty)
    std::uint8_t BouncyBugSuckedInTag[0x4]; // 0x093C (Size: 0x4, Type: StructProperty)
    std::uint8_t OnGroundGameplayCueTag[0x4]; // 0x0940 (Size: 0x4, Type: StructProperty)
    std::uint8_t InWaterGameplayCueTag[0x4]; // 0x0944 (Size: 0x4, Type: StructProperty)
    void* BugReadyToBoostGEClass; // 0x0948 (Size: 0x8, Type: ClassProperty)
    void* PlayerReadyToBoostGEClass; // 0x0950 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StaticMeshFindGroundLerpSpeed[0x30]; // 0x0958 (Size: 0x30, Type: StructProperty)
    std::uint8_t VisualZOffset_Condensed[0x30]; // 0x0988 (Size: 0x30, Type: StructProperty)
    std::uint8_t VisualZOffset_Inflated[0x30]; // 0x09B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t VisualZOffsetInWater_Condensed[0x30]; // 0x09E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t VisualZOffsetInWater_Inflated[0x30]; // 0x0A18 (Size: 0x30, Type: StructProperty)
    std::uint8_t WaterSubmergeTime[0x30]; // 0x0A48 (Size: 0x30, Type: StructProperty)
    std::uint8_t WaterSubmergeDistance[0x1]; // 0x0A78 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBGA_RolyPolyOnPlayer, KineticEnergyForwardAmount) == 2336, "Offset mismatch for UBGA_RolyPolyOnPlayer::KineticEnergyForwardAmount");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, KineticEnergyMagnitude) == 2340, "Offset mismatch for UBGA_RolyPolyOnPlayer::KineticEnergyMagnitude");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, CurrentGroundZ) == 2344, "Offset mismatch for UBGA_RolyPolyOnPlayer::CurrentGroundZ");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, bOnGround) == 2348, "Offset mismatch for UBGA_RolyPolyOnPlayer::bOnGround");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, bInWater) == 2349, "Offset mismatch for UBGA_RolyPolyOnPlayer::bInWater");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, LastTouchedWaterTime) == 2352, "Offset mismatch for UBGA_RolyPolyOnPlayer::LastTouchedWaterTime");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, bReadyToBoost) == 2356, "Offset mismatch for UBGA_RolyPolyOnPlayer::bReadyToBoost");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, bIsSuckedIn) == 2357, "Offset mismatch for UBGA_RolyPolyOnPlayer::bIsSuckedIn");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, BouncyBugMovementActiveTag) == 2360, "Offset mismatch for UBGA_RolyPolyOnPlayer::BouncyBugMovementActiveTag");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, BouncyBugSuckedInTag) == 2364, "Offset mismatch for UBGA_RolyPolyOnPlayer::BouncyBugSuckedInTag");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, OnGroundGameplayCueTag) == 2368, "Offset mismatch for UBGA_RolyPolyOnPlayer::OnGroundGameplayCueTag");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, InWaterGameplayCueTag) == 2372, "Offset mismatch for UBGA_RolyPolyOnPlayer::InWaterGameplayCueTag");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, BugReadyToBoostGEClass) == 2376, "Offset mismatch for UBGA_RolyPolyOnPlayer::BugReadyToBoostGEClass");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, PlayerReadyToBoostGEClass) == 2384, "Offset mismatch for UBGA_RolyPolyOnPlayer::PlayerReadyToBoostGEClass");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, StaticMeshFindGroundLerpSpeed) == 2392, "Offset mismatch for UBGA_RolyPolyOnPlayer::StaticMeshFindGroundLerpSpeed");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, VisualZOffset_Condensed) == 2440, "Offset mismatch for UBGA_RolyPolyOnPlayer::VisualZOffset_Condensed");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, VisualZOffset_Inflated) == 2488, "Offset mismatch for UBGA_RolyPolyOnPlayer::VisualZOffset_Inflated");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, VisualZOffsetInWater_Condensed) == 2536, "Offset mismatch for UBGA_RolyPolyOnPlayer::VisualZOffsetInWater_Condensed");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, VisualZOffsetInWater_Inflated) == 2584, "Offset mismatch for UBGA_RolyPolyOnPlayer::VisualZOffsetInWater_Inflated");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, WaterSubmergeTime) == 2632, "Offset mismatch for UBGA_RolyPolyOnPlayer::WaterSubmergeTime");
static_assert(offsetof(UBGA_RolyPolyOnPlayer, WaterSubmergeDistance) == 2680, "Offset mismatch for UBGA_RolyPolyOnPlayer::WaterSubmergeDistance");

// /Script/BouncyBugRuntime.FortCameraModifier_BouncyBug
// Kind: Class; super: CameraModifier
class UFortCameraModifier_BouncyBug
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* PlayerPawn_Athena; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* BugBGA; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    std::uint8_t LeadInTime[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxLeadInForwardOffset[0x78]; // 0x0090 (Size: 0x78, Type: StructProperty)
    std::uint8_t SF_CameraZMoveSpeed[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxHeightDisplacement[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinPlayerGroundSpeedInfluence[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxPlayerGroundSpeedInfluence[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMinForwardGroundSpeed[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxForwardGroundSpeed[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinVerticalSpeedInfluence[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxVerticalSpeedInfluence[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinCameraVerticalSpeed[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxCameraVerticalSpeed[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SuckedInFollowModifier[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BouncyFollowModifier[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForwardInterpSpeed[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxPlayerHorizontalInfluenceSpeed[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxCameraHorizontalSpeed[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RightCameraSpeedModifier[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_LeftCameraSpeedModifier[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeed[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeed[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeedModifier[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeedModifier[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraRightInterpSpeed[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxVerticalVelocity[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMinForwardSpeedInfluenceOnVerticalSpeed[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeed[0x28]; // 0x04C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMinForwardSpeedInfluenceOnVerticalSpeedModifier[0x28]; // 0x04F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeedModifier[0x28]; // 0x0518 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_UpCameraSpeedModifier[0x28]; // 0x0540 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_DownCameraSpeedModifier[0x28]; // 0x0568 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SuckedInUpwardFollowModifier[0x28]; // 0x0590 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BouncyUpwardFollowModifier[0x28]; // 0x05B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraUpVelocityOffset[0x28]; // 0x05E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraUpwardInterpSpeed[0x28]; // 0x0608 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BoostedFOV[0x28]; // 0x0630 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BeginReadyToBoostFOV[0x28]; // 0x0658 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_NonBoostedFOV[0x28]; // 0x0680 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_PreBoostFOVSpeed[0x28]; // 0x06A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CameraFOVInterpSpeed[0x28]; // 0x06D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_StraightnessModifierInflienceonHorizontalOffset[0x28]; // 0x06F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RefHeightSurfaceHeightDiffInfleunceOnUpModifier[0x28]; // 0x0720 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_VerticalScalarOffset[0x28]; // 0x0748 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_TotalVelocityOffsetInterpSpeed[0x28]; // 0x0770 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BaseForwardOffset[0x28]; // 0x0798 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BaseVerticalOffset[0x28]; // 0x07C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BaseHorizontalOffset[0x28]; // 0x07E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxZChange_OnGround[0x28]; // 0x0810 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxZChange_InAir[0x28]; // 0x0838 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxZChange_InterpSpeed[0x28]; // 0x0860 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinFinalZChange[0x44]; // 0x0888 (Size: 0x44, Type: StructProperty)
    std::uint8_t bDeNativize; // 0x08CC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCameraModifier_BouncyBug, PlayerPawn_Athena) == 72, "Offset mismatch for UFortCameraModifier_BouncyBug::PlayerPawn_Athena");
static_assert(offsetof(UFortCameraModifier_BouncyBug, BugBGA) == 80, "Offset mismatch for UFortCameraModifier_BouncyBug::BugBGA");
static_assert(offsetof(UFortCameraModifier_BouncyBug, LeadInTime) == 104, "Offset mismatch for UFortCameraModifier_BouncyBug::LeadInTime");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxLeadInForwardOffset) == 144, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxLeadInForwardOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraZMoveSpeed) == 264, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraZMoveSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxHeightDisplacement) == 304, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxHeightDisplacement");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MinPlayerGroundSpeedInfluence) == 344, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MinPlayerGroundSpeedInfluence");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxPlayerGroundSpeedInfluence) == 384, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxPlayerGroundSpeedInfluence");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMinForwardGroundSpeed) == 424, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMinForwardGroundSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxForwardGroundSpeed) == 464, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxForwardGroundSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MinVerticalSpeedInfluence) == 504, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MinVerticalSpeedInfluence");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxVerticalSpeedInfluence) == 544, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxVerticalSpeedInfluence");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MinCameraVerticalSpeed) == 584, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MinCameraVerticalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxCameraVerticalSpeed) == 624, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxCameraVerticalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_SuckedInFollowModifier) == 664, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_SuckedInFollowModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BouncyFollowModifier) == 704, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BouncyFollowModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_ForwardInterpSpeed) == 744, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_ForwardInterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxPlayerHorizontalInfluenceSpeed) == 784, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxPlayerHorizontalInfluenceSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MaxCameraHorizontalSpeed) == 824, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MaxCameraHorizontalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_RightCameraSpeedModifier) == 864, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_RightCameraSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_LeftCameraSpeedModifier) == 904, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_LeftCameraSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeed) == 944, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeed) == 984, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeedModifier) == 1024, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMinForwardSpeedInfluenceOnHorizontalSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeedModifier) == 1064, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxForwardSpeedInfluenceOnHorizontalSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraRightInterpSpeed) == 1104, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraRightInterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxVerticalVelocity) == 1144, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxVerticalVelocity");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMinForwardSpeedInfluenceOnVerticalSpeed) == 1184, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMinForwardSpeedInfluenceOnVerticalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeed) == 1224, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMinForwardSpeedInfluenceOnVerticalSpeedModifier) == 1264, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMinForwardSpeedInfluenceOnVerticalSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeedModifier) == 1304, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraMaxForwardSpeedInfluenceOnVerticalSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_UpCameraSpeedModifier) == 1344, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_UpCameraSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_DownCameraSpeedModifier) == 1384, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_DownCameraSpeedModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_SuckedInUpwardFollowModifier) == 1424, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_SuckedInUpwardFollowModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BouncyUpwardFollowModifier) == 1464, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BouncyUpwardFollowModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraUpVelocityOffset) == 1504, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraUpVelocityOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraUpwardInterpSpeed) == 1544, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraUpwardInterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BoostedFOV) == 1584, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BoostedFOV");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BeginReadyToBoostFOV) == 1624, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BeginReadyToBoostFOV");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_NonBoostedFOV) == 1664, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_NonBoostedFOV");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_PreBoostFOVSpeed) == 1704, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_PreBoostFOVSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_CameraFOVInterpSpeed) == 1744, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_CameraFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_StraightnessModifierInflienceonHorizontalOffset) == 1784, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_StraightnessModifierInflienceonHorizontalOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_RefHeightSurfaceHeightDiffInfleunceOnUpModifier) == 1824, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_RefHeightSurfaceHeightDiffInfleunceOnUpModifier");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_VerticalScalarOffset) == 1864, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_VerticalScalarOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_TotalVelocityOffsetInterpSpeed) == 1904, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_TotalVelocityOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BaseForwardOffset) == 1944, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BaseForwardOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BaseVerticalOffset) == 1984, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BaseVerticalOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_BaseHorizontalOffset) == 2024, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_BaseHorizontalOffset");
static_assert(offsetof(UFortCameraModifier_BouncyBug, MaxZChange_OnGround) == 2064, "Offset mismatch for UFortCameraModifier_BouncyBug::MaxZChange_OnGround");
static_assert(offsetof(UFortCameraModifier_BouncyBug, MaxZChange_InAir) == 2104, "Offset mismatch for UFortCameraModifier_BouncyBug::MaxZChange_InAir");
static_assert(offsetof(UFortCameraModifier_BouncyBug, MaxZChange_InterpSpeed) == 2144, "Offset mismatch for UFortCameraModifier_BouncyBug::MaxZChange_InterpSpeed");
static_assert(offsetof(UFortCameraModifier_BouncyBug, SF_MinFinalZChange) == 2184, "Offset mismatch for UFortCameraModifier_BouncyBug::SF_MinFinalZChange");
static_assert(offsetof(UFortCameraModifier_BouncyBug, bDeNativize) == 2252, "Offset mismatch for UFortCameraModifier_BouncyBug::bDeNativize");

// /Script/BouncyBugRuntime.FortComponent_BouncyBugInstance
// Kind: Class; super: ActorComponent
class UFortComponent_BouncyBugInstance
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* OnPlayerBGA; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* MMEToApply; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortComponent_BouncyBugInstance, OnPlayerBGA) == 192, "Offset mismatch for UFortComponent_BouncyBugInstance::OnPlayerBGA");
static_assert(offsetof(UFortComponent_BouncyBugInstance, MMEToApply) == 200, "Offset mismatch for UFortComponent_BouncyBugInstance::MMEToApply");

// /Script/BouncyBugRuntime.FortMovementMode_BouncyBugBPExtLogic
// Kind: Class; super: FortMovementMode_BPExtLogic
class UFortMovementMode_BouncyBugBPExtLogic
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* NativeRuntimeDataClass; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bPrimaryFirePressed; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryFirePressed; // 0x01D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePressed; // 0x01DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpPressed; // 0x01DB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_BouncyBugBPExtLogic, NativeRuntimeDataClass) == 464, "Offset mismatch for UFortMovementMode_BouncyBugBPExtLogic::NativeRuntimeDataClass");
static_assert(offsetof(UFortMovementMode_BouncyBugBPExtLogic, bPrimaryFirePressed) == 472, "Offset mismatch for UFortMovementMode_BouncyBugBPExtLogic::bPrimaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugBPExtLogic, bSecondaryFirePressed) == 473, "Offset mismatch for UFortMovementMode_BouncyBugBPExtLogic::bSecondaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugBPExtLogic, bUsePressed) == 474, "Offset mismatch for UFortMovementMode_BouncyBugBPExtLogic::bUsePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugBPExtLogic, bJumpPressed) == 475, "Offset mismatch for UFortMovementMode_BouncyBugBPExtLogic::bJumpPressed");

// /Script/BouncyBugRuntime.FortMovementMode_BouncyBugExtLogic
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_BouncyBugExtLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t bPrimaryFirePressed; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryFirePressed; // 0x01B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePressed; // 0x01BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x01BB
    std::uint8_t bJumpPressed; // 0x01BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x33]; // 0x01BD
    std::uint8_t AccelerationSettings_GroundCondensed[0x1B8]; // 0x01F0 (Size: 0x1B8, Type: StructProperty)
    std::uint8_t AccelerationSettings_GroundInflated[0x1B8]; // 0x03A8 (Size: 0x1B8, Type: StructProperty)
    std::uint8_t AccelerationSettings_InAir[0x1B8]; // 0x0560 (Size: 0x1B8, Type: StructProperty)
    std::uint8_t bMoveFollowFloor; // 0x0718 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingOnGround; // 0x0719 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xA]; // 0x071A
    std::uint8_t GC_HardenedStateBounceCueTag[0x4]; // 0x0724 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_PerfectBounceCueTag[0x4]; // 0x0728 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_BouncyStateBounceCueTag[0x4]; // 0x072C (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_BGABouncyStateTag[0x4]; // 0x0730 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_BGAHardenedStateTag[0x4]; // 0x0734 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_Landed[0x4]; // 0x0738 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_BounceFromGround[0x4]; // 0x073C (Size: 0x4, Type: StructProperty)
    void* GE_FallDamageImmunityOnExit; // 0x0740 (Size: 0x8, Type: ClassProperty)
    void* GE_TryingToExitMME; // 0x0748 (Size: 0x8, Type: ClassProperty)
    void* GE_SuckedIn; // 0x0750 (Size: 0x8, Type: ClassProperty)
    void* GE_PlayerBouncyState; // 0x0758 (Size: 0x8, Type: ClassProperty)
    void* GE_BGABoostedState; // 0x0760 (Size: 0x8, Type: ClassProperty)
    void* GE_PlayerBoostedState; // 0x0768 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0770
    std::uint8_t CurrentMeshRotation[0x198]; // 0x0778 (Size: 0x198, Type: StructProperty)
    std::uint8_t SF_AdditionalGroundBounceForceOnActorHit[0x28]; // 0x0910 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_AdditionalGroundForwardForceOnActorHit[0x28]; // 0x0938 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_AdditionalWallBounceForceOnActorHit[0x28]; // 0x0960 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_AdditionalWallForwardForceOnActorHit[0x28]; // 0x0988 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_InitialLaunch_UpwardAmount[0x28]; // 0x09B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_InitialLaunch_Force[0x28]; // 0x09D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceGroundStickTime[0x28]; // 0x0A00 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceVelocityMaintainTime[0x28]; // 0x0A28 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunchVelocityMaintainTime[0x28]; // 0x0A50 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_InitialLaunchVelocityMaintainTime[0x28]; // 0x0A78 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Dive_BonusGravityTime[0x28]; // 0x0AA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Dive_BonusGravityAmount[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Gravity_Condensed[0x28]; // 0x0AF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Gravity_Inflated[0x28]; // 0x0B18 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ZVelocityHardMinimum[0x28]; // 0x0B40 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ZVelocityHardMaximum[0x28]; // 0x0B68 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ZVelocityToDetectPeak[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForwardBoostStartingValue[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Visuals_BGARotationSpeed[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Visuals_BoostForwardThreshold[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_StoredLandingVelocityOverrideSquaredMagnitudeThreshold[0x28]; // 0x0C30 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForwardBoostChargeSpeed[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceEnergy_DecayRate[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_GoalDirectionThreshold[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_FractionOfAccelerationMagnitudePerUpdate[0x28]; // 0x0CD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BoostThreshold[0x28]; // 0x0CF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinimumVelocityDragThreshold[0x28]; // 0x0D20 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaximumvelocityDragThreshold[0x28]; // 0x0D48 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxDragOffsetSpeedModifier[0x28]; // 0x0D70 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceMinMagnitudeThatAppliesBounceDrag[0x28]; // 0x0D98 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceMaxMagnitudeThatAppliesBounceDrag[0x28]; // 0x0DC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceMaxDragModifier[0x28]; // 0x0DE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_PlayerInstigatedBounceForce[0x28]; // 0x0E10 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BoostedBounce_ForwardForce[0x28]; // 0x0E38 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_KineticEnergyForwardAmountThreshold[0x28]; // 0x0E60 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BoostingTime[0x28]; // 0x0E88 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RealVelocitySlopeBoostVelocityThreshold[0x28]; // 0x0EB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CheckForSlopeSphereTraceRadius[0x28]; // 0x0ED8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_TotalTerminalVelocityMagnitude[0x28]; // 0x0F00 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ZTerminalVelocityMagnitude[0x28]; // 0x0F28 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinStoredBounceEnergy[0x28]; // 0x0F50 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_DiveHeightForMaxBounceForce[0x28]; // 0x0F78 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinBounceForceFromDiving[0x28]; // 0x0FA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxBounceForceFromDiving[0x28]; // 0x0FC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_PeakHeightForMaxBounceForce[0x28]; // 0x0FF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MaxBounceForceFromPeak[0x28]; // 0x1018 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_CalculateFacingDireactionDirectVelocityThreshold[0x28]; // 0x1040 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceForMinSurfaceInfluence[0x28]; // 0x1068 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceForMaxSurfaceInfluence[0x28]; // 0x1090 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SlantCoefficientForMaxSurfaceInfluence[0x28]; // 0x10B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SlantCoefficientForMinSurfaceInfluence[0x28]; // 0x10E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SurfaceInfluenceModifierOnFlatterLand[0x28]; // 0x1108 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SurfaceInfluenceAtFullForwardCharge[0x28]; // 0x1130 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_ZMultiplier[0x28]; // 0x1158 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_ZAdditive[0x28]; // 0x1180 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinAngleForWallBounce[0x28]; // 0x11A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SlantCoefficientForMinGroundStickiness[0x28]; // 0x11D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SlantCoefficientForMaxGroundStickiness[0x28]; // 0x11F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinBounceForceToBounceWhenDownHill[0x28]; // 0x1220 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinBounceForceToBounce[0x28]; // 0x1248 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BoostedBounceMinimumUpwardForce[0x28]; // 0x1270 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BounceForceToForwardSpeedMultiplier[0x28]; // 0x1298 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_WallImpactHardnessBounceModifier_Hard[0x28]; // 0x12C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_WallImpactHarndessBounceModifier_Soft[0x28]; // 0x12E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_WallImpactFloorModifier_Found[0x28]; // 0x1310 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_WallImpactFloorModifier_NotFound[0x28]; // 0x1338 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_PlayerMeshHeightOnExit[0x28]; // 0x1360 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SurfaceInfluenceMultiplierWhenGoingUphill[0x28]; // 0x1388 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SurfaceInfluenceMultiplierWhenGoingDownhill[0x28]; // 0x13B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SidewaysInfluenceWhenTryingToBounceForward[0x28]; // 0x13D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForceForMinWallBounce_OnGround[0x28]; // 0x1400 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForceForMaxWallBounce_OnGround[0x28]; // 0x1428 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForceForMinWallBounce_InAir[0x28]; // 0x1450 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForceForMaxWallBounce_InAir[0x28]; // 0x1478 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Visuals_ZAccelerationTiltModifier_OnGround[0x28]; // 0x14A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Visuals_ZAccelerationTiltModifier_NotOnGround[0x28]; // 0x14C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SpeedHardCap_Boosted[0x28]; // 0x14F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_SpeedHardCap_Normal[0x28]; // 0x1518 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_Cap3DAppliedAcceleration[0x28]; // 0x1540 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_UpwardAngleOffset_OnProps[0x28]; // 0x1568 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_UpwardAngleOffset[0x28]; // 0x1590 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RealVelocity_InterpSpeed[0x28]; // 0x15B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_AllowLaunchOffProps[0x28]; // 0x15E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_SlopeTrace_AngleOffset_Normal[0x28]; // 0x1608 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_SlopeTrace_AngleOffset_Boosted[0x28]; // 0x1630 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_SlopeTrace_Distance[0x28]; // 0x1658 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_RampLaunch_SlopeTrace_Distance_Boosted[0x28]; // 0x1680 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_MinimumSuckedOutTime[0x28]; // 0x16A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_AlwaysBounceWhenBoosting[0x28]; // 0x16D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_LaunchOffSurface_Angle[0x28]; // 0x16F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_UseBouncyBoost[0x28]; // 0x1720 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_ForwardChargeBounceBoostThreshold[0x28]; // 0x1748 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BouncyBoost_MinBounceForceMultiplier[0x28]; // 0x1770 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BouncyBoost_MinimumBounceForce[0x28]; // 0x1798 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_BouncyBoost_MaxiumumBounceForce[0x28]; // 0x17C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_DisableSpeedMultiplier[0x30]; // 0x17E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_EnablePlayerBouncesAlongWalls[0x30]; // 0x1818 (Size: 0x30, Type: StructProperty)
    float LastTouchedWaterImpactForce; // 0x1848 (Size: 0x4, Type: FloatProperty)
    float LastTouchedWaterTime; // 0x184C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDeNativize; // 0x1850 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x1851
    void* DenativizedRuntimeDataClass; // 0x1858 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bPrimaryFirePressed) == 440, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bPrimaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bSecondaryFirePressed) == 441, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bSecondaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bUsePressed) == 442, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bUsePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bJumpPressed) == 444, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bJumpPressed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, AccelerationSettings_GroundCondensed) == 496, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::AccelerationSettings_GroundCondensed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, AccelerationSettings_GroundInflated) == 936, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::AccelerationSettings_GroundInflated");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, AccelerationSettings_InAir) == 1376, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::AccelerationSettings_InAir");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bMoveFollowFloor) == 1816, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bMoveFollowFloor");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bIsMovingOnGround) == 1817, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bIsMovingOnGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_HardenedStateBounceCueTag) == 1828, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_HardenedStateBounceCueTag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_PerfectBounceCueTag) == 1832, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_PerfectBounceCueTag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_BouncyStateBounceCueTag) == 1836, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_BouncyStateBounceCueTag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_BGABouncyStateTag) == 1840, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_BGABouncyStateTag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_BGAHardenedStateTag) == 1844, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_BGAHardenedStateTag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_Landed) == 1848, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_Landed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GC_BounceFromGround) == 1852, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GC_BounceFromGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_FallDamageImmunityOnExit) == 1856, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_FallDamageImmunityOnExit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_TryingToExitMME) == 1864, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_TryingToExitMME");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_SuckedIn) == 1872, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_SuckedIn");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_PlayerBouncyState) == 1880, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_PlayerBouncyState");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_BGABoostedState) == 1888, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_BGABoostedState");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, GE_PlayerBoostedState) == 1896, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::GE_PlayerBoostedState");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, CurrentMeshRotation) == 1912, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::CurrentMeshRotation");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_AdditionalGroundBounceForceOnActorHit) == 2320, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_AdditionalGroundBounceForceOnActorHit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_AdditionalGroundForwardForceOnActorHit) == 2360, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_AdditionalGroundForwardForceOnActorHit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_AdditionalWallBounceForceOnActorHit) == 2400, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_AdditionalWallBounceForceOnActorHit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_AdditionalWallForwardForceOnActorHit) == 2440, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_AdditionalWallForwardForceOnActorHit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_InitialLaunch_UpwardAmount) == 2480, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_InitialLaunch_UpwardAmount");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_InitialLaunch_Force) == 2520, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_InitialLaunch_Force");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceGroundStickTime) == 2560, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceGroundStickTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceVelocityMaintainTime) == 2600, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceVelocityMaintainTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunchVelocityMaintainTime) == 2640, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunchVelocityMaintainTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_InitialLaunchVelocityMaintainTime) == 2680, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_InitialLaunchVelocityMaintainTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Dive_BonusGravityTime) == 2720, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Dive_BonusGravityTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Dive_BonusGravityAmount) == 2760, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Dive_BonusGravityAmount");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Gravity_Condensed) == 2800, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Gravity_Condensed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Gravity_Inflated) == 2840, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Gravity_Inflated");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ZVelocityHardMinimum) == 2880, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ZVelocityHardMinimum");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ZVelocityHardMaximum) == 2920, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ZVelocityHardMaximum");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ZVelocityToDetectPeak) == 2960, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ZVelocityToDetectPeak");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForwardBoostStartingValue) == 3000, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForwardBoostStartingValue");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Visuals_BGARotationSpeed) == 3040, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Visuals_BGARotationSpeed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Visuals_BoostForwardThreshold) == 3080, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Visuals_BoostForwardThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_StoredLandingVelocityOverrideSquaredMagnitudeThreshold) == 3120, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_StoredLandingVelocityOverrideSquaredMagnitudeThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForwardBoostChargeSpeed) == 3160, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForwardBoostChargeSpeed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceEnergy_DecayRate) == 3200, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceEnergy_DecayRate");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_GoalDirectionThreshold) == 3240, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_GoalDirectionThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_FractionOfAccelerationMagnitudePerUpdate) == 3280, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_FractionOfAccelerationMagnitudePerUpdate");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BoostThreshold) == 3320, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BoostThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinimumVelocityDragThreshold) == 3360, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinimumVelocityDragThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MaximumvelocityDragThreshold) == 3400, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MaximumvelocityDragThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MaxDragOffsetSpeedModifier) == 3440, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MaxDragOffsetSpeedModifier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceMinMagnitudeThatAppliesBounceDrag) == 3480, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceMinMagnitudeThatAppliesBounceDrag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceMaxMagnitudeThatAppliesBounceDrag) == 3520, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceMaxMagnitudeThatAppliesBounceDrag");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceMaxDragModifier) == 3560, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceMaxDragModifier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_PlayerInstigatedBounceForce) == 3600, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_PlayerInstigatedBounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BoostedBounce_ForwardForce) == 3640, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BoostedBounce_ForwardForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_KineticEnergyForwardAmountThreshold) == 3680, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_KineticEnergyForwardAmountThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BoostingTime) == 3720, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BoostingTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RealVelocitySlopeBoostVelocityThreshold) == 3760, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RealVelocitySlopeBoostVelocityThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_CheckForSlopeSphereTraceRadius) == 3800, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_CheckForSlopeSphereTraceRadius");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_TotalTerminalVelocityMagnitude) == 3840, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_TotalTerminalVelocityMagnitude");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ZTerminalVelocityMagnitude) == 3880, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ZTerminalVelocityMagnitude");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinStoredBounceEnergy) == 3920, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinStoredBounceEnergy");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_DiveHeightForMaxBounceForce) == 3960, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_DiveHeightForMaxBounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinBounceForceFromDiving) == 4000, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinBounceForceFromDiving");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MaxBounceForceFromDiving) == 4040, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MaxBounceForceFromDiving");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_PeakHeightForMaxBounceForce) == 4080, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_PeakHeightForMaxBounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MaxBounceForceFromPeak) == 4120, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MaxBounceForceFromPeak");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_CalculateFacingDireactionDirectVelocityThreshold) == 4160, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_CalculateFacingDireactionDirectVelocityThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceForMinSurfaceInfluence) == 4200, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceForMinSurfaceInfluence");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceForMaxSurfaceInfluence) == 4240, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceForMaxSurfaceInfluence");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SlantCoefficientForMaxSurfaceInfluence) == 4280, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SlantCoefficientForMaxSurfaceInfluence");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SlantCoefficientForMinSurfaceInfluence) == 4320, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SlantCoefficientForMinSurfaceInfluence");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SurfaceInfluenceModifierOnFlatterLand) == 4360, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SurfaceInfluenceModifierOnFlatterLand");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SurfaceInfluenceAtFullForwardCharge) == 4400, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SurfaceInfluenceAtFullForwardCharge");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_ZMultiplier) == 4440, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_ZMultiplier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_ZAdditive) == 4480, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_ZAdditive");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinAngleForWallBounce) == 4520, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinAngleForWallBounce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SlantCoefficientForMinGroundStickiness) == 4560, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SlantCoefficientForMinGroundStickiness");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SlantCoefficientForMaxGroundStickiness) == 4600, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SlantCoefficientForMaxGroundStickiness");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinBounceForceToBounceWhenDownHill) == 4640, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinBounceForceToBounceWhenDownHill");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinBounceForceToBounce) == 4680, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinBounceForceToBounce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BoostedBounceMinimumUpwardForce) == 4720, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BoostedBounceMinimumUpwardForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BounceForceToForwardSpeedMultiplier) == 4760, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BounceForceToForwardSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_WallImpactHardnessBounceModifier_Hard) == 4800, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_WallImpactHardnessBounceModifier_Hard");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_WallImpactHarndessBounceModifier_Soft) == 4840, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_WallImpactHarndessBounceModifier_Soft");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_WallImpactFloorModifier_Found) == 4880, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_WallImpactFloorModifier_Found");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_WallImpactFloorModifier_NotFound) == 4920, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_WallImpactFloorModifier_NotFound");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_PlayerMeshHeightOnExit) == 4960, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_PlayerMeshHeightOnExit");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SurfaceInfluenceMultiplierWhenGoingUphill) == 5000, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SurfaceInfluenceMultiplierWhenGoingUphill");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SurfaceInfluenceMultiplierWhenGoingDownhill) == 5040, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SurfaceInfluenceMultiplierWhenGoingDownhill");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SidewaysInfluenceWhenTryingToBounceForward) == 5080, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SidewaysInfluenceWhenTryingToBounceForward");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForceForMinWallBounce_OnGround) == 5120, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForceForMinWallBounce_OnGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForceForMaxWallBounce_OnGround) == 5160, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForceForMaxWallBounce_OnGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForceForMinWallBounce_InAir) == 5200, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForceForMinWallBounce_InAir");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForceForMaxWallBounce_InAir) == 5240, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForceForMaxWallBounce_InAir");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Visuals_ZAccelerationTiltModifier_OnGround) == 5280, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Visuals_ZAccelerationTiltModifier_OnGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Visuals_ZAccelerationTiltModifier_NotOnGround) == 5320, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Visuals_ZAccelerationTiltModifier_NotOnGround");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SpeedHardCap_Boosted) == 5360, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SpeedHardCap_Boosted");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_SpeedHardCap_Normal) == 5400, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_SpeedHardCap_Normal");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_Cap3DAppliedAcceleration) == 5440, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_Cap3DAppliedAcceleration");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_UpwardAngleOffset_OnProps) == 5480, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_UpwardAngleOffset_OnProps");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_UpwardAngleOffset) == 5520, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_UpwardAngleOffset");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RealVelocity_InterpSpeed) == 5560, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RealVelocity_InterpSpeed");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_AllowLaunchOffProps) == 5600, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_AllowLaunchOffProps");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_SlopeTrace_AngleOffset_Normal) == 5640, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_SlopeTrace_AngleOffset_Normal");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_SlopeTrace_AngleOffset_Boosted) == 5680, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_SlopeTrace_AngleOffset_Boosted");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_SlopeTrace_Distance) == 5720, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_SlopeTrace_Distance");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_RampLaunch_SlopeTrace_Distance_Boosted) == 5760, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_RampLaunch_SlopeTrace_Distance_Boosted");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_MinimumSuckedOutTime) == 5800, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_MinimumSuckedOutTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_AlwaysBounceWhenBoosting) == 5840, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_AlwaysBounceWhenBoosting");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_LaunchOffSurface_Angle) == 5880, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_LaunchOffSurface_Angle");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_UseBouncyBoost) == 5920, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_UseBouncyBoost");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_ForwardChargeBounceBoostThreshold) == 5960, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_ForwardChargeBounceBoostThreshold");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BouncyBoost_MinBounceForceMultiplier) == 6000, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BouncyBoost_MinBounceForceMultiplier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BouncyBoost_MinimumBounceForce) == 6040, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BouncyBoost_MinimumBounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_BouncyBoost_MaxiumumBounceForce) == 6080, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_BouncyBoost_MaxiumumBounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_DisableSpeedMultiplier) == 6120, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_DisableSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, SF_EnablePlayerBouncesAlongWalls) == 6168, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::SF_EnablePlayerBouncesAlongWalls");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, LastTouchedWaterImpactForce) == 6216, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::LastTouchedWaterImpactForce");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, LastTouchedWaterTime) == 6220, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::LastTouchedWaterTime");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, bDeNativize) == 6224, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::bDeNativize");
static_assert(offsetof(UFortMovementMode_BouncyBugExtLogic, DenativizedRuntimeDataClass) == 6232, "Offset mismatch for UFortMovementMode_BouncyBugExtLogic::DenativizedRuntimeDataClass");

// /Script/BouncyBugRuntime.FortMovementMode_BouncyBugRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_BouncyBugRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CurrentState; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInBouncingMovementTagIsActive; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuckedInTagIsActive; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuckedInTagReleased; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrimaryFirePressed; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryFirePressed; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePressed; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpPressed; // 0x003F (Size: 0x1, Type: BoolProperty)
    std::uint8_t StoredLandingVelocity[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RampLaunchVelocity[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t BounceForce[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    float AirPeakHeight; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float SuckedInHeight; // 0x008C (Size: 0x4, Type: FloatProperty)
    float StoredBounceEnergy; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float KineticEnergy_ForwardAmount; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float TimeSinceSuckedInToggled; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float StateTimer; // 0x009C (Size: 0x4, Type: FloatProperty)
    float DriftingCoefficient; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float BoostedAmount; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00A8
    float SpeedMultiplier; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierLastUpdate; // 0x00B0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, CurrentState) == 56, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::CurrentState");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bInBouncingMovementTagIsActive) == 57, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bInBouncingMovementTagIsActive");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bSuckedInTagIsActive) == 58, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bSuckedInTagIsActive");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bSuckedInTagReleased) == 59, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bSuckedInTagReleased");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bPrimaryFirePressed) == 60, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bPrimaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bSecondaryFirePressed) == 61, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bSecondaryFirePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bUsePressed) == 62, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bUsePressed");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, bJumpPressed) == 63, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::bJumpPressed");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, StoredLandingVelocity) == 64, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::StoredLandingVelocity");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, RampLaunchVelocity) == 88, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::RampLaunchVelocity");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, BounceForce) == 112, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::BounceForce");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, AirPeakHeight) == 136, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::AirPeakHeight");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, SuckedInHeight) == 140, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::SuckedInHeight");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, StoredBounceEnergy) == 144, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::StoredBounceEnergy");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, KineticEnergy_ForwardAmount) == 148, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::KineticEnergy_ForwardAmount");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, TimeSinceSuckedInToggled) == 152, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::TimeSinceSuckedInToggled");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, StateTimer) == 156, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::StateTimer");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, DriftingCoefficient) == 160, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::DriftingCoefficient");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, BoostedAmount) == 164, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::BoostedAmount");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, SpeedMultiplier) == 172, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::SpeedMultiplier");
static_assert(offsetof(UFortMovementMode_BouncyBugRuntimeData, SpeedMultiplierLastUpdate) == 176, "Offset mismatch for UFortMovementMode_BouncyBugRuntimeData::SpeedMultiplierLastUpdate");

// /Script/BouncyBugRuntime.RolyPolyTidalCraneAnimInstance
// Kind: Class; super: FortAnimInstance
class URolyPolyTidalCraneAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    float ScaredLoopAlpha; // 0x0450 (Size: 0x4, Type: FloatProperty)
    float RandomStartTime; // 0x0454 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaredAlphaCurve[0x48]; // 0x0458 (Size: 0x48, Type: StructProperty)
    float IdleAnimLength; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    float ScaredMaxTime; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHiding; // 0x04A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04A9
    float ScaredAmount; // 0x04AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URolyPolyTidalCraneAnimInstance, ScaredLoopAlpha) == 1104, "Offset mismatch for URolyPolyTidalCraneAnimInstance::ScaredLoopAlpha");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, RandomStartTime) == 1108, "Offset mismatch for URolyPolyTidalCraneAnimInstance::RandomStartTime");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, ScaredAlphaCurve) == 1112, "Offset mismatch for URolyPolyTidalCraneAnimInstance::ScaredAlphaCurve");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, IdleAnimLength) == 1184, "Offset mismatch for URolyPolyTidalCraneAnimInstance::IdleAnimLength");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, ScaredMaxTime) == 1188, "Offset mismatch for URolyPolyTidalCraneAnimInstance::ScaredMaxTime");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, bHiding) == 1192, "Offset mismatch for URolyPolyTidalCraneAnimInstance::bHiding");
static_assert(offsetof(URolyPolyTidalCraneAnimInstance, ScaredAmount) == 1196, "Offset mismatch for URolyPolyTidalCraneAnimInstance::ScaredAmount");

// /Script/BouncyBugRuntime.RolyPolyTidalCraneWeaponInterface
// Kind: Class; super: Interface
class URolyPolyTidalCraneWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
