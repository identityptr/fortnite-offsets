/**
 * decamp dumper generated SDK
 * Package: /FN1Native/_Verse/VNI/FN1NativeRuntime
 */
#pragma once
#include "Basic.h"

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native
// Kind: VerseClass; super: Object
class UFN1Native
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_BattleRoyaleUtils
// Kind: VerseClass; super: Object
class UFN1Native_BattleRoyaleUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortAircraft_fort_aircraft
// Kind: VerseClass; super: Entity
class UFN1Native_FortAircraft_fort_aircraft
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedEntities; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft, Components) == 72, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft::Components");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft, OwnedEntities) == 88, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft::OwnedEntities");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortAircraft_fort_aircraft_component
// Kind: VerseClass; super: Component
class UFN1Native_FortAircraft_fort_aircraft_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_component, None) == 0, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_component::None");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortAircraft_fort_aircraft_flight_info
// Kind: VerseClass; super: Object
class UFN1Native_FortAircraft_fort_aircraft_flight_info
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t verse_0x5988D8FA_StartLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t verse_0x918DA903_StartRotation[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    double verse_0xFEBB9A36_Speed; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double verse_0xFC2FBF02_Duration; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double verse_0xE1DA0CFC_DropStartDelay; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double verse_0xACC36E28_DropEndDelay; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0x5988D8FA_StartLocation) == 40, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0x5988D8FA_StartLocation");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0x918DA903_StartRotation) == 64, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0x918DA903_StartRotation");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0xFEBB9A36_Speed) == 96, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0xFEBB9A36_Speed");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0xFC2FBF02_Duration) == 104, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0xFC2FBF02_Duration");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0xE1DA0CFC_DropStartDelay) == 112, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0xE1DA0CFC_DropStartDelay");
static_assert(offsetof(UFN1Native_FortAircraft_fort_aircraft_flight_info, verse_0xACC36E28_DropEndDelay) == 120, "Offset mismatch for UFN1Native_FortAircraft_fort_aircraft_flight_info::verse_0xACC36E28_DropEndDelay");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortAircraft_fort_aircraft_log
// Kind: VerseClass; super: Diagnostics_log_channel
class UFN1Native_FortAircraft_fort_aircraft_log
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortBuildMode_fort_build_mode_blocker_component
// Kind: VerseClass; super: Component
class UFN1Native_FortBuildMode_fort_build_mode_blocker_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UFN1Native_FortBuildMode_fort_build_mode_blocker_component, None) == 0, "Offset mismatch for UFN1Native_FortBuildMode_fort_build_mode_blocker_component::None");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortBus
// Kind: VerseClass; super: Object
class UFN1Native_FortBus
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortBus_fort_battlebus
// Kind: VerseClass; super: VerseFortniteBattlebus
class UFN1Native_FortBus_fort_battlebus
{
public:
    std::uint8_t None[0x28]; // 0x0000 (Size: 0x28, Type: UnknownProperty)
    std::uint8_t verse_0xD1B78F57_StartsEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFN1Native_FortBus_fort_battlebus, None) == 0, "Offset mismatch for UFN1Native_FortBus_fort_battlebus::None");
static_assert(offsetof(UFN1Native_FortBus_fort_battlebus, verse_0xD1B78F57_StartsEnabled) == 40, "Offset mismatch for UFN1Native_FortBus_fort_battlebus::verse_0xD1B78F57_StartsEnabled");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortPawnUtils
// Kind: VerseClass; super: Object
class UFN1Native_FortPawnUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortPhysicsUtils
// Kind: VerseClass; super: Object
class UFN1Native_FortPhysicsUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortSafeZone
// Kind: VerseClass; super: Object
class UFN1Native_FortSafeZone
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortSafeZone_agent_outside_safe_zone_data
// Kind: VerseClass; super: Object
class UFN1Native_FortSafeZone_agent_outside_safe_zone_data
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x75EB3F0A_Agent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xF80AEC27_FortCharacter; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    double verse_0x2B4B695E_DamageMultiplier; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t verse_0x9AEB6A19_DamageTask[0x8]; // 0x0040 (Size: 0x8, Type: OptionalProperty)
    double verse_0xDB15FD71_AccumulatedDamage; // 0x0048 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFN1Native_FortSafeZone_agent_outside_safe_zone_data, verse_0x75EB3F0A_Agent) == 40, "Offset mismatch for UFN1Native_FortSafeZone_agent_outside_safe_zone_data::verse_0x75EB3F0A_Agent");
static_assert(offsetof(UFN1Native_FortSafeZone_agent_outside_safe_zone_data, verse_0xF80AEC27_FortCharacter) == 48, "Offset mismatch for UFN1Native_FortSafeZone_agent_outside_safe_zone_data::verse_0xF80AEC27_FortCharacter");
static_assert(offsetof(UFN1Native_FortSafeZone_agent_outside_safe_zone_data, verse_0x2B4B695E_DamageMultiplier) == 56, "Offset mismatch for UFN1Native_FortSafeZone_agent_outside_safe_zone_data::verse_0x2B4B695E_DamageMultiplier");
static_assert(offsetof(UFN1Native_FortSafeZone_agent_outside_safe_zone_data, verse_0x9AEB6A19_DamageTask) == 64, "Offset mismatch for UFN1Native_FortSafeZone_agent_outside_safe_zone_data::verse_0x9AEB6A19_DamageTask");
static_assert(offsetof(UFN1Native_FortSafeZone_agent_outside_safe_zone_data, verse_0xDB15FD71_AccumulatedDamage) == 72, "Offset mismatch for UFN1Native_FortSafeZone_agent_outside_safe_zone_data::verse_0xDB15FD71_AccumulatedDamage");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortSafeZone_fort_safe_zone
// Kind: VerseClass; super: Entity
class UFN1Native_FortSafeZone_fort_safe_zone
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedEntities; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone, Components) == 72, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone::Components");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone, OwnedEntities) == 88, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone::OwnedEntities");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortSafeZone_fort_safe_zone_component
// Kind: VerseClass; super: Component
class UFN1Native_FortSafeZone_fort_safe_zone_component
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> verse_0xB125E870_AgentOutsideSafeZoneDataMap; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::uint8_t verse_0x3BC2F779_ParticipantRemovedHandle[0x8]; // 0x0068 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t verse_0x34A0AA3F_DamageInfo[0x8]; // 0x0070 (Size: 0x8, Type: OptionalProperty)
    double verse_0xE34F9FAC_Radius; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_component, verse_0xB125E870_AgentOutsideSafeZoneDataMap) == 88, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_component::verse_0xB125E870_AgentOutsideSafeZoneDataMap");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_component, verse_0x3BC2F779_ParticipantRemovedHandle) == 104, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_component::verse_0x3BC2F779_ParticipantRemovedHandle");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_component, verse_0x34A0AA3F_DamageInfo) == 112, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_component::verse_0x34A0AA3F_DamageInfo");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_component, verse_0xE34F9FAC_Radius) == 120, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_component::verse_0xE34F9FAC_Radius");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortSafeZone_fort_safe_zone_damage_info
// Kind: VerseClass; super: Object
class UFN1Native_FortSafeZone_fort_safe_zone_damage_info
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double verse_0x7CC298EC_DamagePerInterval; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t verse_0x4A54E762_DamageIsPercentageBased; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    double verse_0x53B0BCBC_DamageInterval; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double verse_0x51CDC584_DamageIncrementInitialDelay; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double verse_0xF40110EA_DamageIncrementInterval; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double verse_0x314B14CC_DamageIncrementAmount; // 0x0050 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0x7CC298EC_DamagePerInterval) == 40, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0x7CC298EC_DamagePerInterval");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0x4A54E762_DamageIsPercentageBased) == 48, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0x4A54E762_DamageIsPercentageBased");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0x53B0BCBC_DamageInterval) == 56, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0x53B0BCBC_DamageInterval");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0x51CDC584_DamageIncrementInitialDelay) == 64, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0x51CDC584_DamageIncrementInitialDelay");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0xF40110EA_DamageIncrementInterval) == 72, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0xF40110EA_DamageIncrementInterval");
static_assert(offsetof(UFN1Native_FortSafeZone_fort_safe_zone_damage_info, verse_0x314B14CC_DamageIncrementAmount) == 80, "Offset mismatch for UFN1Native_FortSafeZone_fort_safe_zone_damage_info::verse_0x314B14CC_DamageIncrementAmount");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortStorm
// Kind: VerseClass; super: Object
class UFN1Native_FortStorm
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortStorm_fort_storm
// Kind: VerseClass; super: VerseFortniteStorm
class UFN1Native_FortStorm_fort_storm
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UFN1Native_FortStorm_fort_storm, None) == 0, "Offset mismatch for UFN1Native_FortStorm_fort_storm::None");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_FortVolume
// Kind: VerseClass; super: Object
class UFN1Native_FortVolume
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_GameMode_environment_query
// Kind: VerseClass; super: None
class UFN1Native_GameMode_environment_query
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AssetForEditor[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    FName AssetPathName; // 0x0058 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFN1Native_GameMode_environment_query, AssetForEditor) == 56, "Offset mismatch for UFN1Native_GameMode_environment_query::AssetForEditor");
static_assert(offsetof(UFN1Native_GameMode_environment_query, AssetPathName) == 88, "Offset mismatch for UFN1Native_GameMode_environment_query::AssetPathName");
static_assert(offsetof(UFN1Native_GameMode_environment_query, Object) == 96, "Offset mismatch for UFN1Native_GameMode_environment_query::Object");

// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_Matchmaking_FortSessionAttributesBridge
// Kind: VerseClass; super: Object
class UFN1Native_Matchmaking_FortSessionAttributesBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_ReloadUtils
// Kind: VerseClass; super: Object
class UFN1Native_ReloadUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_player_ui_display_info_manager
// Kind: VerseClass; super: Object
class UFN1Native_player_ui_display_info_manager
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Native/_Verse/VNI/FN1NativeRuntime.FN1Native_reload_ui_bridge_component
// Kind: VerseClass; super: Component
class UFN1Native_reload_ui_bridge_component
{
public:
    std::uint8_t None[0x1]; // 0x0000 (Size: 0x1, Type: UnknownProperty)
};

static_assert(offsetof(UFN1Native_reload_ui_bridge_component, None) == 0, "Offset mismatch for UFN1Native_reload_ui_bridge_component::None");
