/**
 * decamp dumper generated SDK
 * Package: /Script/BoneRattlerGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BoneRattlerGameplayRuntime.BoneRattlerPawnSet
// Kind: ScriptStruct; super: none
struct FBoneRattlerPawnSet
{
public:
    TSet<void*> Pawns; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FBoneRattlerPawnSet, Pawns) == 0, "Offset mismatch for FBoneRattlerPawnSet::Pawns");

// /Script/BoneRattlerGameplayRuntime.FortGameStateComponent_BoneRattler
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_BoneRattler
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> WallRevealInstigatorTargetsMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D0
    TSet<void*> TrackedPawns; // 0x00F0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortGameStateComponent_BoneRattler, WallRevealInstigatorTargetsMap) == 192, "Offset mismatch for UFortGameStateComponent_BoneRattler::WallRevealInstigatorTargetsMap");
static_assert(offsetof(UFortGameStateComponent_BoneRattler, TrackedPawns) == 240, "Offset mismatch for UFortGameStateComponent_BoneRattler::TrackedPawns");

// /Script/BoneRattlerGameplayRuntime.FortPawnComponent_BoneRattler
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_BoneRattler
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnWallRevealTargetPlayerPawnsUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> WallRevealTargetPlayerPawns; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Hotfix_WallRevealApplyTeammates[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealMaxDistance[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealSquadToInstigatorDistance[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealSquadPosAngleDegreesThreshold[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealSquadProjectedMaxWidth[0x30]; // 0x01A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealSquadProjectedAngleDegreesThreshold[0x30]; // 0x01D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallRevealSquadImpactPosMaxAngleDegreesThreshold[0x30]; // 0x0208 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerPawnsBlockLOS[0x30]; // 0x0238 (Size: 0x30, Type: StructProperty)
    std::uint8_t VehiclesBlockLOS[0x30]; // 0x0268 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSTraceComplex[0x30]; // 0x0298 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSTraceChannel; // 0x02C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02C9
    TArray<void*> CrouchedTraceOffsets; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NormalTraceOffsets; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WallRevealedHostilePlayerEventTag[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_BoneRattler, OnWallRevealTargetPlayerPawnsUpdated) == 200, "Offset mismatch for UFortPawnComponent_BoneRattler::OnWallRevealTargetPlayerPawnsUpdated");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealTargetPlayerPawns) == 216, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealTargetPlayerPawns");
static_assert(offsetof(UFortPawnComponent_BoneRattler, Hotfix_WallRevealApplyTeammates) == 232, "Offset mismatch for UFortPawnComponent_BoneRattler::Hotfix_WallRevealApplyTeammates");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealMaxDistance) == 280, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealMaxDistance");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealSquadToInstigatorDistance) == 328, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealSquadToInstigatorDistance");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealSquadPosAngleDegreesThreshold) == 376, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealSquadPosAngleDegreesThreshold");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealSquadProjectedMaxWidth) == 424, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealSquadProjectedMaxWidth");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealSquadProjectedAngleDegreesThreshold) == 472, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealSquadProjectedAngleDegreesThreshold");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealSquadImpactPosMaxAngleDegreesThreshold) == 520, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealSquadImpactPosMaxAngleDegreesThreshold");
static_assert(offsetof(UFortPawnComponent_BoneRattler, PlayerPawnsBlockLOS) == 568, "Offset mismatch for UFortPawnComponent_BoneRattler::PlayerPawnsBlockLOS");
static_assert(offsetof(UFortPawnComponent_BoneRattler, VehiclesBlockLOS) == 616, "Offset mismatch for UFortPawnComponent_BoneRattler::VehiclesBlockLOS");
static_assert(offsetof(UFortPawnComponent_BoneRattler, LOSTraceComplex) == 664, "Offset mismatch for UFortPawnComponent_BoneRattler::LOSTraceComplex");
static_assert(offsetof(UFortPawnComponent_BoneRattler, LOSTraceChannel) == 712, "Offset mismatch for UFortPawnComponent_BoneRattler::LOSTraceChannel");
static_assert(offsetof(UFortPawnComponent_BoneRattler, CrouchedTraceOffsets) == 720, "Offset mismatch for UFortPawnComponent_BoneRattler::CrouchedTraceOffsets");
static_assert(offsetof(UFortPawnComponent_BoneRattler, NormalTraceOffsets) == 736, "Offset mismatch for UFortPawnComponent_BoneRattler::NormalTraceOffsets");
static_assert(offsetof(UFortPawnComponent_BoneRattler, WallRevealedHostilePlayerEventTag) == 752, "Offset mismatch for UFortPawnComponent_BoneRattler::WallRevealedHostilePlayerEventTag");

// /Script/BoneRattlerGameplayRuntime.TargetingSelectionTask_BoneRattlerLight
// Kind: Class; super: TargetingSelectionTask_AOE_FromCamera
class UTargetingSelectionTask_BoneRattlerLight
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    TMap<void*, void*> RarityToTraceDistance; // 0x01C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UTargetingSelectionTask_BoneRattlerLight, RarityToTraceDistance) == 456, "Offset mismatch for UTargetingSelectionTask_BoneRattlerLight::RarityToTraceDistance");
