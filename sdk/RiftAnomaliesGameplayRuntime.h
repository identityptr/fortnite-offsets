/**
 * decamp dumper generated SDK
 * Package: /Script/RiftAnomaliesGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RiftAnomaliesGameplayRuntime.FortRAAnomaliesGroupConfig
// Kind: ScriptStruct; super: none
struct FFortRAAnomaliesGroupConfig
{
public:
    TArray<void*> WeightsForQuantityOfAnomaliesInAMatch; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RASafeZonesConfig; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortRAAnomaliesGroupConfig, WeightsForQuantityOfAnomaliesInAMatch) == 0, "Offset mismatch for FFortRAAnomaliesGroupConfig::WeightsForQuantityOfAnomaliesInAMatch");
static_assert(offsetof(FFortRAAnomaliesGroupConfig, RASafeZonesConfig) == 16, "Offset mismatch for FFortRAAnomaliesGroupConfig::RASafeZonesConfig");

// /Script/RiftAnomaliesGameplayRuntime.FortRAChance
// Kind: ScriptStruct; super: none
struct FFortRAChance
{
public:
    std::uint8_t RAName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t RATag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::int32_t RAWeight; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortRAChance, RAName) == 0, "Offset mismatch for FFortRAChance::RAName");
static_assert(offsetof(FFortRAChance, RATag) == 4, "Offset mismatch for FFortRAChance::RATag");
static_assert(offsetof(FFortRAChance, RAWeight) == 8, "Offset mismatch for FFortRAChance::RAWeight");

// /Script/RiftAnomaliesGameplayRuntime.FortRAChanceMap
// Kind: ScriptStruct; super: none
struct FFortRAChanceMap
{
public:
    TMap<void*, void*> RAWeightPerCircleMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortRAChanceMap, RAWeightPerCircleMap) == 0, "Offset mismatch for FFortRAChanceMap::RAWeightPerCircleMap");

// /Script/RiftAnomaliesGameplayRuntime.FortRAConfig
// Kind: ScriptStruct; super: none
struct FFortRAConfig
{
public:
    std::int32_t DefaultWeightIfNoSafeZoneIsSet; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> RAWeightPerSafeZoneArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SelectionWeight; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortRAConfig, DefaultWeightIfNoSafeZoneIsSet) == 0, "Offset mismatch for FFortRAConfig::DefaultWeightIfNoSafeZoneIsSet");
static_assert(offsetof(FFortRAConfig, RAWeightPerSafeZoneArray) == 8, "Offset mismatch for FFortRAConfig::RAWeightPerSafeZoneArray");
static_assert(offsetof(FFortRAConfig, SelectionWeight) == 24, "Offset mismatch for FFortRAConfig::SelectionWeight");

// /Script/RiftAnomaliesGameplayRuntime.FortRAConfigForWeightedSafeZoneSystem
// Kind: ScriptStruct; super: none
struct FFortRAConfigForWeightedSafeZoneSystem
{
public:
    std::int32_t RAWeight; // 0x0000 (Size: 0x4, Type: IntProperty)
    float RAChanceOfSpawnInMatch; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortRAConfigForWeightedSafeZoneSystem, RAWeight) == 0, "Offset mismatch for FFortRAConfigForWeightedSafeZoneSystem::RAWeight");
static_assert(offsetof(FFortRAConfigForWeightedSafeZoneSystem, RAChanceOfSpawnInMatch) == 4, "Offset mismatch for FFortRAConfigForWeightedSafeZoneSystem::RAChanceOfSpawnInMatch");

// /Script/RiftAnomaliesGameplayRuntime.FortRAOverrideSafeZoneData
// Kind: ScriptStruct; super: none
struct FFortRAOverrideSafeZoneData
{
public:
    TMap<void*, void*> AnomalySubsetWeightsBySafeZone; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t AllowRegularAnomaliesToSpawn; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float ChanceOfStompSafeZoneIndexUsingThisSubset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortRAOverrideSafeZoneData, AnomalySubsetWeightsBySafeZone) == 0, "Offset mismatch for FFortRAOverrideSafeZoneData::AnomalySubsetWeightsBySafeZone");
static_assert(offsetof(FFortRAOverrideSafeZoneData, AllowRegularAnomaliesToSpawn) == 16, "Offset mismatch for FFortRAOverrideSafeZoneData::AllowRegularAnomaliesToSpawn");
static_assert(offsetof(FFortRAOverrideSafeZoneData, ChanceOfStompSafeZoneIndexUsingThisSubset) == 20, "Offset mismatch for FFortRAOverrideSafeZoneData::ChanceOfStompSafeZoneIndexUsingThisSubset");

// /Script/RiftAnomaliesGameplayRuntime.FortRAWeightModifier
// Kind: ScriptStruct; super: none
struct FFortRAWeightModifier
{
public:
    std::int32_t RAWeightModifier; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t SumRAModifier; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlockThisAnomalyFromSpawn; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRAWeightModifier, RAWeightModifier) == 0, "Offset mismatch for FFortRAWeightModifier::RAWeightModifier");
static_assert(offsetof(FFortRAWeightModifier, SumRAModifier) == 4, "Offset mismatch for FFortRAWeightModifier::SumRAModifier");
static_assert(offsetof(FFortRAWeightModifier, BlockThisAnomalyFromSpawn) == 5, "Offset mismatch for FFortRAWeightModifier::BlockThisAnomalyFromSpawn");

// /Script/RiftAnomaliesGameplayRuntime.FortRiftAnomaliesData
// Kind: Class; super: PrimaryDataAsset
class UFortRiftAnomaliesData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RAName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t RADescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t RAShortDescription[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t RAEndedMessage[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t RAMarkerSound[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RATriggerSound[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RAEndSound[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnomalyAbilitySet[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ApplicationEffectRules; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RiftAnomalyTypeConfig; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RABehaviorType; // 0x00EA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseEQS; // 0x00EB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    std::uint8_t EQSToUSe[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHideActiveRiftAnomalyWidget; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0111
    std::uint8_t MaterialIcon[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TextureIcon[0x20]; // 0x0138 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PersistentRiftAnomalieClass[0x20]; // 0x0158 (Size: 0x20, Type: SoftClassProperty)
    void* SpawnRuleClass; // 0x0178 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortRiftAnomaliesData, RAName) == 40, "Offset mismatch for UFortRiftAnomaliesData::RAName");
static_assert(offsetof(UFortRiftAnomaliesData, RADescription) == 56, "Offset mismatch for UFortRiftAnomaliesData::RADescription");
static_assert(offsetof(UFortRiftAnomaliesData, RAShortDescription) == 72, "Offset mismatch for UFortRiftAnomaliesData::RAShortDescription");
static_assert(offsetof(UFortRiftAnomaliesData, RAEndedMessage) == 88, "Offset mismatch for UFortRiftAnomaliesData::RAEndedMessage");
static_assert(offsetof(UFortRiftAnomaliesData, RAMarkerSound) == 104, "Offset mismatch for UFortRiftAnomaliesData::RAMarkerSound");
static_assert(offsetof(UFortRiftAnomaliesData, RATriggerSound) == 136, "Offset mismatch for UFortRiftAnomaliesData::RATriggerSound");
static_assert(offsetof(UFortRiftAnomaliesData, RAEndSound) == 168, "Offset mismatch for UFortRiftAnomaliesData::RAEndSound");
static_assert(offsetof(UFortRiftAnomaliesData, AnomalyAbilitySet) == 200, "Offset mismatch for UFortRiftAnomaliesData::AnomalyAbilitySet");
static_assert(offsetof(UFortRiftAnomaliesData, ApplicationEffectRules) == 232, "Offset mismatch for UFortRiftAnomaliesData::ApplicationEffectRules");
static_assert(offsetof(UFortRiftAnomaliesData, RiftAnomalyTypeConfig) == 233, "Offset mismatch for UFortRiftAnomaliesData::RiftAnomalyTypeConfig");
static_assert(offsetof(UFortRiftAnomaliesData, RABehaviorType) == 234, "Offset mismatch for UFortRiftAnomaliesData::RABehaviorType");
static_assert(offsetof(UFortRiftAnomaliesData, bUseEQS) == 235, "Offset mismatch for UFortRiftAnomaliesData::bUseEQS");
static_assert(offsetof(UFortRiftAnomaliesData, EQSToUSe) == 240, "Offset mismatch for UFortRiftAnomaliesData::EQSToUSe");
static_assert(offsetof(UFortRiftAnomaliesData, bHideActiveRiftAnomalyWidget) == 272, "Offset mismatch for UFortRiftAnomaliesData::bHideActiveRiftAnomalyWidget");
static_assert(offsetof(UFortRiftAnomaliesData, MaterialIcon) == 280, "Offset mismatch for UFortRiftAnomaliesData::MaterialIcon");
static_assert(offsetof(UFortRiftAnomaliesData, TextureIcon) == 312, "Offset mismatch for UFortRiftAnomaliesData::TextureIcon");
static_assert(offsetof(UFortRiftAnomaliesData, PersistentRiftAnomalieClass) == 344, "Offset mismatch for UFortRiftAnomaliesData::PersistentRiftAnomalieClass");
static_assert(offsetof(UFortRiftAnomaliesData, SpawnRuleClass) == 376, "Offset mismatch for UFortRiftAnomaliesData::SpawnRuleClass");

// /Script/RiftAnomaliesGameplayRuntime.FortRiftAnomaliesManager
// Kind: Class; super: GameStateComponent
class UFortRiftAnomaliesManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnClearAnomaly; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiftAnomalySpawnAnticipation; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiftAnomalyActivated; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiftAnomalyEndedWithNotification; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentRetryingAnomaly[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t CurrentRetriesRemaining; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortRiftAnomaliesManager, OnClearAnomaly) == 192, "Offset mismatch for UFortRiftAnomaliesManager::OnClearAnomaly");
static_assert(offsetof(UFortRiftAnomaliesManager, OnRiftAnomalySpawnAnticipation) == 208, "Offset mismatch for UFortRiftAnomaliesManager::OnRiftAnomalySpawnAnticipation");
static_assert(offsetof(UFortRiftAnomaliesManager, OnRiftAnomalyActivated) == 224, "Offset mismatch for UFortRiftAnomaliesManager::OnRiftAnomalyActivated");
static_assert(offsetof(UFortRiftAnomaliesManager, OnRiftAnomalyEndedWithNotification) == 240, "Offset mismatch for UFortRiftAnomaliesManager::OnRiftAnomalyEndedWithNotification");
static_assert(offsetof(UFortRiftAnomaliesManager, CurrentRetryingAnomaly) == 256, "Offset mismatch for UFortRiftAnomaliesManager::CurrentRetryingAnomaly");
static_assert(offsetof(UFortRiftAnomaliesManager, CurrentRetriesRemaining) == 288, "Offset mismatch for UFortRiftAnomaliesManager::CurrentRetriesRemaining");

// /Script/RiftAnomaliesGameplayRuntime.RASpawnRules
// Kind: Class; super: Object
class URASpawnRules
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MaxRetries[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URASpawnRules, MaxRetries) == 40, "Offset mismatch for URASpawnRules::MaxRetries");

// /Script/RiftAnomaliesGameplayRuntime.RA_CheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class URA_CheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RiftAnomaliesGameplayRuntime.RiftAnomaliesActorBase
// Kind: Class; super: Actor
class URiftAnomaliesActorBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RiftAnomalyData; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URiftAnomaliesActorBase, RiftAnomalyData) == 624, "Offset mismatch for URiftAnomaliesActorBase::RiftAnomalyData");
