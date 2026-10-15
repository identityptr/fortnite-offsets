/**
 * decamp dumper generated SDK
 * Package: /Script/SaveTheWorldRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SaveTheWorldRuntime.DefaultWeaponRarityEntry
// Kind: ScriptStruct; super: none
struct FDefaultWeaponRarityEntry
{
public:
    void* Tier1; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Tier2; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Tier3; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* Tier4; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* Tier5; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDefaultWeaponRarityEntry, Tier1) == 0, "Offset mismatch for FDefaultWeaponRarityEntry::Tier1");
static_assert(offsetof(FDefaultWeaponRarityEntry, Tier2) == 8, "Offset mismatch for FDefaultWeaponRarityEntry::Tier2");
static_assert(offsetof(FDefaultWeaponRarityEntry, Tier3) == 16, "Offset mismatch for FDefaultWeaponRarityEntry::Tier3");
static_assert(offsetof(FDefaultWeaponRarityEntry, Tier4) == 24, "Offset mismatch for FDefaultWeaponRarityEntry::Tier4");
static_assert(offsetof(FDefaultWeaponRarityEntry, Tier5) == 32, "Offset mismatch for FDefaultWeaponRarityEntry::Tier5");

// /Script/SaveTheWorldRuntime.DefenderSpawnRequest
// Kind: ScriptStruct; super: none
struct FDefenderSpawnRequest
{
public:
    void* ManualDefenderItemDef; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DefenderAccountItem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* DefenderWeapon; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefenderSquadId[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::int32_t DefenderSlot; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDefenderSpawnRequest, ManualDefenderItemDef) == 0, "Offset mismatch for FDefenderSpawnRequest::ManualDefenderItemDef");
static_assert(offsetof(FDefenderSpawnRequest, DefenderAccountItem) == 8, "Offset mismatch for FDefenderSpawnRequest::DefenderAccountItem");
static_assert(offsetof(FDefenderSpawnRequest, DefenderWeapon) == 16, "Offset mismatch for FDefenderSpawnRequest::DefenderWeapon");
static_assert(offsetof(FDefenderSpawnRequest, DefenderSquadId) == 24, "Offset mismatch for FDefenderSpawnRequest::DefenderSquadId");
static_assert(offsetof(FDefenderSpawnRequest, DefenderSlot) == 28, "Offset mismatch for FDefenderSpawnRequest::DefenderSlot");

// /Script/SaveTheWorldRuntime.FortDefenderDefaultWeaponData
// Kind: ScriptStruct; super: TableRowBase
struct FFortDefenderDefaultWeaponData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CommonWeapons[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t UncommonWeapons[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t RareWeapons[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t EpicWeapons[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t LegendaryWeapons[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDefenderDefaultWeaponData, CommonWeapons) == 8, "Offset mismatch for FFortDefenderDefaultWeaponData::CommonWeapons");
static_assert(offsetof(FFortDefenderDefaultWeaponData, UncommonWeapons) == 48, "Offset mismatch for FFortDefenderDefaultWeaponData::UncommonWeapons");
static_assert(offsetof(FFortDefenderDefaultWeaponData, RareWeapons) == 88, "Offset mismatch for FFortDefenderDefaultWeaponData::RareWeapons");
static_assert(offsetof(FFortDefenderDefaultWeaponData, EpicWeapons) == 128, "Offset mismatch for FFortDefenderDefaultWeaponData::EpicWeapons");
static_assert(offsetof(FFortDefenderDefaultWeaponData, LegendaryWeapons) == 168, "Offset mismatch for FFortDefenderDefaultWeaponData::LegendaryWeapons");

// /Script/SaveTheWorldRuntime.FortAIDataProvider_Defender
// Kind: Class; super: AIDataProvider
class UFortAIDataProvider_Defender
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AnchorLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float AnchorRadius; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float AnchorHeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float AnchorEQSGridSize; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float AnchorEQSSpaceBetween; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIDataProvider_Defender, AnchorLocation) == 40, "Offset mismatch for UFortAIDataProvider_Defender::AnchorLocation");
static_assert(offsetof(UFortAIDataProvider_Defender, AnchorRadius) == 64, "Offset mismatch for UFortAIDataProvider_Defender::AnchorRadius");
static_assert(offsetof(UFortAIDataProvider_Defender, AnchorHeight) == 68, "Offset mismatch for UFortAIDataProvider_Defender::AnchorHeight");
static_assert(offsetof(UFortAIDataProvider_Defender, AnchorEQSGridSize) == 72, "Offset mismatch for UFortAIDataProvider_Defender::AnchorEQSGridSize");
static_assert(offsetof(UFortAIDataProvider_Defender, AnchorEQSSpaceBetween) == 76, "Offset mismatch for UFortAIDataProvider_Defender::AnchorEQSSpaceBetween");

// /Script/SaveTheWorldRuntime.FortBTDecorator_DefenderAnchorTest
// Kind: Class; super: BTDecorator
class UFortBTDecorator_DefenderAnchorTest
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CheckIfTethered[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t CheckIfInBounds[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t CheckIfGoalIsInBounds[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_DefenderAnchorTest, CheckIfTethered) == 104, "Offset mismatch for UFortBTDecorator_DefenderAnchorTest::CheckIfTethered");
static_assert(offsetof(UFortBTDecorator_DefenderAnchorTest, CheckIfInBounds) == 128, "Offset mismatch for UFortBTDecorator_DefenderAnchorTest::CheckIfInBounds");
static_assert(offsetof(UFortBTDecorator_DefenderAnchorTest, CheckIfGoalIsInBounds) == 152, "Offset mismatch for UFortBTDecorator_DefenderAnchorTest::CheckIfGoalIsInBounds");

// /Script/SaveTheWorldRuntime.FortBTDecorator_DefenderLeaderTagQuery
// Kind: Class; super: BTDecorator
class UFortBTDecorator_DefenderLeaderTagQuery
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t LeaderTagQuery[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_DefenderLeaderTagQuery, LeaderTagQuery) == 104, "Offset mismatch for UFortBTDecorator_DefenderLeaderTagQuery::LeaderTagQuery");

// /Script/SaveTheWorldRuntime.FortDefenderAnchor
// Kind: Class; super: BuildingProp
class UFortDefenderAnchor
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::int32_t WidthInBuildingTiles; // 0x0B20 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightInBuildingTiles; // 0x0B24 (Size: 0x4, Type: IntProperty)
    float EQSGridSpaceBetween; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0B2C
    void* DefenderAnchorBox; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    void* DefenderAnchorMesh; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDefenderAnchor, WidthInBuildingTiles) == 2848, "Offset mismatch for UFortDefenderAnchor::WidthInBuildingTiles");
static_assert(offsetof(UFortDefenderAnchor, HeightInBuildingTiles) == 2852, "Offset mismatch for UFortDefenderAnchor::HeightInBuildingTiles");
static_assert(offsetof(UFortDefenderAnchor, EQSGridSpaceBetween) == 2856, "Offset mismatch for UFortDefenderAnchor::EQSGridSpaceBetween");
static_assert(offsetof(UFortDefenderAnchor, DefenderAnchorBox) == 2888, "Offset mismatch for UFortDefenderAnchor::DefenderAnchorBox");
static_assert(offsetof(UFortDefenderAnchor, DefenderAnchorMesh) == 2896, "Offset mismatch for UFortDefenderAnchor::DefenderAnchorMesh");

// /Script/SaveTheWorldRuntime.FortDefenderComponent
// Kind: Class; super: FortPawnComponent
class UFortDefenderComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnDefenderFinishedTeleport; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDefenderModeChanged; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t DefaultWeaponDataHandle[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimeAllowedOutsideTether[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    void* DefenderAnchorClass; // 0x0120 (Size: 0x8, Type: ClassProperty)
    float DefenderFollowRadius; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float DefenderFollowHalfHeight; // 0x012C (Size: 0x4, Type: FloatProperty)
    float DefenderFollowEQSSize; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float DefenderFollowEQSSpaceBetween; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxZAvoidMoveInHalfTiles; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x013C
    std::uint8_t SpawnAbilityTagContainer[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t DespawnAbilityTagContainer[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t TeleportSettings[0x38]; // 0x0180 (Size: 0x38, Type: StructProperty)
    std::uint8_t ZHeightTeleportCheck[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Min2DDistanceTetherTransitionTeleport[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinZHeightTetherTransitionTeleport[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerToReviveKey[0x4]; // 0x0230 (Size: 0x4, Type: NameProperty)
    std::uint8_t DefenderOwnerKey[0x4]; // 0x0234 (Size: 0x4, Type: NameProperty)
    std::uint8_t AutoReviveTime[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    float AnchorSnapZTolerance; // 0x0260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0264
    void* DefenderAnchor; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0270
    void* BuildingSupportActor; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDefenderComponent, OnDefenderFinishedTeleport) == 200, "Offset mismatch for UFortDefenderComponent::OnDefenderFinishedTeleport");
static_assert(offsetof(UFortDefenderComponent, OnDefenderModeChanged) == 216, "Offset mismatch for UFortDefenderComponent::OnDefenderModeChanged");
static_assert(offsetof(UFortDefenderComponent, DefaultWeaponDataHandle) == 232, "Offset mismatch for UFortDefenderComponent::DefaultWeaponDataHandle");
static_assert(offsetof(UFortDefenderComponent, TimeAllowedOutsideTether) == 248, "Offset mismatch for UFortDefenderComponent::TimeAllowedOutsideTether");
static_assert(offsetof(UFortDefenderComponent, DefenderAnchorClass) == 288, "Offset mismatch for UFortDefenderComponent::DefenderAnchorClass");
static_assert(offsetof(UFortDefenderComponent, DefenderFollowRadius) == 296, "Offset mismatch for UFortDefenderComponent::DefenderFollowRadius");
static_assert(offsetof(UFortDefenderComponent, DefenderFollowHalfHeight) == 300, "Offset mismatch for UFortDefenderComponent::DefenderFollowHalfHeight");
static_assert(offsetof(UFortDefenderComponent, DefenderFollowEQSSize) == 304, "Offset mismatch for UFortDefenderComponent::DefenderFollowEQSSize");
static_assert(offsetof(UFortDefenderComponent, DefenderFollowEQSSpaceBetween) == 308, "Offset mismatch for UFortDefenderComponent::DefenderFollowEQSSpaceBetween");
static_assert(offsetof(UFortDefenderComponent, MaxZAvoidMoveInHalfTiles) == 312, "Offset mismatch for UFortDefenderComponent::MaxZAvoidMoveInHalfTiles");
static_assert(offsetof(UFortDefenderComponent, SpawnAbilityTagContainer) == 320, "Offset mismatch for UFortDefenderComponent::SpawnAbilityTagContainer");
static_assert(offsetof(UFortDefenderComponent, DespawnAbilityTagContainer) == 352, "Offset mismatch for UFortDefenderComponent::DespawnAbilityTagContainer");
static_assert(offsetof(UFortDefenderComponent, TeleportSettings) == 384, "Offset mismatch for UFortDefenderComponent::TeleportSettings");
static_assert(offsetof(UFortDefenderComponent, ZHeightTeleportCheck) == 440, "Offset mismatch for UFortDefenderComponent::ZHeightTeleportCheck");
static_assert(offsetof(UFortDefenderComponent, Min2DDistanceTetherTransitionTeleport) == 480, "Offset mismatch for UFortDefenderComponent::Min2DDistanceTetherTransitionTeleport");
static_assert(offsetof(UFortDefenderComponent, MinZHeightTetherTransitionTeleport) == 520, "Offset mismatch for UFortDefenderComponent::MinZHeightTetherTransitionTeleport");
static_assert(offsetof(UFortDefenderComponent, PlayerToReviveKey) == 560, "Offset mismatch for UFortDefenderComponent::PlayerToReviveKey");
static_assert(offsetof(UFortDefenderComponent, DefenderOwnerKey) == 564, "Offset mismatch for UFortDefenderComponent::DefenderOwnerKey");
static_assert(offsetof(UFortDefenderComponent, AutoReviveTime) == 568, "Offset mismatch for UFortDefenderComponent::AutoReviveTime");
static_assert(offsetof(UFortDefenderComponent, AnchorSnapZTolerance) == 608, "Offset mismatch for UFortDefenderComponent::AnchorSnapZTolerance");
static_assert(offsetof(UFortDefenderComponent, DefenderAnchor) == 616, "Offset mismatch for UFortDefenderComponent::DefenderAnchor");
static_assert(offsetof(UFortDefenderComponent, BuildingSupportActor) == 656, "Offset mismatch for UFortDefenderComponent::BuildingSupportActor");

// /Script/SaveTheWorldRuntime.FortNavigationFilter_DefenderBounds
// Kind: Class; super: FortNavigationFilter
class UFortNavigationFilter_DefenderBounds
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Areas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IncludeFlags[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExcludeFlags[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortNavigationFilter_DefenderBounds, Areas) == 40, "Offset mismatch for UFortNavigationFilter_DefenderBounds::Areas");
static_assert(offsetof(UFortNavigationFilter_DefenderBounds, IncludeFlags) == 56, "Offset mismatch for UFortNavigationFilter_DefenderBounds::IncludeFlags");
static_assert(offsetof(UFortNavigationFilter_DefenderBounds, ExcludeFlags) == 60, "Offset mismatch for UFortNavigationFilter_DefenderBounds::ExcludeFlags");

// /Script/SaveTheWorldRuntime.FortPlayerDefenderComponent
// Kind: Class; super: ActorComponent
class UFortPlayerDefenderComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DisableDefenderTagQuery[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    void* SpawnInDefenderEQSQuery; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* BehaviorTree; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ExtraAbilitySets; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RevivePlayerAbilityTags[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    std::uint8_t PreventDefenderReviveTags[0x48]; // 0x0148 (Size: 0x48, Type: StructProperty)
    std::uint8_t DefenderReviverEligibilityMatchingTags[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    void* DefenderReviveCooldownGE; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Max2DReviveApproach[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    void* ValidateDefenseLocationQuery; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    void* RequestedDefenderReviver; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DefenderPawns; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0200
    std::uint8_t bCanInteract; // 0x0204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4B]; // 0x0205
    TArray<void*> PendingSpawnRequests; // 0x0250 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerDefenderComponent, DisableDefenderTagQuery) == 192, "Offset mismatch for UFortPlayerDefenderComponent::DisableDefenderTagQuery");
static_assert(offsetof(UFortPlayerDefenderComponent, SpawnInDefenderEQSQuery) == 264, "Offset mismatch for UFortPlayerDefenderComponent::SpawnInDefenderEQSQuery");
static_assert(offsetof(UFortPlayerDefenderComponent, BehaviorTree) == 272, "Offset mismatch for UFortPlayerDefenderComponent::BehaviorTree");
static_assert(offsetof(UFortPlayerDefenderComponent, ExtraAbilitySets) == 280, "Offset mismatch for UFortPlayerDefenderComponent::ExtraAbilitySets");
static_assert(offsetof(UFortPlayerDefenderComponent, RevivePlayerAbilityTags) == 296, "Offset mismatch for UFortPlayerDefenderComponent::RevivePlayerAbilityTags");
static_assert(offsetof(UFortPlayerDefenderComponent, PreventDefenderReviveTags) == 328, "Offset mismatch for UFortPlayerDefenderComponent::PreventDefenderReviveTags");
static_assert(offsetof(UFortPlayerDefenderComponent, DefenderReviverEligibilityMatchingTags) == 400, "Offset mismatch for UFortPlayerDefenderComponent::DefenderReviverEligibilityMatchingTags");
static_assert(offsetof(UFortPlayerDefenderComponent, DefenderReviveCooldownGE) == 432, "Offset mismatch for UFortPlayerDefenderComponent::DefenderReviveCooldownGE");
static_assert(offsetof(UFortPlayerDefenderComponent, Max2DReviveApproach) == 440, "Offset mismatch for UFortPlayerDefenderComponent::Max2DReviveApproach");
static_assert(offsetof(UFortPlayerDefenderComponent, ValidateDefenseLocationQuery) == 480, "Offset mismatch for UFortPlayerDefenderComponent::ValidateDefenseLocationQuery");
static_assert(offsetof(UFortPlayerDefenderComponent, RequestedDefenderReviver) == 488, "Offset mismatch for UFortPlayerDefenderComponent::RequestedDefenderReviver");
static_assert(offsetof(UFortPlayerDefenderComponent, DefenderPawns) == 496, "Offset mismatch for UFortPlayerDefenderComponent::DefenderPawns");
static_assert(offsetof(UFortPlayerDefenderComponent, bCanInteract) == 516, "Offset mismatch for UFortPlayerDefenderComponent::bCanInteract");
static_assert(offsetof(UFortPlayerDefenderComponent, PendingSpawnRequests) == 592, "Offset mismatch for UFortPlayerDefenderComponent::PendingSpawnRequests");

// /Script/SaveTheWorldRuntime.FortQueryContext_DefenderAvoidEnemy
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_DefenderAvoidEnemy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldRuntime.FortQueryContext_DefenderLeader
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_DefenderLeader
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldRuntime.FortQueryContext_DefenderLocationsToAvoid
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_DefenderLocationsToAvoid
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ActorClassesToAvoid; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float AnchorBoxEntentPadding; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortQueryContext_DefenderLocationsToAvoid, ActorClassesToAvoid) == 40, "Offset mismatch for UFortQueryContext_DefenderLocationsToAvoid::ActorClassesToAvoid");
static_assert(offsetof(UFortQueryContext_DefenderLocationsToAvoid, AnchorBoxEntentPadding) == 56, "Offset mismatch for UFortQueryContext_DefenderLocationsToAvoid::AnchorBoxEntentPadding");

// /Script/SaveTheWorldRuntime.FortQueryContext_DefenderOutOfBoundsLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_DefenderOutOfBoundsLocation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float GeneratorZOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TraceStartOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TraceEndOffset; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortQueryContext_DefenderOutOfBoundsLocation, GeneratorZOffset) == 40, "Offset mismatch for UFortQueryContext_DefenderOutOfBoundsLocation::GeneratorZOffset");
static_assert(offsetof(UFortQueryContext_DefenderOutOfBoundsLocation, TraceStartOffset) == 44, "Offset mismatch for UFortQueryContext_DefenderOutOfBoundsLocation::TraceStartOffset");
static_assert(offsetof(UFortQueryContext_DefenderOutOfBoundsLocation, TraceEndOffset) == 48, "Offset mismatch for UFortQueryContext_DefenderOutOfBoundsLocation::TraceEndOffset");

// /Script/SaveTheWorldRuntime.FortQueryContext_DefenderWander
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_DefenderWander
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldRuntime.FortQueryContext_PlayerDefensePing
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_PlayerDefensePing
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldRuntime.FortSTWUIDataBase
// Kind: Class; super: PrimaryDataAsset
class UFortSTWUIDataBase
{
public:
    std::uint8_t Opaque[1];
};
