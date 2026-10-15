/**
 * decamp dumper generated SDK
 * Package: /Script/FortOcclusionNetRelevancy
 */
#pragma once
#include "Basic.h"

// /Script/FortOcclusionNetRelevancy.FortOcclusionNetRelevancyStats
// Kind: ScriptStruct; super: none
struct FFortOcclusionNetRelevancyStats
{
public:
    std::int32_t PlayerControllerCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerPawnCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnsTestedForOcclusion; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTraces; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NumBlockedTraces; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NumEarlyOutTraces; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTracesHitLandscape; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTracesHitNonLandscape; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t OccludedPawns; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayersBenefitingFromOcclusionCulling; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerWithMostOccludedPawns; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerWithLeastOccludedPawns; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t PawnsSkippingTraces; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnsOutsideNetCullDist; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnsWithinFootStepRadius; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t NumProcessedPawns; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t NumPawnsReusingLastSeenResult; // 0x0040 (Size: 0x4, Type: IntProperty)
    float TotalServerTickTimeMS; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortOcclusionNetRelevancyStats, PlayerControllerCount) == 0, "Offset mismatch for FFortOcclusionNetRelevancyStats::PlayerControllerCount");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PlayerPawnCount) == 4, "Offset mismatch for FFortOcclusionNetRelevancyStats::PlayerPawnCount");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PawnsTestedForOcclusion) == 8, "Offset mismatch for FFortOcclusionNetRelevancyStats::PawnsTestedForOcclusion");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumTraces) == 12, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumTraces");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumBlockedTraces) == 16, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumBlockedTraces");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumEarlyOutTraces) == 20, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumEarlyOutTraces");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumTracesHitLandscape) == 24, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumTracesHitLandscape");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumTracesHitNonLandscape) == 28, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumTracesHitNonLandscape");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, OccludedPawns) == 32, "Offset mismatch for FFortOcclusionNetRelevancyStats::OccludedPawns");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PlayersBenefitingFromOcclusionCulling) == 36, "Offset mismatch for FFortOcclusionNetRelevancyStats::PlayersBenefitingFromOcclusionCulling");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PlayerWithMostOccludedPawns) == 40, "Offset mismatch for FFortOcclusionNetRelevancyStats::PlayerWithMostOccludedPawns");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PlayerWithLeastOccludedPawns) == 44, "Offset mismatch for FFortOcclusionNetRelevancyStats::PlayerWithLeastOccludedPawns");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PawnsSkippingTraces) == 48, "Offset mismatch for FFortOcclusionNetRelevancyStats::PawnsSkippingTraces");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PawnsOutsideNetCullDist) == 52, "Offset mismatch for FFortOcclusionNetRelevancyStats::PawnsOutsideNetCullDist");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, PawnsWithinFootStepRadius) == 56, "Offset mismatch for FFortOcclusionNetRelevancyStats::PawnsWithinFootStepRadius");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumProcessedPawns) == 60, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumProcessedPawns");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, NumPawnsReusingLastSeenResult) == 64, "Offset mismatch for FFortOcclusionNetRelevancyStats::NumPawnsReusingLastSeenResult");
static_assert(offsetof(FFortOcclusionNetRelevancyStats, TotalServerTickTimeMS) == 68, "Offset mismatch for FFortOcclusionNetRelevancyStats::TotalServerTickTimeMS");

// /Script/FortOcclusionNetRelevancy.FortOcclusionClientStatsComponent
// Kind: Class; super: ActorComponent
class UFortOcclusionClientStatsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t NumPawnsWithinRelevancyRange; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPawnsCulled; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bServerSystemEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerUsingOcclusionFilter; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00CA
    TArray<void*> OccludedLocations; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortOcclusionClientStatsComponent, NumPawnsWithinRelevancyRange) == 192, "Offset mismatch for UFortOcclusionClientStatsComponent::NumPawnsWithinRelevancyRange");
static_assert(offsetof(UFortOcclusionClientStatsComponent, NumPawnsCulled) == 196, "Offset mismatch for UFortOcclusionClientStatsComponent::NumPawnsCulled");
static_assert(offsetof(UFortOcclusionClientStatsComponent, bServerSystemEnabled) == 200, "Offset mismatch for UFortOcclusionClientStatsComponent::bServerSystemEnabled");
static_assert(offsetof(UFortOcclusionClientStatsComponent, bServerUsingOcclusionFilter) == 201, "Offset mismatch for UFortOcclusionClientStatsComponent::bServerUsingOcclusionFilter");
static_assert(offsetof(UFortOcclusionClientStatsComponent, OccludedLocations) == 208, "Offset mismatch for UFortOcclusionClientStatsComponent::OccludedLocations");

// /Script/FortOcclusionNetRelevancy.FortOcclusionNetRelevancyServerDebug
// Kind: Class; super: Actor
class UFortOcclusionNetRelevancyServerDebug
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ServerCurrentStats[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortOcclusionNetRelevancyServerDebug, ServerCurrentStats) == 624, "Offset mismatch for UFortOcclusionNetRelevancyServerDebug::ServerCurrentStats");

// /Script/FortOcclusionNetRelevancy.FortOcclusionNetRelevancyWorldSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFortOcclusionNetRelevancyWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> AllPawns; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PawnClass[0x20]; // 0x00B8 (Size: 0x20, Type: SoftClassProperty)
    void* PawnClassLoaded; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CollisionChannelForOcclusionTraces; // 0x00E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* ServerDebugActor; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortOcclusionNetRelevancyWorldSubsystem, AllPawns) == 168, "Offset mismatch for UFortOcclusionNetRelevancyWorldSubsystem::AllPawns");
static_assert(offsetof(UFortOcclusionNetRelevancyWorldSubsystem, PawnClass) == 184, "Offset mismatch for UFortOcclusionNetRelevancyWorldSubsystem::PawnClass");
static_assert(offsetof(UFortOcclusionNetRelevancyWorldSubsystem, PawnClassLoaded) == 216, "Offset mismatch for UFortOcclusionNetRelevancyWorldSubsystem::PawnClassLoaded");
static_assert(offsetof(UFortOcclusionNetRelevancyWorldSubsystem, CollisionChannelForOcclusionTraces) == 224, "Offset mismatch for UFortOcclusionNetRelevancyWorldSubsystem::CollisionChannelForOcclusionTraces");
static_assert(offsetof(UFortOcclusionNetRelevancyWorldSubsystem, ServerDebugActor) == 232, "Offset mismatch for UFortOcclusionNetRelevancyWorldSubsystem::ServerDebugActor");

// /Script/FortOcclusionNetRelevancy.NetObjectGridOcclusionFilter
// Kind: Class; super: NetObjectGridWorldLocFilter
class UNetObjectGridOcclusionFilter
{
public:
    std::uint8_t Opaque[1];
};
