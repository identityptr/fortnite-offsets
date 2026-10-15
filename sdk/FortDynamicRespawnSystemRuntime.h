/**
 * decamp dumper generated SDK
 * Package: /Script/FortDynamicRespawnSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortDynamicRespawnSystemRuntime.FortDynamicRespawnConfig
// Kind: Class; super: DataAsset
class UFortDynamicRespawnConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ItemVerticalOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float EnemyVerticalOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Weight_Distance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinSpawnDistFromEnemy; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxSpawnDistToConsiderEnemy; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Weight_LOS; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxDistToConsiderLOS; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisallowDirectLOS; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    float DirectLOSFOV; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferTeamLocation; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    float Weight_TeamLocation; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MinSpawnDistFromTeammate; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MaxDistForTeammateInfluence; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferQuerierLocation; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x005D
    float Weight_QuerierLocation; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MaxInfluenceDistFromQuerier; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDynamicRespawnConfig, ItemVerticalOffset) == 40, "Offset mismatch for UFortDynamicRespawnConfig::ItemVerticalOffset");
static_assert(offsetof(UFortDynamicRespawnConfig, EnemyVerticalOffset) == 44, "Offset mismatch for UFortDynamicRespawnConfig::EnemyVerticalOffset");
static_assert(offsetof(UFortDynamicRespawnConfig, Weight_Distance) == 48, "Offset mismatch for UFortDynamicRespawnConfig::Weight_Distance");
static_assert(offsetof(UFortDynamicRespawnConfig, MinSpawnDistFromEnemy) == 52, "Offset mismatch for UFortDynamicRespawnConfig::MinSpawnDistFromEnemy");
static_assert(offsetof(UFortDynamicRespawnConfig, MaxSpawnDistToConsiderEnemy) == 56, "Offset mismatch for UFortDynamicRespawnConfig::MaxSpawnDistToConsiderEnemy");
static_assert(offsetof(UFortDynamicRespawnConfig, Weight_LOS) == 60, "Offset mismatch for UFortDynamicRespawnConfig::Weight_LOS");
static_assert(offsetof(UFortDynamicRespawnConfig, MaxDistToConsiderLOS) == 64, "Offset mismatch for UFortDynamicRespawnConfig::MaxDistToConsiderLOS");
static_assert(offsetof(UFortDynamicRespawnConfig, bDisallowDirectLOS) == 68, "Offset mismatch for UFortDynamicRespawnConfig::bDisallowDirectLOS");
static_assert(offsetof(UFortDynamicRespawnConfig, DirectLOSFOV) == 72, "Offset mismatch for UFortDynamicRespawnConfig::DirectLOSFOV");
static_assert(offsetof(UFortDynamicRespawnConfig, bPreferTeamLocation) == 76, "Offset mismatch for UFortDynamicRespawnConfig::bPreferTeamLocation");
static_assert(offsetof(UFortDynamicRespawnConfig, Weight_TeamLocation) == 80, "Offset mismatch for UFortDynamicRespawnConfig::Weight_TeamLocation");
static_assert(offsetof(UFortDynamicRespawnConfig, MinSpawnDistFromTeammate) == 84, "Offset mismatch for UFortDynamicRespawnConfig::MinSpawnDistFromTeammate");
static_assert(offsetof(UFortDynamicRespawnConfig, MaxDistForTeammateInfluence) == 88, "Offset mismatch for UFortDynamicRespawnConfig::MaxDistForTeammateInfluence");
static_assert(offsetof(UFortDynamicRespawnConfig, bPreferQuerierLocation) == 92, "Offset mismatch for UFortDynamicRespawnConfig::bPreferQuerierLocation");
static_assert(offsetof(UFortDynamicRespawnConfig, Weight_QuerierLocation) == 96, "Offset mismatch for UFortDynamicRespawnConfig::Weight_QuerierLocation");
static_assert(offsetof(UFortDynamicRespawnConfig, MaxInfluenceDistFromQuerier) == 100, "Offset mismatch for UFortDynamicRespawnConfig::MaxInfluenceDistFromQuerier");
