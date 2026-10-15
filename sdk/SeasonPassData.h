/**
 * decamp dumper generated SDK
 * Package: /Script/SeasonPassData
 */
#pragma once
#include "Basic.h"

// /Script/SeasonPassData.SeasonPassLevelRewards
// Kind: ScriptStruct; super: TableRowBase
struct FSeasonPassLevelRewards
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> RewardEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassLevelRewards, RewardEntries) == 8, "Offset mismatch for FSeasonPassLevelRewards::RewardEntries");

// /Script/SeasonPassData.SeasonPassPremiumReward
// Kind: ScriptStruct; super: none
struct FSeasonPassPremiumReward
{
public:
    std::uint8_t ItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHidden; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSeasonPassPremiumReward, ItemDefinition) == 0, "Offset mismatch for FSeasonPassPremiumReward::ItemDefinition");
static_assert(offsetof(FSeasonPassPremiumReward, Quantity) == 32, "Offset mismatch for FSeasonPassPremiumReward::Quantity");
static_assert(offsetof(FSeasonPassPremiumReward, bHidden) == 36, "Offset mismatch for FSeasonPassPremiumReward::bHidden");

// /Script/SeasonPassData.SeasonPassPremiumRewardOffer
// Kind: ScriptStruct; super: none
struct FSeasonPassPremiumRewardOffer
{
public:
    std::uint8_t OfferGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Rewards; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassPremiumRewardOffer, OfferGuid) == 0, "Offset mismatch for FSeasonPassPremiumRewardOffer::OfferGuid");
static_assert(offsetof(FSeasonPassPremiumRewardOffer, Rewards) == 16, "Offset mismatch for FSeasonPassPremiumRewardOffer::Rewards");

// /Script/SeasonPassData.SeasonPassRuntimeLevelRewards
// Kind: ScriptStruct; super: none
struct FSeasonPassRuntimeLevelRewards
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> RewardEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSeasonPassRuntimeLevelRewards, Level) == 0, "Offset mismatch for FSeasonPassRuntimeLevelRewards::Level");
static_assert(offsetof(FSeasonPassRuntimeLevelRewards, RewardEntries) == 8, "Offset mismatch for FSeasonPassRuntimeLevelRewards::RewardEntries");

// /Script/SeasonPassData.SeasonPassCategoryDataBase
// Kind: Class; super: PrimaryDataAsset
class USeasonPassCategoryDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Pages; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassCategoryDataBase, Pages) == 40, "Offset mismatch for USeasonPassCategoryDataBase::Pages");

// /Script/SeasonPassData.SeasonPassCommonDataBase
// Kind: Class; super: PrimaryDataAsset
class USeasonPassCommonDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> CurrencyDefinition; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USeasonPassCommonDataBase, CurrencyDefinition) == 40, "Offset mismatch for USeasonPassCommonDataBase::CurrencyDefinition");

// /Script/SeasonPassData.SeasonPassDataBase
// Kind: Class; super: PrimaryDataAsset
class USeasonPassDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Product[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    FString SeasonStorefront; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString SeasonPassOfferId; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString SeasonPassBundleOfferId; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString SeasonPassLevelOfferId; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString SeasonPassLevelBundleOfferId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::int32_t RefundAmountForGiftToken; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLegacyPass; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    void* PremiumTrackPurchasedToken; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PaidRewards; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassDataBase, Product) == 40, "Offset mismatch for USeasonPassDataBase::Product");
static_assert(offsetof(USeasonPassDataBase, SeasonStorefront) == 48, "Offset mismatch for USeasonPassDataBase::SeasonStorefront");
static_assert(offsetof(USeasonPassDataBase, SeasonPassOfferId) == 64, "Offset mismatch for USeasonPassDataBase::SeasonPassOfferId");
static_assert(offsetof(USeasonPassDataBase, SeasonPassBundleOfferId) == 80, "Offset mismatch for USeasonPassDataBase::SeasonPassBundleOfferId");
static_assert(offsetof(USeasonPassDataBase, SeasonPassLevelOfferId) == 96, "Offset mismatch for USeasonPassDataBase::SeasonPassLevelOfferId");
static_assert(offsetof(USeasonPassDataBase, SeasonPassLevelBundleOfferId) == 112, "Offset mismatch for USeasonPassDataBase::SeasonPassLevelBundleOfferId");
static_assert(offsetof(USeasonPassDataBase, RefundAmountForGiftToken) == 128, "Offset mismatch for USeasonPassDataBase::RefundAmountForGiftToken");
static_assert(offsetof(USeasonPassDataBase, bLegacyPass) == 132, "Offset mismatch for USeasonPassDataBase::bLegacyPass");
static_assert(offsetof(USeasonPassDataBase, PremiumTrackPurchasedToken) == 136, "Offset mismatch for USeasonPassDataBase::PremiumTrackPurchasedToken");
static_assert(offsetof(USeasonPassDataBase, PaidRewards) == 144, "Offset mismatch for USeasonPassDataBase::PaidRewards");

// /Script/SeasonPassData.SeasonPassDeveloperSettings
// Kind: Class; super: DeveloperSettings
class USeasonPassDeveloperSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPassData.SeasonPassItemDefinition
// Kind: Class; super: FortSeasonItemDefinition
class USeasonPassItemDefinition
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t CommonData[0x20]; // 0x0138 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PassData[0x20]; // 0x0158 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LevelData[0x20]; // 0x0178 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Categories; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CategoryLinkBehavior; // 0x01A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01A9
    FString PRMPassId; // 0x01B0 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> SeasonPassOfferItemRewardsMap; // 0x01C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USeasonPassItemDefinition, CommonData) == 312, "Offset mismatch for USeasonPassItemDefinition::CommonData");
static_assert(offsetof(USeasonPassItemDefinition, PassData) == 344, "Offset mismatch for USeasonPassItemDefinition::PassData");
static_assert(offsetof(USeasonPassItemDefinition, LevelData) == 376, "Offset mismatch for USeasonPassItemDefinition::LevelData");
static_assert(offsetof(USeasonPassItemDefinition, Categories) == 408, "Offset mismatch for USeasonPassItemDefinition::Categories");
static_assert(offsetof(USeasonPassItemDefinition, CategoryLinkBehavior) == 424, "Offset mismatch for USeasonPassItemDefinition::CategoryLinkBehavior");
static_assert(offsetof(USeasonPassItemDefinition, PRMPassId) == 432, "Offset mismatch for USeasonPassItemDefinition::PRMPassId");
static_assert(offsetof(USeasonPassItemDefinition, SeasonPassOfferItemRewardsMap) == 448, "Offset mismatch for USeasonPassItemDefinition::SeasonPassOfferItemRewardsMap");

// /Script/SeasonPassData.SeasonPassLevelData
// Kind: Class; super: PrimaryDataAsset
class USeasonPassLevelData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CurrencyPerLevel; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t LevelPurchaseType; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t SeasonLevelPurchaseLimit; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t SeasonLevelPurchaseBundleLimit; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t SeasonLevelOffer_MaxLevel; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    TArray<void*> CachedSortedSeasonLevelRewards; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassLevelData, CurrencyPerLevel) == 40, "Offset mismatch for USeasonPassLevelData::CurrencyPerLevel");
static_assert(offsetof(USeasonPassLevelData, LevelPurchaseType) == 44, "Offset mismatch for USeasonPassLevelData::LevelPurchaseType");
static_assert(offsetof(USeasonPassLevelData, SeasonLevelPurchaseLimit) == 48, "Offset mismatch for USeasonPassLevelData::SeasonLevelPurchaseLimit");
static_assert(offsetof(USeasonPassLevelData, SeasonLevelPurchaseBundleLimit) == 52, "Offset mismatch for USeasonPassLevelData::SeasonLevelPurchaseBundleLimit");
static_assert(offsetof(USeasonPassLevelData, SeasonLevelOffer_MaxLevel) == 56, "Offset mismatch for USeasonPassLevelData::SeasonLevelOffer_MaxLevel");
static_assert(offsetof(USeasonPassLevelData, CachedSortedSeasonLevelRewards) == 64, "Offset mismatch for USeasonPassLevelData::CachedSortedSeasonLevelRewards");

// /Script/SeasonPassData.SeasonPassPageData
// Kind: Class; super: PrimaryDataAsset
class USeasonPassPageData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PageGrid[0xE8]; // 0x0028 (Size: 0xE8, Type: StructProperty)
    TArray<void*> Extensions; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USeasonPassPageData, PageGrid) == 40, "Offset mismatch for USeasonPassPageData::PageGrid");
static_assert(offsetof(USeasonPassPageData, Extensions) == 272, "Offset mismatch for USeasonPassPageData::Extensions");

// /Script/SeasonPassData.SeasonPassPageDataExtension
// Kind: Class; super: Object
class USeasonPassPageDataExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ElementTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USeasonPassPageDataExtension, ElementTags) == 40, "Offset mismatch for USeasonPassPageDataExtension::ElementTags");
