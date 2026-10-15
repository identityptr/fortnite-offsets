/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionRuntime.ExtractionDataReceivedEvent
// Kind: ScriptStruct; super: none
struct FExtractionDataReceivedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpriteExtractionRuntime.ExtractionOperation
// Kind: ScriptStruct; super: none
struct FExtractionOperation
{
public:
    std::uint8_t Definition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PersistenceData[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::int32_t ExtractionPoints; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFromWin; // 0x0084 (Size: 0x1, Type: BoolProperty)
    // 0x0084 BoolProperty bIsBoosted (shared storage)
    // 0x0084 BoolProperty bIsFirstExtraction (shared storage)
    // 0x0084 BoolProperty bIsNewMastery (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0085
    std::int32_t BonusExtractionPoints; // 0x0088 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FExtractionOperation, Definition) == 0, "Offset mismatch for FExtractionOperation::Definition");
static_assert(offsetof(FExtractionOperation, PersistenceData) == 32, "Offset mismatch for FExtractionOperation::PersistenceData");
static_assert(offsetof(FExtractionOperation, ExtractionPoints) == 128, "Offset mismatch for FExtractionOperation::ExtractionPoints");
static_assert(offsetof(FExtractionOperation, bFromWin) == 132, "Offset mismatch for FExtractionOperation::bFromWin");
static_assert(offsetof(FExtractionOperation, BonusExtractionPoints) == 136, "Offset mismatch for FExtractionOperation::BonusExtractionPoints");

// /Script/SpriteExtractionRuntime.FortSpriteExtractionAIDataRarity
// Kind: ScriptStruct; super: none
struct FFortSpriteExtractionAIDataRarity
{
public:
    std::uint8_t bHasItemEquipped; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Rarity; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t RarityTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSpriteExtractionAIDataRarity, bHasItemEquipped) == 0, "Offset mismatch for FFortSpriteExtractionAIDataRarity::bHasItemEquipped");
static_assert(offsetof(FFortSpriteExtractionAIDataRarity, Rarity) == 1, "Offset mismatch for FFortSpriteExtractionAIDataRarity::Rarity");
static_assert(offsetof(FFortSpriteExtractionAIDataRarity, RarityTag) == 4, "Offset mismatch for FFortSpriteExtractionAIDataRarity::RarityTag");

// /Script/SpriteExtractionRuntime.FortSpriteExtractionAIDataRarityMaxTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortSpriteExtractionAIDataRarityMaxTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Rarity[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint32_t max; // 0x0014 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FFortSpriteExtractionAIDataRarityMaxTableRow, Rarity) == 8, "Offset mismatch for FFortSpriteExtractionAIDataRarityMaxTableRow::Rarity");
static_assert(offsetof(FFortSpriteExtractionAIDataRarityMaxTableRow, max) == 20, "Offset mismatch for FFortSpriteExtractionAIDataRarityMaxTableRow::max");

// /Script/SpriteExtractionRuntime.FortSpriteExtractionAIDataRarityTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortSpriteExtractionAIDataRarityTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Rarity[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSpriteExtractionAIDataRarityTableRow, Rarity) == 8, "Offset mismatch for FFortSpriteExtractionAIDataRarityTableRow::Rarity");

// /Script/SpriteExtractionRuntime.MatchTrackedData
// Kind: ScriptStruct; super: none
struct FMatchTrackedData
{
public:
    TMap<void*, void*> DroppedItems; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtractedItems; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FirstTimeExtractedItems; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> FirstTimeMasteries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMatchTrackedData, DroppedItems) == 0, "Offset mismatch for FMatchTrackedData::DroppedItems");
static_assert(offsetof(FMatchTrackedData, ExtractedItems) == 16, "Offset mismatch for FMatchTrackedData::ExtractedItems");
static_assert(offsetof(FMatchTrackedData, FirstTimeExtractedItems) == 32, "Offset mismatch for FMatchTrackedData::FirstTimeExtractedItems");
static_assert(offsetof(FMatchTrackedData, FirstTimeMasteries) == 48, "Offset mismatch for FMatchTrackedData::FirstTimeMasteries");

// /Script/SpriteExtractionRuntime.DebugClientAuthMagpiePersistenceComponent
// Kind: Class; super: ActorComponent
class UDebugClientAuthMagpiePersistenceComponent
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

static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::PrimaryComponentTick");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, ComponentTags) == 104, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::ComponentTags");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, AssetUserData) == 120, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::AssetUserData");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::UCSSerializationIndex");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, bNetAddressable) == 152, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::bNetAddressable");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, bAutoActivate) == 154, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::bAutoActivate");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, bIsEditorOnly) == 155, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::bIsEditorOnly");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, CreationMethod) == 185, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::CreationMethod");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, OnComponentActivated) == 186, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::OnComponentActivated");
static_assert(offsetof(UDebugClientAuthMagpiePersistenceComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDebugClientAuthMagpiePersistenceComponent::OnComponentDeactivated");

// /Script/SpriteExtractionRuntime.FortGameStateComponent_SpriteExtractionAIData
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_SpriteExtractionAIData
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* TagQueriesDataTable; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    FName PlaylistTagQueryRowName; // 0x00E0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PlaylistTagQuery[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    FName ItemsTagQueryRowName; // 0x0130 (Size: 0x8, Type: NameProperty)
    std::uint8_t ItemsTagQuery[0x48]; // 0x0138 (Size: 0x48, Type: StructProperty)
    std::uint8_t MinDifferentItemsToAssign[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    void* RarityDataTable; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxPlayerRarityTableRowName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaxPlayerRarity[0xC]; // 0x01B4 (Size: 0xC, Type: StructProperty)
    std::uint8_t MaxFallbackRarityTableRowName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaxFallbackRarity[0xC]; // 0x01C4 (Size: 0xC, Type: StructProperty)
    std::uint8_t MinMaxQuantileRarityTableRowName[0x4]; // 0x01D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MinMaxQuantileRarity[0xC]; // 0x01D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t MaxItemRarityQuantile[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    void* MaxSpritesPerRarityDataTable; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> RemainingSpritesPerRarity; // 0x0210 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0220
    TArray<void*> GatheredPlayerData; // 0x0240 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0250
    std::uint8_t MaxQuantileRarity[0x10]; // 0x0270 (Size: 0x10, Type: StructProperty)
    TSet<void*> PendingPersistencePlayers; // 0x0280 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, TagQueriesDataTable) == 216, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::TagQueriesDataTable");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, PlaylistTagQueryRowName) == 224, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::PlaylistTagQueryRowName");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, PlaylistTagQuery) == 232, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::PlaylistTagQuery");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, ItemsTagQueryRowName) == 304, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::ItemsTagQueryRowName");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, ItemsTagQuery) == 312, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::ItemsTagQuery");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MinDifferentItemsToAssign) == 384, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MinDifferentItemsToAssign");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, RarityDataTable) == 424, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::RarityDataTable");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxPlayerRarityTableRowName) == 432, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxPlayerRarityTableRowName");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxPlayerRarity) == 436, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxPlayerRarity");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxFallbackRarityTableRowName) == 448, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxFallbackRarityTableRowName");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxFallbackRarity) == 452, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxFallbackRarity");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MinMaxQuantileRarityTableRowName) == 464, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MinMaxQuantileRarityTableRowName");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MinMaxQuantileRarity) == 468, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MinMaxQuantileRarity");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxItemRarityQuantile) == 480, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxItemRarityQuantile");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxSpritesPerRarityDataTable) == 520, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxSpritesPerRarityDataTable");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, RemainingSpritesPerRarity) == 528, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::RemainingSpritesPerRarity");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, GatheredPlayerData) == 576, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::GatheredPlayerData");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, MaxQuantileRarity) == 624, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::MaxQuantileRarity");
static_assert(offsetof(UFortGameStateComponent_SpriteExtractionAIData, PendingPersistencePlayers) == 640, "Offset mismatch for UFortGameStateComponent_SpriteExtractionAIData::PendingPersistencePlayers");

// /Script/SpriteExtractionRuntime.FortGenerateFakePlayerBotPersistenceDataAsyncAction
// Kind: Class; super: BlueprintAsyncActionBase
class UFortGenerateFakePlayerBotPersistenceDataAsyncAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnPersistenceDataReady; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortGenerateFakePlayerBotPersistenceDataAsyncAction, OnPersistenceDataReady) == 48, "Offset mismatch for UFortGenerateFakePlayerBotPersistenceDataAsyncAction::OnPersistenceDataReady");

// /Script/SpriteExtractionRuntime.FortPlayerStateComponent_SpriteExtractionPersistence
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_SpriteExtractionPersistence
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    TWeakObjectPtr<void> OwningController; // 0x0128 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ReplicatedSpriteData[0x38]; // 0x0130 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxSpriteDust[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpriteDustEarnablePerMatch[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    void* SpriteDustCurrencyItemDefinition; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* MasteryTokenDefinition; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    void* BoosterDustMultiplierTable; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LowerLevelBonusExperience[0xC8]; // 0x01D0 (Size: 0xC8, Type: StructProperty)
    std::uint8_t ClientExtractionMatchData[0x60]; // 0x0298 (Size: 0x60, Type: StructProperty)
    std::uint8_t bFinalDataFlushed; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x97]; // 0x02F9
    TArray<void*> AllMatchExtractions; // 0x0390 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, OwningController) == 296, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::OwningController");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, ReplicatedSpriteData) == 304, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::ReplicatedSpriteData");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, MaxSpriteDust) == 360, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::MaxSpriteDust");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, MaxSpriteDustEarnablePerMatch) == 400, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::MaxSpriteDustEarnablePerMatch");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, SpriteDustCurrencyItemDefinition) == 440, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::SpriteDustCurrencyItemDefinition");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, MasteryTokenDefinition) == 448, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::MasteryTokenDefinition");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, BoosterDustMultiplierTable) == 456, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::BoosterDustMultiplierTable");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, LowerLevelBonusExperience) == 464, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::LowerLevelBonusExperience");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, ClientExtractionMatchData) == 664, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::ClientExtractionMatchData");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, bFinalDataFlushed) == 760, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::bFinalDataFlushed");
static_assert(offsetof(UFortPlayerStateComponent_SpriteExtractionPersistence, AllMatchExtractions) == 912, "Offset mismatch for UFortPlayerStateComponent_SpriteExtractionPersistence::AllMatchExtractions");

// /Script/SpriteExtractionRuntime.SpriteExtractionCreatureAnimInstance
// Kind: Class; super: AnimInstance
class USpriteExtractionCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsFleeing; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackpack_Idle; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped_Idle; // 0x0262 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCooldown; // 0x0263 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPawnSkydiving; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0265 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableSprings; // 0x0266 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0267
    double WalkPlayrate; // 0x0268 (Size: 0x8, Type: DoubleProperty)
    double RunPlayrate; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnterRun; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterWalk; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterIdle; // 0x027A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsFleeing) == 608, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsFleeing");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsBackpack_Idle) == 609, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsBackpack_Idle");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsEquipped_Idle) == 610, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsEquipped_Idle");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsCooldown) == 611, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsCooldown");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsPawnSkydiving) == 612, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsPawnSkydiving");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bIsMoving) == 613, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bIsMoving");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bDisableSprings) == 614, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bDisableSprings");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, WalkPlayrate) == 616, "Offset mismatch for USpriteExtractionCreatureAnimInstance::WalkPlayrate");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, RunPlayrate) == 624, "Offset mismatch for USpriteExtractionCreatureAnimInstance::RunPlayrate");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bEnterRun) == 632, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bEnterRun");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bEnterWalk) == 633, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bEnterWalk");
static_assert(offsetof(USpriteExtractionCreatureAnimInstance, bEnterIdle) == 634, "Offset mismatch for USpriteExtractionCreatureAnimInstance::bEnterIdle");

// /Script/SpriteExtractionRuntime.SpriteExtractionWaterHeldAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class USpriteExtractionWaterHeldAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t LookCurrentRot[0x18]; // 0x0330 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerLocalVelocity[0x18]; // 0x0348 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerWorldRotation[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    float BobTranslation; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTacticalSprint; // 0x037C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpriteExtractionWaterHeldAnimInstance, LookCurrentRot) == 816, "Offset mismatch for USpriteExtractionWaterHeldAnimInstance::LookCurrentRot");
static_assert(offsetof(USpriteExtractionWaterHeldAnimInstance, PlayerLocalVelocity) == 840, "Offset mismatch for USpriteExtractionWaterHeldAnimInstance::PlayerLocalVelocity");
static_assert(offsetof(USpriteExtractionWaterHeldAnimInstance, PlayerWorldRotation) == 864, "Offset mismatch for USpriteExtractionWaterHeldAnimInstance::PlayerWorldRotation");
static_assert(offsetof(USpriteExtractionWaterHeldAnimInstance, BobTranslation) == 888, "Offset mismatch for USpriteExtractionWaterHeldAnimInstance::BobTranslation");
static_assert(offsetof(USpriteExtractionWaterHeldAnimInstance, bIsTacticalSprint) == 892, "Offset mismatch for USpriteExtractionWaterHeldAnimInstance::bIsTacticalSprint");

// /Script/SpriteExtractionRuntime.SpriteExtraction_ServiceNode
// Kind: Class; super: FortConversationTaskNode_DataDrivenService
class USpriteExtraction_ServiceNode
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequirementMatchPolicy; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0191
    TArray<void*> Requirements; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EffectRecipientConfigs; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ServiceGameplayTag[0x8]; // 0x01B8 (Size: 0x8, Type: StructProperty)
    FString AnalyticsEventName; // 0x01C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t VisibilityPolicy; // 0x01D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPricingEnabled; // 0x01D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01D2
    std::uint8_t PricingKey[0x4]; // 0x01D4 (Size: 0x4, Type: NameProperty)
    std::int32_t PricingColumn; // 0x01D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01DC
    std::uint8_t LimitedStockCount[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    void* ServiceBriefConfigCollection; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    FName ServiceBriefCollectionKeyOveride; // 0x0210 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USpriteExtraction_ServiceNode, RequirementMatchPolicy) == 400, "Offset mismatch for USpriteExtraction_ServiceNode::RequirementMatchPolicy");
static_assert(offsetof(USpriteExtraction_ServiceNode, Requirements) == 408, "Offset mismatch for USpriteExtraction_ServiceNode::Requirements");
static_assert(offsetof(USpriteExtraction_ServiceNode, EffectRecipientConfigs) == 424, "Offset mismatch for USpriteExtraction_ServiceNode::EffectRecipientConfigs");
static_assert(offsetof(USpriteExtraction_ServiceNode, ServiceGameplayTag) == 440, "Offset mismatch for USpriteExtraction_ServiceNode::ServiceGameplayTag");
static_assert(offsetof(USpriteExtraction_ServiceNode, AnalyticsEventName) == 448, "Offset mismatch for USpriteExtraction_ServiceNode::AnalyticsEventName");
static_assert(offsetof(USpriteExtraction_ServiceNode, VisibilityPolicy) == 464, "Offset mismatch for USpriteExtraction_ServiceNode::VisibilityPolicy");
static_assert(offsetof(USpriteExtraction_ServiceNode, bPricingEnabled) == 465, "Offset mismatch for USpriteExtraction_ServiceNode::bPricingEnabled");
static_assert(offsetof(USpriteExtraction_ServiceNode, PricingKey) == 468, "Offset mismatch for USpriteExtraction_ServiceNode::PricingKey");
static_assert(offsetof(USpriteExtraction_ServiceNode, PricingColumn) == 472, "Offset mismatch for USpriteExtraction_ServiceNode::PricingColumn");
static_assert(offsetof(USpriteExtraction_ServiceNode, LimitedStockCount) == 480, "Offset mismatch for USpriteExtraction_ServiceNode::LimitedStockCount");
static_assert(offsetof(USpriteExtraction_ServiceNode, ServiceBriefConfigCollection) == 520, "Offset mismatch for USpriteExtraction_ServiceNode::ServiceBriefConfigCollection");
static_assert(offsetof(USpriteExtraction_ServiceNode, ServiceBriefCollectionKeyOveride) == 528, "Offset mismatch for USpriteExtraction_ServiceNode::ServiceBriefCollectionKeyOveride");

// /Script/SpriteExtractionRuntime.WaterSpriteExtractionCreatureAnimInstance
// Kind: Class; super: SpriteExtractionCreatureAnimInstance
class UWaterSpriteExtractionCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    std::uint8_t bIsSequentialIdle; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanExitLoop; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0282
    void* Idles; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* CurrentStartSequence; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* CurrentLoopSequence; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* CurrentExitSequence; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* PreviousStartSequence; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* PreviousLoopASequence; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* PreviousLoopBSequence; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* PreviousExitSequence; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentLoopCount; // 0x02C8 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetLoopCount; // 0x02CC (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentIdleIndex; // 0x02D0 (Size: 0x4, Type: IntProperty)
    std::int32_t SelectedIndex; // 0x02D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, bIsSequentialIdle) == 640, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::bIsSequentialIdle");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, bCanExitLoop) == 641, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::bCanExitLoop");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, Idles) == 648, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::Idles");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, CurrentStartSequence) == 656, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::CurrentStartSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, CurrentLoopSequence) == 664, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::CurrentLoopSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, CurrentExitSequence) == 672, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::CurrentExitSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, PreviousStartSequence) == 680, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::PreviousStartSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, PreviousLoopASequence) == 688, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::PreviousLoopASequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, PreviousLoopBSequence) == 696, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::PreviousLoopBSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, PreviousExitSequence) == 704, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::PreviousExitSequence");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, CurrentLoopCount) == 712, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::CurrentLoopCount");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, TargetLoopCount) == 716, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::TargetLoopCount");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, CurrentIdleIndex) == 720, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::CurrentIdleIndex");
static_assert(offsetof(UWaterSpriteExtractionCreatureAnimInstance, SelectedIndex) == 724, "Offset mismatch for UWaterSpriteExtractionCreatureAnimInstance::SelectedIndex");

// /Script/SpriteExtractionRuntime.WeightedIdle
// Kind: Class; super: Object
class UWeightedIdle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Start; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Loop; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* Exit; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LoopMin; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t LoopMax; // 0x0044 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Repeatable; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWeightedIdle, Start) == 40, "Offset mismatch for UWeightedIdle::Start");
static_assert(offsetof(UWeightedIdle, Loop) == 48, "Offset mismatch for UWeightedIdle::Loop");
static_assert(offsetof(UWeightedIdle, Exit) == 56, "Offset mismatch for UWeightedIdle::Exit");
static_assert(offsetof(UWeightedIdle, LoopMin) == 64, "Offset mismatch for UWeightedIdle::LoopMin");
static_assert(offsetof(UWeightedIdle, LoopMax) == 68, "Offset mismatch for UWeightedIdle::LoopMax");
static_assert(offsetof(UWeightedIdle, Weight) == 72, "Offset mismatch for UWeightedIdle::Weight");
static_assert(offsetof(UWeightedIdle, Repeatable) == 76, "Offset mismatch for UWeightedIdle::Repeatable");

// /Script/SpriteExtractionRuntime.WeightedIdleList
// Kind: Class; super: DataAsset
class UWeightedIdleList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Idles; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWeightedIdleList, Idles) == 40, "Offset mismatch for UWeightedIdleList::Idles");
