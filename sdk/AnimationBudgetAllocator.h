/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationBudgetAllocator
 */
#pragma once
#include "Basic.h"

// /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Kind: ScriptStruct; super: none
struct FAnimationBudgetAllocatorParameters
{
public:
    float BudgetInMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinQuality; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxTickRate; // 0x0008 (Size: 0x4, Type: IntProperty)
    float WorkUnitSmoothingSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AlwaysTickFalloffAggression; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float InterpolationFalloffAggression; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t InterpolationMaxRate; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxInterpolatedComponents; // 0x001C (Size: 0x4, Type: IntProperty)
    float InterpolationTickMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float InitialEstimatedWorkUnitTimeMs; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxTickedOffsreenComponents; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t StateChangeThrottleInFrames; // 0x002C (Size: 0x4, Type: IntProperty)
    float BudgetFactorBeforeReducedWork; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float BudgetFactorBeforeReducedWorkEpsilon; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float BudgetPressureSmoothingSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t ReducedWorkThrottleMinInFrames; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t ReducedWorkThrottleMaxInFrames; // 0x0040 (Size: 0x4, Type: IntProperty)
    float BudgetFactorBeforeAggressiveReducedWork; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t ReducedWorkThrottleMaxPerFrame; // 0x0048 (Size: 0x4, Type: IntProperty)
    float BudgetPressureBeforeEmergencyReducedWork; // 0x004C (Size: 0x4, Type: FloatProperty)
    float AutoCalculatedSignificanceMaxDistance; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetInMs) == 0, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetInMs");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MinQuality) == 4, "Offset mismatch for FAnimationBudgetAllocatorParameters::MinQuality");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxTickRate) == 8, "Offset mismatch for FAnimationBudgetAllocatorParameters::MaxTickRate");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, WorkUnitSmoothingSpeed) == 12, "Offset mismatch for FAnimationBudgetAllocatorParameters::WorkUnitSmoothingSpeed");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, AlwaysTickFalloffAggression) == 16, "Offset mismatch for FAnimationBudgetAllocatorParameters::AlwaysTickFalloffAggression");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationFalloffAggression) == 20, "Offset mismatch for FAnimationBudgetAllocatorParameters::InterpolationFalloffAggression");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationMaxRate) == 24, "Offset mismatch for FAnimationBudgetAllocatorParameters::InterpolationMaxRate");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxInterpolatedComponents) == 28, "Offset mismatch for FAnimationBudgetAllocatorParameters::MaxInterpolatedComponents");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InterpolationTickMultiplier) == 32, "Offset mismatch for FAnimationBudgetAllocatorParameters::InterpolationTickMultiplier");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, InitialEstimatedWorkUnitTimeMs) == 36, "Offset mismatch for FAnimationBudgetAllocatorParameters::InitialEstimatedWorkUnitTimeMs");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, MaxTickedOffsreenComponents) == 40, "Offset mismatch for FAnimationBudgetAllocatorParameters::MaxTickedOffsreenComponents");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, StateChangeThrottleInFrames) == 44, "Offset mismatch for FAnimationBudgetAllocatorParameters::StateChangeThrottleInFrames");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWork) == 48, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetFactorBeforeReducedWork");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeReducedWorkEpsilon) == 52, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetFactorBeforeReducedWorkEpsilon");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetPressureSmoothingSpeed) == 56, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetPressureSmoothingSpeed");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMinInFrames) == 60, "Offset mismatch for FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMinInFrames");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxInFrames) == 64, "Offset mismatch for FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMaxInFrames");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetFactorBeforeAggressiveReducedWork) == 68, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetFactorBeforeAggressiveReducedWork");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, ReducedWorkThrottleMaxPerFrame) == 72, "Offset mismatch for FAnimationBudgetAllocatorParameters::ReducedWorkThrottleMaxPerFrame");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, BudgetPressureBeforeEmergencyReducedWork) == 76, "Offset mismatch for FAnimationBudgetAllocatorParameters::BudgetPressureBeforeEmergencyReducedWork");
static_assert(offsetof(FAnimationBudgetAllocatorParameters, AutoCalculatedSignificanceMaxDistance) == 80, "Offset mismatch for FAnimationBudgetAllocatorParameters::AutoCalculatedSignificanceMaxDistance");

// /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimationBudgetBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Kind: Class; super: SkeletalMeshComponent
class USkeletalMeshComponentBudgeted
{
public:
    std::uint8_t Pad_0000[0x1030]; // 0x0000
    std::uint8_t bAutoCalculateSignificance; // 0x1030 (Size: 0x1, Type: BoolProperty)
    // 0x1030 BoolProperty bAutoRegisterWithBudgetAllocator (shared storage)
    // 0x1030 BoolProperty bShouldUseActorRenderedFlag (shared storage)
};

static_assert(offsetof(USkeletalMeshComponentBudgeted, bAutoCalculateSignificance) == 4144, "Offset mismatch for USkeletalMeshComponentBudgeted::bAutoCalculateSignificance");
