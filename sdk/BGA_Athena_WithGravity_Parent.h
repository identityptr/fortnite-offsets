/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/Items/Consumables/Parents/BGA_Athena_WithGravity_Parent
 */
#pragma once
#include "Basic.h"

// /Game/Athena/Items/Consumables/Parents/BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
// Kind: BlueprintGeneratedClass; super: BuildingGameplayActor
class UBGA_Athena_WithGravity_Parent_C
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0920 (Size: 0x10, Type: StructProperty)
    void* StaticMesh; // 0x0930 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0938
    std::uint8_t ResumeGravSimOnBegin; // 0x0940 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResumeSimulation; // 0x0941 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0942
    std::uint8_t NullHit[0xF8]; // 0x0948 (Size: 0xF8, Type: StructProperty)
    std::uint8_t GravImpact_Loc[0x18]; // 0x0A40 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravHitNormal[0x18]; // 0x0A58 (Size: 0x18, Type: StructProperty)
    double GravMaxSlope; // 0x0A70 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CheckForBounce; // 0x0A78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0A79
    double ForcedBounceExtraZ; // 0x0A80 (Size: 0x8, Type: DoubleProperty)
    std::int32_t ForcedBounceCurrentCount; // 0x0A88 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0A8C
    double ForcedBounceMult; // 0x0A90 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> GravFoundBuildingOnDied; // 0x0A98 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RepCollision; // 0x0AA8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0AA9
    void* AdditionalBounceObject; // 0x0AB0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ForcedBounceMaxCount; // 0x0AB8 (Size: 0x4, Type: IntProperty)
    std::uint8_t ForceBounce; // 0x0ABC (Size: 0x1, Type: BoolProperty)
    std::uint8_t CountNonForceBounces; // 0x0ABD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0ABE
    double BounceExtraZ; // 0x0AC0 (Size: 0x8, Type: DoubleProperty)
    double BounceMult; // 0x0AC8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ShouldAttach; // 0x0AD0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0AD1
    TArray<void*> ActorsToNotAttachTo; // 0x0AD8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DontAttachToOthersOfThisClass; // 0x0AE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DebugText; // 0x0AE9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldNotReattach; // 0x0AEA (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlockStoppingSim; // 0x0AEB (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatePawnAndVehicleCollisionOnStop; // 0x0AEC (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowReattachmentToActors; // 0x0AED (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x2]; // 0x0AEE
    std::uint8_t StopSimHitResult[0xF8]; // 0x0AF0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t StopSimServerLocation[0x18]; // 0x0BE8 (Size: 0x18, Type: StructProperty)
    double BounceAwayFromLocation_MinSpeed; // 0x0C00 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BounceOffTires; // 0x0C08 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBounceOnHitNormal; // 0x0C09 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCalledStopSim; // 0x0C0A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBounceOffVehicles; // 0x0C0B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, UberGraphFrame) == 2336, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::UberGraphFrame");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, StaticMesh) == 2352, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::StaticMesh");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ResumeGravSimOnBegin) == 2368, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ResumeGravSimOnBegin");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, bResumeSimulation) == 2369, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::bResumeSimulation");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, NullHit) == 2376, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::NullHit");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, GravImpact_Loc) == 2624, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::GravImpact_Loc");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, GravHitNormal) == 2648, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::GravHitNormal");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, GravMaxSlope) == 2672, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::GravMaxSlope");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, CheckForBounce) == 2680, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::CheckForBounce");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ForcedBounceExtraZ) == 2688, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ForcedBounceExtraZ");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ForcedBounceCurrentCount) == 2696, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ForcedBounceCurrentCount");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ForcedBounceMult) == 2704, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ForcedBounceMult");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, GravFoundBuildingOnDied) == 2712, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::GravFoundBuildingOnDied");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, RepCollision) == 2728, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::RepCollision");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, AdditionalBounceObject) == 2736, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::AdditionalBounceObject");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ForcedBounceMaxCount) == 2744, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ForcedBounceMaxCount");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ForceBounce) == 2748, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ForceBounce");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, CountNonForceBounces) == 2749, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::CountNonForceBounces");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, BounceExtraZ) == 2752, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::BounceExtraZ");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, BounceMult) == 2760, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::BounceMult");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ShouldAttach) == 2768, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ShouldAttach");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ActorsToNotAttachTo) == 2776, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ActorsToNotAttachTo");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, DontAttachToOthersOfThisClass) == 2792, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::DontAttachToOthersOfThisClass");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, DebugText) == 2793, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::DebugText");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, ShouldNotReattach) == 2794, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::ShouldNotReattach");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, BlockStoppingSim) == 2795, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::BlockStoppingSim");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, DeactivatePawnAndVehicleCollisionOnStop) == 2796, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::DeactivatePawnAndVehicleCollisionOnStop");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, AllowReattachmentToActors) == 2797, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::AllowReattachmentToActors");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, StopSimHitResult) == 2800, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::StopSimHitResult");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, StopSimServerLocation) == 3048, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::StopSimServerLocation");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, BounceAwayFromLocation_MinSpeed) == 3072, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::BounceAwayFromLocation_MinSpeed");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, BounceOffTires) == 3080, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::BounceOffTires");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, bBounceOnHitNormal) == 3081, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::bBounceOnHitNormal");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, bCalledStopSim) == 3082, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::bCalledStopSim");
static_assert(offsetof(UBGA_Athena_WithGravity_Parent_C, bBounceOffVehicles) == 3083, "Offset mismatch for UBGA_Athena_WithGravity_Parent_C::bBounceOffVehicles");
