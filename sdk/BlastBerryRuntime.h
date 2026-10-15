/**
 * decamp dumper generated SDK
 * Package: /BlastBerry/_Verse/VNI/BlastBerryRuntime
 */
#pragma once
#include "Basic.h"

// /BlastBerry/_Verse/VNI/BlastBerryRuntime.Blastberry_Respawn
// Kind: VerseClass; super: Object
class UBlastberry_Respawn
{
public:
    std::uint8_t Opaque[1];
};


// /BlastBerry/_Verse/VNI/BlastBerryRuntime.Blastberry_Respawn_blastberry_respawn_logic
// Kind: VerseClass; super: BlastBerryVerseRespawnLogic
class UBlastberry_Respawn_blastberry_respawn_logic
{
public:
    std::uint8_t None[0x70]; // 0x0000 (Size: 0x70, Type: UnknownProperty)
    double verse_0x18D81077_SafeZonePredictBase; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double verse_0x3F8AC094_RespawnHeight; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double verse_0xCFA4E7BB_AdvancedSpawnGroupProximityDistance; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double verse_0x8B9BEF5E_SoloDefaultRespawnRadiusMultiplier; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double verse_0x60B7E1DA_SoloSpawnMaxDistanceFromDeathLocation; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t verse_0xFCE10E8B_UseSoloEQS; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, None) == 0, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::None");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0x18D81077_SafeZonePredictBase) == 112, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0x18D81077_SafeZonePredictBase");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0x3F8AC094_RespawnHeight) == 120, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0x3F8AC094_RespawnHeight");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0xCFA4E7BB_AdvancedSpawnGroupProximityDistance) == 128, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0xCFA4E7BB_AdvancedSpawnGroupProximityDistance");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0x8B9BEF5E_SoloDefaultRespawnRadiusMultiplier) == 136, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0x8B9BEF5E_SoloDefaultRespawnRadiusMultiplier");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0x60B7E1DA_SoloSpawnMaxDistanceFromDeathLocation) == 144, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0x60B7E1DA_SoloSpawnMaxDistanceFromDeathLocation");
static_assert(offsetof(UBlastberry_Respawn_blastberry_respawn_logic, verse_0xFCE10E8B_UseSoloEQS) == 152, "Offset mismatch for UBlastberry_Respawn_blastberry_respawn_logic::verse_0xFCE10E8B_UseSoloEQS");

// /BlastBerry/_Verse/VNI/BlastBerryRuntime.Blastberry_Respawn_logger_respawn_logic
// Kind: VerseClass; super: Diagnostics_log_channel
class UBlastberry_Respawn_logger_respawn_logic
{
public:
    std::uint8_t Opaque[1];
};


// /BlastBerry/_Verse/VNI/BlastBerryRuntime.Blastberry_Respawn_team_translation_group
// Kind: VerseClass; super: Object
class UBlastberry_Respawn_team_translation_group
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t verse_0xB6D35021_SafeZone[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TArray<void*> verse_0xA37C9319_Agents; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t verse_0x809E2F9D_CachedAverageTranslation[0x20]; // 0x0058 (Size: 0x20, Type: OptionalProperty)
    std::uint8_t verse_0x38749EAA_CachedGroupWeight[0x10]; // 0x0078 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t verse_0x41AC4A94_CachedInSafeZone; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    std::int64_t verse_0x9D325CB7_TeamLocationGroup_InSafeZoneWeight; // 0x0090 (Size: 0x8, Type: Int64Property)
    std::int64_t verse_0x474DF5D9_TeamLocationGroup_InStormWeight; // 0x0098 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0xB6D35021_SafeZone) == 40, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0xB6D35021_SafeZone");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0xA37C9319_Agents) == 72, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0xA37C9319_Agents");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0x809E2F9D_CachedAverageTranslation) == 88, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0x809E2F9D_CachedAverageTranslation");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0x38749EAA_CachedGroupWeight) == 120, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0x38749EAA_CachedGroupWeight");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0x41AC4A94_CachedInSafeZone) == 136, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0x41AC4A94_CachedInSafeZone");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0x9D325CB7_TeamLocationGroup_InSafeZoneWeight) == 144, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0x9D325CB7_TeamLocationGroup_InSafeZoneWeight");
static_assert(offsetof(UBlastberry_Respawn_team_translation_group, verse_0x474DF5D9_TeamLocationGroup_InStormWeight) == 152, "Offset mismatch for UBlastberry_Respawn_team_translation_group::verse_0x474DF5D9_TeamLocationGroup_InStormWeight");
