/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationWarpingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_FootPlacement
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t PlantSpeedMode; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    std::uint8_t IKFootRootBone[0xC]; // 0x00CC (Size: 0xC, Type: StructProperty)
    std::uint8_t PelvisBone[0xC]; // 0x00D8 (Size: 0xC, Type: StructProperty)
    std::uint8_t PelvisSettings[0x24]; // 0x00E4 (Size: 0x24, Type: StructProperty)
    TArray<void*> LegDefinitions; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlantSettings[0x34]; // 0x0118 (Size: 0x34, Type: StructProperty)
    std::uint8_t InterpolationSettings[0x2C]; // 0x014C (Size: 0x2C, Type: StructProperty)
    std::uint8_t TraceSettings[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaseTranslationDelta[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_FootPlacement, PlantSpeedMode) == 200, "Offset mismatch for FAnimNode_FootPlacement::PlantSpeedMode");
static_assert(offsetof(FAnimNode_FootPlacement, IKFootRootBone) == 204, "Offset mismatch for FAnimNode_FootPlacement::IKFootRootBone");
static_assert(offsetof(FAnimNode_FootPlacement, PelvisBone) == 216, "Offset mismatch for FAnimNode_FootPlacement::PelvisBone");
static_assert(offsetof(FAnimNode_FootPlacement, PelvisSettings) == 228, "Offset mismatch for FAnimNode_FootPlacement::PelvisSettings");
static_assert(offsetof(FAnimNode_FootPlacement, LegDefinitions) == 264, "Offset mismatch for FAnimNode_FootPlacement::LegDefinitions");
static_assert(offsetof(FAnimNode_FootPlacement, PlantSettings) == 280, "Offset mismatch for FAnimNode_FootPlacement::PlantSettings");
static_assert(offsetof(FAnimNode_FootPlacement, InterpolationSettings) == 332, "Offset mismatch for FAnimNode_FootPlacement::InterpolationSettings");
static_assert(offsetof(FAnimNode_FootPlacement, TraceSettings) == 376, "Offset mismatch for FAnimNode_FootPlacement::TraceSettings");
static_assert(offsetof(FAnimNode_FootPlacement, BaseTranslationDelta) == 400, "Offset mismatch for FAnimNode_FootPlacement::BaseTranslationDelta");

// /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_OffsetRootBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_OffsetRootBone, Source) == 16, "Offset mismatch for FAnimNode_OffsetRootBone::Source");

// /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_OrientationWarping
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Mode; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    float TargetTime; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float OrientationAngle; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float LocomotionAngle; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocomotionDirection[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    float MinRootMotionSpeedThreshold; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float LocomotionAngleDeltaThreshold; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SpineBones; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IKFootRootBone[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    TArray<void*> IKFootBones; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    void* CurrentAnimAsset; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    float CurrentAnimAssetTime; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationAxis; // 0x0134 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0135
    float DistributedBoneOrientationAlpha; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float RotationInterpSpeed; // 0x013C (Size: 0x4, Type: FloatProperty)
    float CounterCompensateInterpSpeed; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float MaxCorrectionDegrees; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float MaxRootMotionDeltaToCompensateDegrees; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCounterCompenstateInterpolationByRootMotion; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleByGlobalBlendWeight; // 0x014D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseManualRootMotionVelocity; // 0x014E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x014F
    std::uint8_t ManualRootMotionVelocity[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t WarpingSpace; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0169
    std::uint8_t WarpingSpaceTransform[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_OrientationWarping, Mode) == 200, "Offset mismatch for FAnimNode_OrientationWarping::Mode");
static_assert(offsetof(FAnimNode_OrientationWarping, TargetTime) == 204, "Offset mismatch for FAnimNode_OrientationWarping::TargetTime");
static_assert(offsetof(FAnimNode_OrientationWarping, OrientationAngle) == 208, "Offset mismatch for FAnimNode_OrientationWarping::OrientationAngle");
static_assert(offsetof(FAnimNode_OrientationWarping, LocomotionAngle) == 212, "Offset mismatch for FAnimNode_OrientationWarping::LocomotionAngle");
static_assert(offsetof(FAnimNode_OrientationWarping, LocomotionDirection) == 216, "Offset mismatch for FAnimNode_OrientationWarping::LocomotionDirection");
static_assert(offsetof(FAnimNode_OrientationWarping, MinRootMotionSpeedThreshold) == 240, "Offset mismatch for FAnimNode_OrientationWarping::MinRootMotionSpeedThreshold");
static_assert(offsetof(FAnimNode_OrientationWarping, LocomotionAngleDeltaThreshold) == 244, "Offset mismatch for FAnimNode_OrientationWarping::LocomotionAngleDeltaThreshold");
static_assert(offsetof(FAnimNode_OrientationWarping, SpineBones) == 248, "Offset mismatch for FAnimNode_OrientationWarping::SpineBones");
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootRootBone) == 264, "Offset mismatch for FAnimNode_OrientationWarping::IKFootRootBone");
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootBones) == 280, "Offset mismatch for FAnimNode_OrientationWarping::IKFootBones");
static_assert(offsetof(FAnimNode_OrientationWarping, CurrentAnimAsset) == 296, "Offset mismatch for FAnimNode_OrientationWarping::CurrentAnimAsset");
static_assert(offsetof(FAnimNode_OrientationWarping, CurrentAnimAssetTime) == 304, "Offset mismatch for FAnimNode_OrientationWarping::CurrentAnimAssetTime");
static_assert(offsetof(FAnimNode_OrientationWarping, RotationAxis) == 308, "Offset mismatch for FAnimNode_OrientationWarping::RotationAxis");
static_assert(offsetof(FAnimNode_OrientationWarping, DistributedBoneOrientationAlpha) == 312, "Offset mismatch for FAnimNode_OrientationWarping::DistributedBoneOrientationAlpha");
static_assert(offsetof(FAnimNode_OrientationWarping, RotationInterpSpeed) == 316, "Offset mismatch for FAnimNode_OrientationWarping::RotationInterpSpeed");
static_assert(offsetof(FAnimNode_OrientationWarping, CounterCompensateInterpSpeed) == 320, "Offset mismatch for FAnimNode_OrientationWarping::CounterCompensateInterpSpeed");
static_assert(offsetof(FAnimNode_OrientationWarping, MaxCorrectionDegrees) == 324, "Offset mismatch for FAnimNode_OrientationWarping::MaxCorrectionDegrees");
static_assert(offsetof(FAnimNode_OrientationWarping, MaxRootMotionDeltaToCompensateDegrees) == 328, "Offset mismatch for FAnimNode_OrientationWarping::MaxRootMotionDeltaToCompensateDegrees");
static_assert(offsetof(FAnimNode_OrientationWarping, bCounterCompenstateInterpolationByRootMotion) == 332, "Offset mismatch for FAnimNode_OrientationWarping::bCounterCompenstateInterpolationByRootMotion");
static_assert(offsetof(FAnimNode_OrientationWarping, bScaleByGlobalBlendWeight) == 333, "Offset mismatch for FAnimNode_OrientationWarping::bScaleByGlobalBlendWeight");
static_assert(offsetof(FAnimNode_OrientationWarping, bUseManualRootMotionVelocity) == 334, "Offset mismatch for FAnimNode_OrientationWarping::bUseManualRootMotionVelocity");
static_assert(offsetof(FAnimNode_OrientationWarping, ManualRootMotionVelocity) == 336, "Offset mismatch for FAnimNode_OrientationWarping::ManualRootMotionVelocity");
static_assert(offsetof(FAnimNode_OrientationWarping, WarpingSpace) == 360, "Offset mismatch for FAnimNode_OrientationWarping::WarpingSpace");
static_assert(offsetof(FAnimNode_OrientationWarping, WarpingSpaceTransform) == 368, "Offset mismatch for FAnimNode_OrientationWarping::WarpingSpaceTransform");

// /Script/AnimationWarpingRuntime.AnimNode_OverrideRootMotion
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_OverrideRootMotion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_OverrideRootMotion, Source) == 16, "Offset mismatch for FAnimNode_OverrideRootMotion::Source");

// /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_SlopeWarping
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t IKFootRootBone[0xC]; // 0x00E0 (Size: 0xC, Type: StructProperty)
    std::uint8_t PelvisBone[0xC]; // 0x00EC (Size: 0xC, Type: StructProperty)
    TArray<void*> FeetDefinitions; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FeetData; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PelvisOffsetInterpolator[0x60]; // 0x0118 (Size: 0x60, Type: StructProperty)
    std::uint8_t GravityDir[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t CustomFloorOffset[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    float CachedDeltaTime; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01AC
    std::uint8_t TargetFloorNormalWorldSpace[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloorNormalInterpolator[0x60]; // 0x01C8 (Size: 0x60, Type: StructProperty)
    std::uint8_t TargetFloorOffsetLocalSpace[0x18]; // 0x0228 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloorOffsetInterpolator[0x60]; // 0x0240 (Size: 0x60, Type: StructProperty)
    float MaxStepHeight; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFloorSmoothingInitialized; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    // 0x02A4 BoolProperty bKeepMeshInsideOfCapsule (shared storage)
    // 0x02A4 BoolProperty bPullPelvisDown (shared storage)
    // 0x02A4 BoolProperty bShowDebug (shared storage)
    // 0x02A4 BoolProperty bUseCustomFloorOffset (shared storage)
    // 0x02A4 BoolProperty bWasOnGround (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x02A5
    std::uint8_t ActorLocation[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravityDirCompSpace[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_SlopeWarping, IKFootRootBone) == 224, "Offset mismatch for FAnimNode_SlopeWarping::IKFootRootBone");
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisBone) == 236, "Offset mismatch for FAnimNode_SlopeWarping::PelvisBone");
static_assert(offsetof(FAnimNode_SlopeWarping, FeetDefinitions) == 248, "Offset mismatch for FAnimNode_SlopeWarping::FeetDefinitions");
static_assert(offsetof(FAnimNode_SlopeWarping, FeetData) == 264, "Offset mismatch for FAnimNode_SlopeWarping::FeetData");
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisOffsetInterpolator) == 280, "Offset mismatch for FAnimNode_SlopeWarping::PelvisOffsetInterpolator");
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDir) == 376, "Offset mismatch for FAnimNode_SlopeWarping::GravityDir");
static_assert(offsetof(FAnimNode_SlopeWarping, CustomFloorOffset) == 400, "Offset mismatch for FAnimNode_SlopeWarping::CustomFloorOffset");
static_assert(offsetof(FAnimNode_SlopeWarping, CachedDeltaTime) == 424, "Offset mismatch for FAnimNode_SlopeWarping::CachedDeltaTime");
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorNormalWorldSpace) == 432, "Offset mismatch for FAnimNode_SlopeWarping::TargetFloorNormalWorldSpace");
static_assert(offsetof(FAnimNode_SlopeWarping, FloorNormalInterpolator) == 456, "Offset mismatch for FAnimNode_SlopeWarping::FloorNormalInterpolator");
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorOffsetLocalSpace) == 552, "Offset mismatch for FAnimNode_SlopeWarping::TargetFloorOffsetLocalSpace");
static_assert(offsetof(FAnimNode_SlopeWarping, FloorOffsetInterpolator) == 576, "Offset mismatch for FAnimNode_SlopeWarping::FloorOffsetInterpolator");
static_assert(offsetof(FAnimNode_SlopeWarping, MaxStepHeight) == 672, "Offset mismatch for FAnimNode_SlopeWarping::MaxStepHeight");
static_assert(offsetof(FAnimNode_SlopeWarping, bFloorSmoothingInitialized) == 676, "Offset mismatch for FAnimNode_SlopeWarping::bFloorSmoothingInitialized");
static_assert(offsetof(FAnimNode_SlopeWarping, ActorLocation) == 680, "Offset mismatch for FAnimNode_SlopeWarping::ActorLocation");
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDirCompSpace) == 704, "Offset mismatch for FAnimNode_SlopeWarping::GravityDirCompSpace");

// /Script/AnimationWarpingRuntime.AnimNode_Steering
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_Steering
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t TargetOrientation[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bMirrored; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    float ProceduralTargetTime; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float TargetTime; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float AnimatedTargetTime; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float RootMotionThreshold; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float DisableSteeringBelowSpeed; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float DisableAdditiveBelowSpeed; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float MinScaleRatio; // 0x010C (Size: 0x4, Type: FloatProperty)
    float MaxScaleRatio; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0114
    void* MirrorDataTable; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* CurrentAnimAsset; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    float CurrentAnimAssetTime; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_Steering, TargetOrientation) == 208, "Offset mismatch for FAnimNode_Steering::TargetOrientation");
static_assert(offsetof(FAnimNode_Steering, bMirrored) == 240, "Offset mismatch for FAnimNode_Steering::bMirrored");
static_assert(offsetof(FAnimNode_Steering, ProceduralTargetTime) == 244, "Offset mismatch for FAnimNode_Steering::ProceduralTargetTime");
static_assert(offsetof(FAnimNode_Steering, TargetTime) == 248, "Offset mismatch for FAnimNode_Steering::TargetTime");
static_assert(offsetof(FAnimNode_Steering, AnimatedTargetTime) == 252, "Offset mismatch for FAnimNode_Steering::AnimatedTargetTime");
static_assert(offsetof(FAnimNode_Steering, RootMotionThreshold) == 256, "Offset mismatch for FAnimNode_Steering::RootMotionThreshold");
static_assert(offsetof(FAnimNode_Steering, DisableSteeringBelowSpeed) == 260, "Offset mismatch for FAnimNode_Steering::DisableSteeringBelowSpeed");
static_assert(offsetof(FAnimNode_Steering, DisableAdditiveBelowSpeed) == 264, "Offset mismatch for FAnimNode_Steering::DisableAdditiveBelowSpeed");
static_assert(offsetof(FAnimNode_Steering, MinScaleRatio) == 268, "Offset mismatch for FAnimNode_Steering::MinScaleRatio");
static_assert(offsetof(FAnimNode_Steering, MaxScaleRatio) == 272, "Offset mismatch for FAnimNode_Steering::MaxScaleRatio");
static_assert(offsetof(FAnimNode_Steering, MirrorDataTable) == 280, "Offset mismatch for FAnimNode_Steering::MirrorDataTable");
static_assert(offsetof(FAnimNode_Steering, CurrentAnimAsset) == 288, "Offset mismatch for FAnimNode_Steering::CurrentAnimAsset");
static_assert(offsetof(FAnimNode_Steering, CurrentAnimAssetTime) == 296, "Offset mismatch for FAnimNode_Steering::CurrentAnimAssetTime");

// /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_StrideWarping
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Mode; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t StrideDirection[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    float StrideScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float LocomotionSpeed; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MinRootMotionSpeedThreshold; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PelvisBone[0xC]; // 0x00F4 (Size: 0xC, Type: StructProperty)
    std::uint8_t IKFootRootBone[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> FootDefinitions; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StrideScaleModifier[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloorNormalDirection[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t GravityDirection[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t PelvisIKFootSolver[0x80]; // 0x0178 (Size: 0x80, Type: StructProperty)
    std::uint8_t bOrientStrideDirectionUsingFloorNormal; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCompensateIKUsingFKThighRotation; // 0x01F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampIKUsingFKLimits; // 0x01FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableIfMissingRootMotion; // 0x01FB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_StrideWarping, Mode) == 200, "Offset mismatch for FAnimNode_StrideWarping::Mode");
static_assert(offsetof(FAnimNode_StrideWarping, StrideDirection) == 208, "Offset mismatch for FAnimNode_StrideWarping::StrideDirection");
static_assert(offsetof(FAnimNode_StrideWarping, StrideScale) == 232, "Offset mismatch for FAnimNode_StrideWarping::StrideScale");
static_assert(offsetof(FAnimNode_StrideWarping, LocomotionSpeed) == 236, "Offset mismatch for FAnimNode_StrideWarping::LocomotionSpeed");
static_assert(offsetof(FAnimNode_StrideWarping, MinRootMotionSpeedThreshold) == 240, "Offset mismatch for FAnimNode_StrideWarping::MinRootMotionSpeedThreshold");
static_assert(offsetof(FAnimNode_StrideWarping, PelvisBone) == 244, "Offset mismatch for FAnimNode_StrideWarping::PelvisBone");
static_assert(offsetof(FAnimNode_StrideWarping, IKFootRootBone) == 256, "Offset mismatch for FAnimNode_StrideWarping::IKFootRootBone");
static_assert(offsetof(FAnimNode_StrideWarping, FootDefinitions) == 272, "Offset mismatch for FAnimNode_StrideWarping::FootDefinitions");
static_assert(offsetof(FAnimNode_StrideWarping, StrideScaleModifier) == 288, "Offset mismatch for FAnimNode_StrideWarping::StrideScaleModifier");
static_assert(offsetof(FAnimNode_StrideWarping, FloorNormalDirection) == 312, "Offset mismatch for FAnimNode_StrideWarping::FloorNormalDirection");
static_assert(offsetof(FAnimNode_StrideWarping, GravityDirection) == 344, "Offset mismatch for FAnimNode_StrideWarping::GravityDirection");
static_assert(offsetof(FAnimNode_StrideWarping, PelvisIKFootSolver) == 376, "Offset mismatch for FAnimNode_StrideWarping::PelvisIKFootSolver");
static_assert(offsetof(FAnimNode_StrideWarping, bOrientStrideDirectionUsingFloorNormal) == 504, "Offset mismatch for FAnimNode_StrideWarping::bOrientStrideDirectionUsingFloorNormal");
static_assert(offsetof(FAnimNode_StrideWarping, bCompensateIKUsingFKThighRotation) == 505, "Offset mismatch for FAnimNode_StrideWarping::bCompensateIKUsingFKThighRotation");
static_assert(offsetof(FAnimNode_StrideWarping, bClampIKUsingFKLimits) == 506, "Offset mismatch for FAnimNode_StrideWarping::bClampIKUsingFKLimits");
static_assert(offsetof(FAnimNode_StrideWarping, bDisableIfMissingRootMotion) == 507, "Offset mismatch for FAnimNode_StrideWarping::bDisableIfMissingRootMotion");

// /Script/AnimationWarpingRuntime.AnimNode_WarpTest
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_WarpTest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> Transforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float SecondsToWait; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_WarpTest, Source) == 16, "Offset mismatch for FAnimNode_WarpTest::Source");
static_assert(offsetof(FAnimNode_WarpTest, Transforms) == 32, "Offset mismatch for FAnimNode_WarpTest::Transforms");
static_assert(offsetof(FAnimNode_WarpTest, SecondsToWait) == 48, "Offset mismatch for FAnimNode_WarpTest::SecondsToWait");

// /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
// Kind: ScriptStruct; super: none
struct FFootPlacemenLegDefinition
{
public:
    std::uint8_t FKFootBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t IKFootBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t BallBone[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::int32_t NumBonesInLimb; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t SpeedCurveName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t DisableLockCurveName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName DisableLegCurveName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFootPlacemenLegDefinition, FKFootBone) == 0, "Offset mismatch for FFootPlacemenLegDefinition::FKFootBone");
static_assert(offsetof(FFootPlacemenLegDefinition, IKFootBone) == 12, "Offset mismatch for FFootPlacemenLegDefinition::IKFootBone");
static_assert(offsetof(FFootPlacemenLegDefinition, BallBone) == 24, "Offset mismatch for FFootPlacemenLegDefinition::BallBone");
static_assert(offsetof(FFootPlacemenLegDefinition, NumBonesInLimb) == 36, "Offset mismatch for FFootPlacemenLegDefinition::NumBonesInLimb");
static_assert(offsetof(FFootPlacemenLegDefinition, SpeedCurveName) == 40, "Offset mismatch for FFootPlacemenLegDefinition::SpeedCurveName");
static_assert(offsetof(FFootPlacemenLegDefinition, DisableLockCurveName) == 44, "Offset mismatch for FFootPlacemenLegDefinition::DisableLockCurveName");
static_assert(offsetof(FFootPlacemenLegDefinition, DisableLegCurveName) == 48, "Offset mismatch for FFootPlacemenLegDefinition::DisableLegCurveName");

// /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
// Kind: ScriptStruct; super: none
struct FFootPlacementInterpolationSettings
{
public:
    float UnplantLinearStiffness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float UnplantLinearDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float UnplantAngularStiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float UnplantAngularDamping; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SeparationStiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SeparationDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FloorLinearStiffness; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FloorLinearDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FloorAngularStiffness; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float FloorAngularDamping; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableFloorInterpolation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSmoothRootBone; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSeparationInterpolation; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantLinearStiffness) == 0, "Offset mismatch for FFootPlacementInterpolationSettings::UnplantLinearStiffness");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantLinearDamping) == 4, "Offset mismatch for FFootPlacementInterpolationSettings::UnplantLinearDamping");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantAngularStiffness) == 8, "Offset mismatch for FFootPlacementInterpolationSettings::UnplantAngularStiffness");
static_assert(offsetof(FFootPlacementInterpolationSettings, UnplantAngularDamping) == 12, "Offset mismatch for FFootPlacementInterpolationSettings::UnplantAngularDamping");
static_assert(offsetof(FFootPlacementInterpolationSettings, SeparationStiffness) == 16, "Offset mismatch for FFootPlacementInterpolationSettings::SeparationStiffness");
static_assert(offsetof(FFootPlacementInterpolationSettings, SeparationDamping) == 20, "Offset mismatch for FFootPlacementInterpolationSettings::SeparationDamping");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorLinearStiffness) == 24, "Offset mismatch for FFootPlacementInterpolationSettings::FloorLinearStiffness");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorLinearDamping) == 28, "Offset mismatch for FFootPlacementInterpolationSettings::FloorLinearDamping");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorAngularStiffness) == 32, "Offset mismatch for FFootPlacementInterpolationSettings::FloorAngularStiffness");
static_assert(offsetof(FFootPlacementInterpolationSettings, FloorAngularDamping) == 36, "Offset mismatch for FFootPlacementInterpolationSettings::FloorAngularDamping");
static_assert(offsetof(FFootPlacementInterpolationSettings, bEnableFloorInterpolation) == 40, "Offset mismatch for FFootPlacementInterpolationSettings::bEnableFloorInterpolation");
static_assert(offsetof(FFootPlacementInterpolationSettings, bSmoothRootBone) == 41, "Offset mismatch for FFootPlacementInterpolationSettings::bSmoothRootBone");
static_assert(offsetof(FFootPlacementInterpolationSettings, bEnableSeparationInterpolation) == 42, "Offset mismatch for FFootPlacementInterpolationSettings::bEnableSeparationInterpolation");

// /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
// Kind: ScriptStruct; super: none
struct FFootPlacementPelvisSettings
{
public:
    float MaxOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LinearStiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LinearDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float HorizontalRebalancingWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxOffsetHorizontal; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float HeelLiftRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PelvisHeightMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActorMovementCompensationMode; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableInterpolation; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisablePelvisOffsetInAir; // 0x001B (Size: 0x1, Type: BoolProperty)
    FName DisablePelvisCurveName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFootPlacementPelvisSettings, MaxOffset) == 0, "Offset mismatch for FFootPlacementPelvisSettings::MaxOffset");
static_assert(offsetof(FFootPlacementPelvisSettings, LinearStiffness) == 4, "Offset mismatch for FFootPlacementPelvisSettings::LinearStiffness");
static_assert(offsetof(FFootPlacementPelvisSettings, LinearDamping) == 8, "Offset mismatch for FFootPlacementPelvisSettings::LinearDamping");
static_assert(offsetof(FFootPlacementPelvisSettings, HorizontalRebalancingWeight) == 12, "Offset mismatch for FFootPlacementPelvisSettings::HorizontalRebalancingWeight");
static_assert(offsetof(FFootPlacementPelvisSettings, MaxOffsetHorizontal) == 16, "Offset mismatch for FFootPlacementPelvisSettings::MaxOffsetHorizontal");
static_assert(offsetof(FFootPlacementPelvisSettings, HeelLiftRatio) == 20, "Offset mismatch for FFootPlacementPelvisSettings::HeelLiftRatio");
static_assert(offsetof(FFootPlacementPelvisSettings, PelvisHeightMode) == 24, "Offset mismatch for FFootPlacementPelvisSettings::PelvisHeightMode");
static_assert(offsetof(FFootPlacementPelvisSettings, ActorMovementCompensationMode) == 25, "Offset mismatch for FFootPlacementPelvisSettings::ActorMovementCompensationMode");
static_assert(offsetof(FFootPlacementPelvisSettings, bEnableInterpolation) == 26, "Offset mismatch for FFootPlacementPelvisSettings::bEnableInterpolation");
static_assert(offsetof(FFootPlacementPelvisSettings, bDisablePelvisOffsetInAir) == 27, "Offset mismatch for FFootPlacementPelvisSettings::bDisablePelvisOffsetInAir");
static_assert(offsetof(FFootPlacementPelvisSettings, DisablePelvisCurveName) == 28, "Offset mismatch for FFootPlacementPelvisSettings::DisablePelvisCurveName");

// /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
// Kind: ScriptStruct; super: none
struct FFootPlacementPlantSettings
{
public:
    float SpeedThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DistanceToGround; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LockType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float UnplantRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ReplantRadiusRatio; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float UnplantAngle; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ReplantAngleRatio; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxExtensionRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinExtensionRatio; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SeparatingDistance; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float UnalignmentSpeedThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AnkleTwistReduction; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReconstructWorldPlantFromVelocity; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdjustHeelBeforePlanting; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFootPlacementPlantSettings, SpeedThreshold) == 0, "Offset mismatch for FFootPlacementPlantSettings::SpeedThreshold");
static_assert(offsetof(FFootPlacementPlantSettings, DistanceToGround) == 4, "Offset mismatch for FFootPlacementPlantSettings::DistanceToGround");
static_assert(offsetof(FFootPlacementPlantSettings, LockType) == 8, "Offset mismatch for FFootPlacementPlantSettings::LockType");
static_assert(offsetof(FFootPlacementPlantSettings, UnplantRadius) == 12, "Offset mismatch for FFootPlacementPlantSettings::UnplantRadius");
static_assert(offsetof(FFootPlacementPlantSettings, ReplantRadiusRatio) == 16, "Offset mismatch for FFootPlacementPlantSettings::ReplantRadiusRatio");
static_assert(offsetof(FFootPlacementPlantSettings, UnplantAngle) == 20, "Offset mismatch for FFootPlacementPlantSettings::UnplantAngle");
static_assert(offsetof(FFootPlacementPlantSettings, ReplantAngleRatio) == 24, "Offset mismatch for FFootPlacementPlantSettings::ReplantAngleRatio");
static_assert(offsetof(FFootPlacementPlantSettings, MaxExtensionRatio) == 28, "Offset mismatch for FFootPlacementPlantSettings::MaxExtensionRatio");
static_assert(offsetof(FFootPlacementPlantSettings, MinExtensionRatio) == 32, "Offset mismatch for FFootPlacementPlantSettings::MinExtensionRatio");
static_assert(offsetof(FFootPlacementPlantSettings, SeparatingDistance) == 36, "Offset mismatch for FFootPlacementPlantSettings::SeparatingDistance");
static_assert(offsetof(FFootPlacementPlantSettings, UnalignmentSpeedThreshold) == 40, "Offset mismatch for FFootPlacementPlantSettings::UnalignmentSpeedThreshold");
static_assert(offsetof(FFootPlacementPlantSettings, AnkleTwistReduction) == 44, "Offset mismatch for FFootPlacementPlantSettings::AnkleTwistReduction");
static_assert(offsetof(FFootPlacementPlantSettings, bReconstructWorldPlantFromVelocity) == 48, "Offset mismatch for FFootPlacementPlantSettings::bReconstructWorldPlantFromVelocity");
static_assert(offsetof(FFootPlacementPlantSettings, bAdjustHeelBeforePlanting) == 49, "Offset mismatch for FFootPlacementPlantSettings::bAdjustHeelBeforePlanting");

// /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
// Kind: ScriptStruct; super: none
struct FFootPlacementRootDefinition
{
public:
    std::uint8_t PelvisBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t IKRootBone[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFootPlacementRootDefinition, PelvisBone) == 0, "Offset mismatch for FFootPlacementRootDefinition::PelvisBone");
static_assert(offsetof(FFootPlacementRootDefinition, IKRootBone) == 12, "Offset mismatch for FFootPlacementRootDefinition::IKRootBone");

// /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
// Kind: ScriptStruct; super: none
struct FFootPlacementTraceSettings
{
public:
    float StartOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EndOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SweepRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableComplexTrace; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ComplexTraceChannel; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    float MaxGroundPenetration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SimpleTraceChannel; // 0x0014 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEnabled; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFootPlacementTraceSettings, StartOffset) == 0, "Offset mismatch for FFootPlacementTraceSettings::StartOffset");
static_assert(offsetof(FFootPlacementTraceSettings, EndOffset) == 4, "Offset mismatch for FFootPlacementTraceSettings::EndOffset");
static_assert(offsetof(FFootPlacementTraceSettings, SweepRadius) == 8, "Offset mismatch for FFootPlacementTraceSettings::SweepRadius");
static_assert(offsetof(FFootPlacementTraceSettings, bDisableComplexTrace) == 12, "Offset mismatch for FFootPlacementTraceSettings::bDisableComplexTrace");
static_assert(offsetof(FFootPlacementTraceSettings, ComplexTraceChannel) == 13, "Offset mismatch for FFootPlacementTraceSettings::ComplexTraceChannel");
static_assert(offsetof(FFootPlacementTraceSettings, MaxGroundPenetration) == 16, "Offset mismatch for FFootPlacementTraceSettings::MaxGroundPenetration");
static_assert(offsetof(FFootPlacementTraceSettings, SimpleTraceChannel) == 20, "Offset mismatch for FFootPlacementTraceSettings::SimpleTraceChannel");
static_assert(offsetof(FFootPlacementTraceSettings, bEnabled) == 21, "Offset mismatch for FFootPlacementTraceSettings::bEnabled");

// /Script/AnimationWarpingRuntime.OffsetRootBoneAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FOffsetRootBoneAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimationWarpingRuntime.SlopeWarpingFootData
// Kind: ScriptStruct; super: none
struct FSlopeWarpingFootData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
// Kind: ScriptStruct; super: none
struct FSlopeWarpingFootDefinition
{
public:
    std::uint8_t IKFootBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t FKFootBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::int32_t NumBonesInLimb; // 0x0018 (Size: 0x4, Type: IntProperty)
    float FootSize; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlopeWarpingFootDefinition, IKFootBone) == 0, "Offset mismatch for FSlopeWarpingFootDefinition::IKFootBone");
static_assert(offsetof(FSlopeWarpingFootDefinition, FKFootBone) == 12, "Offset mismatch for FSlopeWarpingFootDefinition::FKFootBone");
static_assert(offsetof(FSlopeWarpingFootDefinition, NumBonesInLimb) == 24, "Offset mismatch for FSlopeWarpingFootDefinition::NumBonesInLimb");
static_assert(offsetof(FSlopeWarpingFootDefinition, FootSize) == 28, "Offset mismatch for FSlopeWarpingFootDefinition::FootSize");

// /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
// Kind: ScriptStruct; super: none
struct FStrideWarpingFootDefinition
{
public:
    std::uint8_t IKFootBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t FKFootBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t ThighBone[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStrideWarpingFootDefinition, IKFootBone) == 0, "Offset mismatch for FStrideWarpingFootDefinition::IKFootBone");
static_assert(offsetof(FStrideWarpingFootDefinition, FKFootBone) == 12, "Offset mismatch for FStrideWarpingFootDefinition::FKFootBone");
static_assert(offsetof(FStrideWarpingFootDefinition, ThighBone) == 24, "Offset mismatch for FStrideWarpingFootDefinition::ThighBone");

// /Script/AnimationWarpingRuntime.AnimationWarpingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimationWarpingLibrary
{
public:
    std::uint8_t Opaque[1];
};
