/**
 * decamp dumper generated SDK
 * Package: /Script/UnableRomanRuntime
 */
#pragma once
#include "Basic.h"

// /Script/UnableRomanRuntime.UnableRomanLoadoutDefinition
// Kind: ScriptStruct; super: none
struct FUnableRomanLoadoutDefinition
{
public:
    FString LoadoutName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> InventoryItems; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUnableRomanLoadoutDefinition, LoadoutName) == 0, "Offset mismatch for FUnableRomanLoadoutDefinition::LoadoutName");
static_assert(offsetof(FUnableRomanLoadoutDefinition, InventoryItems) == 16, "Offset mismatch for FUnableRomanLoadoutDefinition::InventoryItems");

// /Script/UnableRomanRuntime.FortAthenaMutator_UnableRoman
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_UnableRoman
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    TArray<void*> Loadouts; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    void* TeamScoreWidgetClass; // 0x0410 (Size: 0x8, Type: ClassProperty)
    void* RespawnConfig; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnAnyPawnRespawned; // 0x0420 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnyPawnDied; // 0x0430 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> TeamScoreWidgets; // 0x0440 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LoadoutChoices; // 0x0450 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LoadoutWidgets; // 0x0460 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortAthenaMutator_UnableRoman, Loadouts) == 1024, "Offset mismatch for UFortAthenaMutator_UnableRoman::Loadouts");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, TeamScoreWidgetClass) == 1040, "Offset mismatch for UFortAthenaMutator_UnableRoman::TeamScoreWidgetClass");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, RespawnConfig) == 1048, "Offset mismatch for UFortAthenaMutator_UnableRoman::RespawnConfig");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, OnAnyPawnRespawned) == 1056, "Offset mismatch for UFortAthenaMutator_UnableRoman::OnAnyPawnRespawned");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, OnAnyPawnDied) == 1072, "Offset mismatch for UFortAthenaMutator_UnableRoman::OnAnyPawnDied");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, TeamScoreWidgets) == 1088, "Offset mismatch for UFortAthenaMutator_UnableRoman::TeamScoreWidgets");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, LoadoutChoices) == 1104, "Offset mismatch for UFortAthenaMutator_UnableRoman::LoadoutChoices");
static_assert(offsetof(UFortAthenaMutator_UnableRoman, LoadoutWidgets) == 1120, "Offset mismatch for UFortAthenaMutator_UnableRoman::LoadoutWidgets");

// /Script/UnableRomanRuntime.FortControllerComponent_UnableRoman
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_UnableRoman
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* LoadoutSelectorWidgetClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* DamageCameraShakeClassOverride; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* DynamicDamageZoneComponentClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* LoadoutWidget; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_UnableRoman, LoadoutSelectorWidgetClass) == 200, "Offset mismatch for UFortControllerComponent_UnableRoman::LoadoutSelectorWidgetClass");
static_assert(offsetof(UFortControllerComponent_UnableRoman, DamageCameraShakeClassOverride) == 208, "Offset mismatch for UFortControllerComponent_UnableRoman::DamageCameraShakeClassOverride");
static_assert(offsetof(UFortControllerComponent_UnableRoman, DynamicDamageZoneComponentClass) == 216, "Offset mismatch for UFortControllerComponent_UnableRoman::DynamicDamageZoneComponentClass");
static_assert(offsetof(UFortControllerComponent_UnableRoman, LoadoutWidget) == 224, "Offset mismatch for UFortControllerComponent_UnableRoman::LoadoutWidget");

// /Script/UnableRomanRuntime.UnableRomanRespawnConfig
// Kind: Class; super: DataAsset
class UUnableRomanRespawnConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ItemVerticalOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float EnemyVerticalOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Weight_Distance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinDist; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxDist; // 0x0038 (Size: 0x4, Type: FloatProperty)
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

static_assert(offsetof(UUnableRomanRespawnConfig, ItemVerticalOffset) == 40, "Offset mismatch for UUnableRomanRespawnConfig::ItemVerticalOffset");
static_assert(offsetof(UUnableRomanRespawnConfig, EnemyVerticalOffset) == 44, "Offset mismatch for UUnableRomanRespawnConfig::EnemyVerticalOffset");
static_assert(offsetof(UUnableRomanRespawnConfig, Weight_Distance) == 48, "Offset mismatch for UUnableRomanRespawnConfig::Weight_Distance");
static_assert(offsetof(UUnableRomanRespawnConfig, MinDist) == 52, "Offset mismatch for UUnableRomanRespawnConfig::MinDist");
static_assert(offsetof(UUnableRomanRespawnConfig, MaxDist) == 56, "Offset mismatch for UUnableRomanRespawnConfig::MaxDist");
static_assert(offsetof(UUnableRomanRespawnConfig, Weight_LOS) == 60, "Offset mismatch for UUnableRomanRespawnConfig::Weight_LOS");
static_assert(offsetof(UUnableRomanRespawnConfig, MaxDistToConsiderLOS) == 64, "Offset mismatch for UUnableRomanRespawnConfig::MaxDistToConsiderLOS");
static_assert(offsetof(UUnableRomanRespawnConfig, bDisallowDirectLOS) == 68, "Offset mismatch for UUnableRomanRespawnConfig::bDisallowDirectLOS");
static_assert(offsetof(UUnableRomanRespawnConfig, DirectLOSFOV) == 72, "Offset mismatch for UUnableRomanRespawnConfig::DirectLOSFOV");
static_assert(offsetof(UUnableRomanRespawnConfig, bPreferTeamLocation) == 76, "Offset mismatch for UUnableRomanRespawnConfig::bPreferTeamLocation");
static_assert(offsetof(UUnableRomanRespawnConfig, Weight_TeamLocation) == 80, "Offset mismatch for UUnableRomanRespawnConfig::Weight_TeamLocation");
static_assert(offsetof(UUnableRomanRespawnConfig, MinSpawnDistFromTeammate) == 84, "Offset mismatch for UUnableRomanRespawnConfig::MinSpawnDistFromTeammate");
static_assert(offsetof(UUnableRomanRespawnConfig, MaxDistForTeammateInfluence) == 88, "Offset mismatch for UUnableRomanRespawnConfig::MaxDistForTeammateInfluence");
static_assert(offsetof(UUnableRomanRespawnConfig, bPreferQuerierLocation) == 92, "Offset mismatch for UUnableRomanRespawnConfig::bPreferQuerierLocation");
static_assert(offsetof(UUnableRomanRespawnConfig, Weight_QuerierLocation) == 96, "Offset mismatch for UUnableRomanRespawnConfig::Weight_QuerierLocation");
static_assert(offsetof(UUnableRomanRespawnConfig, MaxInfluenceDistFromQuerier) == 100, "Offset mismatch for UUnableRomanRespawnConfig::MaxInfluenceDistFromQuerier");
