/**
 * decamp dumper generated SDK
 * Package: /Script/TheShapeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TheShapeRuntime.FortGameFrameworkComponent_PlayspaceContextualReactions
// Kind: Class; super: FortGameFrameworkComponent_ContextualReactions
class UFortGameFrameworkComponent_PlayspaceContextualReactions
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ReactionsDataRegistry[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    float AnalyticFlushFrequencyInSeconds; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyReactionToParticipants; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3B]; // 0x00F5
    void* LoadedDataTable; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameFrameworkComponent_PlayspaceContextualReactions, ReactionsDataRegistry) == 192, "Offset mismatch for UFortGameFrameworkComponent_PlayspaceContextualReactions::ReactionsDataRegistry");
static_assert(offsetof(UFortGameFrameworkComponent_PlayspaceContextualReactions, AnalyticFlushFrequencyInSeconds) == 240, "Offset mismatch for UFortGameFrameworkComponent_PlayspaceContextualReactions::AnalyticFlushFrequencyInSeconds");
static_assert(offsetof(UFortGameFrameworkComponent_PlayspaceContextualReactions, bApplyReactionToParticipants) == 244, "Offset mismatch for UFortGameFrameworkComponent_PlayspaceContextualReactions::bApplyReactionToParticipants");
static_assert(offsetof(UFortGameFrameworkComponent_PlayspaceContextualReactions, LoadedDataTable) == 304, "Offset mismatch for UFortGameFrameworkComponent_PlayspaceContextualReactions::LoadedDataTable");

// /Script/TheShapeRuntime.TheShapeGameplayVolume
// Kind: Class; super: GameplayVolume
class UTheShapeGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* RelevantPlayer; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    double NextLookAtPlayerServerTimestamp; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t PlayerRelevancyMaxTime[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChangingRelevantPlayerRotationFaceSpeed[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChangingRelevantPlayerRotationPupilSpeed[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t FollowRelevantPlayerFaceSpeed[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FollowRelevantPlayerPupilSpeed[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AngularDistanceToStartFollowing[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t AngularDistanceToStopFollowing[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchAllowedOnSnapDown[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinPitchAllowedOnSnapDown[0x28]; // 0x0488 (Size: 0x28, Type: StructProperty)
    std::uint8_t FollowRelevantPlayerFrequency[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CheckDistanceToFollowFrequency[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactionsDuration[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> IndividualReactionsCooldown; // 0x0528 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LatestReactionsTime; // 0x0538 (Size: 0x10, Type: MapProperty)
    std::uint8_t ActorLocalCenter[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayersInPOITag[0x8]; // 0x0560 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ReactionsMaterials; // 0x0568 (Size: 0x10, Type: MapProperty)
    std::uint8_t RescuedDataLayer[0x20]; // 0x0578 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StyleTag[0x4]; // 0x0598 (Size: 0x4, Type: StructProperty)
    std::uint8_t RescuedShapeActivating; // 0x059C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1B]; // 0x059D
    void* BuildingMesh; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x140]; // 0x05C0
    void* WaitForPlayspaceRouterAsyncAction; // 0x0700 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTheShapeGameplayVolume, RelevantPlayer) == 824, "Offset mismatch for UTheShapeGameplayVolume::RelevantPlayer");
static_assert(offsetof(UTheShapeGameplayVolume, NextLookAtPlayerServerTimestamp) == 832, "Offset mismatch for UTheShapeGameplayVolume::NextLookAtPlayerServerTimestamp");
static_assert(offsetof(UTheShapeGameplayVolume, PlayerRelevancyMaxTime) == 840, "Offset mismatch for UTheShapeGameplayVolume::PlayerRelevancyMaxTime");
static_assert(offsetof(UTheShapeGameplayVolume, ChangingRelevantPlayerRotationFaceSpeed) == 880, "Offset mismatch for UTheShapeGameplayVolume::ChangingRelevantPlayerRotationFaceSpeed");
static_assert(offsetof(UTheShapeGameplayVolume, ChangingRelevantPlayerRotationPupilSpeed) == 920, "Offset mismatch for UTheShapeGameplayVolume::ChangingRelevantPlayerRotationPupilSpeed");
static_assert(offsetof(UTheShapeGameplayVolume, FollowRelevantPlayerFaceSpeed) == 960, "Offset mismatch for UTheShapeGameplayVolume::FollowRelevantPlayerFaceSpeed");
static_assert(offsetof(UTheShapeGameplayVolume, FollowRelevantPlayerPupilSpeed) == 1000, "Offset mismatch for UTheShapeGameplayVolume::FollowRelevantPlayerPupilSpeed");
static_assert(offsetof(UTheShapeGameplayVolume, AngularDistanceToStartFollowing) == 1040, "Offset mismatch for UTheShapeGameplayVolume::AngularDistanceToStartFollowing");
static_assert(offsetof(UTheShapeGameplayVolume, AngularDistanceToStopFollowing) == 1080, "Offset mismatch for UTheShapeGameplayVolume::AngularDistanceToStopFollowing");
static_assert(offsetof(UTheShapeGameplayVolume, MaxPitchAllowedOnSnapDown) == 1120, "Offset mismatch for UTheShapeGameplayVolume::MaxPitchAllowedOnSnapDown");
static_assert(offsetof(UTheShapeGameplayVolume, MinPitchAllowedOnSnapDown) == 1160, "Offset mismatch for UTheShapeGameplayVolume::MinPitchAllowedOnSnapDown");
static_assert(offsetof(UTheShapeGameplayVolume, FollowRelevantPlayerFrequency) == 1200, "Offset mismatch for UTheShapeGameplayVolume::FollowRelevantPlayerFrequency");
static_assert(offsetof(UTheShapeGameplayVolume, CheckDistanceToFollowFrequency) == 1240, "Offset mismatch for UTheShapeGameplayVolume::CheckDistanceToFollowFrequency");
static_assert(offsetof(UTheShapeGameplayVolume, ReactionsDuration) == 1280, "Offset mismatch for UTheShapeGameplayVolume::ReactionsDuration");
static_assert(offsetof(UTheShapeGameplayVolume, IndividualReactionsCooldown) == 1320, "Offset mismatch for UTheShapeGameplayVolume::IndividualReactionsCooldown");
static_assert(offsetof(UTheShapeGameplayVolume, LatestReactionsTime) == 1336, "Offset mismatch for UTheShapeGameplayVolume::LatestReactionsTime");
static_assert(offsetof(UTheShapeGameplayVolume, ActorLocalCenter) == 1352, "Offset mismatch for UTheShapeGameplayVolume::ActorLocalCenter");
static_assert(offsetof(UTheShapeGameplayVolume, PlayersInPOITag) == 1376, "Offset mismatch for UTheShapeGameplayVolume::PlayersInPOITag");
static_assert(offsetof(UTheShapeGameplayVolume, ReactionsMaterials) == 1384, "Offset mismatch for UTheShapeGameplayVolume::ReactionsMaterials");
static_assert(offsetof(UTheShapeGameplayVolume, RescuedDataLayer) == 1400, "Offset mismatch for UTheShapeGameplayVolume::RescuedDataLayer");
static_assert(offsetof(UTheShapeGameplayVolume, StyleTag) == 1432, "Offset mismatch for UTheShapeGameplayVolume::StyleTag");
static_assert(offsetof(UTheShapeGameplayVolume, RescuedShapeActivating) == 1436, "Offset mismatch for UTheShapeGameplayVolume::RescuedShapeActivating");
static_assert(offsetof(UTheShapeGameplayVolume, BuildingMesh) == 1464, "Offset mismatch for UTheShapeGameplayVolume::BuildingMesh");
static_assert(offsetof(UTheShapeGameplayVolume, WaitForPlayspaceRouterAsyncAction) == 1792, "Offset mismatch for UTheShapeGameplayVolume::WaitForPlayspaceRouterAsyncAction");

// /Script/TheShapeRuntime.TheShapePrioritizerConfig
// Kind: Class; super: SphereNetObjectPrioritizerConfig
class UTheShapePrioritizerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float InnerRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float OuterRadius; // 0x002C (Size: 0x4, Type: FloatProperty)
    float InnerPriority; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float OuterPriority; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float OutsidePriority; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTheShapePrioritizerConfig, InnerRadius) == 40, "Offset mismatch for UTheShapePrioritizerConfig::InnerRadius");
static_assert(offsetof(UTheShapePrioritizerConfig, OuterRadius) == 44, "Offset mismatch for UTheShapePrioritizerConfig::OuterRadius");
static_assert(offsetof(UTheShapePrioritizerConfig, InnerPriority) == 48, "Offset mismatch for UTheShapePrioritizerConfig::InnerPriority");
static_assert(offsetof(UTheShapePrioritizerConfig, OuterPriority) == 52, "Offset mismatch for UTheShapePrioritizerConfig::OuterPriority");
static_assert(offsetof(UTheShapePrioritizerConfig, OutsidePriority) == 56, "Offset mismatch for UTheShapePrioritizerConfig::OutsidePriority");
