/**
 * decamp dumper generated SDK
 * Package: /Script/CherrySmokeHeroRankingSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankData
// Kind: ScriptStruct; super: none
struct FCherrySmokeHeroRankData
{
public:
    std::uint8_t Rank[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t PointsRequirement[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCherrySmokeHeroRankData, Rank) == 0, "Offset mismatch for FCherrySmokeHeroRankData::Rank");
static_assert(offsetof(FCherrySmokeHeroRankData, PointsRequirement) == 8, "Offset mismatch for FCherrySmokeHeroRankData::PointsRequirement");

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankRuntimeData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FCherrySmokeHeroRankRuntimeData
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t TeamId; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float HeroPoints; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float OldHeroPoints; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentRankIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t OldCurrentRankIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCherrySmokeHeroRankRuntimeData, TeamId) == 12, "Offset mismatch for FCherrySmokeHeroRankRuntimeData::TeamId");
static_assert(offsetof(FCherrySmokeHeroRankRuntimeData, HeroPoints) == 16, "Offset mismatch for FCherrySmokeHeroRankRuntimeData::HeroPoints");
static_assert(offsetof(FCherrySmokeHeroRankRuntimeData, OldHeroPoints) == 20, "Offset mismatch for FCherrySmokeHeroRankRuntimeData::OldHeroPoints");
static_assert(offsetof(FCherrySmokeHeroRankRuntimeData, CurrentRankIndex) == 24, "Offset mismatch for FCherrySmokeHeroRankRuntimeData::CurrentRankIndex");
static_assert(offsetof(FCherrySmokeHeroRankRuntimeData, OldCurrentRankIndex) == 28, "Offset mismatch for FCherrySmokeHeroRankRuntimeData::OldCurrentRankIndex");

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankRuntimeDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FCherrySmokeHeroRankRuntimeDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> WeakOwningComponent; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FCherrySmokeHeroRankRuntimeDataArray, Entries) == 72, "Offset mismatch for FCherrySmokeHeroRankRuntimeDataArray::Entries");
static_assert(offsetof(FCherrySmokeHeroRankRuntimeDataArray, WeakOwningComponent) == 88, "Offset mismatch for FCherrySmokeHeroRankRuntimeDataArray::WeakOwningComponent");

// /Script/CherrySmokeHeroRankingSystemRuntime.FortEventReaction_IncreaseCherrySmokeHeroPointsMultiplier
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_IncreaseCherrySmokeHeroPointsMultiplier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float MultiplierDelta; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortEventReaction_IncreaseCherrySmokeHeroPointsMultiplier, MultiplierDelta) == 8, "Offset mismatch for FFortEventReaction_IncreaseCherrySmokeHeroPointsMultiplier::MultiplierDelta");

// /Script/CherrySmokeHeroRankingSystemRuntime.FortEventReaction_IncreaseCherrySmokeHeroRank
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_IncreaseCherrySmokeHeroRank
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Context[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float PointsAwarded; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreMultiplier; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEventReaction_IncreaseCherrySmokeHeroRank, Context) == 8, "Offset mismatch for FFortEventReaction_IncreaseCherrySmokeHeroRank::Context");
static_assert(offsetof(FFortEventReaction_IncreaseCherrySmokeHeroRank, PointsAwarded) == 12, "Offset mismatch for FFortEventReaction_IncreaseCherrySmokeHeroRank::PointsAwarded");
static_assert(offsetof(FFortEventReaction_IncreaseCherrySmokeHeroRank, bIgnoreMultiplier) == 16, "Offset mismatch for FFortEventReaction_IncreaseCherrySmokeHeroRank::bIgnoreMultiplier");

// /Script/CherrySmokeHeroRankingSystemRuntime.HeroRankMultiplier
// Kind: ScriptStruct; super: none
struct FHeroRankMultiplier
{
public:
    float Multiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Handle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHeroRankMultiplier, Multiplier) == 0, "Offset mismatch for FHeroRankMultiplier::Multiplier");
static_assert(offsetof(FHeroRankMultiplier, Handle) == 4, "Offset mismatch for FHeroRankMultiplier::Handle");

// /Script/CherrySmokeHeroRankingSystemRuntime.HeroRankingMultiplierHandle
// Kind: ScriptStruct; super: none
struct FHeroRankingMultiplierHandle
{
public:
    std::int32_t Handle; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHeroRankingMultiplierHandle, Handle) == 0, "Offset mismatch for FHeroRankingMultiplierHandle::Handle");

// /Script/CherrySmokeHeroRankingSystemRuntime.OnHeroPointsEarned
// Kind: ScriptStruct; super: none
struct FOnHeroPointsEarned
{
public:
    float PointsEarned; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* player; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextTag[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t PointsSource; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOnHeroPointsEarned, PointsEarned) == 0, "Offset mismatch for FOnHeroPointsEarned::PointsEarned");
static_assert(offsetof(FOnHeroPointsEarned, player) == 8, "Offset mismatch for FOnHeroPointsEarned::player");
static_assert(offsetof(FOnHeroPointsEarned, ContextTag) == 16, "Offset mismatch for FOnHeroPointsEarned::ContextTag");
static_assert(offsetof(FOnHeroPointsEarned, PointsSource) == 20, "Offset mismatch for FOnHeroPointsEarned::PointsSource");

// /Script/CherrySmokeHeroRankingSystemRuntime.OnHeroRankChanged
// Kind: ScriptStruct; super: none
struct FOnHeroRankChanged
{
public:
    std::uint8_t RankTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* player; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOnHeroRankChanged, RankTag) == 0, "Offset mismatch for FOnHeroRankChanged::RankTag");
static_assert(offsetof(FOnHeroRankChanged, player) == 8, "Offset mismatch for FOnHeroRankChanged::player");

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankingAnalyticsComponent
// Kind: Class; super: GameStateComponent
class UCherrySmokeHeroRankingAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::PrimaryComponentTick");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, ComponentTags) == 104, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::ComponentTags");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, AssetUserData) == 120, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::AssetUserData");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::UCSSerializationIndex");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, bNetAddressable) == 152, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::bNetAddressable");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, bAutoActivate) == 154, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::bAutoActivate");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, bIsEditorOnly) == 155, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::bIsEditorOnly");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, CreationMethod) == 185, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::CreationMethod");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, OnComponentActivated) == 186, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::OnComponentActivated");
static_assert(offsetof(UCherrySmokeHeroRankingAnalyticsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UCherrySmokeHeroRankingAnalyticsComponent::OnComponentDeactivated");

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankingCheatManager
// Kind: Class; super: ChildCheatManager
class UCherrySmokeHeroRankingCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankingGlobalManager
// Kind: Class; super: GameStateComponent
class UCherrySmokeHeroRankingGlobalManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t PerTeamRuntimeRankData[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    TArray<void*> Ranks; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    void* HeroRankingManagerComponentClass; // 0x0140 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCherrySmokeHeroRankingGlobalManager, PerTeamRuntimeRankData) == 208, "Offset mismatch for UCherrySmokeHeroRankingGlobalManager::PerTeamRuntimeRankData");
static_assert(offsetof(UCherrySmokeHeroRankingGlobalManager, Ranks) == 304, "Offset mismatch for UCherrySmokeHeroRankingGlobalManager::Ranks");
static_assert(offsetof(UCherrySmokeHeroRankingGlobalManager, HeroRankingManagerComponentClass) == 320, "Offset mismatch for UCherrySmokeHeroRankingGlobalManager::HeroRankingManagerComponentClass");

// /Script/CherrySmokeHeroRankingSystemRuntime.CherrySmokeHeroRankingManager
// Kind: Class; super: FortGameFrameworkComponent_ContextualReactions
class UCherrySmokeHeroRankingManager
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    FMulticastInlineDelegate OnHeroRankChangedEvent; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHeroPointsChangedEvent; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHeroPointsEarnedEvent; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMultiplierChangedEvent; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMultiplierEndedEvent; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MaxMultiplier[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveMultiplier[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCherrySmokeHeroRankingManager, OnHeroRankChangedEvent) == 312, "Offset mismatch for UCherrySmokeHeroRankingManager::OnHeroRankChangedEvent");
static_assert(offsetof(UCherrySmokeHeroRankingManager, OnHeroPointsChangedEvent) == 328, "Offset mismatch for UCherrySmokeHeroRankingManager::OnHeroPointsChangedEvent");
static_assert(offsetof(UCherrySmokeHeroRankingManager, OnHeroPointsEarnedEvent) == 344, "Offset mismatch for UCherrySmokeHeroRankingManager::OnHeroPointsEarnedEvent");
static_assert(offsetof(UCherrySmokeHeroRankingManager, OnMultiplierChangedEvent) == 360, "Offset mismatch for UCherrySmokeHeroRankingManager::OnMultiplierChangedEvent");
static_assert(offsetof(UCherrySmokeHeroRankingManager, OnMultiplierEndedEvent) == 376, "Offset mismatch for UCherrySmokeHeroRankingManager::OnMultiplierEndedEvent");
static_assert(offsetof(UCherrySmokeHeroRankingManager, MaxMultiplier) == 392, "Offset mismatch for UCherrySmokeHeroRankingManager::MaxMultiplier");
static_assert(offsetof(UCherrySmokeHeroRankingManager, ActiveMultiplier) == 432, "Offset mismatch for UCherrySmokeHeroRankingManager::ActiveMultiplier");

// /Script/CherrySmokeHeroRankingSystemRuntime.FortQueryGenerator_HeroRankingDiscoverables
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_HeroRankingDiscoverables
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_HeroRankingDiscoverables, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_HeroRankingDiscoverables::OptionName");
static_assert(offsetof(UFortQueryGenerator_HeroRankingDiscoverables, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_HeroRankingDiscoverables::ItemType");
static_assert(offsetof(UFortQueryGenerator_HeroRankingDiscoverables, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_HeroRankingDiscoverables::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_HeroRankingDiscoverables, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_HeroRankingDiscoverables::EnvQueryResultNormalizationOption");

// /Script/CherrySmokeHeroRankingSystemRuntime.FortQueryTest_HeroRank
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HeroRank
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* ContextPlayer; // 0x01F8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_HeroRank, ContextPlayer) == 504, "Offset mismatch for UFortQueryTest_HeroRank::ContextPlayer");

// /Script/CherrySmokeHeroRankingSystemRuntime.HeroRankingUnlockableInterface
// Kind: Class; super: Interface
class UHeroRankingUnlockableInterface
{
public:
    std::uint8_t Opaque[1];
};
