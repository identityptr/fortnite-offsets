/**
 * decamp dumper generated SDK
 * Package: /Script/SaveTheWorldUI
 */
#pragma once
#include "Basic.h"

// /Script/SaveTheWorldUI.ConsumedCriteriaData
// Kind: ScriptStruct; super: none
struct FConsumedCriteriaData
{
public:
    float PowerMod; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> CriteriaNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConsumedCriteriaData, PowerMod) == 0, "Offset mismatch for FConsumedCriteriaData::PowerMod");
static_assert(offsetof(FConsumedCriteriaData, CriteriaNames) == 8, "Offset mismatch for FConsumedCriteriaData::CriteriaNames");

// /Script/SaveTheWorldUI.ExpeditionTabInfo
// Kind: ScriptStruct; super: none
struct FExpeditionTabInfo
{
public:
    FName TabNameId; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TabLabelInfo[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FExpeditionTabInfo, TabNameId) == 0, "Offset mismatch for FExpeditionTabInfo::TabNameId");
static_assert(offsetof(FExpeditionTabInfo, TabLabelInfo) == 16, "Offset mismatch for FExpeditionTabInfo::TabLabelInfo");

// /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
// Kind: ScriptStruct; super: none
struct FFortAttributeModifierAccumulation
{
public:
    std::uint8_t GameplayTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Attribute[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::uint8_t ModifierOp; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0041
    float Magnitude; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAttributeModifierAccumulation, GameplayTag) == 0, "Offset mismatch for FFortAttributeModifierAccumulation::GameplayTag");
static_assert(offsetof(FFortAttributeModifierAccumulation, Attribute) == 8, "Offset mismatch for FFortAttributeModifierAccumulation::Attribute");
static_assert(offsetof(FFortAttributeModifierAccumulation, ModifierOp) == 64, "Offset mismatch for FFortAttributeModifierAccumulation::ModifierOp");
static_assert(offsetof(FFortAttributeModifierAccumulation, Magnitude) == 68, "Offset mismatch for FFortAttributeModifierAccumulation::Magnitude");

// /Script/SaveTheWorldUI.FortCampaignTabQuestObjectiveLock
// Kind: ScriptStruct; super: none
struct FFortCampaignTabQuestObjectiveLock
{
public:
    void* Quest; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectiveStatHandle[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortCampaignTabQuestObjectiveLock, Quest) == 0, "Offset mismatch for FFortCampaignTabQuestObjectiveLock::Quest");
static_assert(offsetof(FFortCampaignTabQuestObjectiveLock, ObjectiveStatHandle) == 8, "Offset mismatch for FFortCampaignTabQuestObjectiveLock::ObjectiveStatHandle");

// /Script/SaveTheWorldUI.FortInGamePerkDisplayData
// Kind: ScriptStruct; super: none
struct FFortInGamePerkDisplayData
{
public:
    std::uint8_t PerkDisplayType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Index; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Row; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Column; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortInGamePerkDisplayData, PerkDisplayType) == 0, "Offset mismatch for FFortInGamePerkDisplayData::PerkDisplayType");
static_assert(offsetof(FFortInGamePerkDisplayData, Index) == 4, "Offset mismatch for FFortInGamePerkDisplayData::Index");
static_assert(offsetof(FFortInGamePerkDisplayData, Row) == 8, "Offset mismatch for FFortInGamePerkDisplayData::Row");
static_assert(offsetof(FFortInGamePerkDisplayData, Column) == 12, "Offset mismatch for FFortInGamePerkDisplayData::Column");

// /Script/SaveTheWorldUI.FortItemCardDetailStripDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardDetailStripDataSTW
{
public:
    std::uint8_t Padding[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float MinimumHeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Material[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    float RarityNameTextLeftPadding; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ClassIconLeftPadding; // 0x003C (Size: 0x4, Type: FloatProperty)
    float PaddingBetweenClassIconAndTypeName; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t ClassIconSize[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardDetailStripDataSTW, Padding) == 0, "Offset mismatch for FFortItemCardDetailStripDataSTW::Padding");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, MinimumHeight) == 16, "Offset mismatch for FFortItemCardDetailStripDataSTW::MinimumHeight");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, Material) == 24, "Offset mismatch for FFortItemCardDetailStripDataSTW::Material");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, RarityNameTextLeftPadding) == 56, "Offset mismatch for FFortItemCardDetailStripDataSTW::RarityNameTextLeftPadding");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, ClassIconLeftPadding) == 60, "Offset mismatch for FFortItemCardDetailStripDataSTW::ClassIconLeftPadding");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, PaddingBetweenClassIconAndTypeName) == 64, "Offset mismatch for FFortItemCardDetailStripDataSTW::PaddingBetweenClassIconAndTypeName");
static_assert(offsetof(FFortItemCardDetailStripDataSTW, ClassIconSize) == 72, "Offset mismatch for FFortItemCardDetailStripDataSTW::ClassIconSize");

// /Script/SaveTheWorldUI.FortItemCardFaceDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardFaceDataSTW
{
public:
    std::uint8_t PersonnelAndSchematicDimensions[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceDimensions[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t PersonnelAndSchematicBackgroundPadding[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceBackgroundPadding[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t PersonnelAndSchematicCardMaterial[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> InstanceCardMaterial; // 0x0060 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFortItemCardFaceDataSTW, PersonnelAndSchematicDimensions) == 0, "Offset mismatch for FFortItemCardFaceDataSTW::PersonnelAndSchematicDimensions");
static_assert(offsetof(FFortItemCardFaceDataSTW, InstanceDimensions) == 16, "Offset mismatch for FFortItemCardFaceDataSTW::InstanceDimensions");
static_assert(offsetof(FFortItemCardFaceDataSTW, PersonnelAndSchematicBackgroundPadding) == 32, "Offset mismatch for FFortItemCardFaceDataSTW::PersonnelAndSchematicBackgroundPadding");
static_assert(offsetof(FFortItemCardFaceDataSTW, InstanceBackgroundPadding) == 48, "Offset mismatch for FFortItemCardFaceDataSTW::InstanceBackgroundPadding");
static_assert(offsetof(FFortItemCardFaceDataSTW, PersonnelAndSchematicCardMaterial) == 64, "Offset mismatch for FFortItemCardFaceDataSTW::PersonnelAndSchematicCardMaterial");
static_assert(offsetof(FFortItemCardFaceDataSTW, InstanceCardMaterial) == 96, "Offset mismatch for FFortItemCardFaceDataSTW::InstanceCardMaterial");

// /Script/SaveTheWorldUI.FortItemCardFavoriteDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardFavoriteDataSTW
{
public:
    std::uint8_t BookmarkSize[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardFavoriteDataSTW, BookmarkSize) == 0, "Offset mismatch for FFortItemCardFavoriteDataSTW::BookmarkSize");

// /Script/SaveTheWorldUI.FortItemCardGenericFaceDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardGenericFaceDataSTW
{
public:
    std::uint8_t TraitBoxPadding[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float PaddingBetweenTraitIcons; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t ClassIconSize[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowShorthandStackCount; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortItemCardGenericFaceDataSTW, TraitBoxPadding) == 0, "Offset mismatch for FFortItemCardGenericFaceDataSTW::TraitBoxPadding");
static_assert(offsetof(FFortItemCardGenericFaceDataSTW, PaddingBetweenTraitIcons) == 16, "Offset mismatch for FFortItemCardGenericFaceDataSTW::PaddingBetweenTraitIcons");
static_assert(offsetof(FFortItemCardGenericFaceDataSTW, ClassIconSize) == 24, "Offset mismatch for FFortItemCardGenericFaceDataSTW::ClassIconSize");
static_assert(offsetof(FFortItemCardGenericFaceDataSTW, bShowShorthandStackCount) == 40, "Offset mismatch for FFortItemCardGenericFaceDataSTW::bShowShorthandStackCount");

// /Script/SaveTheWorldUI.FortItemCardLevelMeterDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardLevelMeterDataSTW
{
public:
    float Thickness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Padding[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardLevelMeterDataSTW, Thickness) == 0, "Offset mismatch for FFortItemCardLevelMeterDataSTW::Thickness");
static_assert(offsetof(FFortItemCardLevelMeterDataSTW, Padding) == 4, "Offset mismatch for FFortItemCardLevelMeterDataSTW::Padding");

// /Script/SaveTheWorldUI.FortItemCardNameplateDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardNameplateDataSTW
{
public:
    std::uint8_t Padding[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Brush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LeadSurvivorTypeIconSize[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FirstIconSlotSize[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SecondIconSlotSize[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    float PaddingBetweenIconSlots; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00F4
    std::uint8_t DefenderWeaponIconConstraints[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardNameplateDataSTW, Padding) == 0, "Offset mismatch for FFortItemCardNameplateDataSTW::Padding");
static_assert(offsetof(FFortItemCardNameplateDataSTW, Brush) == 16, "Offset mismatch for FFortItemCardNameplateDataSTW::Brush");
static_assert(offsetof(FFortItemCardNameplateDataSTW, LeadSurvivorTypeIconSize) == 192, "Offset mismatch for FFortItemCardNameplateDataSTW::LeadSurvivorTypeIconSize");
static_assert(offsetof(FFortItemCardNameplateDataSTW, FirstIconSlotSize) == 208, "Offset mismatch for FFortItemCardNameplateDataSTW::FirstIconSlotSize");
static_assert(offsetof(FFortItemCardNameplateDataSTW, SecondIconSlotSize) == 224, "Offset mismatch for FFortItemCardNameplateDataSTW::SecondIconSlotSize");
static_assert(offsetof(FFortItemCardNameplateDataSTW, PaddingBetweenIconSlots) == 240, "Offset mismatch for FFortItemCardNameplateDataSTW::PaddingBetweenIconSlots");
static_assert(offsetof(FFortItemCardNameplateDataSTW, DefenderWeaponIconConstraints) == 248, "Offset mismatch for FFortItemCardNameplateDataSTW::DefenderWeaponIconConstraints");

// /Script/SaveTheWorldUI.FortItemCardPowerRatingDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardPowerRatingDataSTW
{
public:
    std::uint8_t PillBrush[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t PillPadding[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PillExteriorPadding[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t GenericPillBrush[0xB0]; // 0x00D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t GenericPillPadding[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t GenericPillExteriorPadding[0x10]; // 0x0190 (Size: 0x10, Type: StructProperty)
    std::uint8_t PersonnelTextStyle[0x20]; // 0x01A0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SchematicTextStyle[0x20]; // 0x01C0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GenericTextStyle[0x20]; // 0x01E0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GenericBlockPadding[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardPowerRatingDataSTW, PillBrush) == 0, "Offset mismatch for FFortItemCardPowerRatingDataSTW::PillBrush");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, PillPadding) == 176, "Offset mismatch for FFortItemCardPowerRatingDataSTW::PillPadding");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, PillExteriorPadding) == 192, "Offset mismatch for FFortItemCardPowerRatingDataSTW::PillExteriorPadding");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, GenericPillBrush) == 208, "Offset mismatch for FFortItemCardPowerRatingDataSTW::GenericPillBrush");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, GenericPillPadding) == 384, "Offset mismatch for FFortItemCardPowerRatingDataSTW::GenericPillPadding");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, GenericPillExteriorPadding) == 400, "Offset mismatch for FFortItemCardPowerRatingDataSTW::GenericPillExteriorPadding");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, PersonnelTextStyle) == 416, "Offset mismatch for FFortItemCardPowerRatingDataSTW::PersonnelTextStyle");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, SchematicTextStyle) == 448, "Offset mismatch for FFortItemCardPowerRatingDataSTW::SchematicTextStyle");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, GenericTextStyle) == 480, "Offset mismatch for FFortItemCardPowerRatingDataSTW::GenericTextStyle");
static_assert(offsetof(FFortItemCardPowerRatingDataSTW, GenericBlockPadding) == 512, "Offset mismatch for FFortItemCardPowerRatingDataSTW::GenericBlockPadding");

// /Script/SaveTheWorldUI.FortItemCardSizeDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardSizeDataSTW
{
public:
    std::uint8_t Face[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    std::uint8_t Nameplate[0x110]; // 0x0080 (Size: 0x110, Type: StructProperty)
    std::uint8_t DetailStrip[0x60]; // 0x0190 (Size: 0x60, Type: StructProperty)
    std::uint8_t PowerRating[0x210]; // 0x01F0 (Size: 0x210, Type: StructProperty)
    std::uint8_t TierMeter[0x40]; // 0x0400 (Size: 0x40, Type: StructProperty)
    std::uint8_t LevelMeter[0x18]; // 0x0440 (Size: 0x18, Type: StructProperty)
    std::uint8_t Favorite[0x10]; // 0x0458 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubtypeIcon[0x20]; // 0x0468 (Size: 0x20, Type: StructProperty)
    std::uint8_t GenericFace[0x30]; // 0x0488 (Size: 0x30, Type: StructProperty)
    std::uint8_t TextStyles[0x1]; // 0x04B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardSizeDataSTW, Face) == 0, "Offset mismatch for FFortItemCardSizeDataSTW::Face");
static_assert(offsetof(FFortItemCardSizeDataSTW, Nameplate) == 128, "Offset mismatch for FFortItemCardSizeDataSTW::Nameplate");
static_assert(offsetof(FFortItemCardSizeDataSTW, DetailStrip) == 400, "Offset mismatch for FFortItemCardSizeDataSTW::DetailStrip");
static_assert(offsetof(FFortItemCardSizeDataSTW, PowerRating) == 496, "Offset mismatch for FFortItemCardSizeDataSTW::PowerRating");
static_assert(offsetof(FFortItemCardSizeDataSTW, TierMeter) == 1024, "Offset mismatch for FFortItemCardSizeDataSTW::TierMeter");
static_assert(offsetof(FFortItemCardSizeDataSTW, LevelMeter) == 1088, "Offset mismatch for FFortItemCardSizeDataSTW::LevelMeter");
static_assert(offsetof(FFortItemCardSizeDataSTW, Favorite) == 1112, "Offset mismatch for FFortItemCardSizeDataSTW::Favorite");
static_assert(offsetof(FFortItemCardSizeDataSTW, SubtypeIcon) == 1128, "Offset mismatch for FFortItemCardSizeDataSTW::SubtypeIcon");
static_assert(offsetof(FFortItemCardSizeDataSTW, GenericFace) == 1160, "Offset mismatch for FFortItemCardSizeDataSTW::GenericFace");
static_assert(offsetof(FFortItemCardSizeDataSTW, TextStyles) == 1208, "Offset mismatch for FFortItemCardSizeDataSTW::TextStyles");

// /Script/SaveTheWorldUI.FortItemCardSubtypeIconDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardSubtypeIconDataSTW
{
public:
    std::uint8_t Size[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Padding[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemCardSubtypeIconDataSTW, Size) == 0, "Offset mismatch for FFortItemCardSubtypeIconDataSTW::Size");
static_assert(offsetof(FFortItemCardSubtypeIconDataSTW, Padding) == 16, "Offset mismatch for FFortItemCardSubtypeIconDataSTW::Padding");

// /Script/SaveTheWorldUI.FortItemCardTextStylesDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardTextStylesDataSTW
{
public:
    std::uint8_t ItemName[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t RarityName[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TypeName[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> StackCount; // 0x0060 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FFortItemCardTextStylesDataSTW, ItemName) == 0, "Offset mismatch for FFortItemCardTextStylesDataSTW::ItemName");
static_assert(offsetof(FFortItemCardTextStylesDataSTW, RarityName) == 32, "Offset mismatch for FFortItemCardTextStylesDataSTW::RarityName");
static_assert(offsetof(FFortItemCardTextStylesDataSTW, TypeName) == 64, "Offset mismatch for FFortItemCardTextStylesDataSTW::TypeName");
static_assert(offsetof(FFortItemCardTextStylesDataSTW, StackCount) == 96, "Offset mismatch for FFortItemCardTextStylesDataSTW::StackCount");

// /Script/SaveTheWorldUI.FortItemCardTierMeterDataSTW
// Kind: ScriptStruct; super: none
struct FFortItemCardTierMeterDataSTW
{
public:
    std::uint8_t PipSize[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float InterPipPadding; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LeftPadding; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GenericPadding[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t GenericPipSize[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float GenericInterPipPadding; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortItemCardTierMeterDataSTW, PipSize) == 0, "Offset mismatch for FFortItemCardTierMeterDataSTW::PipSize");
static_assert(offsetof(FFortItemCardTierMeterDataSTW, InterPipPadding) == 16, "Offset mismatch for FFortItemCardTierMeterDataSTW::InterPipPadding");
static_assert(offsetof(FFortItemCardTierMeterDataSTW, LeftPadding) == 20, "Offset mismatch for FFortItemCardTierMeterDataSTW::LeftPadding");
static_assert(offsetof(FFortItemCardTierMeterDataSTW, GenericPadding) == 24, "Offset mismatch for FFortItemCardTierMeterDataSTW::GenericPadding");
static_assert(offsetof(FFortItemCardTierMeterDataSTW, GenericPipSize) == 40, "Offset mismatch for FFortItemCardTierMeterDataSTW::GenericPipSize");
static_assert(offsetof(FFortItemCardTierMeterDataSTW, GenericInterPipPadding) == 56, "Offset mismatch for FFortItemCardTierMeterDataSTW::GenericInterPipPadding");

// /Script/SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
// Kind: ScriptStruct; super: none
struct FFortLandingPageDefenderSummaryInfo
{
public:
    FName SquadId; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t TheaterDisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    FString TheaterUniqueId; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, SquadId) == 0, "Offset mismatch for FFortLandingPageDefenderSummaryInfo::SquadId");
static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, TheaterDisplayName) == 8, "Offset mismatch for FFortLandingPageDefenderSummaryInfo::TheaterDisplayName");
static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, TheaterUniqueId) == 24, "Offset mismatch for FFortLandingPageDefenderSummaryInfo::TheaterUniqueId");

// /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
// Kind: ScriptStruct; super: TableRowBase
struct FFortQuestMapEventQuestSideBarData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* QuestItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EventFlags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowAlways; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    float CycleTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortQuestMapEventQuestSideBarData, QuestItemDefinition) == 8, "Offset mismatch for FFortQuestMapEventQuestSideBarData::QuestItemDefinition");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, EventFlags) == 16, "Offset mismatch for FFortQuestMapEventQuestSideBarData::EventFlags");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, bShowAlways) == 32, "Offset mismatch for FFortQuestMapEventQuestSideBarData::bShowAlways");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, CycleTime) == 36, "Offset mismatch for FFortQuestMapEventQuestSideBarData::CycleTime");

// /Script/SaveTheWorldUI.FortRefundDescriptionsData
// Kind: ScriptStruct; super: TableRowBase
struct FFortRefundDescriptionsData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString SearchString; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString TargetReleaseVersion; // 0x0018 (Size: 0x10, Type: StrProperty)
    FText RefundDescriptionText; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortRefundDescriptionsData, SearchString) == 8, "Offset mismatch for FFortRefundDescriptionsData::SearchString");
static_assert(offsetof(FFortRefundDescriptionsData, TargetReleaseVersion) == 24, "Offset mismatch for FFortRefundDescriptionsData::TargetReleaseVersion");
static_assert(offsetof(FFortRefundDescriptionsData, RefundDescriptionText) == 40, "Offset mismatch for FFortRefundDescriptionsData::RefundDescriptionText");

// /Script/SaveTheWorldUI.FortStWRewardOverrides
// Kind: ScriptStruct; super: none
struct FFortStWRewardOverrides
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortStWRewardOverrides, DisplayName) == 0, "Offset mismatch for FFortStWRewardOverrides::DisplayName");
static_assert(offsetof(FFortStWRewardOverrides, Description) == 16, "Offset mismatch for FFortStWRewardOverrides::Description");

// /Script/SaveTheWorldUI.FortStWRewards
// Kind: ScriptStruct; super: none
struct FFortStWRewards
{
public:
    TArray<void*> ItemList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Overrides; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortStWRewards, ItemList) == 0, "Offset mismatch for FFortStWRewards::ItemList");
static_assert(offsetof(FFortStWRewards, Overrides) == 16, "Offset mismatch for FFortStWRewards::Overrides");

// /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// Kind: ScriptStruct; super: none
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
public:
    std::int32_t NumPersonalityMatches; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNonLeaderSquadMembers; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t HavePersonalityIcons; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t PersonalityIcons[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, NumPersonalityMatches) == 0, "Offset mismatch for FFortSurvivorSquadSelectorButtonPersonalityMatches::NumPersonalityMatches");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, TotalNonLeaderSquadMembers) == 4, "Offset mismatch for FFortSurvivorSquadSelectorButtonPersonalityMatches::TotalNonLeaderSquadMembers");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, HavePersonalityIcons) == 8, "Offset mismatch for FFortSurvivorSquadSelectorButtonPersonalityMatches::HavePersonalityIcons");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, PersonalityIcons) == 16, "Offset mismatch for FFortSurvivorSquadSelectorButtonPersonalityMatches::PersonalityIcons");

// /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
// Kind: ScriptStruct; super: none
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
public:
    FName SquadId; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t FortAttribute[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    float FortAttributeValue; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0044
    std::uint8_t FortTeamAttribute[0x38]; // 0x0048 (Size: 0x38, Type: StructProperty)
    float TeamFortAttributeValue; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float SquadPowerValue; // 0x0084 (Size: 0x4, Type: FloatProperty)
    FText FortAttributeName; // 0x0088 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, SquadId) == 0, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::SquadId");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttribute) == 8, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::FortAttribute");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttributeValue) == 64, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::FortAttributeValue");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortTeamAttribute) == 72, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::FortTeamAttribute");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, TeamFortAttributeValue) == 128, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::TeamFortAttributeValue");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, SquadPowerValue) == 132, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::SquadPowerValue");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttributeName) == 136, "Offset mismatch for FFortSurvivorSquadSelectorButtonSummaryStats::FortAttributeName");

// /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
// Kind: ScriptStruct; super: none
struct FFortSurvivorSquadSlottingFeedbackData
{
public:
    std::uint8_t HadLeaderMatch; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasLeaderMatch; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TMap<void*, void*> PreviousSetBonusCounts; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CurrentSetBonusCounts; // 0x0018 (Size: 0x10, Type: MapProperty)
    std::int32_t PreviousPersonalityMatchCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPersonalityMatchCount; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, HadLeaderMatch) == 0, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::HadLeaderMatch");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, HasLeaderMatch) == 1, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::HasLeaderMatch");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, PreviousSetBonusCounts) == 8, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::PreviousSetBonusCounts");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, CurrentSetBonusCounts) == 24, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::CurrentSetBonusCounts");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, PreviousPersonalityMatchCount) == 40, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::PreviousPersonalityMatchCount");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, CurrentPersonalityMatchCount) == 44, "Offset mismatch for FFortSurvivorSquadSlottingFeedbackData::CurrentPersonalityMatchCount");

// /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
// Kind: ScriptStruct; super: none
struct FFortUISurvivorSquadStatMatch
{
public:
    std::uint8_t Icons[0x420]; // 0x0000 (Size: 0x420, Type: StructProperty)
    std::uint8_t MagnitudeText[0x10]; // 0x0420 (Size: 0x10, Type: TextProperty)
    std::uint8_t AttributeDisplayName[0x10]; // 0x0430 (Size: 0x10, Type: TextProperty)
    std::int32_t NumMembersMeetingCriteria; // 0x0440 (Size: 0x4, Type: IntProperty)
    std::int32_t NumMembersRequired; // 0x0444 (Size: 0x4, Type: IntProperty)
    std::uint8_t MatchType; // 0x0448 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PreviewEffect; // 0x0449 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortUISurvivorSquadStatMatch, Icons) == 0, "Offset mismatch for FFortUISurvivorSquadStatMatch::Icons");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, MagnitudeText) == 1056, "Offset mismatch for FFortUISurvivorSquadStatMatch::MagnitudeText");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, AttributeDisplayName) == 1072, "Offset mismatch for FFortUISurvivorSquadStatMatch::AttributeDisplayName");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, NumMembersMeetingCriteria) == 1088, "Offset mismatch for FFortUISurvivorSquadStatMatch::NumMembersMeetingCriteria");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, NumMembersRequired) == 1092, "Offset mismatch for FFortUISurvivorSquadStatMatch::NumMembersRequired");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, MatchType) == 1096, "Offset mismatch for FFortUISurvivorSquadStatMatch::MatchType");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, PreviewEffect) == 1097, "Offset mismatch for FFortUISurvivorSquadStatMatch::PreviewEffect");

// /Script/SaveTheWorldUI.HomebaseNodeDisplayData
// Kind: ScriptStruct; super: TableRowBase
struct FHomebaseNodeDisplayData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t LargePreviewImage[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    void* PreviewVideoMediaSource; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FHomebaseNodeDisplayData, Title) == 8, "Offset mismatch for FHomebaseNodeDisplayData::Title");
static_assert(offsetof(FHomebaseNodeDisplayData, Description) == 24, "Offset mismatch for FHomebaseNodeDisplayData::Description");
static_assert(offsetof(FHomebaseNodeDisplayData, LargePreviewImage) == 40, "Offset mismatch for FHomebaseNodeDisplayData::LargePreviewImage");
static_assert(offsetof(FHomebaseNodeDisplayData, SmallPreviewImage) == 72, "Offset mismatch for FHomebaseNodeDisplayData::SmallPreviewImage");
static_assert(offsetof(FHomebaseNodeDisplayData, PreviewVideoMediaSource) == 104, "Offset mismatch for FHomebaseNodeDisplayData::PreviewVideoMediaSource");

// /Script/SaveTheWorldUI.ItemInspectScreenParams
// Kind: ScriptStruct; super: none
struct FItemInspectScreenParams
{
public:
    TWeakObjectPtr<void> LocalPlayer; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ItemToInspect; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CycleTileView; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Mode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReadOnly; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFavoriting; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTemporaryItem; // 0x001B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRarityUpgrading; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    FName TutorialNameUpdate; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FItemInspectScreenParams, LocalPlayer) == 0, "Offset mismatch for FItemInspectScreenParams::LocalPlayer");
static_assert(offsetof(FItemInspectScreenParams, ItemToInspect) == 8, "Offset mismatch for FItemInspectScreenParams::ItemToInspect");
static_assert(offsetof(FItemInspectScreenParams, CycleTileView) == 16, "Offset mismatch for FItemInspectScreenParams::CycleTileView");
static_assert(offsetof(FItemInspectScreenParams, Mode) == 24, "Offset mismatch for FItemInspectScreenParams::Mode");
static_assert(offsetof(FItemInspectScreenParams, bReadOnly) == 25, "Offset mismatch for FItemInspectScreenParams::bReadOnly");
static_assert(offsetof(FItemInspectScreenParams, bAllowFavoriting) == 26, "Offset mismatch for FItemInspectScreenParams::bAllowFavoriting");
static_assert(offsetof(FItemInspectScreenParams, bIsTemporaryItem) == 27, "Offset mismatch for FItemInspectScreenParams::bIsTemporaryItem");
static_assert(offsetof(FItemInspectScreenParams, bAllowRarityUpgrading) == 28, "Offset mismatch for FItemInspectScreenParams::bAllowRarityUpgrading");
static_assert(offsetof(FItemInspectScreenParams, TutorialNameUpdate) == 32, "Offset mismatch for FItemInspectScreenParams::TutorialNameUpdate");

// /Script/SaveTheWorldUI.OfferGroup
// Kind: ScriptStruct; super: none
struct FOfferGroup
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t MaxNumberToShow; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FOfferGroup, Name) == 0, "Offset mismatch for FOfferGroup::Name");
static_assert(offsetof(FOfferGroup, MaxNumberToShow) == 16, "Offset mismatch for FOfferGroup::MaxNumberToShow");

// /Script/SaveTheWorldUI.PowerHourDebugParams
// Kind: ScriptStruct; super: none
struct FPowerHourDebugParams
{
public:
    std::uint8_t bUseDebugStartEndTimes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DebugPreEventUTCStartTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DebugEventUTCStartTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t DebugEventUTCEndTime[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::int32_t DebugOffsetHours; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPowerHourDebugParams, bUseDebugStartEndTimes) == 0, "Offset mismatch for FPowerHourDebugParams::bUseDebugStartEndTimes");
static_assert(offsetof(FPowerHourDebugParams, DebugPreEventUTCStartTime) == 8, "Offset mismatch for FPowerHourDebugParams::DebugPreEventUTCStartTime");
static_assert(offsetof(FPowerHourDebugParams, DebugEventUTCStartTime) == 16, "Offset mismatch for FPowerHourDebugParams::DebugEventUTCStartTime");
static_assert(offsetof(FPowerHourDebugParams, DebugEventUTCEndTime) == 24, "Offset mismatch for FPowerHourDebugParams::DebugEventUTCEndTime");
static_assert(offsetof(FPowerHourDebugParams, DebugOffsetHours) == 32, "Offset mismatch for FPowerHourDebugParams::DebugOffsetHours");

// /Script/SaveTheWorldUI.STWEvent_AttemptCloseAllMenuScenes
// Kind: ScriptStruct; super: none
struct FSTWEvent_AttemptCloseAllMenuScenes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_AttemptCloseTopMenuScene
// Kind: ScriptStruct; super: none
struct FSTWEvent_AttemptCloseTopMenuScene
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_OnInventoryTabSelectedMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OnInventoryTabSelectedMessage
{
public:
    FName TabName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSTWEvent_OnInventoryTabSelectedMessage, TabName) == 0, "Offset mismatch for FSTWEvent_OnInventoryTabSelectedMessage::TabName");

// /Script/SaveTheWorldUI.STWEvent_OpenBoostsRootScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenBoostsRootScreenMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_OpenEscapeMenuMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenEscapeMenuMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_OpenInspectScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenInspectScreenMessage
{
public:
    std::uint8_t ItemInspectScreenParams[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSTWEvent_OpenInspectScreenMessage, ItemInspectScreenParams) == 0, "Offset mismatch for FSTWEvent_OpenInspectScreenMessage::ItemInspectScreenParams");

// /Script/SaveTheWorldUI.STWEvent_OpenInventoryScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenInventoryScreenMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_OpenMissionActivationScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenMissionActivationScreenMessage
{
public:
    void* InitActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InstigatorPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSTWEvent_OpenMissionActivationScreenMessage, InitActor) == 0, "Offset mismatch for FSTWEvent_OpenMissionActivationScreenMessage::InitActor");
static_assert(offsetof(FSTWEvent_OpenMissionActivationScreenMessage, InstigatorPlayer) == 8, "Offset mismatch for FSTWEvent_OpenMissionActivationScreenMessage::InstigatorPlayer");

// /Script/SaveTheWorldUI.STWEvent_OpenOutpostScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenOutpostScreenMessage
{
public:
    void* InitActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSTWEvent_OpenOutpostScreenMessage, InitActor) == 0, "Offset mismatch for FSTWEvent_OpenOutpostScreenMessage::InitActor");

// /Script/SaveTheWorldUI.STWEvent_OpenPermissionsScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenPermissionsScreenMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_OpenResultsScreenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_OpenResultsScreenMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEvent_SetBottomBarVisibleMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_SetBottomBarVisibleMessage
{
public:
    std::uint8_t bVisible; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSTWEvent_SetBottomBarVisibleMessage, bVisible) == 0, "Offset mismatch for FSTWEvent_SetBottomBarVisibleMessage::bVisible");

// /Script/SaveTheWorldUI.STWEvent_SetChatPromptIndicatorHiddenMessage
// Kind: ScriptStruct; super: none
struct FSTWEvent_SetChatPromptIndicatorHiddenMessage
{
public:
    std::uint8_t bHidden; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSTWEvent_SetChatPromptIndicatorHiddenMessage, bHidden) == 0, "Offset mismatch for FSTWEvent_SetChatPromptIndicatorHiddenMessage::bHidden");

// /Script/SaveTheWorldUI.STWScreenData
// Kind: ScriptStruct; super: none
struct FSTWScreenData
{
public:
    std::uint8_t Screen[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t OwningScreen; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BackgroundCamera; // 0x0021 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSTWScreenData, Screen) == 0, "Offset mismatch for FSTWScreenData::Screen");
static_assert(offsetof(FSTWScreenData, OwningScreen) == 32, "Offset mismatch for FSTWScreenData::OwningScreen");
static_assert(offsetof(FSTWScreenData, BackgroundCamera) == 33, "Offset mismatch for FSTWScreenData::BackgroundCamera");

// /Script/SaveTheWorldUI.STWSetCloseAllMenusActionBlockedMessage
// Kind: ScriptStruct; super: none
struct FSTWSetCloseAllMenusActionBlockedMessage
{
public:
    std::uint8_t bBlock; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSTWSetCloseAllMenusActionBlockedMessage, bBlock) == 0, "Offset mismatch for FSTWSetCloseAllMenusActionBlockedMessage::bBlock");

// /Script/SaveTheWorldUI.STWSetLegacyInputBlockedMessage
// Kind: ScriptStruct; super: none
struct FSTWSetLegacyInputBlockedMessage
{
public:
    std::uint8_t bBlock; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSTWSetLegacyInputBlockedMessage, bBlock) == 0, "Offset mismatch for FSTWSetLegacyInputBlockedMessage::bBlock");

// /Script/SaveTheWorldUI.SquadSlotSortTypes
// Kind: ScriptStruct; super: none
struct FSquadSlotSortTypes
{
public:
    TArray<void*> SortTypes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSquadSlotSortTypes, SortTypes) == 0, "Offset mismatch for FSquadSlotSortTypes::SortTypes");

// /Script/SaveTheWorldUI.BottomBar_STW
// Kind: Class; super: CommonUserWidget
class UBottomBar_STW
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* BoundActionBar_STW; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBottomBar_STW, BoundActionBar_STW) == 816, "Offset mismatch for UBottomBar_STW::BoundActionBar_STW");

// /Script/SaveTheWorldUI.BoundActionBarSTW
// Kind: Class; super: BoundActionBarWithSecondaryBar
class UBoundActionBarSTW
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    void* SecondaryActionBar; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SecondaryActionBarInputActions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SecondaryActionBarEnhancedInputActions; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* SecondaryActionBarButtonClassOverride; // 0x0258 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBoundActionBarSTW, SecondaryActionBar) == 560, "Offset mismatch for UBoundActionBarSTW::SecondaryActionBar");
static_assert(offsetof(UBoundActionBarSTW, SecondaryActionBarInputActions) == 568, "Offset mismatch for UBoundActionBarSTW::SecondaryActionBarInputActions");
static_assert(offsetof(UBoundActionBarSTW, SecondaryActionBarEnhancedInputActions) == 584, "Offset mismatch for UBoundActionBarSTW::SecondaryActionBarEnhancedInputActions");
static_assert(offsetof(UBoundActionBarSTW, SecondaryActionBarButtonClassOverride) == 600, "Offset mismatch for UBoundActionBarSTW::SecondaryActionBarButtonClassOverride");

// /Script/SaveTheWorldUI.BoundActionBarWithSecondaryBar
// Kind: Class; super: CommonBoundActionBar
class UBoundActionBarWithSecondaryBar
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    void* SecondaryActionBar; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SecondaryActionBarInputActions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SecondaryActionBarEnhancedInputActions; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* SecondaryActionBarButtonClassOverride; // 0x0258 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBoundActionBarWithSecondaryBar, SecondaryActionBar) == 560, "Offset mismatch for UBoundActionBarWithSecondaryBar::SecondaryActionBar");
static_assert(offsetof(UBoundActionBarWithSecondaryBar, SecondaryActionBarInputActions) == 568, "Offset mismatch for UBoundActionBarWithSecondaryBar::SecondaryActionBarInputActions");
static_assert(offsetof(UBoundActionBarWithSecondaryBar, SecondaryActionBarEnhancedInputActions) == 584, "Offset mismatch for UBoundActionBarWithSecondaryBar::SecondaryActionBarEnhancedInputActions");
static_assert(offsetof(UBoundActionBarWithSecondaryBar, SecondaryActionBarButtonClassOverride) == 600, "Offset mismatch for UBoundActionBarWithSecondaryBar::SecondaryActionBarButtonClassOverride");

// /Script/SaveTheWorldUI.CountdownManagerSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UCountdownManagerSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnTimerSecondPassed; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float TimerUpdateRate; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCountdownManagerSubsystem, OnTimerSecondPassed) == 48, "Offset mismatch for UCountdownManagerSubsystem::OnTimerSecondPassed");
static_assert(offsetof(UCountdownManagerSubsystem, TimerUpdateRate) == 64, "Offset mismatch for UCountdownManagerSubsystem::TimerUpdateRate");

// /Script/SaveTheWorldUI.FortAbilitySystemContext
// Kind: Class; super: FortLocalPlayerSubsystem
class UFortAbilitySystemContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortAlterationModOptinScreenBase
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    void* ItemToOptin; // 0x0560 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAlterationModOptinScreenBase, ItemToOptin) == 1376, "Offset mismatch for UFortAlterationModOptinScreenBase::ItemToOptin");

// /Script/SaveTheWorldUI.FortAlterationModScreenBase
// Kind: Class; super: FortActivatablePanel
class UFortAlterationModScreenBase
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    void* AlterationsToEdit; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* AlterationSlotOptions; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* ItemInspectionMainItemDetailsHostPanel; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* AlterationsExtraDetailsPanel; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* AlterationModOptinScreenClass; // 0x05A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BackInputAction[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> AlterableItem; // 0x05B8 (Size: 0x8, Type: WeakObjectProperty)
    void* CurrentAlterationOptionInternal; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAlterationModScreenBase, AlterationsToEdit) == 1408, "Offset mismatch for UFortAlterationModScreenBase::AlterationsToEdit");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationSlotOptions) == 1416, "Offset mismatch for UFortAlterationModScreenBase::AlterationSlotOptions");
static_assert(offsetof(UFortAlterationModScreenBase, ItemInspectionMainItemDetailsHostPanel) == 1424, "Offset mismatch for UFortAlterationModScreenBase::ItemInspectionMainItemDetailsHostPanel");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationsExtraDetailsPanel) == 1432, "Offset mismatch for UFortAlterationModScreenBase::AlterationsExtraDetailsPanel");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationModOptinScreenClass) == 1440, "Offset mismatch for UFortAlterationModScreenBase::AlterationModOptinScreenClass");
static_assert(offsetof(UFortAlterationModScreenBase, BackInputAction) == 1448, "Offset mismatch for UFortAlterationModScreenBase::BackInputAction");
static_assert(offsetof(UFortAlterationModScreenBase, AlterableItem) == 1464, "Offset mismatch for UFortAlterationModScreenBase::AlterableItem");
static_assert(offsetof(UFortAlterationModScreenBase, CurrentAlterationOptionInternal) == 1472, "Offset mismatch for UFortAlterationModScreenBase::CurrentAlterationOptionInternal");

// /Script/SaveTheWorldUI.FortAlterationOption
// Kind: Class; super: CommonButtonLegacy
class UFortAlterationOption
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    std::uint8_t AlterationOption[0x1]; // 0x15F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAlterationOption, AlterationOption) == 5624, "Offset mismatch for UFortAlterationOption::AlterationOption");

// /Script/SaveTheWorldUI.FortAlterationOptionsBase
// Kind: Class; super: CommonUserWidget
class UFortAlterationOptionsBase
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* AlterationOptionClass; // 0x0340 (Size: 0x8, Type: ClassProperty)
    void* AlterationOptionButtons; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0350
    void* Item; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0378 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUpgradeOptionExists; // 0x037C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x037D
    std::uint8_t UpgradeOption[0x30]; // 0x0380 (Size: 0x30, Type: StructProperty)
    TArray<void*> RespecOptions; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAlterationOptionsBase, AlterationOptionClass) == 832, "Offset mismatch for UFortAlterationOptionsBase::AlterationOptionClass");
static_assert(offsetof(UFortAlterationOptionsBase, AlterationOptionButtons) == 840, "Offset mismatch for UFortAlterationOptionsBase::AlterationOptionButtons");
static_assert(offsetof(UFortAlterationOptionsBase, Item) == 880, "Offset mismatch for UFortAlterationOptionsBase::Item");
static_assert(offsetof(UFortAlterationOptionsBase, SlotIndex) == 888, "Offset mismatch for UFortAlterationOptionsBase::SlotIndex");
static_assert(offsetof(UFortAlterationOptionsBase, bUpgradeOptionExists) == 892, "Offset mismatch for UFortAlterationOptionsBase::bUpgradeOptionExists");
static_assert(offsetof(UFortAlterationOptionsBase, UpgradeOption) == 896, "Offset mismatch for UFortAlterationOptionsBase::UpgradeOption");
static_assert(offsetof(UFortAlterationOptionsBase, RespecOptions) == 944, "Offset mismatch for UFortAlterationOptionsBase::RespecOptions");

// /Script/SaveTheWorldUI.FortArmoryScreen
// Kind: Class; super: CommonActivatableWidget
class UFortArmoryScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t bIsMainTab; // 0x04A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortArmoryScreen, bIsMainTab) == 1192, "Offset mismatch for UFortArmoryScreen::bIsMainTab");

// /Script/SaveTheWorldUI.FortBangWrapperContentButton
// Kind: Class; super: CommonButtonBase
class UFortBangWrapperContentButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ClickEvent[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::int32_t MinWidth; // 0x0334 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x033C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* Style; // 0x0348 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHideInputAction; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0351
    std::uint8_t PressedSlateSoundOverride[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSoundOverride[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSoundOverride[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSoundOverride[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSoundOverride[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSoundOverride[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedPressedSlateSoundOverride[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedClickedSlateSoundOverride[0x18]; // 0x0400 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSoundOverride[0x18]; // 0x0418 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyAlphaOnDisable; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bDisplayInputActionWhenNotInteractable (shared storage)
    // 0x0430 BoolProperty bInteractableWhenSelected (shared storage)
    // 0x0430 BoolProperty bLocked (shared storage)
    // 0x0430 BoolProperty bSelectable (shared storage)
    // 0x0430 BoolProperty bShouldSelectUponReceivingFocus (shared storage)
    // 0x0430 BoolProperty bToggleable (shared storage)
    // 0x0430 BoolProperty bTriggerClickedAfterSelection (shared storage)
    std::uint8_t bHideInputActionWithKeyboard; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bRequiresHold (shared storage)
    // 0x0431 BoolProperty bShouldUseFallbackDefaultInputAction (shared storage)
    std::uint8_t Pad_0003[0x6]; // 0x0432
    void* HoldData; // 0x0438 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSimulateHoverOnTouchInput; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0441
    std::uint8_t ClickMethod; // 0x0443 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0444 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0445 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0446
    std::int32_t InputPriority; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x044C
    std::uint8_t TriggeringInputAction[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    void* TriggeringEnhancedInputAction; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0468
    std::uint8_t bNavigateToNextWidgetOnDisable; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0479
    FMulticastInlineDelegate OnSelectedChangedBase; // 0x0480 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseClicked; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseHovered; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseFocused; // 0x04D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnfocused; // 0x04E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x04F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseSelected; // 0x0510 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnselected; // 0x0520 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragDetected; // 0x0530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragEnter; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragLeave; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragOver; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDrop; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x38]; // 0x0580
    std::uint8_t bIsPersistentBinding; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputModeOverride; // 0x05B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x26]; // 0x05BA
    void* SingleMaterialStyleMID; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x05E8
    std::uint8_t NormalStyle[0x390]; // 0x05F0 (Size: 0x390, Type: StructProperty)
    std::uint8_t SelectedStyle[0x390]; // 0x0980 (Size: 0x390, Type: StructProperty)
    std::uint8_t DisabledStyle[0x390]; // 0x0D10 (Size: 0x390, Type: StructProperty)
    std::uint8_t LockedStyle[0x390]; // 0x10A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t bStopDoubleClickPropagation; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x167]; // 0x1431
    void* InputActionWidget; // 0x1598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortBangWrapperContentButton, ClickEvent) == 816, "Offset mismatch for UFortBangWrapperContentButton::ClickEvent");
static_assert(offsetof(UFortBangWrapperContentButton, MinWidth) == 820, "Offset mismatch for UFortBangWrapperContentButton::MinWidth");
static_assert(offsetof(UFortBangWrapperContentButton, MinHeight) == 824, "Offset mismatch for UFortBangWrapperContentButton::MinHeight");
static_assert(offsetof(UFortBangWrapperContentButton, MaxWidth) == 828, "Offset mismatch for UFortBangWrapperContentButton::MaxWidth");
static_assert(offsetof(UFortBangWrapperContentButton, MaxHeight) == 832, "Offset mismatch for UFortBangWrapperContentButton::MaxHeight");
static_assert(offsetof(UFortBangWrapperContentButton, Style) == 840, "Offset mismatch for UFortBangWrapperContentButton::Style");
static_assert(offsetof(UFortBangWrapperContentButton, bHideInputAction) == 848, "Offset mismatch for UFortBangWrapperContentButton::bHideInputAction");
static_assert(offsetof(UFortBangWrapperContentButton, PressedSlateSoundOverride) == 856, "Offset mismatch for UFortBangWrapperContentButton::PressedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, ClickedSlateSoundOverride) == 880, "Offset mismatch for UFortBangWrapperContentButton::ClickedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, HoveredSlateSoundOverride) == 904, "Offset mismatch for UFortBangWrapperContentButton::HoveredSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UFortBangWrapperContentButton::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UFortBangWrapperContentButton::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UFortBangWrapperContentButton::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UFortBangWrapperContentButton::LockedPressedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UFortBangWrapperContentButton::LockedClickedSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UFortBangWrapperContentButton::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UFortBangWrapperContentButton, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UFortBangWrapperContentButton::bApplyAlphaOnDisable");
static_assert(offsetof(UFortBangWrapperContentButton, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UFortBangWrapperContentButton::bHideInputActionWithKeyboard");
static_assert(offsetof(UFortBangWrapperContentButton, HoldData) == 1080, "Offset mismatch for UFortBangWrapperContentButton::HoldData");
static_assert(offsetof(UFortBangWrapperContentButton, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UFortBangWrapperContentButton::bSimulateHoverOnTouchInput");
static_assert(offsetof(UFortBangWrapperContentButton, ClickMethod) == 1091, "Offset mismatch for UFortBangWrapperContentButton::ClickMethod");
static_assert(offsetof(UFortBangWrapperContentButton, TouchMethod) == 1092, "Offset mismatch for UFortBangWrapperContentButton::TouchMethod");
static_assert(offsetof(UFortBangWrapperContentButton, PressMethod) == 1093, "Offset mismatch for UFortBangWrapperContentButton::PressMethod");
static_assert(offsetof(UFortBangWrapperContentButton, InputPriority) == 1096, "Offset mismatch for UFortBangWrapperContentButton::InputPriority");
static_assert(offsetof(UFortBangWrapperContentButton, TriggeringInputAction) == 1104, "Offset mismatch for UFortBangWrapperContentButton::TriggeringInputAction");
static_assert(offsetof(UFortBangWrapperContentButton, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UFortBangWrapperContentButton::TriggeringEnhancedInputAction");
static_assert(offsetof(UFortBangWrapperContentButton, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UFortBangWrapperContentButton::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UFortBangWrapperContentButton, OnSelectedChangedBase) == 1152, "Offset mismatch for UFortBangWrapperContentButton::OnSelectedChangedBase");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseClicked) == 1168, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseClicked");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDoubleClicked");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseHovered) == 1200, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseHovered");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseUnhovered");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseFocused) == 1232, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseFocused");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseUnfocused");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseLockClicked");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseSelected) == 1296, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseSelected");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseUnselected) == 1312, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseUnselected");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDragDetected");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDragEnter");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDragLeave");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDragOver) == 1376, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDragOver");
static_assert(offsetof(UFortBangWrapperContentButton, OnButtonBaseDrop) == 1392, "Offset mismatch for UFortBangWrapperContentButton::OnButtonBaseDrop");
static_assert(offsetof(UFortBangWrapperContentButton, bIsPersistentBinding) == 1464, "Offset mismatch for UFortBangWrapperContentButton::bIsPersistentBinding");
static_assert(offsetof(UFortBangWrapperContentButton, InputModeOverride) == 1465, "Offset mismatch for UFortBangWrapperContentButton::InputModeOverride");
static_assert(offsetof(UFortBangWrapperContentButton, SingleMaterialStyleMID) == 1504, "Offset mismatch for UFortBangWrapperContentButton::SingleMaterialStyleMID");
static_assert(offsetof(UFortBangWrapperContentButton, NormalStyle) == 1520, "Offset mismatch for UFortBangWrapperContentButton::NormalStyle");
static_assert(offsetof(UFortBangWrapperContentButton, SelectedStyle) == 2432, "Offset mismatch for UFortBangWrapperContentButton::SelectedStyle");
static_assert(offsetof(UFortBangWrapperContentButton, DisabledStyle) == 3344, "Offset mismatch for UFortBangWrapperContentButton::DisabledStyle");
static_assert(offsetof(UFortBangWrapperContentButton, LockedStyle) == 4256, "Offset mismatch for UFortBangWrapperContentButton::LockedStyle");
static_assert(offsetof(UFortBangWrapperContentButton, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UFortBangWrapperContentButton::bStopDoubleClickPropagation");
static_assert(offsetof(UFortBangWrapperContentButton, InputActionWidget) == 5528, "Offset mismatch for UFortBangWrapperContentButton::InputActionWidget");

// /Script/SaveTheWorldUI.FortBangWrapperContentWidget
// Kind: Class; super: CommonUserWidget
class UFortBangWrapperContentWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBangWrapperContentWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortBangWrapperContentWidget::bDisplayInActionBar");
static_assert(offsetof(UFortBangWrapperContentWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortBangWrapperContentWidget::bConsumePointerInput");

// /Script/SaveTheWorldUI.FortCampaignPlayFlow
// Kind: Class; super: CommonActivatableWidget
class UFortCampaignPlayFlow
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t ChangeLeaderInputActionRowHandle[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputActionRowHandle[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCampaignPlayFlow, ChangeLeaderInputActionRowHandle) == 1184, "Offset mismatch for UFortCampaignPlayFlow::ChangeLeaderInputActionRowHandle");
static_assert(offsetof(UFortCampaignPlayFlow, BackInputActionRowHandle) == 1200, "Offset mismatch for UFortCampaignPlayFlow::BackInputActionRowHandle");

// /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
// Kind: Class; super: CommonActivatableWidget
class UFortCampaignTabsScreenBase
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    TMap<void*, void*> FeaturesTabsMap; // 0x04B0 (Size: 0x10, Type: MapProperty)
    void* TopTabContainer; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* TopTabList; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* MainTabSet; // 0x04D0 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> TabsLockedBehindQuestObjective; // 0x04D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04E8
    void* Switcher_TabContent; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCampaignTabsScreenBase, FeaturesTabsMap) == 1200, "Offset mismatch for UFortCampaignTabsScreenBase::FeaturesTabsMap");
static_assert(offsetof(UFortCampaignTabsScreenBase, TopTabContainer) == 1216, "Offset mismatch for UFortCampaignTabsScreenBase::TopTabContainer");
static_assert(offsetof(UFortCampaignTabsScreenBase, TopTabList) == 1224, "Offset mismatch for UFortCampaignTabsScreenBase::TopTabList");
static_assert(offsetof(UFortCampaignTabsScreenBase, MainTabSet) == 1232, "Offset mismatch for UFortCampaignTabsScreenBase::MainTabSet");
static_assert(offsetof(UFortCampaignTabsScreenBase, TabsLockedBehindQuestObjective) == 1240, "Offset mismatch for UFortCampaignTabsScreenBase::TabsLockedBehindQuestObjective");
static_assert(offsetof(UFortCampaignTabsScreenBase, Switcher_TabContent) == 1264, "Offset mismatch for UFortCampaignTabsScreenBase::Switcher_TabContent");

// /Script/SaveTheWorldUI.FortChangeLeaderModal
// Kind: Class; super: CommonActivatableWidget
class UFortChangeLeaderModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* MemberButtonClass; // 0x04A0 (Size: 0x8, Type: ClassProperty)
    void* Panel_PartyMembers; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortChangeLeaderModal, MemberButtonClass) == 1184, "Offset mismatch for UFortChangeLeaderModal::MemberButtonClass");
static_assert(offsetof(UFortChangeLeaderModal, Panel_PartyMembers) == 1192, "Offset mismatch for UFortChangeLeaderModal::Panel_PartyMembers");

// /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookGenericRewardWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bUpdateVisibilityBasedOnRewardExistence; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0331
    std::uint8_t VisibilityWhenNoRewardSpecified; // 0x0334 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VisibilityWhenRewardSpecified; // 0x0335 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0336
    void* RewardCardWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardStatus; // 0x0340 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortCollectionBookGenericRewardWidget, bUpdateVisibilityBasedOnRewardExistence) == 816, "Offset mismatch for UFortCollectionBookGenericRewardWidget::bUpdateVisibilityBasedOnRewardExistence");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, VisibilityWhenNoRewardSpecified) == 820, "Offset mismatch for UFortCollectionBookGenericRewardWidget::VisibilityWhenNoRewardSpecified");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, VisibilityWhenRewardSpecified) == 821, "Offset mismatch for UFortCollectionBookGenericRewardWidget::VisibilityWhenRewardSpecified");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, RewardCardWidget) == 824, "Offset mismatch for UFortCollectionBookGenericRewardWidget::RewardCardWidget");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, RewardStatus) == 832, "Offset mismatch for UFortCollectionBookGenericRewardWidget::RewardStatus");

// /Script/SaveTheWorldUI.FortCollectionBookHelpWidget
// Kind: Class; super: FortActivatablePanel
class UFortCollectionBookHelpWidget
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    std::uint8_t bIsPushedOnToContentPanelStack; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAlreadyOnContentPanelStack; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputPriority; // 0x056A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsClosableByPlayerInput; // 0x056B (Size: 0x1, Type: BoolProperty)
    std::uint8_t PrimaryContentSetup[0x1]; // 0x056C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCollectionBookHelpWidget, bIsPushedOnToContentPanelStack) == 1384, "Offset mismatch for UFortCollectionBookHelpWidget::bIsPushedOnToContentPanelStack");
static_assert(offsetof(UFortCollectionBookHelpWidget, bIsAlreadyOnContentPanelStack) == 1385, "Offset mismatch for UFortCollectionBookHelpWidget::bIsAlreadyOnContentPanelStack");
static_assert(offsetof(UFortCollectionBookHelpWidget, InputPriority) == 1386, "Offset mismatch for UFortCollectionBookHelpWidget::InputPriority");
static_assert(offsetof(UFortCollectionBookHelpWidget, bIsClosableByPlayerInput) == 1387, "Offset mismatch for UFortCollectionBookHelpWidget::bIsClosableByPlayerInput");
static_assert(offsetof(UFortCollectionBookHelpWidget, PrimaryContentSetup) == 1388, "Offset mismatch for UFortCollectionBookHelpWidget::PrimaryContentSetup");

// /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
// Kind: Class; super: FortPopupMenu_Legacy
class UFortCollectionBookItemPopupMenu
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t bUseInputStack; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0561
    TWeakObjectPtr<void> OwningMenuAnchor; // 0x0564 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ContextProvidingObject; // 0x056C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortCollectionBookItemPopupMenu, bUseInputStack) == 1376, "Offset mismatch for UFortCollectionBookItemPopupMenu::bUseInputStack");
static_assert(offsetof(UFortCollectionBookItemPopupMenu, OwningMenuAnchor) == 1380, "Offset mismatch for UFortCollectionBookItemPopupMenu::OwningMenuAnchor");
static_assert(offsetof(UFortCollectionBookItemPopupMenu, ContextProvidingObject) == 1388, "Offset mismatch for UFortCollectionBookItemPopupMenu::ContextProvidingObject");

// /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookOverviewWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnCollectionBookPageSelected; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCollectionBookPageClicked; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* LastSelectedPage; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* LastSelectedCategory; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CategoryObjectPool; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    void* PageTreeViewWidget; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookOverviewWidget, OnCollectionBookPageSelected) == 816, "Offset mismatch for UFortCollectionBookOverviewWidget::OnCollectionBookPageSelected");
static_assert(offsetof(UFortCollectionBookOverviewWidget, OnCollectionBookPageClicked) == 832, "Offset mismatch for UFortCollectionBookOverviewWidget::OnCollectionBookPageClicked");
static_assert(offsetof(UFortCollectionBookOverviewWidget, LastSelectedPage) == 848, "Offset mismatch for UFortCollectionBookOverviewWidget::LastSelectedPage");
static_assert(offsetof(UFortCollectionBookOverviewWidget, LastSelectedCategory) == 856, "Offset mismatch for UFortCollectionBookOverviewWidget::LastSelectedCategory");
static_assert(offsetof(UFortCollectionBookOverviewWidget, CategoryObjectPool) == 864, "Offset mismatch for UFortCollectionBookOverviewWidget::CategoryObjectPool");
static_assert(offsetof(UFortCollectionBookOverviewWidget, PageTreeViewWidget) == 880, "Offset mismatch for UFortCollectionBookOverviewWidget::PageTreeViewWidget");

// /Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
// Kind: Class; super: FortCollectionBookGenericRewardWidget
class UFortCollectionBookPageCompletionRewardWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bUpdateVisibilityBasedOnRewardExistence; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0331
    std::uint8_t VisibilityWhenNoRewardSpecified; // 0x0334 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VisibilityWhenRewardSpecified; // 0x0335 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0336
    void* RewardCardWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardStatus; // 0x0340 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortCollectionBookPageCompletionRewardWidget, bUpdateVisibilityBasedOnRewardExistence) == 816, "Offset mismatch for UFortCollectionBookPageCompletionRewardWidget::bUpdateVisibilityBasedOnRewardExistence");
static_assert(offsetof(UFortCollectionBookPageCompletionRewardWidget, VisibilityWhenNoRewardSpecified) == 820, "Offset mismatch for UFortCollectionBookPageCompletionRewardWidget::VisibilityWhenNoRewardSpecified");
static_assert(offsetof(UFortCollectionBookPageCompletionRewardWidget, VisibilityWhenRewardSpecified) == 821, "Offset mismatch for UFortCollectionBookPageCompletionRewardWidget::VisibilityWhenRewardSpecified");
static_assert(offsetof(UFortCollectionBookPageCompletionRewardWidget, RewardCardWidget) == 824, "Offset mismatch for UFortCollectionBookPageCompletionRewardWidget::RewardCardWidget");
static_assert(offsetof(UFortCollectionBookPageCompletionRewardWidget, RewardStatus) == 832, "Offset mismatch for UFortCollectionBookPageCompletionRewardWidget::RewardStatus");

// /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookPageDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* PageCompletionText; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ProgressBar; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* PageRewardWidget; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* RewardDetailsButton; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* DetailsPage; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardDetailsModalWidgetClass[0x20]; // 0x0358 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ModalTitle[0x10]; // 0x0378 (Size: 0x10, Type: TextProperty)
    void* RewardDetailsModalWidget; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookPageDetailsWidget, PageCompletionText) == 816, "Offset mismatch for UFortCollectionBookPageDetailsWidget::PageCompletionText");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, ProgressBar) == 824, "Offset mismatch for UFortCollectionBookPageDetailsWidget::ProgressBar");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, PageRewardWidget) == 832, "Offset mismatch for UFortCollectionBookPageDetailsWidget::PageRewardWidget");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsButton) == 840, "Offset mismatch for UFortCollectionBookPageDetailsWidget::RewardDetailsButton");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, DetailsPage) == 848, "Offset mismatch for UFortCollectionBookPageDetailsWidget::DetailsPage");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsModalWidgetClass) == 856, "Offset mismatch for UFortCollectionBookPageDetailsWidget::RewardDetailsModalWidgetClass");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, ModalTitle) == 888, "Offset mismatch for UFortCollectionBookPageDetailsWidget::ModalTitle");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsModalWidget) == 904, "Offset mismatch for UFortCollectionBookPageDetailsWidget::RewardDetailsModalWidget");

// /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
// Kind: Class; super: CommonButtonBase
class UFortCollectionBookPageListWidget
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* PageNameWidget; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    void* AvailableSlotsWidget; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
    void* PageCompletionWidget; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> AssociatedPageOrCategory; // 0x15C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsExpanded; // 0x15C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCollectionBookPageListWidget, PageNameWidget) == 5544, "Offset mismatch for UFortCollectionBookPageListWidget::PageNameWidget");
static_assert(offsetof(UFortCollectionBookPageListWidget, AvailableSlotsWidget) == 5552, "Offset mismatch for UFortCollectionBookPageListWidget::AvailableSlotsWidget");
static_assert(offsetof(UFortCollectionBookPageListWidget, PageCompletionWidget) == 5560, "Offset mismatch for UFortCollectionBookPageListWidget::PageCompletionWidget");
static_assert(offsetof(UFortCollectionBookPageListWidget, AssociatedPageOrCategory) == 5568, "Offset mismatch for UFortCollectionBookPageListWidget::AssociatedPageOrCategory");
static_assert(offsetof(UFortCollectionBookPageListWidget, bIsExpanded) == 5576, "Offset mismatch for UFortCollectionBookPageListWidget::bIsExpanded");

// /Script/SaveTheWorldUI.FortCollectionBookPicker
// Kind: Class; super: FortItemPickerBase
class UFortCollectionBookPicker
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    void* MulchConfirmationModalClass; // 0x0470 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0478
    void* CurrentSlottedItem; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* MulchConfirmationModal; // 0x0488 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookPicker, MulchConfirmationModalClass) == 1136, "Offset mismatch for UFortCollectionBookPicker::MulchConfirmationModalClass");
static_assert(offsetof(UFortCollectionBookPicker, CurrentSlottedItem) == 1152, "Offset mismatch for UFortCollectionBookPicker::CurrentSlottedItem");
static_assert(offsetof(UFortCollectionBookPicker, MulchConfirmationModal) == 1160, "Offset mismatch for UFortCollectionBookPicker::MulchConfirmationModal");

// /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
// Kind: Class; super: CommonActivatableWidget
class UFortCollectionBookPrimaryPanel
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t BackActionRowHandle[0x10]; // 0x04D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SummonInfoPanelActionRowHandle[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    void* OverviewWidget; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* SectionTileViewWidget; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentNavTarget; // 0x0500 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0501
    void* LastClickedSection; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* LastSelectedWidget; // 0x0510 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookPageSelectedDelegate) == 1184, "Offset mismatch for UFortCollectionBookPrimaryPanel::OnCollectionBookPageSelectedDelegate");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookPageClickedDelegate) == 1200, "Offset mismatch for UFortCollectionBookPrimaryPanel::OnCollectionBookPageClickedDelegate");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookSectionClickedDelegate) == 1216, "Offset mismatch for UFortCollectionBookPrimaryPanel::OnCollectionBookSectionClickedDelegate");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, BackActionRowHandle) == 1232, "Offset mismatch for UFortCollectionBookPrimaryPanel::BackActionRowHandle");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, SummonInfoPanelActionRowHandle) == 1248, "Offset mismatch for UFortCollectionBookPrimaryPanel::SummonInfoPanelActionRowHandle");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OverviewWidget) == 1264, "Offset mismatch for UFortCollectionBookPrimaryPanel::OverviewWidget");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, SectionTileViewWidget) == 1272, "Offset mismatch for UFortCollectionBookPrimaryPanel::SectionTileViewWidget");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, CurrentNavTarget) == 1280, "Offset mismatch for UFortCollectionBookPrimaryPanel::CurrentNavTarget");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, LastClickedSection) == 1288, "Offset mismatch for UFortCollectionBookPrimaryPanel::LastClickedSection");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, LastSelectedWidget) == 1296, "Offset mismatch for UFortCollectionBookPrimaryPanel::LastSelectedWidget");

// /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookProgressWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::int32_t CachedXPLevel; // 0x0330 (Size: 0x4, Type: IntProperty)
    float CachedXPCompletionPct; // 0x0334 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RewardDetailsModalWidgetClass[0x20]; // 0x0338 (Size: 0x20, Type: SoftClassProperty)
    void* ProgressionRewardsPreviewWidget; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* XPTextWidget; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* LevelTextWidget; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* DetailsButtonWidget; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* PageDetailsWidget; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* DetailsModalWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookProgressWidget, CachedXPLevel) == 816, "Offset mismatch for UFortCollectionBookProgressWidget::CachedXPLevel");
static_assert(offsetof(UFortCollectionBookProgressWidget, CachedXPCompletionPct) == 820, "Offset mismatch for UFortCollectionBookProgressWidget::CachedXPCompletionPct");
static_assert(offsetof(UFortCollectionBookProgressWidget, RewardDetailsModalWidgetClass) == 824, "Offset mismatch for UFortCollectionBookProgressWidget::RewardDetailsModalWidgetClass");
static_assert(offsetof(UFortCollectionBookProgressWidget, ProgressionRewardsPreviewWidget) == 856, "Offset mismatch for UFortCollectionBookProgressWidget::ProgressionRewardsPreviewWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, XPTextWidget) == 864, "Offset mismatch for UFortCollectionBookProgressWidget::XPTextWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, LevelTextWidget) == 872, "Offset mismatch for UFortCollectionBookProgressWidget::LevelTextWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, DetailsButtonWidget) == 880, "Offset mismatch for UFortCollectionBookProgressWidget::DetailsButtonWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, PageDetailsWidget) == 888, "Offset mismatch for UFortCollectionBookProgressWidget::PageDetailsWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, DetailsModalWidget) == 896, "Offset mismatch for UFortCollectionBookProgressWidget::DetailsModalWidget");

// /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookProgressionRewardDetailInspectWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* LevelTextWidget; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RewardWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* CheckmarkImage; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, LevelTextWidget) == 816, "Offset mismatch for UFortCollectionBookProgressionRewardDetailInspectWidget::LevelTextWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, RewardWidget) == 824, "Offset mismatch for UFortCollectionBookProgressionRewardDetailInspectWidget::RewardWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, CheckmarkImage) == 832, "Offset mismatch for UFortCollectionBookProgressionRewardDetailInspectWidget::CheckmarkImage");

// /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
// Kind: Class; super: FortCollectionBookGenericRewardWidget
class UFortCollectionBookProgressionRewardWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* LevelTextWidget; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* DisplayNameWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookProgressionRewardWidget, LevelTextWidget) == 840, "Offset mismatch for UFortCollectionBookProgressionRewardWidget::LevelTextWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardWidget, DisplayNameWidget) == 848, "Offset mismatch for UFortCollectionBookProgressionRewardWidget::DisplayNameWidget");

// /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortCollectionBookProgressionRewardsModalWidget
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t RewardWidgetClass[0x20]; // 0x0560 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t RewardWidgetPadding[0x10]; // 0x0580 (Size: 0x10, Type: StructProperty)
    std::int32_t NumRewardsToShow; // 0x0590 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0594
    void* RewardBoxWidget; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* MajorRewardBoxWidget; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* XPTextWidget; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* LevelTextWidget; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardWidgetClass) == 1376, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::RewardWidgetClass");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardWidgetPadding) == 1408, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::RewardWidgetPadding");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, NumRewardsToShow) == 1424, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::NumRewardsToShow");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardBoxWidget) == 1432, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::RewardBoxWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, MajorRewardBoxWidget) == 1440, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::MajorRewardBoxWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, XPTextWidget) == 1448, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::XPTextWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, LevelTextWidget) == 1456, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::LevelTextWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, ButtonGroup) == 1464, "Offset mismatch for UFortCollectionBookProgressionRewardsModalWidget::ButtonGroup");

// /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookProgressionRewardsPreviewWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* NextRewardWidget; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* NextMajorRewardWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookProgressionRewardsPreviewWidget, NextRewardWidget) == 816, "Offset mismatch for UFortCollectionBookProgressionRewardsPreviewWidget::NextRewardWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsPreviewWidget, NextMajorRewardWidget) == 824, "Offset mismatch for UFortCollectionBookProgressionRewardsPreviewWidget::NextMajorRewardWidget");

// /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookRecycleSlotResultsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* RecycleResultsWidget; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemCardSize; // 0x0338 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0339
    void* ItemToRecycle; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, RecycleResultsWidget) == 816, "Offset mismatch for UFortCollectionBookRecycleSlotResultsWidget::RecycleResultsWidget");
static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, ItemCardSize) == 824, "Offset mismatch for UFortCollectionBookRecycleSlotResultsWidget::ItemCardSize");
static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, ItemToRecycle) == 832, "Offset mismatch for UFortCollectionBookRecycleSlotResultsWidget::ItemToRecycle");

// /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookRewardCardWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnDisplayedItemChangedEvent; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ItemCardWidget; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* MultiItemRewardOverlay; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* ChoiceRewardOverlay; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* CheckmarkImage; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    float UpdateCardInterval; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ItemCardSize; // 0x0364 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisplayAsRewardCard; // 0x0365 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0366
    std::uint8_t RepresentedRewards[0x40]; // 0x0368 (Size: 0x40, Type: StructProperty)
    TArray<void*> DummyItems; // 0x03A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UpdateCardTimer[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCollectionBookRewardCardWidget, OnDisplayedItemChangedEvent) == 816, "Offset mismatch for UFortCollectionBookRewardCardWidget::OnDisplayedItemChangedEvent");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ItemCardWidget) == 832, "Offset mismatch for UFortCollectionBookRewardCardWidget::ItemCardWidget");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, MultiItemRewardOverlay) == 840, "Offset mismatch for UFortCollectionBookRewardCardWidget::MultiItemRewardOverlay");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ChoiceRewardOverlay) == 848, "Offset mismatch for UFortCollectionBookRewardCardWidget::ChoiceRewardOverlay");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, CheckmarkImage) == 856, "Offset mismatch for UFortCollectionBookRewardCardWidget::CheckmarkImage");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, UpdateCardInterval) == 864, "Offset mismatch for UFortCollectionBookRewardCardWidget::UpdateCardInterval");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ItemCardSize) == 868, "Offset mismatch for UFortCollectionBookRewardCardWidget::ItemCardSize");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, bDisplayAsRewardCard) == 869, "Offset mismatch for UFortCollectionBookRewardCardWidget::bDisplayAsRewardCard");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, RepresentedRewards) == 872, "Offset mismatch for UFortCollectionBookRewardCardWidget::RepresentedRewards");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, DummyItems) == 936, "Offset mismatch for UFortCollectionBookRewardCardWidget::DummyItems");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, UpdateCardTimer) == 952, "Offset mismatch for UFortCollectionBookRewardCardWidget::UpdateCardTimer");

// /Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortCollectionBookRewardModalWidget
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    void* TitleWidget; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* RewardWidget; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* ProgressBar; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* ProgressTextWidget; // 0x0578 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookRewardModalWidget, TitleWidget) == 1376, "Offset mismatch for UFortCollectionBookRewardModalWidget::TitleWidget");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, RewardWidget) == 1384, "Offset mismatch for UFortCollectionBookRewardModalWidget::RewardWidget");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, ProgressBar) == 1392, "Offset mismatch for UFortCollectionBookRewardModalWidget::ProgressBar");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, ProgressTextWidget) == 1400, "Offset mismatch for UFortCollectionBookRewardModalWidget::ProgressTextWidget");

// /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
// Kind: Class; super: FortCollectionBookGenericRewardWidget
class UFortCollectionBookSectionCompletionRewardWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* RewardDetailsButton; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardDetailsModalWidgetClass[0x20]; // 0x0350 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ModalTitle[0x10]; // 0x0370 (Size: 0x10, Type: TextProperty)
    void* RewardDetailsModalWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Section; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsButton) == 840, "Offset mismatch for UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsButton");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsModalWidgetClass) == 848, "Offset mismatch for UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsModalWidgetClass");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, ModalTitle) == 880, "Offset mismatch for UFortCollectionBookSectionCompletionRewardWidget::ModalTitle");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsModalWidget) == 896, "Offset mismatch for UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsModalWidget");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, Section) == 904, "Offset mismatch for UFortCollectionBookSectionCompletionRewardWidget::Section");

// /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
// Kind: Class; super: CommonActivatableWidget
class UFortCollectionBookSectionPanel
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FMulticastInlineDelegate OnSectionCloseRequest; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SectionNameTextWidget; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* SlotViewWidget; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* SlotItemPicker; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* ContextOverlayWidget; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* ContextTextWidget; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* SectionRewardWidget; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* ItemAcquisitionSourceContainerWidget; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* ItemAcquisitionSourceDescWidget; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* ItemAcquisitionSourceDesc2Widget; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* ResearchRecruitUnslotContainerWidget; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* PersonRecruitUnavailableMessageWidget; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* ItemResearchUnavailableMessageWidget; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* UnslotUnavailableMessageWidget; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackActionRowHandle[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t CloseActionRowHandle[0x10]; // 0x0538 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotItemActionRowHandle[0x10]; // 0x0548 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectItemActionRowHandle[0x10]; // 0x0558 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectCollectionBookItemActionRowHandle[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectPreviewItemActionRowHandle[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    std::uint8_t OpenPickerActionRowHandle[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    std::uint8_t LogAllowedItemsActionRowHandle[0x10]; // 0x0598 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResearchItemActionRowHandle[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RecruitActionRowHandle[0x10]; // 0x05B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnslotItemActionRowHandle[0x10]; // 0x05C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentNavTarget; // 0x05D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x05D9
    void* AssociatedSection; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasSummonedPanel; // 0x05E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05E9
    std::uint8_t SlotConfirmationDialogLatentHandle[0x4]; // 0x05EC (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate OnShowItemDetailEvent; // 0x05F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x0600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x0610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x0620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInspectItemEvent; // 0x0630 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x28]; // 0x0640
    void* SlotConfirmationModalClass; // 0x0668 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortCollectionBookSectionPanel, OnSectionCloseRequest) == 1184, "Offset mismatch for UFortCollectionBookSectionPanel::OnSectionCloseRequest");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnPreviewXPChangeEvent) == 1200, "Offset mismatch for UFortCollectionBookSectionPanel::OnPreviewXPChangeEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, SectionNameTextWidget) == 1216, "Offset mismatch for UFortCollectionBookSectionPanel::SectionNameTextWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotViewWidget) == 1224, "Offset mismatch for UFortCollectionBookSectionPanel::SlotViewWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotItemPicker) == 1232, "Offset mismatch for UFortCollectionBookSectionPanel::SlotItemPicker");
static_assert(offsetof(UFortCollectionBookSectionPanel, ContextOverlayWidget) == 1240, "Offset mismatch for UFortCollectionBookSectionPanel::ContextOverlayWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ContextTextWidget) == 1248, "Offset mismatch for UFortCollectionBookSectionPanel::ContextTextWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, SectionRewardWidget) == 1256, "Offset mismatch for UFortCollectionBookSectionPanel::SectionRewardWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceContainerWidget) == 1264, "Offset mismatch for UFortCollectionBookSectionPanel::ItemAcquisitionSourceContainerWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceDescWidget) == 1272, "Offset mismatch for UFortCollectionBookSectionPanel::ItemAcquisitionSourceDescWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceDesc2Widget) == 1280, "Offset mismatch for UFortCollectionBookSectionPanel::ItemAcquisitionSourceDesc2Widget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ResearchRecruitUnslotContainerWidget) == 1288, "Offset mismatch for UFortCollectionBookSectionPanel::ResearchRecruitUnslotContainerWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, PersonRecruitUnavailableMessageWidget) == 1296, "Offset mismatch for UFortCollectionBookSectionPanel::PersonRecruitUnavailableMessageWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemResearchUnavailableMessageWidget) == 1304, "Offset mismatch for UFortCollectionBookSectionPanel::ItemResearchUnavailableMessageWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, UnslotUnavailableMessageWidget) == 1312, "Offset mismatch for UFortCollectionBookSectionPanel::UnslotUnavailableMessageWidget");
static_assert(offsetof(UFortCollectionBookSectionPanel, BackActionRowHandle) == 1320, "Offset mismatch for UFortCollectionBookSectionPanel::BackActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, CloseActionRowHandle) == 1336, "Offset mismatch for UFortCollectionBookSectionPanel::CloseActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotItemActionRowHandle) == 1352, "Offset mismatch for UFortCollectionBookSectionPanel::SlotItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectItemActionRowHandle) == 1368, "Offset mismatch for UFortCollectionBookSectionPanel::InspectItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectCollectionBookItemActionRowHandle) == 1384, "Offset mismatch for UFortCollectionBookSectionPanel::InspectCollectionBookItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectPreviewItemActionRowHandle) == 1400, "Offset mismatch for UFortCollectionBookSectionPanel::InspectPreviewItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, OpenPickerActionRowHandle) == 1416, "Offset mismatch for UFortCollectionBookSectionPanel::OpenPickerActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, LogAllowedItemsActionRowHandle) == 1432, "Offset mismatch for UFortCollectionBookSectionPanel::LogAllowedItemsActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, ResearchItemActionRowHandle) == 1448, "Offset mismatch for UFortCollectionBookSectionPanel::ResearchItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, RecruitActionRowHandle) == 1464, "Offset mismatch for UFortCollectionBookSectionPanel::RecruitActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, UnslotItemActionRowHandle) == 1480, "Offset mismatch for UFortCollectionBookSectionPanel::UnslotItemActionRowHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, CurrentNavTarget) == 1496, "Offset mismatch for UFortCollectionBookSectionPanel::CurrentNavTarget");
static_assert(offsetof(UFortCollectionBookSectionPanel, AssociatedSection) == 1504, "Offset mismatch for UFortCollectionBookSectionPanel::AssociatedSection");
static_assert(offsetof(UFortCollectionBookSectionPanel, bHasSummonedPanel) == 1512, "Offset mismatch for UFortCollectionBookSectionPanel::bHasSummonedPanel");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotConfirmationDialogLatentHandle) == 1516, "Offset mismatch for UFortCollectionBookSectionPanel::SlotConfirmationDialogLatentHandle");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnShowItemDetailEvent) == 1520, "Offset mismatch for UFortCollectionBookSectionPanel::OnShowItemDetailEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnSlotItemConfirmEvent) == 1536, "Offset mismatch for UFortCollectionBookSectionPanel::OnSlotItemConfirmEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnResearchItemConfirmEvent) == 1552, "Offset mismatch for UFortCollectionBookSectionPanel::OnResearchItemConfirmEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnUnslotItemConfirmEvent) == 1568, "Offset mismatch for UFortCollectionBookSectionPanel::OnUnslotItemConfirmEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnInspectItemEvent) == 1584, "Offset mismatch for UFortCollectionBookSectionPanel::OnInspectItemEvent");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotConfirmationModalClass) == 1640, "Offset mismatch for UFortCollectionBookSectionPanel::SlotConfirmationModalClass");

// /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
// Kind: Class; super: CommonButtonBase
class UFortCollectionBookSectionTileWidget
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    std::uint8_t SlotWidgetClass[0x20]; // 0x15A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SlotWidgetPadding[0x10]; // 0x15C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotWidgetHorizontalAlignment; // 0x15D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SlotWidgetVerticalAlignment; // 0x15D9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x15DA
    std::int32_t MaxNumSlotsSupported; // 0x15DC (Size: 0x4, Type: IntProperty)
    void* SlotBoxWidget; // 0x15E0 (Size: 0x8, Type: ObjectProperty)
    void* SectionNameWidget; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    void* SectionRewardWidget; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* AssociatedSection; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SlotWidgets; // 0x1600 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetClass) == 5544, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotWidgetClass");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetPadding) == 5576, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotWidgetPadding");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetHorizontalAlignment) == 5592, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotWidgetHorizontalAlignment");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetVerticalAlignment) == 5593, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotWidgetVerticalAlignment");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, MaxNumSlotsSupported) == 5596, "Offset mismatch for UFortCollectionBookSectionTileWidget::MaxNumSlotsSupported");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotBoxWidget) == 5600, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotBoxWidget");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SectionNameWidget) == 5608, "Offset mismatch for UFortCollectionBookSectionTileWidget::SectionNameWidget");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SectionRewardWidget) == 5616, "Offset mismatch for UFortCollectionBookSectionTileWidget::SectionRewardWidget");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, AssociatedSection) == 5624, "Offset mismatch for UFortCollectionBookSectionTileWidget::AssociatedSection");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgets) == 5632, "Offset mismatch for UFortCollectionBookSectionTileWidget::SlotWidgets");

// /Script/SaveTheWorldUI.FortCollectionBookSlotButton
// Kind: Class; super: CommonButtonBase
class UFortCollectionBookSlotButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    void* CollectionBookSlotWidget; // 0x15A0 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenuAnchor; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookSlotButton, CollectionBookSlotWidget) == 5536, "Offset mismatch for UFortCollectionBookSlotButton::CollectionBookSlotWidget");
static_assert(offsetof(UFortCollectionBookSlotButton, PopupMenuAnchor) == 5544, "Offset mismatch for UFortCollectionBookSlotButton::PopupMenuAnchor");

// /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
// Kind: Class; super: FortActivatablePanel
class UFortCollectionBookSlotConfirmationModal
{
public:
    std::uint8_t Pad_0000[0x588]; // 0x0000
    void* CurrentlySlottedItem; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* NewItemToSlot; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Text_SlottingDescription; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* ItemCard_NewlySlottedItem; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* RecycleSlotResultsWidget; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_SlotItem; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, CurrentlySlottedItem) == 1416, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::CurrentlySlottedItem");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, NewItemToSlot) == 1424, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::NewItemToSlot");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Text_SlottingDescription) == 1432, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::Text_SlottingDescription");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, ItemCard_NewlySlottedItem) == 1440, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::ItemCard_NewlySlottedItem");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, RecycleSlotResultsWidget) == 1448, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::RecycleSlotResultsWidget");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Button_SlotItem) == 1456, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::Button_SlotItem");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Button_Back) == 1464, "Offset mismatch for UFortCollectionBookSlotConfirmationModal::Button_Back");

// /Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookSlotDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCollectionBookSlotDetailsWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortCollectionBookSlotDetailsWidget::bDisplayInActionBar");
static_assert(offsetof(UFortCollectionBookSlotDetailsWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortCollectionBookSlotDetailsWidget::bConsumePointerInput");

// /Script/SaveTheWorldUI.FortCollectionBookSlotView
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookSlotView
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t CollectionBookButtonClass[0x20]; // 0x0330 (Size: 0x20, Type: SoftClassProperty)
    void* CollectionBookButtonBox; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* CollectionBookSlotButtonGroup; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CollectionBookSlotButtons; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    void* AssociatedSection; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0378
    void* PopupMenu; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PreviousSelectedButtonIdx; // 0x03C8 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentSelectedButtonIdx; // 0x03CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookButtonClass) == 816, "Offset mismatch for UFortCollectionBookSlotView::CollectionBookButtonClass");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookButtonBox) == 848, "Offset mismatch for UFortCollectionBookSlotView::CollectionBookButtonBox");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookSlotButtonGroup) == 856, "Offset mismatch for UFortCollectionBookSlotView::CollectionBookSlotButtonGroup");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookSlotButtons) == 864, "Offset mismatch for UFortCollectionBookSlotView::CollectionBookSlotButtons");
static_assert(offsetof(UFortCollectionBookSlotView, AssociatedSection) == 880, "Offset mismatch for UFortCollectionBookSlotView::AssociatedSection");
static_assert(offsetof(UFortCollectionBookSlotView, PopupMenu) == 960, "Offset mismatch for UFortCollectionBookSlotView::PopupMenu");
static_assert(offsetof(UFortCollectionBookSlotView, PreviousSelectedButtonIdx) == 968, "Offset mismatch for UFortCollectionBookSlotView::PreviousSelectedButtonIdx");
static_assert(offsetof(UFortCollectionBookSlotView, CurrentSelectedButtonIdx) == 972, "Offset mismatch for UFortCollectionBookSlotView::CurrentSelectedButtonIdx");

// /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
// Kind: Class; super: CommonUserWidget
class UFortCollectionBookSlotWidget
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t ItemCardSize; // 0x0340 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsRewardCard; // 0x0341 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0342
    void* ItemCardWidget; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* UnslottedOverlayWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* ReadyToSlotOverlayWidget; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* UnslottedButReadyOverlayWidget; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    FName SlotRowName; // 0x0368 (Size: 0x8, Type: NameProperty)
    std::uint8_t ItemAvailableToSlotText[0x10]; // 0x0370 (Size: 0x10, Type: TextProperty)
    std::uint8_t NoItemsAvailableToSlotText[0x10]; // 0x0380 (Size: 0x10, Type: TextProperty)
    std::uint8_t HigherQualityItemsAvailableToSlotAndUpgradeAvailableText[0x10]; // 0x0390 (Size: 0x10, Type: TextProperty)
    std::uint8_t HigherQualityItemsAvailableToSlotAndEvolveAvailableText[0x10]; // 0x03A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t HigherQualityItemsAvailableToSlotText[0x10]; // 0x03B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemInSlotFullyUpgradedText[0x10]; // 0x03C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemInSlotCanBeUpgradedText[0x10]; // 0x03D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemInSlotCanBeEvolvedText[0x10]; // 0x03E0 (Size: 0x10, Type: TextProperty)
    void* SlottedItemRepresentation; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCollectionBookSlotWidget, ItemCardSize) == 832, "Offset mismatch for UFortCollectionBookSlotWidget::ItemCardSize");
static_assert(offsetof(UFortCollectionBookSlotWidget, bIsRewardCard) == 833, "Offset mismatch for UFortCollectionBookSlotWidget::bIsRewardCard");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemCardWidget) == 840, "Offset mismatch for UFortCollectionBookSlotWidget::ItemCardWidget");
static_assert(offsetof(UFortCollectionBookSlotWidget, UnslottedOverlayWidget) == 848, "Offset mismatch for UFortCollectionBookSlotWidget::UnslottedOverlayWidget");
static_assert(offsetof(UFortCollectionBookSlotWidget, ReadyToSlotOverlayWidget) == 856, "Offset mismatch for UFortCollectionBookSlotWidget::ReadyToSlotOverlayWidget");
static_assert(offsetof(UFortCollectionBookSlotWidget, UnslottedButReadyOverlayWidget) == 864, "Offset mismatch for UFortCollectionBookSlotWidget::UnslottedButReadyOverlayWidget");
static_assert(offsetof(UFortCollectionBookSlotWidget, SlotRowName) == 872, "Offset mismatch for UFortCollectionBookSlotWidget::SlotRowName");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemAvailableToSlotText) == 880, "Offset mismatch for UFortCollectionBookSlotWidget::ItemAvailableToSlotText");
static_assert(offsetof(UFortCollectionBookSlotWidget, NoItemsAvailableToSlotText) == 896, "Offset mismatch for UFortCollectionBookSlotWidget::NoItemsAvailableToSlotText");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotAndUpgradeAvailableText) == 912, "Offset mismatch for UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotAndUpgradeAvailableText");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotAndEvolveAvailableText) == 928, "Offset mismatch for UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotAndEvolveAvailableText");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotText) == 944, "Offset mismatch for UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotText");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotFullyUpgradedText) == 960, "Offset mismatch for UFortCollectionBookSlotWidget::ItemInSlotFullyUpgradedText");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotCanBeUpgradedText) == 976, "Offset mismatch for UFortCollectionBookSlotWidget::ItemInSlotCanBeUpgradedText");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotCanBeEvolvedText) == 992, "Offset mismatch for UFortCollectionBookSlotWidget::ItemInSlotCanBeEvolvedText");
static_assert(offsetof(UFortCollectionBookSlotWidget, SlottedItemRepresentation) == 1008, "Offset mismatch for UFortCollectionBookSlotWidget::SlottedItemRepresentation");

// /Script/SaveTheWorldUI.FortCollectionBookWidget
// Kind: Class; super: CommonActivatableWidget
class UFortCollectionBookWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* ProgressWidget; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* MainWidgetSwitcher; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryPanelWidget; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* SectionPanelWidget; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PrimaryPanelIdx; // 0x04C8 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionPanelIdx; // 0x04CC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x1]; // 0x04D0
    std::uint8_t PrimaryContentSetup[0x1]; // 0x04D1 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCollectionBookWidget, ProgressWidget) == 1192, "Offset mismatch for UFortCollectionBookWidget::ProgressWidget");
static_assert(offsetof(UFortCollectionBookWidget, MainWidgetSwitcher) == 1200, "Offset mismatch for UFortCollectionBookWidget::MainWidgetSwitcher");
static_assert(offsetof(UFortCollectionBookWidget, PrimaryPanelWidget) == 1208, "Offset mismatch for UFortCollectionBookWidget::PrimaryPanelWidget");
static_assert(offsetof(UFortCollectionBookWidget, SectionPanelWidget) == 1216, "Offset mismatch for UFortCollectionBookWidget::SectionPanelWidget");
static_assert(offsetof(UFortCollectionBookWidget, PrimaryPanelIdx) == 1224, "Offset mismatch for UFortCollectionBookWidget::PrimaryPanelIdx");
static_assert(offsetof(UFortCollectionBookWidget, SectionPanelIdx) == 1228, "Offset mismatch for UFortCollectionBookWidget::SectionPanelIdx");
static_assert(offsetof(UFortCollectionBookWidget, PrimaryContentSetup) == 1233, "Offset mismatch for UFortCollectionBookWidget::PrimaryContentSetup");

// /Script/SaveTheWorldUI.FortCommandScreen
// Kind: Class; super: CommonActivatableWidget
class UFortCommandScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t ShowAllStatsActionData[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectHeroActionData[0x10]; // 0x04B0 (Size: 0x10, Type: StructProperty)
    TSoftClassPtr<void> ProfileScreenClass; // 0x04C0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortCommandScreen, ShowAllStatsActionData) == 1184, "Offset mismatch for UFortCommandScreen::ShowAllStatsActionData");
static_assert(offsetof(UFortCommandScreen, InspectHeroActionData) == 1200, "Offset mismatch for UFortCommandScreen::InspectHeroActionData");
static_assert(offsetof(UFortCommandScreen, ProfileScreenClass) == 1216, "Offset mismatch for UFortCommandScreen::ProfileScreenClass");

// /Script/SaveTheWorldUI.FortCraftingBarWidget
// Kind: Class; super: FortHUDElementWidget
class UFortCraftingBarWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* CraftingText; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* CraftingProgressBar; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    float CompletedRemainVisibleTime; // 0x0380 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCraftingBarWidget, CraftingText) == 880, "Offset mismatch for UFortCraftingBarWidget::CraftingText");
static_assert(offsetof(UFortCraftingBarWidget, CraftingProgressBar) == 888, "Offset mismatch for UFortCraftingBarWidget::CraftingProgressBar");
static_assert(offsetof(UFortCraftingBarWidget, CompletedRemainVisibleTime) == 896, "Offset mismatch for UFortCraftingBarWidget::CompletedRemainVisibleTime");

// /Script/SaveTheWorldUI.FortDefenderLoadoutHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UFortDefenderLoadoutHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton
// Kind: Class; super: FortSquadSelectorButton
class UFortDefenderSquadSelectorButton
{
public:
    std::uint8_t Pad_0000[0x1600]; // 0x0000
    std::int32_t SquadSlotIndex; // 0x1600 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDefenderSquadSelectorButton, SquadSlotIndex) == 5632, "Offset mismatch for UFortDefenderSquadSelectorButton::SquadSlotIndex");

// /Script/SaveTheWorldUI.FortDifficultySelectModal
// Kind: Class; super: CommonActivatableWidget
class UFortDifficultySelectModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* MenuAnchor_TheaterList; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenuCache; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDifficultySelectModal, MenuAnchor_TheaterList) == 1184, "Offset mismatch for UFortDifficultySelectModal::MenuAnchor_TheaterList");
static_assert(offsetof(UFortDifficultySelectModal, PopupMenuCache) == 1192, "Offset mismatch for UFortDifficultySelectModal::PopupMenuCache");

// /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase
// Kind: Class; super: FortMtxStoreRootBase
class UFortDirectAcquisitionWidgetBase
{
public:
    std::uint8_t Pad_0000[0x518]; // 0x0000
    std::uint8_t bShowIneligible; // 0x0518 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0519
    void* FirstOfferGenerated; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0528
    void* HorizontalBox_LargeTile; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* GridPanel_SmallTile; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_ReorderedItems; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_FeatureItems; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_DailyItems; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* ScaleBox_Main; // 0x0560 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDirectAcquisitionWidgetBase, bShowIneligible) == 1304, "Offset mismatch for UFortDirectAcquisitionWidgetBase::bShowIneligible");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, FirstOfferGenerated) == 1312, "Offset mismatch for UFortDirectAcquisitionWidgetBase::FirstOfferGenerated");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, HorizontalBox_LargeTile) == 1336, "Offset mismatch for UFortDirectAcquisitionWidgetBase::HorizontalBox_LargeTile");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, GridPanel_SmallTile) == 1344, "Offset mismatch for UFortDirectAcquisitionWidgetBase::GridPanel_SmallTile");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, HorizontalBox_ReorderedItems) == 1352, "Offset mismatch for UFortDirectAcquisitionWidgetBase::HorizontalBox_ReorderedItems");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, VerticalBox_FeatureItems) == 1360, "Offset mismatch for UFortDirectAcquisitionWidgetBase::VerticalBox_FeatureItems");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, VerticalBox_DailyItems) == 1368, "Offset mismatch for UFortDirectAcquisitionWidgetBase::VerticalBox_DailyItems");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, ScaleBox_Main) == 1376, "Offset mismatch for UFortDirectAcquisitionWidgetBase::ScaleBox_Main");

// /Script/SaveTheWorldUI.FortEventStoreOfferDetailsScreen
// Kind: Class; super: FortStoreFrontOfferDetailsWidgetBase
class UFortEventStoreOfferDetailsScreen
{
public:
    std::uint8_t Pad_0000[0x820]; // 0x0000
    std::uint8_t BackAction[0x10]; // 0x0820 (Size: 0x10, Type: StructProperty)
    std::uint8_t UndoAction[0x10]; // 0x0830 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPurchasing; // 0x0840 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortEventStoreOfferDetailsScreen, BackAction) == 2080, "Offset mismatch for UFortEventStoreOfferDetailsScreen::BackAction");
static_assert(offsetof(UFortEventStoreOfferDetailsScreen, UndoAction) == 2096, "Offset mismatch for UFortEventStoreOfferDetailsScreen::UndoAction");
static_assert(offsetof(UFortEventStoreOfferDetailsScreen, bIsPurchasing) == 2112, "Offset mismatch for UFortEventStoreOfferDetailsScreen::bIsPurchasing");

// /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortExpeditionBuildSquadWidget
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x0568 (Size: 0x8, Type: WeakObjectProperty)
    FName CurrentSquadId; // 0x0570 (Size: 0x8, Type: NameProperty)
    void* ExpeditionSquadSlotsView; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* ExpeditionSquadSlotDetails; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* ExpeditionSquadSlotPicker; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* MasterWidget; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrimaryContentSetup[0x8]; // 0x0598 (Size: 0x8, Type: StructProperty)
    void* ItemViewContext_ExpeditionSlotsView; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* ItemViewContext_ExpeditionSlotItemPicker; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortExpeditionBuildSquadWidget, Item) == 1384, "Offset mismatch for UFortExpeditionBuildSquadWidget::Item");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, CurrentSquadId) == 1392, "Offset mismatch for UFortExpeditionBuildSquadWidget::CurrentSquadId");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotsView) == 1400, "Offset mismatch for UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotsView");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotDetails) == 1408, "Offset mismatch for UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotDetails");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotPicker) == 1416, "Offset mismatch for UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotPicker");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, MasterWidget) == 1424, "Offset mismatch for UFortExpeditionBuildSquadWidget::MasterWidget");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, PrimaryContentSetup) == 1432, "Offset mismatch for UFortExpeditionBuildSquadWidget::PrimaryContentSetup");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ItemViewContext_ExpeditionSlotsView) == 1440, "Offset mismatch for UFortExpeditionBuildSquadWidget::ItemViewContext_ExpeditionSlotsView");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ItemViewContext_ExpeditionSlotItemPicker) == 1448, "Offset mismatch for UFortExpeditionBuildSquadWidget::ItemViewContext_ExpeditionSlotItemPicker");

// /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    void* ExpeditionSquadSlotsView; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    FName CurrentSquadId; // 0x0340 (Size: 0x8, Type: NameProperty)
    void* ItemViewContext_ExpeditionSlotsView; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortExpeditionDetailsWidget, Item) == 816, "Offset mismatch for UFortExpeditionDetailsWidget::Item");
static_assert(offsetof(UFortExpeditionDetailsWidget, ExpeditionSquadSlotsView) == 824, "Offset mismatch for UFortExpeditionDetailsWidget::ExpeditionSquadSlotsView");
static_assert(offsetof(UFortExpeditionDetailsWidget, CurrentSquadId) == 832, "Offset mismatch for UFortExpeditionDetailsWidget::CurrentSquadId");
static_assert(offsetof(UFortExpeditionDetailsWidget, ItemViewContext_ExpeditionSlotsView) == 840, "Offset mismatch for UFortExpeditionDetailsWidget::ItemViewContext_ExpeditionSlotsView");

// /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionExpiresWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortExpeditionExpiresWidget, Item) == 816, "Offset mismatch for UFortExpeditionExpiresWidget::Item");

// /Script/SaveTheWorldUI.FortExpeditionListItemWidget
// Kind: Class; super: CommonButtonLegacy
class UFortExpeditionListItemWidget
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x15F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortExpeditionListItemWidget, Item) == 5624, "Offset mismatch for UFortExpeditionListItemWidget::Item");

// /Script/SaveTheWorldUI.FortExpeditionListViewWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionListViewWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnExpeditionSelected; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExpeditionListViewRefreshed; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ExpeditionListView; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentTabNameId[0x4]; // 0x0358 (Size: 0x4, Type: NameProperty)
    std::uint8_t SortType; // 0x035C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x035D
    void* CurrentSelectedItem; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortExpeditionListViewWidget, OnExpeditionSelected) == 816, "Offset mismatch for UFortExpeditionListViewWidget::OnExpeditionSelected");
static_assert(offsetof(UFortExpeditionListViewWidget, OnExpeditionListViewRefreshed) == 832, "Offset mismatch for UFortExpeditionListViewWidget::OnExpeditionListViewRefreshed");
static_assert(offsetof(UFortExpeditionListViewWidget, ExpeditionListView) == 848, "Offset mismatch for UFortExpeditionListViewWidget::ExpeditionListView");
static_assert(offsetof(UFortExpeditionListViewWidget, CurrentTabNameId) == 856, "Offset mismatch for UFortExpeditionListViewWidget::CurrentTabNameId");
static_assert(offsetof(UFortExpeditionListViewWidget, SortType) == 860, "Offset mismatch for UFortExpeditionListViewWidget::SortType");
static_assert(offsetof(UFortExpeditionListViewWidget, CurrentSelectedItem) == 864, "Offset mismatch for UFortExpeditionListViewWidget::CurrentSelectedItem");

// /Script/SaveTheWorldUI.FortExpeditionMasterWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortExpeditionMasterWidget
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    std::uint8_t BackInputAction[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    std::uint8_t BuildExpeditionInputAction[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    std::uint8_t AbandonExpeditionInputAction[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    std::uint8_t CollectExpeditionInputAction[0x10]; // 0x0598 (Size: 0x10, Type: StructProperty)
    std::uint8_t SortInputAction[0x1]; // 0x05A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortExpeditionMasterWidget, BackInputAction) == 1384, "Offset mismatch for UFortExpeditionMasterWidget::BackInputAction");
static_assert(offsetof(UFortExpeditionMasterWidget, BuildExpeditionInputAction) == 1400, "Offset mismatch for UFortExpeditionMasterWidget::BuildExpeditionInputAction");
static_assert(offsetof(UFortExpeditionMasterWidget, AbandonExpeditionInputAction) == 1416, "Offset mismatch for UFortExpeditionMasterWidget::AbandonExpeditionInputAction");
static_assert(offsetof(UFortExpeditionMasterWidget, CollectExpeditionInputAction) == 1432, "Offset mismatch for UFortExpeditionMasterWidget::CollectExpeditionInputAction");
static_assert(offsetof(UFortExpeditionMasterWidget, SortInputAction) == 1448, "Offset mismatch for UFortExpeditionMasterWidget::SortInputAction");

// /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionOverviewWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* TabButtonType; // 0x0330 (Size: 0x8, Type: ClassProperty)
    TArray<void*> TabListRegistrationInfo; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    void* ExpeditionTabList; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* ExpeditionListView; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortExpeditionOverviewWidget, TabButtonType) == 816, "Offset mismatch for UFortExpeditionOverviewWidget::TabButtonType");
static_assert(offsetof(UFortExpeditionOverviewWidget, TabListRegistrationInfo) == 824, "Offset mismatch for UFortExpeditionOverviewWidget::TabListRegistrationInfo");
static_assert(offsetof(UFortExpeditionOverviewWidget, ExpeditionTabList) == 840, "Offset mismatch for UFortExpeditionOverviewWidget::ExpeditionTabList");
static_assert(offsetof(UFortExpeditionOverviewWidget, ExpeditionListView) == 848, "Offset mismatch for UFortExpeditionOverviewWidget::ExpeditionListView");

// /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortExpeditionPickVehicleWidget
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    std::uint8_t BackInputAction[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> Item; // 0x0578 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PrimaryContentSetup[0x1]; // 0x0580 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortExpeditionPickVehicleWidget, BackInputAction) == 1384, "Offset mismatch for UFortExpeditionPickVehicleWidget::BackInputAction");
static_assert(offsetof(UFortExpeditionPickVehicleWidget, Item) == 1400, "Offset mismatch for UFortExpeditionPickVehicleWidget::Item");
static_assert(offsetof(UFortExpeditionPickVehicleWidget, PrimaryContentSetup) == 1408, "Offset mismatch for UFortExpeditionPickVehicleWidget::PrimaryContentSetup");

// /Script/SaveTheWorldUI.FortExpeditionReturnsWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionReturnsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortExpeditionReturnsWidget, Item) == 816, "Offset mismatch for UFortExpeditionReturnsWidget::Item");

// /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionRewardsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* RewardsTileView; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPendingCollection; // 0x0348 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortExpeditionRewardsWidget, OnAllExpeditionsCollected) == 816, "Offset mismatch for UFortExpeditionRewardsWidget::OnAllExpeditionsCollected");
static_assert(offsetof(UFortExpeditionRewardsWidget, RewardsTileView) == 832, "Offset mismatch for UFortExpeditionRewardsWidget::RewardsTileView");
static_assert(offsetof(UFortExpeditionRewardsWidget, bPendingCollection) == 840, "Offset mismatch for UFortExpeditionRewardsWidget::bPendingCollection");

// /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
// Kind: Class; super: CommonUserWidget
class UFortExpeditionSummaryWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::int32_t AvailableExpeditions; // 0x0330 (Size: 0x4, Type: IntProperty)
    std::int32_t CompletedExpeditions; // 0x0334 (Size: 0x4, Type: IntProperty)
    std::int32_t LandVehiclesTotal; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::int32_t LandVehiclesAvailable; // 0x033C (Size: 0x4, Type: IntProperty)
    std::int32_t AirVehiclesTotal; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::int32_t AirVehiclesAvailable; // 0x0344 (Size: 0x4, Type: IntProperty)
    std::int32_t SeaVehiclesTotal; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::int32_t SeaVehiclesAvailable; // 0x034C (Size: 0x4, Type: IntProperty)
    std::int32_t LandExpeditionsTotal; // 0x0350 (Size: 0x4, Type: IntProperty)
    std::int32_t LandExpeditionsAvailable; // 0x0354 (Size: 0x4, Type: IntProperty)
    std::int32_t AirExpeditionsTotal; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::int32_t AirExpeditionsAvailable; // 0x035C (Size: 0x4, Type: IntProperty)
    std::int32_t SeaExpeditionsTotal; // 0x0360 (Size: 0x4, Type: IntProperty)
    std::int32_t SeaExpeditionsAvailable; // 0x0364 (Size: 0x4, Type: IntProperty)
    TArray<void*> InProgressExpeditions; // 0x0368 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortExpeditionSummaryWidget, AvailableExpeditions) == 816, "Offset mismatch for UFortExpeditionSummaryWidget::AvailableExpeditions");
static_assert(offsetof(UFortExpeditionSummaryWidget, CompletedExpeditions) == 820, "Offset mismatch for UFortExpeditionSummaryWidget::CompletedExpeditions");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandVehiclesTotal) == 824, "Offset mismatch for UFortExpeditionSummaryWidget::LandVehiclesTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandVehiclesAvailable) == 828, "Offset mismatch for UFortExpeditionSummaryWidget::LandVehiclesAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirVehiclesTotal) == 832, "Offset mismatch for UFortExpeditionSummaryWidget::AirVehiclesTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirVehiclesAvailable) == 836, "Offset mismatch for UFortExpeditionSummaryWidget::AirVehiclesAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaVehiclesTotal) == 840, "Offset mismatch for UFortExpeditionSummaryWidget::SeaVehiclesTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaVehiclesAvailable) == 844, "Offset mismatch for UFortExpeditionSummaryWidget::SeaVehiclesAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandExpeditionsTotal) == 848, "Offset mismatch for UFortExpeditionSummaryWidget::LandExpeditionsTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandExpeditionsAvailable) == 852, "Offset mismatch for UFortExpeditionSummaryWidget::LandExpeditionsAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirExpeditionsTotal) == 856, "Offset mismatch for UFortExpeditionSummaryWidget::AirExpeditionsTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirExpeditionsAvailable) == 860, "Offset mismatch for UFortExpeditionSummaryWidget::AirExpeditionsAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaExpeditionsTotal) == 864, "Offset mismatch for UFortExpeditionSummaryWidget::SeaExpeditionsTotal");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaExpeditionsAvailable) == 868, "Offset mismatch for UFortExpeditionSummaryWidget::SeaExpeditionsAvailable");
static_assert(offsetof(UFortExpeditionSummaryWidget, InProgressExpeditions) == 872, "Offset mismatch for UFortExpeditionSummaryWidget::InProgressExpeditions");

// /Script/SaveTheWorldUI.FortExpeditionUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UFortExpeditionUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
// Kind: Class; super: CommonButtonLegacy
class UFortExpeditionVehicleTileItemWidget
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    TWeakObjectPtr<void> SquadId; // 0x15F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortExpeditionVehicleTileItemWidget, SquadId) == 5624, "Offset mismatch for UFortExpeditionVehicleTileItemWidget::SquadId");

// /Script/SaveTheWorldUI.FortFeatureUnlockWidget
// Kind: Class; super: FortActivatablePanel
class UFortFeatureUnlockWidget
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    void* MediaSwitcher; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* VideoContent; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* ImageContent; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* VideoWidget; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* ImageWidget; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortFeatureUnlockWidget, MediaSwitcher) == 1408, "Offset mismatch for UFortFeatureUnlockWidget::MediaSwitcher");
static_assert(offsetof(UFortFeatureUnlockWidget, VideoContent) == 1416, "Offset mismatch for UFortFeatureUnlockWidget::VideoContent");
static_assert(offsetof(UFortFeatureUnlockWidget, ImageContent) == 1424, "Offset mismatch for UFortFeatureUnlockWidget::ImageContent");
static_assert(offsetof(UFortFeatureUnlockWidget, VideoWidget) == 1432, "Offset mismatch for UFortFeatureUnlockWidget::VideoWidget");
static_assert(offsetof(UFortFeatureUnlockWidget, ImageWidget) == 1440, "Offset mismatch for UFortFeatureUnlockWidget::ImageWidget");

// /Script/SaveTheWorldUI.FortHBHUD
// Kind: Class; super: CommonActivatableWidget
class UFortHBHUD
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* PickerData; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04A8
    void* PersistentHUDScaleBox; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHBHUD, PickerData) == 1184, "Offset mismatch for UFortHBHUD::PickerData");
static_assert(offsetof(UFortHBHUD, PersistentHUDScaleBox) == 1200, "Offset mismatch for UFortHBHUD::PersistentHUDScaleBox");

// /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
// Kind: Class; super: FortItemPickerBase
class UFortHeroLoadoutGadgetPicker
{
public:
    std::uint8_t Pad_0000[0x47C]; // 0x0000
    TWeakObjectPtr<void> TargetLoadoutItem; // 0x047C (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t TargetSlotIndex; // 0x0484 (Size: 0x4, Type: IntProperty)
    TArray<void*> TemporaryGadgetItemInstances; // 0x0488 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TargetLoadoutItem) == 1148, "Offset mismatch for UFortHeroLoadoutGadgetPicker::TargetLoadoutItem");
static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TargetSlotIndex) == 1156, "Offset mismatch for UFortHeroLoadoutGadgetPicker::TargetSlotIndex");
static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TemporaryGadgetItemInstances) == 1160, "Offset mismatch for UFortHeroLoadoutGadgetPicker::TemporaryGadgetItemInstances");

// /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
// Kind: Class; super: CommonUserWidget
class UFortHeroLoadoutGadgetTileBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Text_GadgetName; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Image_Icon; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* RichText_Description; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* GadgetToRepresent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, Text_GadgetName) == 816, "Offset mismatch for UFortHeroLoadoutGadgetTileBase::Text_GadgetName");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, Image_Icon) == 824, "Offset mismatch for UFortHeroLoadoutGadgetTileBase::Image_Icon");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, RichText_Description) == 832, "Offset mismatch for UFortHeroLoadoutGadgetTileBase::RichText_Description");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, GadgetToRepresent) == 840, "Offset mismatch for UFortHeroLoadoutGadgetTileBase::GadgetToRepresent");

// /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
// Kind: Class; super: FortItemPickerBase
class UFortHeroLoadoutHeroPicker
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    void* ExternalFilterTabList; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* ExternalSubFilterTabList; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TargetLoadoutItem; // 0x0490 (Size: 0x8, Type: WeakObjectProperty)
    FName TargetSlotName; // 0x0498 (Size: 0x8, Type: NameProperty)
    void* FilterTabButtonType; // 0x04A0 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> TabButtonLabelInfoMap; // 0x04A8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AbilitiesLabelInfoMap; // 0x04B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortHeroLoadoutHeroPicker, ExternalFilterTabList) == 1152, "Offset mismatch for UFortHeroLoadoutHeroPicker::ExternalFilterTabList");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, ExternalSubFilterTabList) == 1160, "Offset mismatch for UFortHeroLoadoutHeroPicker::ExternalSubFilterTabList");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TargetLoadoutItem) == 1168, "Offset mismatch for UFortHeroLoadoutHeroPicker::TargetLoadoutItem");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TargetSlotName) == 1176, "Offset mismatch for UFortHeroLoadoutHeroPicker::TargetSlotName");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, FilterTabButtonType) == 1184, "Offset mismatch for UFortHeroLoadoutHeroPicker::FilterTabButtonType");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TabButtonLabelInfoMap) == 1192, "Offset mismatch for UFortHeroLoadoutHeroPicker::TabButtonLabelInfoMap");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, AbilitiesLabelInfoMap) == 1208, "Offset mismatch for UFortHeroLoadoutHeroPicker::AbilitiesLabelInfoMap");

// /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortHeroLoadoutHeroPickerFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortHeroLoadoutInGameScreenBase
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    TArray<void*> PerksDisplayData; // 0x0560 (Size: 0x10, Type: ArrayProperty)
    void* TileClass; // 0x0570 (Size: 0x8, Type: ClassProperty)
    void* ScrollBox_Content; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* ItemDetailsHostPanel_Header; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* GridPanel_Perks; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* GadgetTile_Gadget1; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* GadgetTile_Gadget2; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GadgetTiles; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShowStatsInputHandle[0x10]; // 0x05B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputHandle[0x1]; // 0x05C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, PerksDisplayData) == 1376, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::PerksDisplayData");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, TileClass) == 1392, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::TileClass");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, ScrollBox_Content) == 1400, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::ScrollBox_Content");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, ItemDetailsHostPanel_Header) == 1408, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::ItemDetailsHostPanel_Header");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GridPanel_Perks) == 1416, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::GridPanel_Perks");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTile_Gadget1) == 1424, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::GadgetTile_Gadget1");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTile_Gadget2) == 1432, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::GadgetTile_Gadget2");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTiles) == 1440, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::GadgetTiles");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, ShowStatsInputHandle) == 1456, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::ShowStatsInputHandle");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, BackInputHandle) == 1472, "Offset mismatch for UFortHeroLoadoutInGameScreenBase::BackInputHandle");

// /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
// Kind: Class; super: CommonUserWidget
class UFortHeroLoadoutPerkTileBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t BrushSize; // 0x0330 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShowSummaryDescription; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    void* Text_PerkName; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_Description; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Image_PerkIcon; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Hbox_PerkDetails; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveText[0x10]; // 0x0358 (Size: 0x10, Type: TextProperty)
    std::uint8_t InactiveText[0x10]; // 0x0368 (Size: 0x10, Type: TextProperty)
    float InactiveOpacity; // 0x0378 (Size: 0x4, Type: FloatProperty)
    float ActiveOpacity; // 0x037C (Size: 0x4, Type: FloatProperty)
    void* AbilityKit; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHeroLoadoutPerkTileBase, BrushSize) == 816, "Offset mismatch for UFortHeroLoadoutPerkTileBase::BrushSize");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, bShowSummaryDescription) == 817, "Offset mismatch for UFortHeroLoadoutPerkTileBase::bShowSummaryDescription");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Text_PerkName) == 824, "Offset mismatch for UFortHeroLoadoutPerkTileBase::Text_PerkName");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Text_Description) == 832, "Offset mismatch for UFortHeroLoadoutPerkTileBase::Text_Description");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Image_PerkIcon) == 840, "Offset mismatch for UFortHeroLoadoutPerkTileBase::Image_PerkIcon");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Hbox_PerkDetails) == 848, "Offset mismatch for UFortHeroLoadoutPerkTileBase::Hbox_PerkDetails");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, ActiveText) == 856, "Offset mismatch for UFortHeroLoadoutPerkTileBase::ActiveText");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, InactiveText) == 872, "Offset mismatch for UFortHeroLoadoutPerkTileBase::InactiveText");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, InactiveOpacity) == 888, "Offset mismatch for UFortHeroLoadoutPerkTileBase::InactiveOpacity");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, ActiveOpacity) == 892, "Offset mismatch for UFortHeroLoadoutPerkTileBase::ActiveOpacity");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, AbilityKit) == 896, "Offset mismatch for UFortHeroLoadoutPerkTileBase::AbilityKit");

// /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase
// Kind: Class; super: CommonActivatableWidget
class UFortHeroLoadoutScreenBase
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* ItemViewObject; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackInputAction[0x10]; // 0x04B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t HelpInputAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CancelInputAction[0x10]; // 0x04D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleDetailInputAction[0x10]; // 0x04E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearAllInputAction[0x10]; // 0x04F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShowAllStatsInputAction[0x10]; // 0x0508 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectRootSlotsInputAction[0x10]; // 0x0518 (Size: 0x10, Type: StructProperty)
    std::uint8_t CyclePickerSortModeInputAction[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectPickerInputAction[0x10]; // 0x0538 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleDescInputAction[0x70]; // 0x0548 (Size: 0x70, Type: StructProperty)
    std::uint8_t AllowItemRotation; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowItemZooming; // 0x05B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutomaticallyRegisterCameraView; // 0x05BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideFixedCameras; // 0x05BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05BC
    void* ActionDataTable; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* AnimationToHideItemInfo; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoShowDetails; // 0x05D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bItemDetailsHidden; // 0x05D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x05D2
    float HideItemInfoHeaderDurationSecs; // 0x05D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortHeroLoadoutScreenBase, ItemViewObject) == 1200, "Offset mismatch for UFortHeroLoadoutScreenBase::ItemViewObject");
static_assert(offsetof(UFortHeroLoadoutScreenBase, BackInputAction) == 1208, "Offset mismatch for UFortHeroLoadoutScreenBase::BackInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, HelpInputAction) == 1224, "Offset mismatch for UFortHeroLoadoutScreenBase::HelpInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, CancelInputAction) == 1240, "Offset mismatch for UFortHeroLoadoutScreenBase::CancelInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, ToggleDetailInputAction) == 1256, "Offset mismatch for UFortHeroLoadoutScreenBase::ToggleDetailInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, ClearAllInputAction) == 1272, "Offset mismatch for UFortHeroLoadoutScreenBase::ClearAllInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, ShowAllStatsInputAction) == 1288, "Offset mismatch for UFortHeroLoadoutScreenBase::ShowAllStatsInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, InspectRootSlotsInputAction) == 1304, "Offset mismatch for UFortHeroLoadoutScreenBase::InspectRootSlotsInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, CyclePickerSortModeInputAction) == 1320, "Offset mismatch for UFortHeroLoadoutScreenBase::CyclePickerSortModeInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, InspectPickerInputAction) == 1336, "Offset mismatch for UFortHeroLoadoutScreenBase::InspectPickerInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, ToggleDescInputAction) == 1352, "Offset mismatch for UFortHeroLoadoutScreenBase::ToggleDescInputAction");
static_assert(offsetof(UFortHeroLoadoutScreenBase, AllowItemRotation) == 1464, "Offset mismatch for UFortHeroLoadoutScreenBase::AllowItemRotation");
static_assert(offsetof(UFortHeroLoadoutScreenBase, AllowItemZooming) == 1465, "Offset mismatch for UFortHeroLoadoutScreenBase::AllowItemZooming");
static_assert(offsetof(UFortHeroLoadoutScreenBase, AutomaticallyRegisterCameraView) == 1466, "Offset mismatch for UFortHeroLoadoutScreenBase::AutomaticallyRegisterCameraView");
static_assert(offsetof(UFortHeroLoadoutScreenBase, OverrideFixedCameras) == 1467, "Offset mismatch for UFortHeroLoadoutScreenBase::OverrideFixedCameras");
static_assert(offsetof(UFortHeroLoadoutScreenBase, ActionDataTable) == 1472, "Offset mismatch for UFortHeroLoadoutScreenBase::ActionDataTable");
static_assert(offsetof(UFortHeroLoadoutScreenBase, AnimationToHideItemInfo) == 1480, "Offset mismatch for UFortHeroLoadoutScreenBase::AnimationToHideItemInfo");
static_assert(offsetof(UFortHeroLoadoutScreenBase, bAutoShowDetails) == 1488, "Offset mismatch for UFortHeroLoadoutScreenBase::bAutoShowDetails");
static_assert(offsetof(UFortHeroLoadoutScreenBase, bItemDetailsHidden) == 1489, "Offset mismatch for UFortHeroLoadoutScreenBase::bItemDetailsHidden");
static_assert(offsetof(UFortHeroLoadoutScreenBase, HideItemInfoHeaderDurationSecs) == 1492, "Offset mismatch for UFortHeroLoadoutScreenBase::HideItemInfoHeaderDurationSecs");

// /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
// Kind: Class; super: CommonButtonLegacy
class UFortHeroLoadoutSlotButton
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    std::uint8_t SlotName[0x4]; // 0x15F0 (Size: 0x4, Type: NameProperty)
    std::int32_t SlotIndex; // 0x15F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SlotType; // 0x15F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x15F9
    FMulticastInlineDelegate OnRequestChangeHero; // 0x1600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x1610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ContextMenuAnchor; // 0x1620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotName) == 5616, "Offset mismatch for UFortHeroLoadoutSlotButton::SlotName");
static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotIndex) == 5620, "Offset mismatch for UFortHeroLoadoutSlotButton::SlotIndex");
static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotType) == 5624, "Offset mismatch for UFortHeroLoadoutSlotButton::SlotType");
static_assert(offsetof(UFortHeroLoadoutSlotButton, OnRequestChangeHero) == 5632, "Offset mismatch for UFortHeroLoadoutSlotButton::OnRequestChangeHero");
static_assert(offsetof(UFortHeroLoadoutSlotButton, OnContextMenuOpenChanged) == 5648, "Offset mismatch for UFortHeroLoadoutSlotButton::OnContextMenuOpenChanged");
static_assert(offsetof(UFortHeroLoadoutSlotButton, ContextMenuAnchor) == 5664, "Offset mismatch for UFortHeroLoadoutSlotButton::ContextMenuAnchor");

// /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
// Kind: Class; super: FortItemPickerBase
class UFortHeroLoadoutTeamPerkPicker
{
public:
    std::uint8_t Pad_0000[0x47C]; // 0x0000
    TWeakObjectPtr<void> TargetLoadoutItem; // 0x047C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortHeroLoadoutTeamPerkPicker, TargetLoadoutItem) == 1148, "Offset mismatch for UFortHeroLoadoutTeamPerkPicker::TargetLoadoutItem");

// /Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip
// Kind: Class; super: FortItemTooltip
class UFortHomebaseNodeItemTooltip
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText Description; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortHomebaseNodeItemTooltip, Description) == 40, "Offset mismatch for UFortHomebaseNodeItemTooltip::Description");

// /Script/SaveTheWorldUI.FortIronCityContentScreen
// Kind: Class; super: FortOutpostSubscreenBase
class UFortIronCityContentScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t BackActionInputRowHandle[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortIronCityContentScreen, BackActionInputRowHandle) == 1184, "Offset mismatch for UFortIronCityContentScreen::BackActionInputRowHandle");

// /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
// Kind: Class; super: CommonActivatableWidget
class UFortItemAutoMulchActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bIsBackHandler) == 816, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bIsBackHandler");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::OverrideBackActionDisplayName");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bAutoActivate) == 840, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bAutoActivate");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bSupportsActivationFocus) == 841, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bSupportsActivationFocus");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bIsModal) == 842, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bIsModal");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bAutoRestoreFocus) == 843, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bAutoRestoreFocus");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bOverrideActionDomain) == 844, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bOverrideActionDomain");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, InputMapping) == 848, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::InputMapping");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, InputMappingPriority) == 856, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::InputMappingPriority");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, InputModeTagsToAdd) == 864, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::InputModeTagsToAdd");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, InputModeTagsToRemove) == 896, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::InputModeTagsToRemove");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, ActionDomainOverride) == 928, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::ActionDomainOverride");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::BP_OnWidgetActivated");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bIsActive) == 992, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bIsActive");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::VisibilityBoundWidgets");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bSetVisibilityOnActivated");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, ActivatedVisibility) == 1177, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::ActivatedVisibility");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortItemAutoMulchActivatablePanel_STW, DeactivatedVisibility) == 1179, "Offset mismatch for UFortItemAutoMulchActivatablePanel_STW::DeactivatedVisibility");

// /Script/SaveTheWorldUI.FortItemCardSTW
// Kind: Class; super: CommonUserWidget
class UFortItemCardSTW
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* SizeConstraintBox; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* CardBackground; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* LayoutSwitcher; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* GenericLayout; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* DetailedLayout; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* ItemName; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* TypeNameText; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* RarityText; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* QuantityTextBlock; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* ClassIconRow; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* ClassIcon; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* ClassIconGeneric; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Nameplate; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* NameplateContentSwitcher; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* NameplateIconBox; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* NameplateLeftIcon; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* NameplateRightSlotBox; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* NameplateRightIconA; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* NameplateRightIconB; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* Details; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* DetailsSizeBox; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* TierMeterBox; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* TierMeterBoxGeneric; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* LevelMeterBox; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* LevelMeterBorder; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* LevelMeterImage; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* PowerRatingPill; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* PowerRatingText; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    void* SchematicSubtypeIcon; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* TraitBox; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    void* FavoriteBookmarkImage; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    void* ItemToRepresent; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> ItemViewContext; // 0x0438 (Size: 0x10, Type: InterfaceProperty)
    std::int32_t QuantityOverride; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::uint8_t RarityOverride; // 0x044C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldDisplayItemAsReward; // 0x044D (Size: 0x1, Type: BoolProperty)
    std::uint8_t CardSize; // 0x044E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x044F
    TMap<void*, void*> CardSizeData; // 0x0450 (Size: 0x10, Type: MapProperty)
    std::uint8_t PromotedTierPipMaterial[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EarnedTierPipMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AvailableTierPipMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UnearnedTierPipMaterial[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LevelMeterMaterial[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TraitIconMaterial[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeadSurvivorIconBrush[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefenderClassIconBrush[0x20]; // 0x0540 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SurvivorClassIconBrush[0x20]; // 0x0560 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TrapClassIconBrush[0x20]; // 0x0580 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FavoriteBookmarkBrush[0x20]; // 0x05A0 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> DefenderWeaponTextures; // 0x05C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t LoadingCardTexture[0x20]; // 0x05D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FaceSliceImageSize[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FaceSliceMargin[0x10]; // 0x0600 (Size: 0x10, Type: StructProperty)
    TArray<void*> ImageReplacesBackgroundItemTypes; // 0x0610 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemTypesToHideCountOfOne; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    float NameplateAlphaOverride; // 0x0630 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0634
    void* CardMID; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TierPipImages; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TierPipImagesGeneric; // 0x0650 (Size: 0x10, Type: ArrayProperty)
    void* LeftIconSlotMID; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* RightIconASlotMID; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    void* RightIconBSlotMID; // 0x0670 (Size: 0x8, Type: ObjectProperty)
    void* LevelMeterMID; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* DetailAreaMID; // 0x0680 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemCardSTW, SizeConstraintBox) == 824, "Offset mismatch for UFortItemCardSTW::SizeConstraintBox");
static_assert(offsetof(UFortItemCardSTW, CardBackground) == 832, "Offset mismatch for UFortItemCardSTW::CardBackground");
static_assert(offsetof(UFortItemCardSTW, LayoutSwitcher) == 840, "Offset mismatch for UFortItemCardSTW::LayoutSwitcher");
static_assert(offsetof(UFortItemCardSTW, GenericLayout) == 848, "Offset mismatch for UFortItemCardSTW::GenericLayout");
static_assert(offsetof(UFortItemCardSTW, DetailedLayout) == 856, "Offset mismatch for UFortItemCardSTW::DetailedLayout");
static_assert(offsetof(UFortItemCardSTW, ItemName) == 864, "Offset mismatch for UFortItemCardSTW::ItemName");
static_assert(offsetof(UFortItemCardSTW, TypeNameText) == 872, "Offset mismatch for UFortItemCardSTW::TypeNameText");
static_assert(offsetof(UFortItemCardSTW, RarityText) == 880, "Offset mismatch for UFortItemCardSTW::RarityText");
static_assert(offsetof(UFortItemCardSTW, QuantityTextBlock) == 888, "Offset mismatch for UFortItemCardSTW::QuantityTextBlock");
static_assert(offsetof(UFortItemCardSTW, ClassIconRow) == 896, "Offset mismatch for UFortItemCardSTW::ClassIconRow");
static_assert(offsetof(UFortItemCardSTW, ClassIcon) == 904, "Offset mismatch for UFortItemCardSTW::ClassIcon");
static_assert(offsetof(UFortItemCardSTW, ClassIconGeneric) == 912, "Offset mismatch for UFortItemCardSTW::ClassIconGeneric");
static_assert(offsetof(UFortItemCardSTW, Nameplate) == 920, "Offset mismatch for UFortItemCardSTW::Nameplate");
static_assert(offsetof(UFortItemCardSTW, NameplateContentSwitcher) == 928, "Offset mismatch for UFortItemCardSTW::NameplateContentSwitcher");
static_assert(offsetof(UFortItemCardSTW, NameplateIconBox) == 936, "Offset mismatch for UFortItemCardSTW::NameplateIconBox");
static_assert(offsetof(UFortItemCardSTW, NameplateLeftIcon) == 944, "Offset mismatch for UFortItemCardSTW::NameplateLeftIcon");
static_assert(offsetof(UFortItemCardSTW, NameplateRightSlotBox) == 952, "Offset mismatch for UFortItemCardSTW::NameplateRightSlotBox");
static_assert(offsetof(UFortItemCardSTW, NameplateRightIconA) == 960, "Offset mismatch for UFortItemCardSTW::NameplateRightIconA");
static_assert(offsetof(UFortItemCardSTW, NameplateRightIconB) == 968, "Offset mismatch for UFortItemCardSTW::NameplateRightIconB");
static_assert(offsetof(UFortItemCardSTW, Details) == 976, "Offset mismatch for UFortItemCardSTW::Details");
static_assert(offsetof(UFortItemCardSTW, DetailsSizeBox) == 984, "Offset mismatch for UFortItemCardSTW::DetailsSizeBox");
static_assert(offsetof(UFortItemCardSTW, TierMeterBox) == 992, "Offset mismatch for UFortItemCardSTW::TierMeterBox");
static_assert(offsetof(UFortItemCardSTW, TierMeterBoxGeneric) == 1000, "Offset mismatch for UFortItemCardSTW::TierMeterBoxGeneric");
static_assert(offsetof(UFortItemCardSTW, LevelMeterBox) == 1008, "Offset mismatch for UFortItemCardSTW::LevelMeterBox");
static_assert(offsetof(UFortItemCardSTW, LevelMeterBorder) == 1016, "Offset mismatch for UFortItemCardSTW::LevelMeterBorder");
static_assert(offsetof(UFortItemCardSTW, LevelMeterImage) == 1024, "Offset mismatch for UFortItemCardSTW::LevelMeterImage");
static_assert(offsetof(UFortItemCardSTW, PowerRatingPill) == 1032, "Offset mismatch for UFortItemCardSTW::PowerRatingPill");
static_assert(offsetof(UFortItemCardSTW, PowerRatingText) == 1040, "Offset mismatch for UFortItemCardSTW::PowerRatingText");
static_assert(offsetof(UFortItemCardSTW, SchematicSubtypeIcon) == 1048, "Offset mismatch for UFortItemCardSTW::SchematicSubtypeIcon");
static_assert(offsetof(UFortItemCardSTW, TraitBox) == 1056, "Offset mismatch for UFortItemCardSTW::TraitBox");
static_assert(offsetof(UFortItemCardSTW, FavoriteBookmarkImage) == 1064, "Offset mismatch for UFortItemCardSTW::FavoriteBookmarkImage");
static_assert(offsetof(UFortItemCardSTW, ItemToRepresent) == 1072, "Offset mismatch for UFortItemCardSTW::ItemToRepresent");
static_assert(offsetof(UFortItemCardSTW, ItemViewContext) == 1080, "Offset mismatch for UFortItemCardSTW::ItemViewContext");
static_assert(offsetof(UFortItemCardSTW, QuantityOverride) == 1096, "Offset mismatch for UFortItemCardSTW::QuantityOverride");
static_assert(offsetof(UFortItemCardSTW, RarityOverride) == 1100, "Offset mismatch for UFortItemCardSTW::RarityOverride");
static_assert(offsetof(UFortItemCardSTW, bShouldDisplayItemAsReward) == 1101, "Offset mismatch for UFortItemCardSTW::bShouldDisplayItemAsReward");
static_assert(offsetof(UFortItemCardSTW, CardSize) == 1102, "Offset mismatch for UFortItemCardSTW::CardSize");
static_assert(offsetof(UFortItemCardSTW, CardSizeData) == 1104, "Offset mismatch for UFortItemCardSTW::CardSizeData");
static_assert(offsetof(UFortItemCardSTW, PromotedTierPipMaterial) == 1120, "Offset mismatch for UFortItemCardSTW::PromotedTierPipMaterial");
static_assert(offsetof(UFortItemCardSTW, EarnedTierPipMaterial) == 1152, "Offset mismatch for UFortItemCardSTW::EarnedTierPipMaterial");
static_assert(offsetof(UFortItemCardSTW, AvailableTierPipMaterial) == 1184, "Offset mismatch for UFortItemCardSTW::AvailableTierPipMaterial");
static_assert(offsetof(UFortItemCardSTW, UnearnedTierPipMaterial) == 1216, "Offset mismatch for UFortItemCardSTW::UnearnedTierPipMaterial");
static_assert(offsetof(UFortItemCardSTW, LevelMeterMaterial) == 1248, "Offset mismatch for UFortItemCardSTW::LevelMeterMaterial");
static_assert(offsetof(UFortItemCardSTW, TraitIconMaterial) == 1280, "Offset mismatch for UFortItemCardSTW::TraitIconMaterial");
static_assert(offsetof(UFortItemCardSTW, LeadSurvivorIconBrush) == 1312, "Offset mismatch for UFortItemCardSTW::LeadSurvivorIconBrush");
static_assert(offsetof(UFortItemCardSTW, DefenderClassIconBrush) == 1344, "Offset mismatch for UFortItemCardSTW::DefenderClassIconBrush");
static_assert(offsetof(UFortItemCardSTW, SurvivorClassIconBrush) == 1376, "Offset mismatch for UFortItemCardSTW::SurvivorClassIconBrush");
static_assert(offsetof(UFortItemCardSTW, TrapClassIconBrush) == 1408, "Offset mismatch for UFortItemCardSTW::TrapClassIconBrush");
static_assert(offsetof(UFortItemCardSTW, FavoriteBookmarkBrush) == 1440, "Offset mismatch for UFortItemCardSTW::FavoriteBookmarkBrush");
static_assert(offsetof(UFortItemCardSTW, DefenderWeaponTextures) == 1472, "Offset mismatch for UFortItemCardSTW::DefenderWeaponTextures");
static_assert(offsetof(UFortItemCardSTW, LoadingCardTexture) == 1488, "Offset mismatch for UFortItemCardSTW::LoadingCardTexture");
static_assert(offsetof(UFortItemCardSTW, FaceSliceImageSize) == 1520, "Offset mismatch for UFortItemCardSTW::FaceSliceImageSize");
static_assert(offsetof(UFortItemCardSTW, FaceSliceMargin) == 1536, "Offset mismatch for UFortItemCardSTW::FaceSliceMargin");
static_assert(offsetof(UFortItemCardSTW, ImageReplacesBackgroundItemTypes) == 1552, "Offset mismatch for UFortItemCardSTW::ImageReplacesBackgroundItemTypes");
static_assert(offsetof(UFortItemCardSTW, ItemTypesToHideCountOfOne) == 1568, "Offset mismatch for UFortItemCardSTW::ItemTypesToHideCountOfOne");
static_assert(offsetof(UFortItemCardSTW, NameplateAlphaOverride) == 1584, "Offset mismatch for UFortItemCardSTW::NameplateAlphaOverride");
static_assert(offsetof(UFortItemCardSTW, CardMID) == 1592, "Offset mismatch for UFortItemCardSTW::CardMID");
static_assert(offsetof(UFortItemCardSTW, TierPipImages) == 1600, "Offset mismatch for UFortItemCardSTW::TierPipImages");
static_assert(offsetof(UFortItemCardSTW, TierPipImagesGeneric) == 1616, "Offset mismatch for UFortItemCardSTW::TierPipImagesGeneric");
static_assert(offsetof(UFortItemCardSTW, LeftIconSlotMID) == 1632, "Offset mismatch for UFortItemCardSTW::LeftIconSlotMID");
static_assert(offsetof(UFortItemCardSTW, RightIconASlotMID) == 1640, "Offset mismatch for UFortItemCardSTW::RightIconASlotMID");
static_assert(offsetof(UFortItemCardSTW, RightIconBSlotMID) == 1648, "Offset mismatch for UFortItemCardSTW::RightIconBSlotMID");
static_assert(offsetof(UFortItemCardSTW, LevelMeterMID) == 1656, "Offset mismatch for UFortItemCardSTW::LevelMeterMID");
static_assert(offsetof(UFortItemCardSTW, DetailAreaMID) == 1664, "Offset mismatch for UFortItemCardSTW::DetailAreaMID");

// /Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
// Kind: Class; super: FortItemDetailsActivatablePanel_STW
class UFortItemCompareModeActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x508]; // 0x0000
    void* ComparisonModeLeftItemDetailsPanel_STW; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* ComparisonModeRightItemDetailsPanel_STW; // 0x0510 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemCompareModeActivatablePanel_STW, ComparisonModeLeftItemDetailsPanel_STW) == 1288, "Offset mismatch for UFortItemCompareModeActivatablePanel_STW::ComparisonModeLeftItemDetailsPanel_STW");
static_assert(offsetof(UFortItemCompareModeActivatablePanel_STW, ComparisonModeRightItemDetailsPanel_STW) == 1296, "Offset mismatch for UFortItemCompareModeActivatablePanel_STW::ComparisonModeRightItemDetailsPanel_STW");

// /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
// Kind: Class; super: CommonActivatableWidget
class UFortItemCraftingOptionsActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* BaseItem; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* TargetItem; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxCraftingTierIndex; // 0x04B0 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetCraftingTierIndex; // 0x04B4 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetPromotionTierIndex; // 0x04B8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxQuantity; // 0x04BC (Size: 0x4, Type: IntProperty)
    std::int32_t SelectedQuantity; // 0x04C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t CanCraftTargetItem; // 0x04C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04C5
    void* TierImageParent; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* TierImageParent_2; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* TierImageParent_3; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* TierImageParent_4; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* TierImageParent_5; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* TierImage; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* TierImage_2; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* TierImage_3; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* TierImage_4; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* TierImage_5; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackInputActionRowHandle[0x18]; // 0x0518 (Size: 0x18, Type: StructProperty)
    TArray<void*> TierImageParentList; // 0x0530 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TierImageList; // 0x0540 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0550
    TArray<void*> LoadedTierPipAssets; // 0x0558 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, BaseItem) == 1184, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::BaseItem");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetItem) == 1192, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TargetItem");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, MaxCraftingTierIndex) == 1200, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::MaxCraftingTierIndex");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetCraftingTierIndex) == 1204, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TargetCraftingTierIndex");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetPromotionTierIndex) == 1208, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TargetPromotionTierIndex");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, MaxQuantity) == 1212, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::MaxQuantity");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, SelectedQuantity) == 1216, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::SelectedQuantity");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, CanCraftTargetItem) == 1220, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::CanCraftTargetItem");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent) == 1224, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_2) == 1232, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_2");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_3) == 1240, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_3");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_4) == 1248, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_4");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_5) == 1256, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_5");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage) == 1264, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImage");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_2) == 1272, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImage_2");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_3) == 1280, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImage_3");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_4) == 1288, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImage_4");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_5) == 1296, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImage_5");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, BackInputActionRowHandle) == 1304, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::BackInputActionRowHandle");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParentList) == 1328, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageParentList");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageList) == 1344, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::TierImageList");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, LoadedTierPipAssets) == 1368, "Offset mismatch for UFortItemCraftingOptionsActivatablePanel_STW::LoadedTierPipAssets");

// /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
// Kind: Class; super: CommonActivatableWidget
class UFortItemDetailsActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ItemToDetailLoadGuard; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04A8
    void* ItemToDetailLoadingWrapper; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x04B8
    std::uint8_t BackInputActionHandle[0x10]; // 0x04D0 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> ItemToDetail; // 0x04E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ItemToCompareWith; // 0x04E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x04F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetailLoadGuard) == 1184, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::ItemToDetailLoadGuard");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetailLoadingWrapper) == 1200, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::ItemToDetailLoadingWrapper");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, BackInputActionHandle) == 1232, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::BackInputActionHandle");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetail) == 1248, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::ItemToDetail");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToCompareWith) == 1256, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::ItemToCompareWith");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, HostItemManagementScreen) == 1264, "Offset mismatch for UFortItemDetailsActivatablePanel_STW::HostItemManagementScreen");

// /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
// Kind: Class; super: FortItemDetailsActivatablePanel_STW
class UFortItemDetailsModeActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x508]; // 0x0000
    void* DetailPanelWidgetSwitcher; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SortInputActionHandle[0x10]; // 0x0510 (Size: 0x10, Type: StructProperty)
    std::uint8_t SortInGameInputActionHandle[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t DropInputActionHandle[0x10]; // 0x0530 (Size: 0x10, Type: StructProperty)
    std::uint8_t DestroyInputActionHandle[0x10]; // 0x0540 (Size: 0x10, Type: StructProperty)
    std::uint8_t LeaveInventoryInputActionHandle[0x10]; // 0x0550 (Size: 0x10, Type: StructProperty)
    std::uint8_t CraftingOptionsInputActionHandle[0x10]; // 0x0560 (Size: 0x10, Type: StructProperty)
    std::uint8_t CraftInputActionHandle[0x10]; // 0x0570 (Size: 0x10, Type: StructProperty)
    std::uint8_t MulchInputActionHandle[0x10]; // 0x0580 (Size: 0x10, Type: StructProperty)
    std::uint8_t RetireInputActionHandle[0x10]; // 0x0590 (Size: 0x10, Type: StructProperty)
    std::uint8_t InspectInputActionHandle[0x10]; // 0x05A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t InventoryInspectInputActionHandle[0x10]; // 0x05B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnequipInputActionHandle[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t EquipInputActionHandle[0x10]; // 0x05D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MoreInfoInputActionHandle[0x10]; // 0x05E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t WithdrawAllInputActionHandle[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SwitchPanelInputActionHandle[0x10]; // 0x0600 (Size: 0x10, Type: StructProperty)
    std::uint8_t TransferInputActionHandle[0x10]; // 0x0610 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConsumeItemInputActionHandle[0x10]; // 0x0620 (Size: 0x10, Type: StructProperty)
    std::uint8_t CompareInputActionHandle[0x10]; // 0x0630 (Size: 0x10, Type: StructProperty)
    std::uint8_t OpenCustomFilterInputActionHandle[0x1]; // 0x0640 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, DetailPanelWidgetSwitcher) == 1288, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::DetailPanelWidgetSwitcher");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, SortInputActionHandle) == 1296, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::SortInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, SortInGameInputActionHandle) == 1312, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::SortInGameInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, DropInputActionHandle) == 1328, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::DropInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, DestroyInputActionHandle) == 1344, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::DestroyInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, LeaveInventoryInputActionHandle) == 1360, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::LeaveInventoryInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, CraftingOptionsInputActionHandle) == 1376, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::CraftingOptionsInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, CraftInputActionHandle) == 1392, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::CraftInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, MulchInputActionHandle) == 1408, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::MulchInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, RetireInputActionHandle) == 1424, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::RetireInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, InspectInputActionHandle) == 1440, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::InspectInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, InventoryInspectInputActionHandle) == 1456, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::InventoryInspectInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, UnequipInputActionHandle) == 1472, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::UnequipInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, EquipInputActionHandle) == 1488, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::EquipInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, MoreInfoInputActionHandle) == 1504, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::MoreInfoInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, WithdrawAllInputActionHandle) == 1520, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::WithdrawAllInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, SwitchPanelInputActionHandle) == 1536, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::SwitchPanelInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, TransferInputActionHandle) == 1552, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::TransferInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, ConsumeItemInputActionHandle) == 1568, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::ConsumeItemInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, CompareInputActionHandle) == 1584, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::CompareInputActionHandle");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, OpenCustomFilterInputActionHandle) == 1600, "Offset mismatch for UFortItemDetailsModeActivatablePanel_STW::OpenCustomFilterInputActionHandle");

// /Script/SaveTheWorldUI.FortItemInspectCycleWidget
// Kind: Class; super: CommonUserWidget
class UFortItemInspectCycleWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnItemToRepresentChanged; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> ItemTileView; // 0x0340 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ItemToRepresent; // 0x0348 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviousItemActionRowHandle[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t NextItemActionRowHandle[0x1]; // 0x0360 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortItemInspectCycleWidget, OnItemToRepresentChanged) == 816, "Offset mismatch for UFortItemInspectCycleWidget::OnItemToRepresentChanged");
static_assert(offsetof(UFortItemInspectCycleWidget, ItemTileView) == 832, "Offset mismatch for UFortItemInspectCycleWidget::ItemTileView");
static_assert(offsetof(UFortItemInspectCycleWidget, ItemToRepresent) == 840, "Offset mismatch for UFortItemInspectCycleWidget::ItemToRepresent");
static_assert(offsetof(UFortItemInspectCycleWidget, PreviousItemActionRowHandle) == 848, "Offset mismatch for UFortItemInspectCycleWidget::PreviousItemActionRowHandle");
static_assert(offsetof(UFortItemInspectCycleWidget, NextItemActionRowHandle) == 864, "Offset mismatch for UFortItemInspectCycleWidget::NextItemActionRowHandle");

// /Script/SaveTheWorldUI.FortItemInspectionScreen
// Kind: Class; super: FortActivatablePanelWithItemPreview
class UFortItemInspectionScreen
{
public:
    std::uint8_t Pad_0000[0x690]; // 0x0000
    std::uint8_t CurrentInspectMode; // 0x0690 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0691
    TWeakObjectPtr<void> InspectedItem; // 0x0694 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t UpgradeAllowed; // 0x069C (Size: 0x1, Type: BoolProperty)
    std::uint8_t EvolveAllowed; // 0x069D (Size: 0x1, Type: BoolProperty)
    std::uint8_t FavoriteAllowed; // 0x069E (Size: 0x1, Type: BoolProperty)
    std::uint8_t RarityUpgradingAllowed; // 0x069F (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPreviewing; // 0x06A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSeenRefundHelpPrompt; // 0x06A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x06A2
    void* CycleWidget; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InspectAnimationTag[0x48]; // 0x06B0 (Size: 0x48, Type: StructProperty)
    void* AlterationModOptinScreenClass; // 0x06F8 (Size: 0x8, Type: ClassProperty)
    void* AlterationModScreenClass; // 0x0700 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RefundDescriptionsDataTable[0x20]; // 0x0708 (Size: 0x20, Type: SoftObjectProperty)
    void* ScrollBoxDetails; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x64]; // 0x0730
    FName CachedTutorialNameUpdate; // 0x0794 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortItemInspectionScreen, CurrentInspectMode) == 1680, "Offset mismatch for UFortItemInspectionScreen::CurrentInspectMode");
static_assert(offsetof(UFortItemInspectionScreen, InspectedItem) == 1684, "Offset mismatch for UFortItemInspectionScreen::InspectedItem");
static_assert(offsetof(UFortItemInspectionScreen, UpgradeAllowed) == 1692, "Offset mismatch for UFortItemInspectionScreen::UpgradeAllowed");
static_assert(offsetof(UFortItemInspectionScreen, EvolveAllowed) == 1693, "Offset mismatch for UFortItemInspectionScreen::EvolveAllowed");
static_assert(offsetof(UFortItemInspectionScreen, FavoriteAllowed) == 1694, "Offset mismatch for UFortItemInspectionScreen::FavoriteAllowed");
static_assert(offsetof(UFortItemInspectionScreen, RarityUpgradingAllowed) == 1695, "Offset mismatch for UFortItemInspectionScreen::RarityUpgradingAllowed");
static_assert(offsetof(UFortItemInspectionScreen, IsPreviewing) == 1696, "Offset mismatch for UFortItemInspectionScreen::IsPreviewing");
static_assert(offsetof(UFortItemInspectionScreen, bHasSeenRefundHelpPrompt) == 1697, "Offset mismatch for UFortItemInspectionScreen::bHasSeenRefundHelpPrompt");
static_assert(offsetof(UFortItemInspectionScreen, CycleWidget) == 1704, "Offset mismatch for UFortItemInspectionScreen::CycleWidget");
static_assert(offsetof(UFortItemInspectionScreen, InspectAnimationTag) == 1712, "Offset mismatch for UFortItemInspectionScreen::InspectAnimationTag");
static_assert(offsetof(UFortItemInspectionScreen, AlterationModOptinScreenClass) == 1784, "Offset mismatch for UFortItemInspectionScreen::AlterationModOptinScreenClass");
static_assert(offsetof(UFortItemInspectionScreen, AlterationModScreenClass) == 1792, "Offset mismatch for UFortItemInspectionScreen::AlterationModScreenClass");
static_assert(offsetof(UFortItemInspectionScreen, RefundDescriptionsDataTable) == 1800, "Offset mismatch for UFortItemInspectionScreen::RefundDescriptionsDataTable");
static_assert(offsetof(UFortItemInspectionScreen, ScrollBoxDetails) == 1832, "Offset mismatch for UFortItemInspectionScreen::ScrollBoxDetails");
static_assert(offsetof(UFortItemInspectionScreen, CachedTutorialNameUpdate) == 1940, "Offset mismatch for UFortItemInspectionScreen::CachedTutorialNameUpdate");

// /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
// Kind: Class; super: FortActivatablePanel
class UFortItemManagementCustomFilterModalWidget_STW
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x0580 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> AvailableFilters; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> LocalCustomFilterSet; // 0x0598 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, HostItemManagementScreen) == 1408, "Offset mismatch for UFortItemManagementCustomFilterModalWidget_STW::HostItemManagementScreen");
static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, AvailableFilters) == 1416, "Offset mismatch for UFortItemManagementCustomFilterModalWidget_STW::AvailableFilters");
static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, LocalCustomFilterSet) == 1432, "Offset mismatch for UFortItemManagementCustomFilterModalWidget_STW::LocalCustomFilterSet");

// /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
// Kind: Class; super: CommonActivatableWidget
class UFortItemManagementInventoryPanel_STW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t CurrentFilterName[0x5]; // 0x04A0 (Size: 0x5, Type: NameProperty)
    std::uint8_t CurrentSortType; // 0x04A5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x04A6
    void* FilterTabButtonType; // 0x04A8 (Size: 0x8, Type: ClassProperty)
    void* FilterTabButtonStyle; // 0x04B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> FilterTabLabelInfoArray; // 0x04B8 (Size: 0x10, Type: ArrayProperty)
    void* FilterTabList; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* TileViewLoadGuard; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* TileView; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* CraftingPanel; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* CraftingTileViewLoadGuard; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* CraftingTileView; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* StoragePanel; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* StorageTileViewLoadGuard; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* StorageTileView; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* MulchRestrictionReasonText; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SmallTileSize; // 0x0518 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LargeTileSize; // 0x0519 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x051A
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x051C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bCanDragItems; // 0x0524 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0525
    TArray<void*> DefaultQuickbarEquipSlotIndicesConfigs; // 0x0528 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> QuickbarEquipSlotIndices; // 0x0538 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x90]; // 0x0548
    void* InventoryContext; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* WidgetToCenter; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFirstActivation; // 0x05E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CurrentFilterName) == 1184, "Offset mismatch for UFortItemManagementInventoryPanel_STW::CurrentFilterName");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CurrentSortType) == 1189, "Offset mismatch for UFortItemManagementInventoryPanel_STW::CurrentSortType");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabButtonType) == 1192, "Offset mismatch for UFortItemManagementInventoryPanel_STW::FilterTabButtonType");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabButtonStyle) == 1200, "Offset mismatch for UFortItemManagementInventoryPanel_STW::FilterTabButtonStyle");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabLabelInfoArray) == 1208, "Offset mismatch for UFortItemManagementInventoryPanel_STW::FilterTabLabelInfoArray");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabList) == 1224, "Offset mismatch for UFortItemManagementInventoryPanel_STW::FilterTabList");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, TileViewLoadGuard) == 1232, "Offset mismatch for UFortItemManagementInventoryPanel_STW::TileViewLoadGuard");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, TileView) == 1240, "Offset mismatch for UFortItemManagementInventoryPanel_STW::TileView");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingPanel) == 1248, "Offset mismatch for UFortItemManagementInventoryPanel_STW::CraftingPanel");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingTileViewLoadGuard) == 1256, "Offset mismatch for UFortItemManagementInventoryPanel_STW::CraftingTileViewLoadGuard");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingTileView) == 1264, "Offset mismatch for UFortItemManagementInventoryPanel_STW::CraftingTileView");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StoragePanel) == 1272, "Offset mismatch for UFortItemManagementInventoryPanel_STW::StoragePanel");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StorageTileViewLoadGuard) == 1280, "Offset mismatch for UFortItemManagementInventoryPanel_STW::StorageTileViewLoadGuard");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StorageTileView) == 1288, "Offset mismatch for UFortItemManagementInventoryPanel_STW::StorageTileView");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, MulchRestrictionReasonText) == 1296, "Offset mismatch for UFortItemManagementInventoryPanel_STW::MulchRestrictionReasonText");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, SmallTileSize) == 1304, "Offset mismatch for UFortItemManagementInventoryPanel_STW::SmallTileSize");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, LargeTileSize) == 1305, "Offset mismatch for UFortItemManagementInventoryPanel_STW::LargeTileSize");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, HostItemManagementScreen) == 1308, "Offset mismatch for UFortItemManagementInventoryPanel_STW::HostItemManagementScreen");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, bCanDragItems) == 1316, "Offset mismatch for UFortItemManagementInventoryPanel_STW::bCanDragItems");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, DefaultQuickbarEquipSlotIndicesConfigs) == 1320, "Offset mismatch for UFortItemManagementInventoryPanel_STW::DefaultQuickbarEquipSlotIndicesConfigs");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, QuickbarEquipSlotIndices) == 1336, "Offset mismatch for UFortItemManagementInventoryPanel_STW::QuickbarEquipSlotIndices");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, InventoryContext) == 1496, "Offset mismatch for UFortItemManagementInventoryPanel_STW::InventoryContext");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, WidgetToCenter) == 1504, "Offset mismatch for UFortItemManagementInventoryPanel_STW::WidgetToCenter");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, bFirstActivation) == 1512, "Offset mismatch for UFortItemManagementInventoryPanel_STW::bFirstActivation");

// /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
// Kind: Class; super: FortItemDetailsHostPanel
class UFortItemManagementItemDetailsPanel_STW
{
public:
    std::uint8_t Pad_0000[0x418]; // 0x0000
    std::uint8_t HasItemMarkedForMulching; // 0x0418 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0419
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x041C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0424
    void* InventoryContext; // 0x0430 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, HasItemMarkedForMulching) == 1048, "Offset mismatch for UFortItemManagementItemDetailsPanel_STW::HasItemMarkedForMulching");
static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, HostItemManagementScreen) == 1052, "Offset mismatch for UFortItemManagementItemDetailsPanel_STW::HostItemManagementScreen");
static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, InventoryContext) == 1072, "Offset mismatch for UFortItemManagementItemDetailsPanel_STW::InventoryContext");

// /Script/SaveTheWorldUI.FortItemManagementItemPopupMenu_STW
// Kind: Class; super: FortPopupMenu_Legacy
class UFortItemManagementItemPopupMenu_STW
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t bUseInputStack; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0561
    TWeakObjectPtr<void> OwningMenuAnchor; // 0x0564 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ContextProvidingObject; // 0x056C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortItemManagementItemPopupMenu_STW, bUseInputStack) == 1376, "Offset mismatch for UFortItemManagementItemPopupMenu_STW::bUseInputStack");
static_assert(offsetof(UFortItemManagementItemPopupMenu_STW, OwningMenuAnchor) == 1380, "Offset mismatch for UFortItemManagementItemPopupMenu_STW::OwningMenuAnchor");
static_assert(offsetof(UFortItemManagementItemPopupMenu_STW, ContextProvidingObject) == 1388, "Offset mismatch for UFortItemManagementItemPopupMenu_STW::ContextProvidingObject");

// /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW
// Kind: Class; super: FortItemTileButton
class UFortItemManagementItemTileButton_STW
{
public:
    std::uint8_t Pad_0000[0x1630]; // 0x0000
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x1630 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HasTheItemToDetail; // 0x1638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasTheItemToCompareDetailsWith; // 0x1639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasAnItemMarkedForMulching; // 0x163A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x163B
    std::int32_t MulchCount; // 0x163C (Size: 0x4, Type: IntProperty)
    void* NotCraftableOverlay; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    void* EquipSlotOverlay; // 0x1648 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenuAnchor; // 0x1650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowCollectionBookIndicator; // 0x1658 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowRefundIndicator; // 0x1659 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x46]; // 0x165A
    void* InventoryContext; // 0x16A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemManagementItemTileButton_STW, HostItemManagementScreen) == 5680, "Offset mismatch for UFortItemManagementItemTileButton_STW::HostItemManagementScreen");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasTheItemToDetail) == 5688, "Offset mismatch for UFortItemManagementItemTileButton_STW::HasTheItemToDetail");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasTheItemToCompareDetailsWith) == 5689, "Offset mismatch for UFortItemManagementItemTileButton_STW::HasTheItemToCompareDetailsWith");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasAnItemMarkedForMulching) == 5690, "Offset mismatch for UFortItemManagementItemTileButton_STW::HasAnItemMarkedForMulching");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, MulchCount) == 5692, "Offset mismatch for UFortItemManagementItemTileButton_STW::MulchCount");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, NotCraftableOverlay) == 5696, "Offset mismatch for UFortItemManagementItemTileButton_STW::NotCraftableOverlay");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, EquipSlotOverlay) == 5704, "Offset mismatch for UFortItemManagementItemTileButton_STW::EquipSlotOverlay");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, PopupMenuAnchor) == 5712, "Offset mismatch for UFortItemManagementItemTileButton_STW::PopupMenuAnchor");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, ShowCollectionBookIndicator) == 5720, "Offset mismatch for UFortItemManagementItemTileButton_STW::ShowCollectionBookIndicator");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, ShowRefundIndicator) == 5721, "Offset mismatch for UFortItemManagementItemTileButton_STW::ShowRefundIndicator");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, InventoryContext) == 5792, "Offset mismatch for UFortItemManagementItemTileButton_STW::InventoryContext");

// /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
// Kind: Class; super: CommonUserWidget
class UFortItemManagementModeDetailsPanel_STW
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ModeWidgetSwitcher; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* DetailsModeItemDetailsPanel; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* ComparisonModeItemDetailsPanel; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* MulchModeItemDetailsPanel; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> HostItemManagementScreen; // 0x0350 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, ModeWidgetSwitcher) == 816, "Offset mismatch for UFortItemManagementModeDetailsPanel_STW::ModeWidgetSwitcher");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, DetailsModeItemDetailsPanel) == 824, "Offset mismatch for UFortItemManagementModeDetailsPanel_STW::DetailsModeItemDetailsPanel");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, ComparisonModeItemDetailsPanel) == 832, "Offset mismatch for UFortItemManagementModeDetailsPanel_STW::ComparisonModeItemDetailsPanel");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, MulchModeItemDetailsPanel) == 840, "Offset mismatch for UFortItemManagementModeDetailsPanel_STW::MulchModeItemDetailsPanel");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, HostItemManagementScreen) == 848, "Offset mismatch for UFortItemManagementModeDetailsPanel_STW::HostItemManagementScreen");

// /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
// Kind: Class; super: CommonUserWidget
class UFortItemManagementMulchDetailsPanel_STW
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ResourceList; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> HostItemManagementMulchPanel; // 0x0338 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0348
    void* InventoryContext; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, ResourceList) == 816, "Offset mismatch for UFortItemManagementMulchDetailsPanel_STW::ResourceList");
static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, HostItemManagementMulchPanel) == 824, "Offset mismatch for UFortItemManagementMulchDetailsPanel_STW::HostItemManagementMulchPanel");
static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, InventoryContext) == 848, "Offset mismatch for UFortItemManagementMulchDetailsPanel_STW::InventoryContext");

// /Script/SaveTheWorldUI.FortItemManagementScreen_STW
// Kind: Class; super: CommonActivatableWidget
class UFortItemManagementScreen_STW
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    FMulticastInlineDelegate OnItemViewRefreshed; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xC0]; // 0x04C0
    std::uint8_t Mode; // 0x0580 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FrontendInventoryFilter; // 0x0581 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReadOnlyModeWIFE; // 0x0582 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ConsumeItemRequestInProgress; // 0x0583 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0584
    void* MoreMenuClass; // 0x0588 (Size: 0x8, Type: ClassProperty)
    void* InventoryPanel; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* ModeDetailsPanel; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ItemToDetail; // 0x05A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x05A8
    void* MulchConfirmationModalClass; // 0x05B0 (Size: 0x8, Type: ClassProperty)
    void* CustomFilterModalClass; // 0x05B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0004[0x10]; // 0x05C0
    void* MulchConfirmationModal; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* CustomFilterModal; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> SortLabels; // 0x05E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MoreLabels; // 0x05F0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0005[0x8]; // 0x0600
    void* InventoryContext; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenuCache; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x30]; // 0x0618
    float DelayBeforeCommitingFavorites; // 0x0648 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxFavoritesCommitRetryAttempts; // 0x064C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0650
    FName CachedTutorialNameUpdate; // 0x0660 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortItemManagementScreen_STW, OnItemViewRefreshed) == 1200, "Offset mismatch for UFortItemManagementScreen_STW::OnItemViewRefreshed");
static_assert(offsetof(UFortItemManagementScreen_STW, Mode) == 1408, "Offset mismatch for UFortItemManagementScreen_STW::Mode");
static_assert(offsetof(UFortItemManagementScreen_STW, FrontendInventoryFilter) == 1409, "Offset mismatch for UFortItemManagementScreen_STW::FrontendInventoryFilter");
static_assert(offsetof(UFortItemManagementScreen_STW, bReadOnlyModeWIFE) == 1410, "Offset mismatch for UFortItemManagementScreen_STW::bReadOnlyModeWIFE");
static_assert(offsetof(UFortItemManagementScreen_STW, ConsumeItemRequestInProgress) == 1411, "Offset mismatch for UFortItemManagementScreen_STW::ConsumeItemRequestInProgress");
static_assert(offsetof(UFortItemManagementScreen_STW, MoreMenuClass) == 1416, "Offset mismatch for UFortItemManagementScreen_STW::MoreMenuClass");
static_assert(offsetof(UFortItemManagementScreen_STW, InventoryPanel) == 1424, "Offset mismatch for UFortItemManagementScreen_STW::InventoryPanel");
static_assert(offsetof(UFortItemManagementScreen_STW, ModeDetailsPanel) == 1432, "Offset mismatch for UFortItemManagementScreen_STW::ModeDetailsPanel");
static_assert(offsetof(UFortItemManagementScreen_STW, ItemToDetail) == 1440, "Offset mismatch for UFortItemManagementScreen_STW::ItemToDetail");
static_assert(offsetof(UFortItemManagementScreen_STW, MulchConfirmationModalClass) == 1456, "Offset mismatch for UFortItemManagementScreen_STW::MulchConfirmationModalClass");
static_assert(offsetof(UFortItemManagementScreen_STW, CustomFilterModalClass) == 1464, "Offset mismatch for UFortItemManagementScreen_STW::CustomFilterModalClass");
static_assert(offsetof(UFortItemManagementScreen_STW, MulchConfirmationModal) == 1488, "Offset mismatch for UFortItemManagementScreen_STW::MulchConfirmationModal");
static_assert(offsetof(UFortItemManagementScreen_STW, CustomFilterModal) == 1496, "Offset mismatch for UFortItemManagementScreen_STW::CustomFilterModal");
static_assert(offsetof(UFortItemManagementScreen_STW, SortLabels) == 1504, "Offset mismatch for UFortItemManagementScreen_STW::SortLabels");
static_assert(offsetof(UFortItemManagementScreen_STW, MoreLabels) == 1520, "Offset mismatch for UFortItemManagementScreen_STW::MoreLabels");
static_assert(offsetof(UFortItemManagementScreen_STW, InventoryContext) == 1544, "Offset mismatch for UFortItemManagementScreen_STW::InventoryContext");
static_assert(offsetof(UFortItemManagementScreen_STW, PopupMenuCache) == 1552, "Offset mismatch for UFortItemManagementScreen_STW::PopupMenuCache");
static_assert(offsetof(UFortItemManagementScreen_STW, DelayBeforeCommitingFavorites) == 1608, "Offset mismatch for UFortItemManagementScreen_STW::DelayBeforeCommitingFavorites");
static_assert(offsetof(UFortItemManagementScreen_STW, MaxFavoritesCommitRetryAttempts) == 1612, "Offset mismatch for UFortItemManagementScreen_STW::MaxFavoritesCommitRetryAttempts");
static_assert(offsetof(UFortItemManagementScreen_STW, CachedTutorialNameUpdate) == 1632, "Offset mismatch for UFortItemManagementScreen_STW::CachedTutorialNameUpdate");

// /Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
// Kind: Class; super: FortItemDetailsActivatablePanel_STW
class UFortItemMulchModeActivatablePanel_STW
{
public:
    std::uint8_t Pad_0000[0x508]; // 0x0000
    void* MulchModeItemDetailsPanel_STW; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* MulchDetailsPanel_STW; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AutoRecycleActionHandle[0x10]; // 0x0518 (Size: 0x10, Type: StructProperty)
    std::uint8_t AutoRetireInputActionHandle[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t DetailsInputActionHandle[0x10]; // 0x0538 (Size: 0x10, Type: StructProperty)
    std::uint8_t LeaveInventoryInputActionHandle[0x1]; // 0x0548 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, MulchModeItemDetailsPanel_STW) == 1288, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::MulchModeItemDetailsPanel_STW");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, MulchDetailsPanel_STW) == 1296, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::MulchDetailsPanel_STW");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, AutoRecycleActionHandle) == 1304, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::AutoRecycleActionHandle");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, AutoRetireInputActionHandle) == 1320, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::AutoRetireInputActionHandle");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, DetailsInputActionHandle) == 1336, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::DetailsInputActionHandle");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, LeaveInventoryInputActionHandle) == 1352, "Offset mismatch for UFortItemMulchModeActivatablePanel_STW::LeaveInventoryInputActionHandle");

// /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
// Kind: Class; super: FortItemViewContext_SquadSlotItemPicker
class UFortItemViewContext_ExpeditionSquadSlotItemPicker
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
// Kind: Class; super: FortItemViewContext_SquadSlotsView
class UFortItemViewContext_ExpeditionSquadSlotsView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
// Kind: Class; super: FortSquadManagementItemViewContextBase
class UFortItemViewContext_SquadSlotItemPicker
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotsView
// Kind: Class; super: FortSquadManagementItemViewContextBase
class UFortItemViewContext_SquadSlotsView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortJournalQuestDetails
// Kind: Class; super: CommonUserWidget
class UFortJournalQuestDetails
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* CurrentQuest; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortJournalQuestDetails, CurrentQuest) == 816, "Offset mismatch for UFortJournalQuestDetails::CurrentQuest");

// /Script/SaveTheWorldUI.FortJournalQuestProgressBar
// Kind: Class; super: CommonUserWidget
class UFortJournalQuestProgressBar
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    TWeakObjectPtr<void> QuestObjectiveInfo; // 0x0338 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortJournalQuestProgressBar, QuestObjectiveInfo) == 824, "Offset mismatch for UFortJournalQuestProgressBar::QuestObjectiveInfo");

// /Script/SaveTheWorldUI.FortLayoutQuestNode
// Kind: Class; super: CommonUserWidget
class UFortLayoutQuestNode
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestTile; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::int32_t QuestNodeIndex; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x033C
    std::uint8_t QuestMapNode[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLayoutQuestNode, QuestTile) == 816, "Offset mismatch for UFortLayoutQuestNode::QuestTile");
static_assert(offsetof(UFortLayoutQuestNode, QuestNodeIndex) == 824, "Offset mismatch for UFortLayoutQuestNode::QuestNodeIndex");
static_assert(offsetof(UFortLayoutQuestNode, QuestMapNode) == 832, "Offset mismatch for UFortLayoutQuestNode::QuestMapNode");

// /Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy
// Kind: Class; super: CommonUserWidget
class UFortLayoutQuestNode_Legacy
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestTile; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::int32_t QuestNodeIndex; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x033C
    std::uint8_t QuestMapNode[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestTile) == 816, "Offset mismatch for UFortLayoutQuestNode_Legacy::QuestTile");
static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestNodeIndex) == 824, "Offset mismatch for UFortLayoutQuestNode_Legacy::QuestNodeIndex");
static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestMapNode) == 832, "Offset mismatch for UFortLayoutQuestNode_Legacy::QuestMapNode");

// /Script/SaveTheWorldUI.FortLlamaStoreBase
// Kind: Class; super: FortDirectAcquisitionWidgetBase
class UFortLlamaStoreBase
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    TArray<void*> OfferCategoriesToDisplay; // 0x0568 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TencentDetailsActionData[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    std::uint8_t AddVBucksActionData[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShouldShowAddVBucksAction; // 0x0598 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0599
    void* OfferEntryBox; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* OfferButtonGroup; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* OfferDetails; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* StoreData; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* PendingPurchaseOffer; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHideSoldOffers; // 0x05C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortLlamaStoreBase, OfferCategoriesToDisplay) == 1384, "Offset mismatch for UFortLlamaStoreBase::OfferCategoriesToDisplay");
static_assert(offsetof(UFortLlamaStoreBase, TencentDetailsActionData) == 1400, "Offset mismatch for UFortLlamaStoreBase::TencentDetailsActionData");
static_assert(offsetof(UFortLlamaStoreBase, AddVBucksActionData) == 1416, "Offset mismatch for UFortLlamaStoreBase::AddVBucksActionData");
static_assert(offsetof(UFortLlamaStoreBase, bShouldShowAddVBucksAction) == 1432, "Offset mismatch for UFortLlamaStoreBase::bShouldShowAddVBucksAction");
static_assert(offsetof(UFortLlamaStoreBase, OfferEntryBox) == 1440, "Offset mismatch for UFortLlamaStoreBase::OfferEntryBox");
static_assert(offsetof(UFortLlamaStoreBase, OfferButtonGroup) == 1448, "Offset mismatch for UFortLlamaStoreBase::OfferButtonGroup");
static_assert(offsetof(UFortLlamaStoreBase, OfferDetails) == 1456, "Offset mismatch for UFortLlamaStoreBase::OfferDetails");
static_assert(offsetof(UFortLlamaStoreBase, StoreData) == 1464, "Offset mismatch for UFortLlamaStoreBase::StoreData");
static_assert(offsetof(UFortLlamaStoreBase, PendingPurchaseOffer) == 1472, "Offset mismatch for UFortLlamaStoreBase::PendingPurchaseOffer");
static_assert(offsetof(UFortLlamaStoreBase, bHideSoldOffers) == 1480, "Offset mismatch for UFortLlamaStoreBase::bHideSoldOffers");

// /Script/SaveTheWorldUI.FortLlamaStoreData
// Kind: Class; super: PrimaryDataAsset
class UFortLlamaStoreData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RandomLoadingTexts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FName NotEnoughCurrencyDialogCloseAction; // 0x0038 (Size: 0x8, Type: NameProperty)
    void* InspectWidgetClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    float ShowOfferDelay; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* StoreOpeningCardPackClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    void* StoreOpeningCardPackClass_Legacy; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* UnopenedCardpacksModalClass; // 0x0060 (Size: 0x8, Type: ClassProperty)
    TSoftClassPtr<void> OwnedLlamasScreenClass; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortLlamaStoreData, RandomLoadingTexts) == 40, "Offset mismatch for UFortLlamaStoreData::RandomLoadingTexts");
static_assert(offsetof(UFortLlamaStoreData, NotEnoughCurrencyDialogCloseAction) == 56, "Offset mismatch for UFortLlamaStoreData::NotEnoughCurrencyDialogCloseAction");
static_assert(offsetof(UFortLlamaStoreData, InspectWidgetClass) == 64, "Offset mismatch for UFortLlamaStoreData::InspectWidgetClass");
static_assert(offsetof(UFortLlamaStoreData, ShowOfferDelay) == 72, "Offset mismatch for UFortLlamaStoreData::ShowOfferDelay");
static_assert(offsetof(UFortLlamaStoreData, StoreOpeningCardPackClass) == 80, "Offset mismatch for UFortLlamaStoreData::StoreOpeningCardPackClass");
static_assert(offsetof(UFortLlamaStoreData, StoreOpeningCardPackClass_Legacy) == 88, "Offset mismatch for UFortLlamaStoreData::StoreOpeningCardPackClass_Legacy");
static_assert(offsetof(UFortLlamaStoreData, UnopenedCardpacksModalClass) == 96, "Offset mismatch for UFortLlamaStoreData::UnopenedCardpacksModalClass");
static_assert(offsetof(UFortLlamaStoreData, OwnedLlamasScreenClass) == 104, "Offset mismatch for UFortLlamaStoreData::OwnedLlamasScreenClass");

// /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
// Kind: Class; super: CommonUserWidget
class UFortLlamaStoreDetailsBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* OfferInfo; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ItemTileView; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortLlamaStoreDetailsBase, OfferInfo) == 816, "Offset mismatch for UFortLlamaStoreDetailsBase::OfferInfo");
static_assert(offsetof(UFortLlamaStoreDetailsBase, ItemTileView) == 824, "Offset mismatch for UFortLlamaStoreDetailsBase::ItemTileView");

// /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
// Kind: Class; super: FortStoreFrontOfferDetailsWidgetBase
class UFortLlamaStoreInspectionScreen
{
public:
    std::uint8_t Pad_0000[0x820]; // 0x0000
    void* GrantedItemTileView; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    void* ChoiceTileView; // 0x0828 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInChoiceViewMode; // 0x0830 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPurchasing; // 0x0831 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0832
    std::uint8_t InspectChoiceInputAction[0x10]; // 0x0838 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputAction[0x1]; // 0x0848 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLlamaStoreInspectionScreen, GrantedItemTileView) == 2080, "Offset mismatch for UFortLlamaStoreInspectionScreen::GrantedItemTileView");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, ChoiceTileView) == 2088, "Offset mismatch for UFortLlamaStoreInspectionScreen::ChoiceTileView");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, bIsInChoiceViewMode) == 2096, "Offset mismatch for UFortLlamaStoreInspectionScreen::bIsInChoiceViewMode");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, bIsPurchasing) == 2097, "Offset mismatch for UFortLlamaStoreInspectionScreen::bIsPurchasing");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, InspectChoiceInputAction) == 2104, "Offset mismatch for UFortLlamaStoreInspectionScreen::InspectChoiceInputAction");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, BackInputAction) == 2120, "Offset mismatch for UFortLlamaStoreInspectionScreen::BackInputAction");

// /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
// Kind: Class; super: Object
class UFortMissionActivationInfoSTW
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsMultiplayer; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x77]; // 0x0029
    void* FortPC; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* GameStateZone; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* DifficultyIncreaseBluGloCurve; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMissionActivationInfoSTW, bIsMultiplayer) == 40, "Offset mismatch for UFortMissionActivationInfoSTW::bIsMultiplayer");
static_assert(offsetof(UFortMissionActivationInfoSTW, FortPC) == 160, "Offset mismatch for UFortMissionActivationInfoSTW::FortPC");
static_assert(offsetof(UFortMissionActivationInfoSTW, GameStateZone) == 168, "Offset mismatch for UFortMissionActivationInfoSTW::GameStateZone");
static_assert(offsetof(UFortMissionActivationInfoSTW, DifficultyIncreaseBluGloCurve) == 176, "Offset mismatch for UFortMissionActivationInfoSTW::DifficultyIncreaseBluGloCurve");

// /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
// Kind: Class; super: CommonActivatableWidget
class UFortMissionActivationWidgetSTW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* InfoObject; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReadyUpObjectiveHandle[0x20]; // 0x04A8 (Size: 0x20, Type: StructProperty)
    void* DifficultyIncreaseBluGloCurve; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMissionActivationWidgetSTW, InfoObject) == 1184, "Offset mismatch for UFortMissionActivationWidgetSTW::InfoObject");
static_assert(offsetof(UFortMissionActivationWidgetSTW, ReadyUpObjectiveHandle) == 1192, "Offset mismatch for UFortMissionActivationWidgetSTW::ReadyUpObjectiveHandle");
static_assert(offsetof(UFortMissionActivationWidgetSTW, DifficultyIncreaseBluGloCurve) == 1224, "Offset mismatch for UFortMissionActivationWidgetSTW::DifficultyIncreaseBluGloCurve");

// /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
// Kind: Class; super: CommonUserWidget
class UFortMissionActivationWidgetSTWPanel
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* InfoObject; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMissionActivationWidgetSTWPanel, InfoObject) == 816, "Offset mismatch for UFortMissionActivationWidgetSTWPanel::InfoObject");

// /Script/SaveTheWorldUI.FortMissionSelect_STW
// Kind: Class; super: CommonActivatableWidget
class UFortMissionSelect_STW
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    FMulticastInlineDelegate OnNavigation; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t FindPinnedQuestInputAction[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RewardsInfoInputAction[0x10]; // 0x04D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MissionInfoInputAction[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputAction[0x1]; // 0x04F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMissionSelect_STW, OnNavigation) == 1200, "Offset mismatch for UFortMissionSelect_STW::OnNavigation");
static_assert(offsetof(UFortMissionSelect_STW, FindPinnedQuestInputAction) == 1216, "Offset mismatch for UFortMissionSelect_STW::FindPinnedQuestInputAction");
static_assert(offsetof(UFortMissionSelect_STW, RewardsInfoInputAction) == 1232, "Offset mismatch for UFortMissionSelect_STW::RewardsInfoInputAction");
static_assert(offsetof(UFortMissionSelect_STW, MissionInfoInputAction) == 1248, "Offset mismatch for UFortMissionSelect_STW::MissionInfoInputAction");
static_assert(offsetof(UFortMissionSelect_STW, BackInputAction) == 1264, "Offset mismatch for UFortMissionSelect_STW::BackInputAction");

// /Script/SaveTheWorldUI.FortModalMenu_STW
// Kind: Class; super: CommonActivatableWidget
class UFortModalMenu_STW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    TWeakObjectPtr<void> ContextProvidingObject; // 0x04A0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortModalMenu_STW, ContextProvidingObject) == 1184, "Offset mismatch for UFortModalMenu_STW::ContextProvidingObject");

// /Script/SaveTheWorldUI.FortOpenCardPackModal
// Kind: Class; super: CommonActivatableWidget
class UFortOpenCardPackModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* CardPackList; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* OpenAllButton; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* CancelButton; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortOpenCardPackModal, CardPackList) == 1184, "Offset mismatch for UFortOpenCardPackModal::CardPackList");
static_assert(offsetof(UFortOpenCardPackModal, OpenAllButton) == 1192, "Offset mismatch for UFortOpenCardPackModal::OpenAllButton");
static_assert(offsetof(UFortOpenCardPackModal, CancelButton) == 1200, "Offset mismatch for UFortOpenCardPackModal::CancelButton");
static_assert(offsetof(UFortOpenCardPackModal, BPOnRequestOpenCardPack) == 1208, "Offset mismatch for UFortOpenCardPackModal::BPOnRequestOpenCardPack");

// /Script/SaveTheWorldUI.FortOutpostPermissionsScreen
// Kind: Class; super: FortOutpostSubscreenBase
class UFortOutpostPermissionsScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t BackActionInputRowHandle[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortOutpostPermissionsScreen, BackActionInputRowHandle) == 1184, "Offset mismatch for UFortOutpostPermissionsScreen::BackActionInputRowHandle");

// /Script/SaveTheWorldUI.FortOutpostScreen
// Kind: Class; super: CommonActivatableWidget
class UFortOutpostScreen
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortOutpostScreen, bIsBackHandler) == 816, "Offset mismatch for UFortOutpostScreen::bIsBackHandler");
static_assert(offsetof(UFortOutpostScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortOutpostScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortOutpostScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortOutpostScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UFortOutpostScreen, bAutoActivate) == 840, "Offset mismatch for UFortOutpostScreen::bAutoActivate");
static_assert(offsetof(UFortOutpostScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UFortOutpostScreen::bSupportsActivationFocus");
static_assert(offsetof(UFortOutpostScreen, bIsModal) == 842, "Offset mismatch for UFortOutpostScreen::bIsModal");
static_assert(offsetof(UFortOutpostScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UFortOutpostScreen::bAutoRestoreFocus");
static_assert(offsetof(UFortOutpostScreen, bOverrideActionDomain) == 844, "Offset mismatch for UFortOutpostScreen::bOverrideActionDomain");
static_assert(offsetof(UFortOutpostScreen, InputMapping) == 848, "Offset mismatch for UFortOutpostScreen::InputMapping");
static_assert(offsetof(UFortOutpostScreen, InputMappingPriority) == 856, "Offset mismatch for UFortOutpostScreen::InputMappingPriority");
static_assert(offsetof(UFortOutpostScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UFortOutpostScreen::InputModeTagsToAdd");
static_assert(offsetof(UFortOutpostScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UFortOutpostScreen::InputModeTagsToRemove");
static_assert(offsetof(UFortOutpostScreen, ActionDomainOverride) == 928, "Offset mismatch for UFortOutpostScreen::ActionDomainOverride");
static_assert(offsetof(UFortOutpostScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortOutpostScreen::BP_OnWidgetActivated");
static_assert(offsetof(UFortOutpostScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortOutpostScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortOutpostScreen, bIsActive) == 992, "Offset mismatch for UFortOutpostScreen::bIsActive");
static_assert(offsetof(UFortOutpostScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortOutpostScreen::VisibilityBoundWidgets");
static_assert(offsetof(UFortOutpostScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortOutpostScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UFortOutpostScreen, ActivatedVisibility) == 1177, "Offset mismatch for UFortOutpostScreen::ActivatedVisibility");
static_assert(offsetof(UFortOutpostScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortOutpostScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortOutpostScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UFortOutpostScreen::DeactivatedVisibility");

// /Script/SaveTheWorldUI.FortOutpostScreenStormShieldBase
// Kind: Class; super: FortOutpostSubscreenBase
class UFortOutpostScreenStormShieldBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t BackActionInputRowHandle[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortOutpostScreenStormShieldBase, BackActionInputRowHandle) == 1184, "Offset mismatch for UFortOutpostScreenStormShieldBase::BackActionInputRowHandle");

// /Script/SaveTheWorldUI.FortOutpostSubscreenBase
// Kind: Class; super: CommonActivatableWidget
class UFortOutpostSubscreenBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t BackActionInputRowHandle[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortOutpostSubscreenBase, BackActionInputRowHandle) == 1184, "Offset mismatch for UFortOutpostSubscreenBase::BackActionInputRowHandle");

// /Script/SaveTheWorldUI.FortOwnedLlamasBase
// Kind: Class; super: CommonActivatableWidget
class UFortOwnedLlamasBase
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* OfferEntryBox; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortOwnedLlamasBase, OfferEntryBox) == 1192, "Offset mismatch for UFortOwnedLlamasBase::OfferEntryBox");

// /Script/SaveTheWorldUI.FortProgressArrowButton
// Kind: Class; super: CommonButtonBase
class UFortProgressArrowButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t ArrowColor[0x14]; // 0x15A0 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoverColor[0x14]; // 0x15B4 (Size: 0x14, Type: StructProperty)
    std::uint8_t ShadowColor[0x1]; // 0x15C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProgressArrowButton, ArrowColor) == 5536, "Offset mismatch for UFortProgressArrowButton::ArrowColor");
static_assert(offsetof(UFortProgressArrowButton, HoverColor) == 5556, "Offset mismatch for UFortProgressArrowButton::HoverColor");
static_assert(offsetof(UFortProgressArrowButton, ShadowColor) == 5576, "Offset mismatch for UFortProgressArrowButton::ShadowColor");

// /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
// Kind: Class; super: CommonButtonLegacy
class UFortProgressArrowButton_Legacy
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    std::uint8_t ArrowColor[0x14]; // 0x15F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoverColor[0x14]; // 0x1604 (Size: 0x14, Type: StructProperty)
    std::uint8_t ShadowColor[0x1]; // 0x1618 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProgressArrowButton_Legacy, ArrowColor) == 5616, "Offset mismatch for UFortProgressArrowButton_Legacy::ArrowColor");
static_assert(offsetof(UFortProgressArrowButton_Legacy, HoverColor) == 5636, "Offset mismatch for UFortProgressArrowButton_Legacy::HoverColor");
static_assert(offsetof(UFortProgressArrowButton_Legacy, ShadowColor) == 5656, "Offset mismatch for UFortProgressArrowButton_Legacy::ShadowColor");

// /Script/SaveTheWorldUI.FortQuestExpiresWidget
// Kind: Class; super: CommonUserWidget
class UFortQuestExpiresWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> Item; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortQuestExpiresWidget, Item) == 816, "Offset mismatch for UFortQuestExpiresWidget::Item");

// /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget
// Kind: Class; super: CommonUserWidget
class UFortQuestMapCosmeticListWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQuestMapCosmeticListWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortQuestMapCosmeticListWidget::bDisplayInActionBar");
static_assert(offsetof(UFortQuestMapCosmeticListWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortQuestMapCosmeticListWidget::bConsumePointerInput");

// /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
// Kind: Class; super: FortQuestMapDetailsPanelBase
class UFortQuestMapDetailsPanel
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t PlayButtonTriggeringAction[0x10]; // 0x0348 (Size: 0x10, Type: StructProperty)
    TArray<void*> PriorityActivatableWidgetClassList; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    void* CurrentQuestBorder; // 0x0368 (Size: 0x8, Type: ClassProperty)
    void* CompletedQuestBorder; // 0x0370 (Size: 0x8, Type: ClassProperty)
    void* Panel_JournalDetails; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestTitle; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestDescription; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Text_NotOwnedHeader; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Text_InactiveQuestName; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestIcon; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* List_Tasks; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Border_Header; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Body; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* Widget_FutureQuestRewardInfo; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Quest; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_NoQuest; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VisibleObjectives; // 0x03E0 (Size: 0x10, Type: ArrayProperty)
    void* CurrentQuestItem; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayDialogIfRequiredHandle[0x1]; // 0x03F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapDetailsPanel, PlayButtonTriggeringAction) == 840, "Offset mismatch for UFortQuestMapDetailsPanel::PlayButtonTriggeringAction");
static_assert(offsetof(UFortQuestMapDetailsPanel, PriorityActivatableWidgetClassList) == 856, "Offset mismatch for UFortQuestMapDetailsPanel::PriorityActivatableWidgetClassList");
static_assert(offsetof(UFortQuestMapDetailsPanel, CurrentQuestBorder) == 872, "Offset mismatch for UFortQuestMapDetailsPanel::CurrentQuestBorder");
static_assert(offsetof(UFortQuestMapDetailsPanel, CompletedQuestBorder) == 880, "Offset mismatch for UFortQuestMapDetailsPanel::CompletedQuestBorder");
static_assert(offsetof(UFortQuestMapDetailsPanel, Panel_JournalDetails) == 888, "Offset mismatch for UFortQuestMapDetailsPanel::Panel_JournalDetails");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_QuestTitle) == 896, "Offset mismatch for UFortQuestMapDetailsPanel::Text_QuestTitle");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_QuestDescription) == 904, "Offset mismatch for UFortQuestMapDetailsPanel::Text_QuestDescription");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_Header) == 912, "Offset mismatch for UFortQuestMapDetailsPanel::Text_Header");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_NotOwnedHeader) == 920, "Offset mismatch for UFortQuestMapDetailsPanel::Text_NotOwnedHeader");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_InactiveQuestName) == 928, "Offset mismatch for UFortQuestMapDetailsPanel::Text_InactiveQuestName");
static_assert(offsetof(UFortQuestMapDetailsPanel, Image_QuestIcon) == 936, "Offset mismatch for UFortQuestMapDetailsPanel::Image_QuestIcon");
static_assert(offsetof(UFortQuestMapDetailsPanel, List_Tasks) == 944, "Offset mismatch for UFortQuestMapDetailsPanel::List_Tasks");
static_assert(offsetof(UFortQuestMapDetailsPanel, Border_Header) == 952, "Offset mismatch for UFortQuestMapDetailsPanel::Border_Header");
static_assert(offsetof(UFortQuestMapDetailsPanel, Switcher_Body) == 960, "Offset mismatch for UFortQuestMapDetailsPanel::Switcher_Body");
static_assert(offsetof(UFortQuestMapDetailsPanel, Widget_FutureQuestRewardInfo) == 968, "Offset mismatch for UFortQuestMapDetailsPanel::Widget_FutureQuestRewardInfo");
static_assert(offsetof(UFortQuestMapDetailsPanel, ScrollBox_Quest) == 976, "Offset mismatch for UFortQuestMapDetailsPanel::ScrollBox_Quest");
static_assert(offsetof(UFortQuestMapDetailsPanel, ScrollBox_NoQuest) == 984, "Offset mismatch for UFortQuestMapDetailsPanel::ScrollBox_NoQuest");
static_assert(offsetof(UFortQuestMapDetailsPanel, VisibleObjectives) == 992, "Offset mismatch for UFortQuestMapDetailsPanel::VisibleObjectives");
static_assert(offsetof(UFortQuestMapDetailsPanel, CurrentQuestItem) == 1008, "Offset mismatch for UFortQuestMapDetailsPanel::CurrentQuestItem");
static_assert(offsetof(UFortQuestMapDetailsPanel, PlayDialogIfRequiredHandle) == 1016, "Offset mismatch for UFortQuestMapDetailsPanel::PlayDialogIfRequiredHandle");

// /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
// Kind: Class; super: CommonUserWidget
class UFortQuestMapDetailsPanelBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestConversationClass; // 0x0330 (Size: 0x8, Type: ClassProperty)
    float QuestUpdateDelayTime; // 0x0338 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x033C
    std::uint8_t QuestUpdateTimerHandle[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestConversationClass) == 816, "Offset mismatch for UFortQuestMapDetailsPanelBase::QuestConversationClass");
static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestUpdateDelayTime) == 824, "Offset mismatch for UFortQuestMapDetailsPanelBase::QuestUpdateDelayTime");
static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestUpdateTimerHandle) == 832, "Offset mismatch for UFortQuestMapDetailsPanelBase::QuestUpdateTimerHandle");

// /Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
// Kind: Class; super: FortQuestMapDetailsPanelBase
class UFortQuestMapDetailsPanel_Legacy
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t PlayButtonTriggeringAction[0x10]; // 0x0348 (Size: 0x10, Type: StructProperty)
    TArray<void*> PriorityActivatablePanelClassList; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    void* CurrentQuestBorder; // 0x0368 (Size: 0x8, Type: ClassProperty)
    void* CompletedQuestBorder; // 0x0370 (Size: 0x8, Type: ClassProperty)
    void* Panel_JournalDetails; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestTitle; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestDescription; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Text_NotOwnedHeader; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Text_InactiveQuestName; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestIcon; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* List_Tasks; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Border_Header; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Body; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* Widget_FutureQuestRewardInfo; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Quest; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_NoQuest; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VisibleObjectives; // 0x03E0 (Size: 0x10, Type: ArrayProperty)
    void* CurrentQuestItem; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, PlayButtonTriggeringAction) == 840, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::PlayButtonTriggeringAction");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, PriorityActivatablePanelClassList) == 856, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::PriorityActivatablePanelClassList");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CurrentQuestBorder) == 872, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::CurrentQuestBorder");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CompletedQuestBorder) == 880, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::CompletedQuestBorder");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Panel_JournalDetails) == 888, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Panel_JournalDetails");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_QuestTitle) == 896, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Text_QuestTitle");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_QuestDescription) == 904, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Text_QuestDescription");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_Header) == 912, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Text_Header");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_NotOwnedHeader) == 920, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Text_NotOwnedHeader");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_InactiveQuestName) == 928, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Text_InactiveQuestName");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Image_QuestIcon) == 936, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Image_QuestIcon");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, List_Tasks) == 944, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::List_Tasks");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Border_Header) == 952, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Border_Header");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Switcher_Body) == 960, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Switcher_Body");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Widget_FutureQuestRewardInfo) == 968, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::Widget_FutureQuestRewardInfo");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, ScrollBox_Quest) == 976, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::ScrollBox_Quest");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, ScrollBox_NoQuest) == 984, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::ScrollBox_NoQuest");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, VisibleObjectives) == 992, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::VisibleObjectives");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CurrentQuestItem) == 1008, "Offset mismatch for UFortQuestMapDetailsPanel_Legacy::CurrentQuestItem");

// /Script/SaveTheWorldUI.FortQuestMapEventCallout
// Kind: Class; super: CommonActivatableWidget
class UFortQuestMapEventCallout
{
public:
    std::uint8_t Pad_0000[0x4E8]; // 0x0000
    void* BangWrapper_GoButton; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* OverrideSound; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_LeftNav; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_RightNav; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* Button_SwitchMode; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* BangWrapper_Arrow; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* Sequence_EventProgress; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_NavButtons; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Text_Body; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Image_Callout; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* BangWrapper_UnHover; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSound; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* DefaultRequiredCompletedQuest; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* SoundLoop; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* QuestMapData; // 0x0560 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_GoButton) == 1256, "Offset mismatch for UFortQuestMapEventCallout::BangWrapper_GoButton");
static_assert(offsetof(UFortQuestMapEventCallout, OverrideSound) == 1264, "Offset mismatch for UFortQuestMapEventCallout::OverrideSound");
static_assert(offsetof(UFortQuestMapEventCallout, Button_LeftNav) == 1272, "Offset mismatch for UFortQuestMapEventCallout::Button_LeftNav");
static_assert(offsetof(UFortQuestMapEventCallout, Button_RightNav) == 1280, "Offset mismatch for UFortQuestMapEventCallout::Button_RightNav");
static_assert(offsetof(UFortQuestMapEventCallout, Button_SwitchMode) == 1288, "Offset mismatch for UFortQuestMapEventCallout::Button_SwitchMode");
static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_Arrow) == 1296, "Offset mismatch for UFortQuestMapEventCallout::BangWrapper_Arrow");
static_assert(offsetof(UFortQuestMapEventCallout, Sequence_EventProgress) == 1304, "Offset mismatch for UFortQuestMapEventCallout::Sequence_EventProgress");
static_assert(offsetof(UFortQuestMapEventCallout, HorizontalBox_NavButtons) == 1312, "Offset mismatch for UFortQuestMapEventCallout::HorizontalBox_NavButtons");
static_assert(offsetof(UFortQuestMapEventCallout, Text_Header) == 1320, "Offset mismatch for UFortQuestMapEventCallout::Text_Header");
static_assert(offsetof(UFortQuestMapEventCallout, Text_Body) == 1328, "Offset mismatch for UFortQuestMapEventCallout::Text_Body");
static_assert(offsetof(UFortQuestMapEventCallout, Image_Callout) == 1336, "Offset mismatch for UFortQuestMapEventCallout::Image_Callout");
static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_UnHover) == 1344, "Offset mismatch for UFortQuestMapEventCallout::BangWrapper_UnHover");
static_assert(offsetof(UFortQuestMapEventCallout, DefaultSound) == 1352, "Offset mismatch for UFortQuestMapEventCallout::DefaultSound");
static_assert(offsetof(UFortQuestMapEventCallout, DefaultRequiredCompletedQuest) == 1360, "Offset mismatch for UFortQuestMapEventCallout::DefaultRequiredCompletedQuest");
static_assert(offsetof(UFortQuestMapEventCallout, SoundLoop) == 1368, "Offset mismatch for UFortQuestMapEventCallout::SoundLoop");
static_assert(offsetof(UFortQuestMapEventCallout, QuestMapData) == 1376, "Offset mismatch for UFortQuestMapEventCallout::QuestMapData");

// /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
// Kind: Class; super: FortActivatablePanel
class UFortQuestMapEventCallout_Legacy
{
public:
    std::uint8_t Pad_0000[0x5C8]; // 0x0000
    void* BangWrapper_GoButton; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* OverrideSound; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_LeftNav; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_RightNav; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SwitchMode; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* BangWrapper_Arrow; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* Sequence_EventProgress; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_NavButtons; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* Text_Body; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* Image_Callout; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* BangWrapper_UnHover; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSound; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* DefaultRequiredCompletedQuest; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* SoundLoop; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    void* QuestMapData; // 0x0640 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_GoButton) == 1480, "Offset mismatch for UFortQuestMapEventCallout_Legacy::BangWrapper_GoButton");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, OverrideSound) == 1488, "Offset mismatch for UFortQuestMapEventCallout_Legacy::OverrideSound");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_LeftNav) == 1496, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Button_LeftNav");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_RightNav) == 1504, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Button_RightNav");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_SwitchMode) == 1512, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Button_SwitchMode");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_Arrow) == 1520, "Offset mismatch for UFortQuestMapEventCallout_Legacy::BangWrapper_Arrow");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Sequence_EventProgress) == 1528, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Sequence_EventProgress");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, HorizontalBox_NavButtons) == 1536, "Offset mismatch for UFortQuestMapEventCallout_Legacy::HorizontalBox_NavButtons");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Text_Header) == 1544, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Text_Header");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Text_Body) == 1552, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Text_Body");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Image_Callout) == 1560, "Offset mismatch for UFortQuestMapEventCallout_Legacy::Image_Callout");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_UnHover) == 1568, "Offset mismatch for UFortQuestMapEventCallout_Legacy::BangWrapper_UnHover");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, DefaultSound) == 1576, "Offset mismatch for UFortQuestMapEventCallout_Legacy::DefaultSound");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, DefaultRequiredCompletedQuest) == 1584, "Offset mismatch for UFortQuestMapEventCallout_Legacy::DefaultRequiredCompletedQuest");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, SoundLoop) == 1592, "Offset mismatch for UFortQuestMapEventCallout_Legacy::SoundLoop");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, QuestMapData) == 1600, "Offset mismatch for UFortQuestMapEventCallout_Legacy::QuestMapData");

// /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
// Kind: Class; super: FortQuestMapDetailsPanelBase
class UFortQuestMapEventDetailsPanel
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* CurrentQuestBorder; // 0x0348 (Size: 0x8, Type: ClassProperty)
    void* CompletedQuestBorder; // 0x0350 (Size: 0x8, Type: ClassProperty)
    void* FutureQuestBorder; // 0x0358 (Size: 0x8, Type: ClassProperty)
    void* VBox_QuestContainer; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* VBox_CompletedQuestContainer; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Quests; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Border_NextQuest; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestName; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestDescription; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* List_Tasks; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestIcon; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_SideBar; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* EventQuestTable; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* SideBarEntryClass; // 0x03B8 (Size: 0x8, Type: ClassProperty)
    void* UnlockEventQuestDefinition; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestDef; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VisibleObjectives; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlayDialogIfRequiredHandle[0x1]; // 0x03E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapEventDetailsPanel, CurrentQuestBorder) == 840, "Offset mismatch for UFortQuestMapEventDetailsPanel::CurrentQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, CompletedQuestBorder) == 848, "Offset mismatch for UFortQuestMapEventDetailsPanel::CompletedQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, FutureQuestBorder) == 856, "Offset mismatch for UFortQuestMapEventDetailsPanel::FutureQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VBox_QuestContainer) == 864, "Offset mismatch for UFortQuestMapEventDetailsPanel::VBox_QuestContainer");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VBox_CompletedQuestContainer) == 872, "Offset mismatch for UFortQuestMapEventDetailsPanel::VBox_CompletedQuestContainer");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Switcher_Quests) == 880, "Offset mismatch for UFortQuestMapEventDetailsPanel::Switcher_Quests");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Border_NextQuest) == 888, "Offset mismatch for UFortQuestMapEventDetailsPanel::Border_NextQuest");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_QuestName) == 896, "Offset mismatch for UFortQuestMapEventDetailsPanel::Text_QuestName");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_QuestDescription) == 904, "Offset mismatch for UFortQuestMapEventDetailsPanel::Text_QuestDescription");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_Title) == 912, "Offset mismatch for UFortQuestMapEventDetailsPanel::Text_Title");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, List_Tasks) == 920, "Offset mismatch for UFortQuestMapEventDetailsPanel::List_Tasks");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Image_QuestIcon) == 928, "Offset mismatch for UFortQuestMapEventDetailsPanel::Image_QuestIcon");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, ScrollBox_SideBar) == 936, "Offset mismatch for UFortQuestMapEventDetailsPanel::ScrollBox_SideBar");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, EventQuestTable) == 944, "Offset mismatch for UFortQuestMapEventDetailsPanel::EventQuestTable");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, SideBarEntryClass) == 952, "Offset mismatch for UFortQuestMapEventDetailsPanel::SideBarEntryClass");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, UnlockEventQuestDefinition) == 960, "Offset mismatch for UFortQuestMapEventDetailsPanel::UnlockEventQuestDefinition");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, CurrentQuestDef) == 968, "Offset mismatch for UFortQuestMapEventDetailsPanel::CurrentQuestDef");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VisibleObjectives) == 976, "Offset mismatch for UFortQuestMapEventDetailsPanel::VisibleObjectives");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, PlayDialogIfRequiredHandle) == 992, "Offset mismatch for UFortQuestMapEventDetailsPanel::PlayDialogIfRequiredHandle");

// /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
// Kind: Class; super: FortQuestMapDetailsPanelBase
class UFortQuestMapEventDetailsPanel_Legacy
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* CurrentQuestBorder; // 0x0348 (Size: 0x8, Type: ClassProperty)
    void* CompletedQuestBorder; // 0x0350 (Size: 0x8, Type: ClassProperty)
    void* FutureQuestBorder; // 0x0358 (Size: 0x8, Type: ClassProperty)
    void* VBox_QuestContainer; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* VBox_CompletedQuestContainer; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Quests; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Border_NextQuest; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestName; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuestDescription; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* List_Tasks; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestIcon; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_SideBar; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* EventQuestTable; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* SideBarEntryClass; // 0x03B8 (Size: 0x8, Type: ClassProperty)
    void* UnlockEventQuestDefinition; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestDef; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VisibleObjectives; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CurrentQuestBorder) == 840, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::CurrentQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CompletedQuestBorder) == 848, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::CompletedQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, FutureQuestBorder) == 856, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::FutureQuestBorder");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VBox_QuestContainer) == 864, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::VBox_QuestContainer");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VBox_CompletedQuestContainer) == 872, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::VBox_CompletedQuestContainer");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Switcher_Quests) == 880, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Switcher_Quests");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Border_NextQuest) == 888, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Border_NextQuest");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_QuestName) == 896, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Text_QuestName");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_QuestDescription) == 904, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Text_QuestDescription");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_Title) == 912, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Text_Title");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, List_Tasks) == 920, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::List_Tasks");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Image_QuestIcon) == 928, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::Image_QuestIcon");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, ScrollBox_SideBar) == 936, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::ScrollBox_SideBar");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, EventQuestTable) == 944, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::EventQuestTable");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, SideBarEntryClass) == 952, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::SideBarEntryClass");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, UnlockEventQuestDefinition) == 960, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::UnlockEventQuestDefinition");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CurrentQuestDef) == 968, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::CurrentQuestDef");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VisibleObjectives) == 976, "Offset mismatch for UFortQuestMapEventDetailsPanel_Legacy::VisibleObjectives");

// /Script/SaveTheWorldUI.FortQuestMapEventDot
// Kind: Class; super: CommonUserWidget
class UFortQuestMapEventDot
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Image_ActiveDot; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapEventDot, Image_ActiveDot) == 816, "Offset mismatch for UFortQuestMapEventDot::Image_ActiveDot");

// /Script/SaveTheWorldUI.FortQuestMapEventSequence
// Kind: Class; super: CommonUserWidget
class UFortQuestMapEventSequence
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* HorizontalBox_DotBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* DotWidgetClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQuestMapEventSequence, HorizontalBox_DotBox) == 816, "Offset mismatch for UFortQuestMapEventSequence::HorizontalBox_DotBox");
static_assert(offsetof(UFortQuestMapEventSequence, DotWidgetClass) == 824, "Offset mismatch for UFortQuestMapEventSequence::DotWidgetClass");

// /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
// Kind: Class; super: CommonUserWidget
class UFortQuestMapEventSideEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Switcher_Rewards; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* List_SideTasks; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_SideQuestTitle; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Image_Arrow; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestComplete; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardPadding[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    void* CurrentQuestItemDef; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestItem; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardAnimationTimer[0x8]; // 0x0378 (Size: 0x8, Type: StructProperty)
    TArray<void*> SideQuestObjectives; // 0x0380 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestMapEventSideEntry, Switcher_Rewards) == 816, "Offset mismatch for UFortQuestMapEventSideEntry::Switcher_Rewards");
static_assert(offsetof(UFortQuestMapEventSideEntry, List_SideTasks) == 824, "Offset mismatch for UFortQuestMapEventSideEntry::List_SideTasks");
static_assert(offsetof(UFortQuestMapEventSideEntry, Text_SideQuestTitle) == 832, "Offset mismatch for UFortQuestMapEventSideEntry::Text_SideQuestTitle");
static_assert(offsetof(UFortQuestMapEventSideEntry, Image_Arrow) == 840, "Offset mismatch for UFortQuestMapEventSideEntry::Image_Arrow");
static_assert(offsetof(UFortQuestMapEventSideEntry, Image_QuestComplete) == 848, "Offset mismatch for UFortQuestMapEventSideEntry::Image_QuestComplete");
static_assert(offsetof(UFortQuestMapEventSideEntry, RewardPadding) == 856, "Offset mismatch for UFortQuestMapEventSideEntry::RewardPadding");
static_assert(offsetof(UFortQuestMapEventSideEntry, CurrentQuestItemDef) == 872, "Offset mismatch for UFortQuestMapEventSideEntry::CurrentQuestItemDef");
static_assert(offsetof(UFortQuestMapEventSideEntry, CurrentQuestItem) == 880, "Offset mismatch for UFortQuestMapEventSideEntry::CurrentQuestItem");
static_assert(offsetof(UFortQuestMapEventSideEntry, RewardAnimationTimer) == 888, "Offset mismatch for UFortQuestMapEventSideEntry::RewardAnimationTimer");
static_assert(offsetof(UFortQuestMapEventSideEntry, SideQuestObjectives) == 896, "Offset mismatch for UFortQuestMapEventSideEntry::SideQuestObjectives");

// /Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
// Kind: Class; super: CommonUserWidget
class UFortQuestMapEventSideEntry_Legacy
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Switcher_Rewards; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* List_SideTasks; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_SideQuestTitle; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Image_Arrow; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Image_QuestComplete; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardPadding[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    void* CurrentQuestItemDef; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestItem; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RewardSwitchers; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RewardAnimationTimer[0x8]; // 0x0388 (Size: 0x8, Type: StructProperty)
    TArray<void*> SideQuestObjectives; // 0x0390 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Switcher_Rewards) == 816, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::Switcher_Rewards");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, List_SideTasks) == 824, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::List_SideTasks");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Text_SideQuestTitle) == 832, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::Text_SideQuestTitle");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Image_Arrow) == 840, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::Image_Arrow");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Image_QuestComplete) == 848, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::Image_QuestComplete");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardPadding) == 856, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::RewardPadding");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, CurrentQuestItemDef) == 872, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::CurrentQuestItemDef");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, CurrentQuestItem) == 880, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::CurrentQuestItem");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardSwitchers) == 888, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::RewardSwitchers");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardAnimationTimer) == 904, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::RewardAnimationTimer");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, SideQuestObjectives) == 912, "Offset mismatch for UFortQuestMapEventSideEntry_Legacy::SideQuestObjectives");

// /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper
// Kind: Class; super: FortBangWrapper_NUI
class UFortQuestMapNewBangWrapper
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* Switcher_Bangs; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapNewBangWrapper, Switcher_Bangs) == 840, "Offset mismatch for UFortQuestMapNewBangWrapper::Switcher_Bangs");

// /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
// Kind: Class; super: FortBangWrapper_NUI
class UFortQuestMapNewBangWrapper_Legacy
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    void* Switcher_Bangs; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapNewBangWrapper_Legacy, Switcher_Bangs) == 840, "Offset mismatch for UFortQuestMapNewBangWrapper_Legacy::Switcher_Bangs");

// /Script/SaveTheWorldUI.FortQuestMapNodeLayout
// Kind: Class; super: UserWidget
class UFortQuestMapNodeLayout
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Panel_NodeLayout; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ButtonPrevious; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* ButtonNext; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* StartArrow; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* EndArrow; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* QuestButtonGroup; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ParentScreen; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapNodeLayout, Panel_NodeLayout) == 776, "Offset mismatch for UFortQuestMapNodeLayout::Panel_NodeLayout");
static_assert(offsetof(UFortQuestMapNodeLayout, ButtonPrevious) == 784, "Offset mismatch for UFortQuestMapNodeLayout::ButtonPrevious");
static_assert(offsetof(UFortQuestMapNodeLayout, ButtonNext) == 792, "Offset mismatch for UFortQuestMapNodeLayout::ButtonNext");
static_assert(offsetof(UFortQuestMapNodeLayout, StartArrow) == 800, "Offset mismatch for UFortQuestMapNodeLayout::StartArrow");
static_assert(offsetof(UFortQuestMapNodeLayout, EndArrow) == 808, "Offset mismatch for UFortQuestMapNodeLayout::EndArrow");
static_assert(offsetof(UFortQuestMapNodeLayout, QuestButtonGroup) == 816, "Offset mismatch for UFortQuestMapNodeLayout::QuestButtonGroup");
static_assert(offsetof(UFortQuestMapNodeLayout, ParentScreen) == 824, "Offset mismatch for UFortQuestMapNodeLayout::ParentScreen");

// /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
// Kind: Class; super: UserWidget
class UFortQuestMapNodeLayout_Legacy
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Panel_NodeLayout; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ButtonPrevious; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* ButtonNext; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* StartArrow; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* EndArrow; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* QuestButtonGroup; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ParentScreen; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, Panel_NodeLayout) == 776, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::Panel_NodeLayout");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ButtonPrevious) == 784, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::ButtonPrevious");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ButtonNext) == 792, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::ButtonNext");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, StartArrow) == 800, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::StartArrow");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, EndArrow) == 808, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::EndArrow");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, QuestButtonGroup) == 816, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::QuestButtonGroup");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ParentScreen) == 824, "Offset mismatch for UFortQuestMapNodeLayout_Legacy::ParentScreen");

// /Script/SaveTheWorldUI.FortQuestMapQuestTile
// Kind: Class; super: CommonUserWidget
class UFortQuestMapQuestTile
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestButton; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QuestNodeData[0x1]; // 0x0338 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapQuestTile, QuestButton) == 816, "Offset mismatch for UFortQuestMapQuestTile::QuestButton");
static_assert(offsetof(UFortQuestMapQuestTile, QuestNodeData) == 824, "Offset mismatch for UFortQuestMapQuestTile::QuestNodeData");

// /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy
// Kind: Class; super: CommonUserWidget
class UFortQuestMapQuestTile_Legacy
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestButton; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QuestNodeData[0x1]; // 0x0338 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapQuestTile_Legacy, QuestButton) == 816, "Offset mismatch for UFortQuestMapQuestTile_Legacy::QuestButton");
static_assert(offsetof(UFortQuestMapQuestTile_Legacy, QuestNodeData) == 824, "Offset mismatch for UFortQuestMapQuestTile_Legacy::QuestNodeData");

// /Script/SaveTheWorldUI.FortQuestMapScreen
// Kind: Class; super: CommonActivatableWidget
class UFortQuestMapScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* CampaignDetailsPanel; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* EventDetailsPanel; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* EventCalloutPanel; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* QuestMapViewer; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMode; // 0x04C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEventsActive; // 0x04C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x04C2
    void* CampaignQuestMapDataTable; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* CutoffQuest; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestMapDataTable; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x28]; // 0x04E0
    void* CampaignNewsModalClass; // 0x0508 (Size: 0x8, Type: ClassProperty)
    void* QuestLogScreenClass; // 0x0510 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CurrentQuestAction[0x10]; // 0x0518 (Size: 0x10, Type: StructProperty)
    std::uint8_t STWNewsAction[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction[0x1]; // 0x0538 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestMapScreen, CampaignDetailsPanel) == 1184, "Offset mismatch for UFortQuestMapScreen::CampaignDetailsPanel");
static_assert(offsetof(UFortQuestMapScreen, EventDetailsPanel) == 1192, "Offset mismatch for UFortQuestMapScreen::EventDetailsPanel");
static_assert(offsetof(UFortQuestMapScreen, EventCalloutPanel) == 1200, "Offset mismatch for UFortQuestMapScreen::EventCalloutPanel");
static_assert(offsetof(UFortQuestMapScreen, QuestMapViewer) == 1208, "Offset mismatch for UFortQuestMapScreen::QuestMapViewer");
static_assert(offsetof(UFortQuestMapScreen, CurrentMode) == 1216, "Offset mismatch for UFortQuestMapScreen::CurrentMode");
static_assert(offsetof(UFortQuestMapScreen, bEventsActive) == 1217, "Offset mismatch for UFortQuestMapScreen::bEventsActive");
static_assert(offsetof(UFortQuestMapScreen, CampaignQuestMapDataTable) == 1224, "Offset mismatch for UFortQuestMapScreen::CampaignQuestMapDataTable");
static_assert(offsetof(UFortQuestMapScreen, CutoffQuest) == 1232, "Offset mismatch for UFortQuestMapScreen::CutoffQuest");
static_assert(offsetof(UFortQuestMapScreen, CurrentQuestMapDataTable) == 1240, "Offset mismatch for UFortQuestMapScreen::CurrentQuestMapDataTable");
static_assert(offsetof(UFortQuestMapScreen, CampaignNewsModalClass) == 1288, "Offset mismatch for UFortQuestMapScreen::CampaignNewsModalClass");
static_assert(offsetof(UFortQuestMapScreen, QuestLogScreenClass) == 1296, "Offset mismatch for UFortQuestMapScreen::QuestLogScreenClass");
static_assert(offsetof(UFortQuestMapScreen, CurrentQuestAction) == 1304, "Offset mismatch for UFortQuestMapScreen::CurrentQuestAction");
static_assert(offsetof(UFortQuestMapScreen, STWNewsAction) == 1320, "Offset mismatch for UFortQuestMapScreen::STWNewsAction");
static_assert(offsetof(UFortQuestMapScreen, BackAction) == 1336, "Offset mismatch for UFortQuestMapScreen::BackAction");

// /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortQuestMapScreen_Legacy
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    void* CampaignDetailsPanel; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* EventDetailsPanel; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* EventCalloutPanel; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* QuestMapViewer; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMode; // 0x0580 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEventsActive; // 0x0581 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0582
    void* CampaignQuestMapDataTable; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* CutoffQuest; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* CurrentQuestMapDataTable; // 0x0598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapScreen_Legacy, CampaignDetailsPanel) == 1376, "Offset mismatch for UFortQuestMapScreen_Legacy::CampaignDetailsPanel");
static_assert(offsetof(UFortQuestMapScreen_Legacy, EventDetailsPanel) == 1384, "Offset mismatch for UFortQuestMapScreen_Legacy::EventDetailsPanel");
static_assert(offsetof(UFortQuestMapScreen_Legacy, EventCalloutPanel) == 1392, "Offset mismatch for UFortQuestMapScreen_Legacy::EventCalloutPanel");
static_assert(offsetof(UFortQuestMapScreen_Legacy, QuestMapViewer) == 1400, "Offset mismatch for UFortQuestMapScreen_Legacy::QuestMapViewer");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CurrentMode) == 1408, "Offset mismatch for UFortQuestMapScreen_Legacy::CurrentMode");
static_assert(offsetof(UFortQuestMapScreen_Legacy, bEventsActive) == 1409, "Offset mismatch for UFortQuestMapScreen_Legacy::bEventsActive");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CampaignQuestMapDataTable) == 1416, "Offset mismatch for UFortQuestMapScreen_Legacy::CampaignQuestMapDataTable");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CutoffQuest) == 1424, "Offset mismatch for UFortQuestMapScreen_Legacy::CutoffQuest");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CurrentQuestMapDataTable) == 1432, "Offset mismatch for UFortQuestMapScreen_Legacy::CurrentQuestMapDataTable");

// /Script/SaveTheWorldUI.FortQuestMapViewer
// Kind: Class; super: CommonUserWidget
class UFortQuestMapViewer
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* Button_PageRight; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageLeft; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Text_Page; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Viewer; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CanvasPanel_Cosmetic; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* ParentScreen; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* NodeLayout; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapViewer, Button_PageRight) == 832, "Offset mismatch for UFortQuestMapViewer::Button_PageRight");
static_assert(offsetof(UFortQuestMapViewer, Button_PageLeft) == 840, "Offset mismatch for UFortQuestMapViewer::Button_PageLeft");
static_assert(offsetof(UFortQuestMapViewer, Text_Title) == 848, "Offset mismatch for UFortQuestMapViewer::Text_Title");
static_assert(offsetof(UFortQuestMapViewer, Text_Page) == 856, "Offset mismatch for UFortQuestMapViewer::Text_Page");
static_assert(offsetof(UFortQuestMapViewer, SizeBox_Viewer) == 864, "Offset mismatch for UFortQuestMapViewer::SizeBox_Viewer");
static_assert(offsetof(UFortQuestMapViewer, CanvasPanel_Cosmetic) == 872, "Offset mismatch for UFortQuestMapViewer::CanvasPanel_Cosmetic");
static_assert(offsetof(UFortQuestMapViewer, ParentScreen) == 880, "Offset mismatch for UFortQuestMapViewer::ParentScreen");
static_assert(offsetof(UFortQuestMapViewer, NodeLayout) == 888, "Offset mismatch for UFortQuestMapViewer::NodeLayout");

// /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
// Kind: Class; super: CommonUserWidget
class UFortQuestMapViewer_Legacy
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* Button_PageRight; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageLeft; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Text_Page; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Viewer; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CanvasPanel_Cosmetic; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* ParentScreen; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* NodeLayout; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestMapViewer_Legacy, Button_PageRight) == 832, "Offset mismatch for UFortQuestMapViewer_Legacy::Button_PageRight");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Button_PageLeft) == 840, "Offset mismatch for UFortQuestMapViewer_Legacy::Button_PageLeft");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Text_Title) == 848, "Offset mismatch for UFortQuestMapViewer_Legacy::Text_Title");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Text_Page) == 856, "Offset mismatch for UFortQuestMapViewer_Legacy::Text_Page");
static_assert(offsetof(UFortQuestMapViewer_Legacy, SizeBox_Viewer) == 864, "Offset mismatch for UFortQuestMapViewer_Legacy::SizeBox_Viewer");
static_assert(offsetof(UFortQuestMapViewer_Legacy, CanvasPanel_Cosmetic) == 872, "Offset mismatch for UFortQuestMapViewer_Legacy::CanvasPanel_Cosmetic");
static_assert(offsetof(UFortQuestMapViewer_Legacy, ParentScreen) == 880, "Offset mismatch for UFortQuestMapViewer_Legacy::ParentScreen");
static_assert(offsetof(UFortQuestMapViewer_Legacy, NodeLayout) == 888, "Offset mismatch for UFortQuestMapViewer_Legacy::NodeLayout");

// /Script/SaveTheWorldUI.FortQuestPlayButton
// Kind: Class; super: CommonUserWidget
class UFortQuestPlayButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* QuestItem; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestPlayButton, QuestItem) == 816, "Offset mismatch for UFortQuestPlayButton::QuestItem");

// /Script/SaveTheWorldUI.FortQuestPlayNextQuestButton
// Kind: Class; super: CommonUserWidget
class UFortQuestPlayNextQuestButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnCurrentQuestUpdated; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* QuestItem; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* CampaignQuestMapDataTable; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestPlayNextQuestButton, OnCurrentQuestUpdated) == 816, "Offset mismatch for UFortQuestPlayNextQuestButton::OnCurrentQuestUpdated");
static_assert(offsetof(UFortQuestPlayNextQuestButton, QuestItem) == 832, "Offset mismatch for UFortQuestPlayNextQuestButton::QuestItem");
static_assert(offsetof(UFortQuestPlayNextQuestButton, CampaignQuestMapDataTable) == 840, "Offset mismatch for UFortQuestPlayNextQuestButton::CampaignQuestMapDataTable");

// /Script/SaveTheWorldUI.FortQuestScreen
// Kind: Class; super: CommonActivatableWidget
class UFortQuestScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* TreeView_Quests; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_QuestDetails; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* QuestManagerComponentClass; // 0x04B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BackAction[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LeaveInventoryAction[0x10]; // 0x04D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayQuestAction[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AbandonQuestAction[0x10]; // 0x04F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClaimRewardAction[0x10]; // 0x0500 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReplayIntroAction[0x10]; // 0x0510 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReplayOutroAction[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t PinQuestAction[0x10]; // 0x0530 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnpinQuestAction[0x10]; // 0x0540 (Size: 0x10, Type: StructProperty)
    std::uint8_t StopConversationAction[0x1]; // 0x0550 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestScreen, TreeView_Quests) == 1192, "Offset mismatch for UFortQuestScreen::TreeView_Quests");
static_assert(offsetof(UFortQuestScreen, ScrollBox_QuestDetails) == 1200, "Offset mismatch for UFortQuestScreen::ScrollBox_QuestDetails");
static_assert(offsetof(UFortQuestScreen, QuestManagerComponentClass) == 1208, "Offset mismatch for UFortQuestScreen::QuestManagerComponentClass");
static_assert(offsetof(UFortQuestScreen, BackAction) == 1216, "Offset mismatch for UFortQuestScreen::BackAction");
static_assert(offsetof(UFortQuestScreen, LeaveInventoryAction) == 1232, "Offset mismatch for UFortQuestScreen::LeaveInventoryAction");
static_assert(offsetof(UFortQuestScreen, PlayQuestAction) == 1248, "Offset mismatch for UFortQuestScreen::PlayQuestAction");
static_assert(offsetof(UFortQuestScreen, AbandonQuestAction) == 1264, "Offset mismatch for UFortQuestScreen::AbandonQuestAction");
static_assert(offsetof(UFortQuestScreen, ClaimRewardAction) == 1280, "Offset mismatch for UFortQuestScreen::ClaimRewardAction");
static_assert(offsetof(UFortQuestScreen, ReplayIntroAction) == 1296, "Offset mismatch for UFortQuestScreen::ReplayIntroAction");
static_assert(offsetof(UFortQuestScreen, ReplayOutroAction) == 1312, "Offset mismatch for UFortQuestScreen::ReplayOutroAction");
static_assert(offsetof(UFortQuestScreen, PinQuestAction) == 1328, "Offset mismatch for UFortQuestScreen::PinQuestAction");
static_assert(offsetof(UFortQuestScreen, UnpinQuestAction) == 1344, "Offset mismatch for UFortQuestScreen::UnpinQuestAction");
static_assert(offsetof(UFortQuestScreen, StopConversationAction) == 1360, "Offset mismatch for UFortQuestScreen::StopConversationAction");

// /Script/SaveTheWorldUI.FortQuestScreen_Legacy
// Kind: Class; super: FortActivatablePanel
class UFortQuestScreen_Legacy
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    std::uint8_t bIsPushedOnToContentPanelStack; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAlreadyOnContentPanelStack; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputPriority; // 0x056A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsClosableByPlayerInput; // 0x056B (Size: 0x1, Type: BoolProperty)
    std::uint8_t PrimaryContentSetup[0x1]; // 0x056C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestScreen_Legacy, bIsPushedOnToContentPanelStack) == 1384, "Offset mismatch for UFortQuestScreen_Legacy::bIsPushedOnToContentPanelStack");
static_assert(offsetof(UFortQuestScreen_Legacy, bIsAlreadyOnContentPanelStack) == 1385, "Offset mismatch for UFortQuestScreen_Legacy::bIsAlreadyOnContentPanelStack");
static_assert(offsetof(UFortQuestScreen_Legacy, InputPriority) == 1386, "Offset mismatch for UFortQuestScreen_Legacy::InputPriority");
static_assert(offsetof(UFortQuestScreen_Legacy, bIsClosableByPlayerInput) == 1387, "Offset mismatch for UFortQuestScreen_Legacy::bIsClosableByPlayerInput");
static_assert(offsetof(UFortQuestScreen_Legacy, PrimaryContentSetup) == 1388, "Offset mismatch for UFortQuestScreen_Legacy::PrimaryContentSetup");

// /Script/SaveTheWorldUI.FortQuestTreeItemWidget
// Kind: Class; super: CommonButtonBase
class UFortQuestTreeItemWidget
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    TWeakObjectPtr<void> QuestOrCategory; // 0x15A8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortQuestTreeItemWidget, QuestOrCategory) == 5544, "Offset mismatch for UFortQuestTreeItemWidget::QuestOrCategory");

// /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
// Kind: Class; super: CommonButtonLegacy
class UFortQuestTreeItemWidget_Legacy
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    TWeakObjectPtr<void> QuestOrCategory; // 0x15F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortQuestTreeItemWidget_Legacy, QuestOrCategory) == 5624, "Offset mismatch for UFortQuestTreeItemWidget_Legacy::QuestOrCategory");

// /Script/SaveTheWorldUI.FortResearchMenuBase
// Kind: Class; super: CommonActivatableWidget
class UFortResearchMenuBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ResearchRespecToken; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RespecInputAction[0x18]; // 0x04A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ResearchDetailsInputAction[0x18]; // 0x04C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t BackInputAction[0x1]; // 0x04D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortResearchMenuBase, ResearchRespecToken) == 1184, "Offset mismatch for UFortResearchMenuBase::ResearchRespecToken");
static_assert(offsetof(UFortResearchMenuBase, RespecInputAction) == 1192, "Offset mismatch for UFortResearchMenuBase::RespecInputAction");
static_assert(offsetof(UFortResearchMenuBase, ResearchDetailsInputAction) == 1216, "Offset mismatch for UFortResearchMenuBase::ResearchDetailsInputAction");
static_assert(offsetof(UFortResearchMenuBase, BackInputAction) == 1240, "Offset mismatch for UFortResearchMenuBase::BackInputAction");

// /Script/SaveTheWorldUI.FortResearchSchematicsHelper
// Kind: Class; super: BlueprintFunctionLibrary
class UFortResearchSchematicsHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortResearchStatTileWidget
// Kind: Class; super: UserWidget
class UFortResearchStatTileWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* PersonalStatItemDefinition; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* TeamStatItemDefinition; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StatCostCurveName[0x4]; // 0x0318 (Size: 0x4, Type: NameProperty)
    std::uint8_t StatPersonalDeltaCurveName[0x4]; // 0x031C (Size: 0x4, Type: NameProperty)
    std::uint8_t StatPersonalCumulativeCurveName[0x4]; // 0x0320 (Size: 0x4, Type: NameProperty)
    std::uint8_t StatTeamDeltaCurveName[0x4]; // 0x0324 (Size: 0x4, Type: NameProperty)
    FName StatTeamCumulativeCurveName; // 0x0328 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortResearchStatTileWidget, PersonalStatItemDefinition) == 776, "Offset mismatch for UFortResearchStatTileWidget::PersonalStatItemDefinition");
static_assert(offsetof(UFortResearchStatTileWidget, TeamStatItemDefinition) == 784, "Offset mismatch for UFortResearchStatTileWidget::TeamStatItemDefinition");
static_assert(offsetof(UFortResearchStatTileWidget, StatCostCurveName) == 792, "Offset mismatch for UFortResearchStatTileWidget::StatCostCurveName");
static_assert(offsetof(UFortResearchStatTileWidget, StatPersonalDeltaCurveName) == 796, "Offset mismatch for UFortResearchStatTileWidget::StatPersonalDeltaCurveName");
static_assert(offsetof(UFortResearchStatTileWidget, StatPersonalCumulativeCurveName) == 800, "Offset mismatch for UFortResearchStatTileWidget::StatPersonalCumulativeCurveName");
static_assert(offsetof(UFortResearchStatTileWidget, StatTeamDeltaCurveName) == 804, "Offset mismatch for UFortResearchStatTileWidget::StatTeamDeltaCurveName");
static_assert(offsetof(UFortResearchStatTileWidget, StatTeamCumulativeCurveName) == 808, "Offset mismatch for UFortResearchStatTileWidget::StatTeamCumulativeCurveName");

// /Script/SaveTheWorldUI.FortResultsWidgetSTW
// Kind: Class; super: CommonActivatableWidget
class UFortResultsWidgetSTW
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    std::uint8_t SkipInputAction[0x18]; // 0x04B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmoteInputAction[0x18]; // 0x04C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NewEmoteWheelInputAction[0x18]; // 0x04E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PickerCancelInputAction[0x90]; // 0x04F8 (Size: 0x90, Type: StructProperty)
    std::int32_t AdditionalGrantedMissionPoints; // 0x0588 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x058C
    TArray<void*> RewardedBadges; // 0x0590 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MissedBadges; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RewardedItems; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RewardedAccountItems; // 0x05C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortResultsWidgetSTW, SkipInputAction) == 1200, "Offset mismatch for UFortResultsWidgetSTW::SkipInputAction");
static_assert(offsetof(UFortResultsWidgetSTW, EmoteInputAction) == 1224, "Offset mismatch for UFortResultsWidgetSTW::EmoteInputAction");
static_assert(offsetof(UFortResultsWidgetSTW, NewEmoteWheelInputAction) == 1248, "Offset mismatch for UFortResultsWidgetSTW::NewEmoteWheelInputAction");
static_assert(offsetof(UFortResultsWidgetSTW, PickerCancelInputAction) == 1272, "Offset mismatch for UFortResultsWidgetSTW::PickerCancelInputAction");
static_assert(offsetof(UFortResultsWidgetSTW, AdditionalGrantedMissionPoints) == 1416, "Offset mismatch for UFortResultsWidgetSTW::AdditionalGrantedMissionPoints");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedBadges) == 1424, "Offset mismatch for UFortResultsWidgetSTW::RewardedBadges");
static_assert(offsetof(UFortResultsWidgetSTW, MissedBadges) == 1440, "Offset mismatch for UFortResultsWidgetSTW::MissedBadges");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedItems) == 1456, "Offset mismatch for UFortResultsWidgetSTW::RewardedItems");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedAccountItems) == 1472, "Offset mismatch for UFortResultsWidgetSTW::RewardedAccountItems");

// /Script/SaveTheWorldUI.FortRewardCollectionBookData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardCollectionBookData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CollectionBookRewards[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRewardCollectionBookData, CollectionBookRewards) == 48, "Offset mismatch for UFortRewardCollectionBookData::CollectionBookRewards");

// /Script/SaveTheWorldUI.FortRewardConversationWidget
// Kind: Class; super: FortRewardNotificationSubWidget
class UFortRewardConversationWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnTransitionInComplete; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTransitionOutComplete; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ParentWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardConversationWidget, OnTransitionInComplete) == 816, "Offset mismatch for UFortRewardConversationWidget::OnTransitionInComplete");
static_assert(offsetof(UFortRewardConversationWidget, OnTransitionOutComplete) == 832, "Offset mismatch for UFortRewardConversationWidget::OnTransitionOutComplete");
static_assert(offsetof(UFortRewardConversationWidget, ParentWidget) == 848, "Offset mismatch for UFortRewardConversationWidget::ParentWidget");

// /Script/SaveTheWorldUI.FortRewardDifficultyIncrease
// Kind: Class; super: FortRewardNotificationData
class UFortRewardDifficultyIncrease
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RewardType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRewardDifficultyIncrease, RewardType) == 40, "Offset mismatch for UFortRewardDifficultyIncrease::RewardType");

// /Script/SaveTheWorldUI.FortRewardEpicQuestData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardEpicQuestData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Quest; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardEpicQuestData, Quest) == 48, "Offset mismatch for UFortRewardEpicQuestData::Quest");

// /Script/SaveTheWorldUI.FortRewardExpeditionData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardExpeditionData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Expedition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardExpeditionData, Expedition) == 48, "Offset mismatch for UFortRewardExpeditionData::Expedition");

// /Script/SaveTheWorldUI.FortRewardExpeditionWidget
// Kind: Class; super: FortRewardNotificationSubWidget
class UFortRewardExpeditionWidget
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    FMulticastInlineDelegate OnMcpError; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortRewardExpeditionWidget, OnMcpError) == 856, "Offset mismatch for UFortRewardExpeditionWidget::OnMcpError");

// /Script/SaveTheWorldUI.FortRewardGiftBoxData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardGiftBoxData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* GiftBox; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardGiftBoxData, GiftBox) == 48, "Offset mismatch for UFortRewardGiftBoxData::GiftBox");

// /Script/SaveTheWorldUI.FortRewardInfoButton
// Kind: Class; super: CommonButtonBase
class UFortRewardInfoButton
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* ItemCardPanel; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemCardSize; // 0x15B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisplayAsRewardCard; // 0x15B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x15B2
    void* ItemInstance; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardInfoButton, ItemCardPanel) == 5544, "Offset mismatch for UFortRewardInfoButton::ItemCardPanel");
static_assert(offsetof(UFortRewardInfoButton, ItemCardSize) == 5552, "Offset mismatch for UFortRewardInfoButton::ItemCardSize");
static_assert(offsetof(UFortRewardInfoButton, bDisplayAsRewardCard) == 5553, "Offset mismatch for UFortRewardInfoButton::bDisplayAsRewardCard");
static_assert(offsetof(UFortRewardInfoButton, ItemInstance) == 5560, "Offset mismatch for UFortRewardInfoButton::ItemInstance");

// /Script/SaveTheWorldUI.FortRewardInfoWidget
// Kind: Class; super: CommonUserWidget
class UFortRewardInfoWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* RewardListWidget; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RewardWidgetPadding[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0348 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0349 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShowDescription; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowItemInteraction; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::int32_t MaxNumRewardsShown; // 0x034C (Size: 0x4, Type: IntProperty)
    void* OrWidgetType; // 0x0350 (Size: 0x8, Type: ClassProperty)
    void* RewardInfoButtonType; // 0x0358 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0360
    void* ButtonGroup; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardInfoWidget, RewardListWidget) == 816, "Offset mismatch for UFortRewardInfoWidget::RewardListWidget");
static_assert(offsetof(UFortRewardInfoWidget, RewardWidgetPadding) == 824, "Offset mismatch for UFortRewardInfoWidget::RewardWidgetPadding");
static_assert(offsetof(UFortRewardInfoWidget, HorizontalAlignment) == 840, "Offset mismatch for UFortRewardInfoWidget::HorizontalAlignment");
static_assert(offsetof(UFortRewardInfoWidget, VerticalAlignment) == 841, "Offset mismatch for UFortRewardInfoWidget::VerticalAlignment");
static_assert(offsetof(UFortRewardInfoWidget, bShowDescription) == 842, "Offset mismatch for UFortRewardInfoWidget::bShowDescription");
static_assert(offsetof(UFortRewardInfoWidget, bAllowItemInteraction) == 843, "Offset mismatch for UFortRewardInfoWidget::bAllowItemInteraction");
static_assert(offsetof(UFortRewardInfoWidget, MaxNumRewardsShown) == 844, "Offset mismatch for UFortRewardInfoWidget::MaxNumRewardsShown");
static_assert(offsetof(UFortRewardInfoWidget, OrWidgetType) == 848, "Offset mismatch for UFortRewardInfoWidget::OrWidgetType");
static_assert(offsetof(UFortRewardInfoWidget, RewardInfoButtonType) == 856, "Offset mismatch for UFortRewardInfoWidget::RewardInfoButtonType");
static_assert(offsetof(UFortRewardInfoWidget, ButtonGroup) == 896, "Offset mismatch for UFortRewardInfoWidget::ButtonGroup");

// /Script/SaveTheWorldUI.FortRewardItemCacheData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardItemCacheData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ItemCache; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardItemCacheData, ItemCache) == 48, "Offset mismatch for UFortRewardItemCacheData::ItemCache");

// /Script/SaveTheWorldUI.FortRewardMissionAlertData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardMissionAlertData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RewardType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRewardMissionAlertData, RewardType) == 40, "Offset mismatch for UFortRewardMissionAlertData::RewardType");

// /Script/SaveTheWorldUI.FortRewardMissionData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardMissionData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RewardType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRewardMissionData, RewardType) == 40, "Offset mismatch for UFortRewardMissionData::RewardType");

// /Script/SaveTheWorldUI.FortRewardNewQuestWidget
// Kind: Class; super: FortRewardNotificationSubWidget
class UFortRewardNewQuestWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnTransitionInComplete; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTransitionOutComplete; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ParentWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardNewQuestWidget, OnTransitionInComplete) == 816, "Offset mismatch for UFortRewardNewQuestWidget::OnTransitionInComplete");
static_assert(offsetof(UFortRewardNewQuestWidget, OnTransitionOutComplete) == 832, "Offset mismatch for UFortRewardNewQuestWidget::OnTransitionOutComplete");
static_assert(offsetof(UFortRewardNewQuestWidget, ParentWidget) == 848, "Offset mismatch for UFortRewardNewQuestWidget::ParentWidget");

// /Script/SaveTheWorldUI.FortRewardNotificationData
// Kind: Class; super: Object
class UFortRewardNotificationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RewardType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRewardNotificationData, RewardType) == 40, "Offset mismatch for UFortRewardNotificationData::RewardType");

// /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
// Kind: Class; super: CommonUserWidget
class UFortRewardNotificationSubWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnTransitionInComplete; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTransitionOutComplete; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ParentWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardNotificationSubWidget, OnTransitionInComplete) == 816, "Offset mismatch for UFortRewardNotificationSubWidget::OnTransitionInComplete");
static_assert(offsetof(UFortRewardNotificationSubWidget, OnTransitionOutComplete) == 832, "Offset mismatch for UFortRewardNotificationSubWidget::OnTransitionOutComplete");
static_assert(offsetof(UFortRewardNotificationSubWidget, ParentWidget) == 848, "Offset mismatch for UFortRewardNotificationSubWidget::ParentWidget");

// /Script/SaveTheWorldUI.FortRewardNotificationWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortRewardNotificationWidget
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t MulchConfirmationModalClass[0x20]; // 0x0570 (Size: 0x20, Type: SoftClassProperty)
    void* MulchConfirmationModal; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* OverlayMain; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SwipeDetector[0xA8]; // 0x05A0 (Size: 0xA8, Type: StructProperty)
    TArray<void*> NotificationDataList; // 0x0648 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0658
    std::uint8_t PrimaryContentSetup[0x1]; // 0x0674 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRewardNotificationWidget, MulchConfirmationModalClass) == 1392, "Offset mismatch for UFortRewardNotificationWidget::MulchConfirmationModalClass");
static_assert(offsetof(UFortRewardNotificationWidget, MulchConfirmationModal) == 1424, "Offset mismatch for UFortRewardNotificationWidget::MulchConfirmationModal");
static_assert(offsetof(UFortRewardNotificationWidget, OverlayMain) == 1432, "Offset mismatch for UFortRewardNotificationWidget::OverlayMain");
static_assert(offsetof(UFortRewardNotificationWidget, SwipeDetector) == 1440, "Offset mismatch for UFortRewardNotificationWidget::SwipeDetector");
static_assert(offsetof(UFortRewardNotificationWidget, NotificationDataList) == 1608, "Offset mismatch for UFortRewardNotificationWidget::NotificationDataList");
static_assert(offsetof(UFortRewardNotificationWidget, PrimaryContentSetup) == 1652, "Offset mismatch for UFortRewardNotificationWidget::PrimaryContentSetup");

// /Script/SaveTheWorldUI.FortRewardPeopleXPDistributionData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardPeopleXPDistributionData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RewardType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRewardPeopleXPDistributionData, RewardType) == 40, "Offset mismatch for UFortRewardPeopleXPDistributionData::RewardType");

// /Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardPhoenixLevelUpData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t PhoenixLevel; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> Rewards; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortRewardPhoenixLevelUpData, PhoenixLevel) == 48, "Offset mismatch for UFortRewardPhoenixLevelUpData::PhoenixLevel");
static_assert(offsetof(UFortRewardPhoenixLevelUpData, Rewards) == 56, "Offset mismatch for UFortRewardPhoenixLevelUpData::Rewards");

// /Script/SaveTheWorldUI.FortRewardQuestData
// Kind: Class; super: FortRewardNotificationData
class UFortRewardQuestData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Quest; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRewardQuestData, Quest) == 48, "Offset mismatch for UFortRewardQuestData::Quest");

// /Script/SaveTheWorldUI.FortRootViewportLayout_STW
// Kind: Class; super: FortRootViewportLayout
class UFortRootViewportLayout_STW
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* TalkingHead; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRootViewportLayout_STW, TalkingHead) == 1440, "Offset mismatch for UFortRootViewportLayout_STW::TalkingHead");

// /Script/SaveTheWorldUI.FortSTWUIData
// Kind: Class; super: FortSTWUIDataBase
class UFortSTWUIData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UpgradesDisplayDataTable[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UnlockedSquadSlotBorderMultiSizeBrush[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LockedSquadSlotBorderMultiSizeBrush[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ReadOnlySquadSlotBorderMultiSizeBrush; // 0x0088 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t GamepadConflictDialogIcon[0xB0]; // 0x00B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t KeyboardConflictDialogIcon[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSTWUIData, UpgradesDisplayDataTable) == 40, "Offset mismatch for UFortSTWUIData::UpgradesDisplayDataTable");
static_assert(offsetof(UFortSTWUIData, UnlockedSquadSlotBorderMultiSizeBrush) == 72, "Offset mismatch for UFortSTWUIData::UnlockedSquadSlotBorderMultiSizeBrush");
static_assert(offsetof(UFortSTWUIData, LockedSquadSlotBorderMultiSizeBrush) == 104, "Offset mismatch for UFortSTWUIData::LockedSquadSlotBorderMultiSizeBrush");
static_assert(offsetof(UFortSTWUIData, ReadOnlySquadSlotBorderMultiSizeBrush) == 136, "Offset mismatch for UFortSTWUIData::ReadOnlySquadSlotBorderMultiSizeBrush");
static_assert(offsetof(UFortSTWUIData, GamepadConflictDialogIcon) == 176, "Offset mismatch for UFortSTWUIData::GamepadConflictDialogIcon");
static_assert(offsetof(UFortSTWUIData, KeyboardConflictDialogIcon) == 352, "Offset mismatch for UFortSTWUIData::KeyboardConflictDialogIcon");

// /Script/SaveTheWorldUI.FortScaleboxUpdater
// Kind: Class; super: CommonUserWidget
class UFortScaleboxUpdater
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ScaleBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortScaleboxUpdater, ScaleBox) == 816, "Offset mismatch for UFortScaleboxUpdater::ScaleBox");

// /Script/SaveTheWorldUI.FortSelectableAttributeListItem
// Kind: Class; super: CommonButtonBase
class UFortSelectableAttributeListItem
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* AttributeListItem; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSelectableAttributeListItem, AttributeListItem) == 5544, "Offset mismatch for UFortSelectableAttributeListItem::AttributeListItem");

// /Script/SaveTheWorldUI.FortSquadCommsPicker_STW
// Kind: Class; super: CommonActivatableWidget
class UFortSquadCommsPicker_STW
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* PickerOverlaySquadComms; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_Label; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuickActions; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Send; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04C8
    TArray<void*> Ordering; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnReleaseSelectInputAction[0x10]; // 0x04E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CloseInputAction[0x10]; // 0x04F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfirmSound[0x20]; // 0x0508 (Size: 0x20, Type: SoftObjectProperty)
    void* SquadCommsBank; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrimaryContentSetup[0x8]; // 0x0530 (Size: 0x8, Type: StructProperty)
    TArray<void*> QuickSelectBindings; // 0x0538 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSquadCommsPicker_STW, PickerOverlaySquadComms) == 1192, "Offset mismatch for UFortSquadCommsPicker_STW::PickerOverlaySquadComms");
static_assert(offsetof(UFortSquadCommsPicker_STW, Text_Label) == 1200, "Offset mismatch for UFortSquadCommsPicker_STW::Text_Label");
static_assert(offsetof(UFortSquadCommsPicker_STW, Text_QuickActions) == 1208, "Offset mismatch for UFortSquadCommsPicker_STW::Text_QuickActions");
static_assert(offsetof(UFortSquadCommsPicker_STW, Button_Send) == 1216, "Offset mismatch for UFortSquadCommsPicker_STW::Button_Send");
static_assert(offsetof(UFortSquadCommsPicker_STW, Ordering) == 1240, "Offset mismatch for UFortSquadCommsPicker_STW::Ordering");
static_assert(offsetof(UFortSquadCommsPicker_STW, OnReleaseSelectInputAction) == 1256, "Offset mismatch for UFortSquadCommsPicker_STW::OnReleaseSelectInputAction");
static_assert(offsetof(UFortSquadCommsPicker_STW, CloseInputAction) == 1272, "Offset mismatch for UFortSquadCommsPicker_STW::CloseInputAction");
static_assert(offsetof(UFortSquadCommsPicker_STW, ConfirmSound) == 1288, "Offset mismatch for UFortSquadCommsPicker_STW::ConfirmSound");
static_assert(offsetof(UFortSquadCommsPicker_STW, SquadCommsBank) == 1320, "Offset mismatch for UFortSquadCommsPicker_STW::SquadCommsBank");
static_assert(offsetof(UFortSquadCommsPicker_STW, PrimaryContentSetup) == 1328, "Offset mismatch for UFortSquadCommsPicker_STW::PrimaryContentSetup");
static_assert(offsetof(UFortSquadCommsPicker_STW, QuickSelectBindings) == 1336, "Offset mismatch for UFortSquadCommsPicker_STW::QuickSelectBindings");

// /Script/SaveTheWorldUI.FortSquadIcon
// Kind: Class; super: CommonUserWidget
class UFortSquadIcon
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0330 (Size: 0x4, Type: NameProperty)
    std::uint8_t ImageSize; // 0x0334 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0335
    void* Icon; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadIcon, Name) == 816, "Offset mismatch for UFortSquadIcon::Name");
static_assert(offsetof(UFortSquadIcon, ImageSize) == 820, "Offset mismatch for UFortSquadIcon::ImageSize");
static_assert(offsetof(UFortSquadIcon, Icon) == 824, "Offset mismatch for UFortSquadIcon::Icon");

// /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
// Kind: Class; super: CommonUserWidget
class UFortSquadLandingPageDefenderSquadDetails
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* OutpostName; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* PowerRating; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetails, OutpostName) == 816, "Offset mismatch for UFortSquadLandingPageDefenderSquadDetails::OutpostName");
static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetails, PowerRating) == 824, "Offset mismatch for UFortSquadLandingPageDefenderSquadDetails::PowerRating");

// /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
// Kind: Class; super: CommonUserWidget
class UFortSquadLandingPageDefenderSquadDetailsLocked
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* OutpostName; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetailsLocked, OutpostName) == 816, "Offset mismatch for UFortSquadLandingPageDefenderSquadDetailsLocked::OutpostName");

// /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary
// Kind: Class; super: CommonUserWidget
class UFortSquadLandingPageDefenderSummary
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSquadLandingPageDefenderSummary, bDisplayInActionBar) == 776, "Offset mismatch for UFortSquadLandingPageDefenderSummary::bDisplayInActionBar");
static_assert(offsetof(UFortSquadLandingPageDefenderSummary, bConsumePointerInput) == 777, "Offset mismatch for UFortSquadLandingPageDefenderSummary::bConsumePointerInput");

// /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
// Kind: Class; super: CommonUserWidget
class UFortSquadLandingPageSurvivorSummary
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* FortitudeStatValue; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* OffenseStatValue; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* ResistanceStatValue; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* TechStatValue; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, FortitudeStatValue) == 816, "Offset mismatch for UFortSquadLandingPageSurvivorSummary::FortitudeStatValue");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, OffenseStatValue) == 824, "Offset mismatch for UFortSquadLandingPageSurvivorSummary::OffenseStatValue");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, ResistanceStatValue) == 832, "Offset mismatch for UFortSquadLandingPageSurvivorSummary::ResistanceStatValue");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, TechStatValue) == 840, "Offset mismatch for UFortSquadLandingPageSurvivorSummary::TechStatValue");

// /Script/SaveTheWorldUI.FortSquadManagementItemViewContextBase
// Kind: Class; super: Object
class UFortSquadManagementItemViewContextBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortSquadManagementScreenBase
// Kind: Class; super: FortActivatablePanel
class UFortSquadManagementScreenBase
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    std::uint8_t bReadOnlyModeWIFE; // 0x0590 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0591
    void* SquadStatsWidget; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* SquadSlotsView; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* SelectedSlotDetailsPanel; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* SelectedSlotItemPicker; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InspectInputActionRowHandle[0x10]; // 0x05B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ManageInputActionRowHandle[0x10]; // 0x05C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputActionRowHandle[0x10]; // 0x05D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t InventoryInputActionRowHandle[0x10]; // 0x05E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t InventoryCloseInputActionRowHandle[0x10]; // 0x05F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClosePickerInputActionRowHandle[0x10]; // 0x0608 (Size: 0x10, Type: StructProperty)
    std::uint8_t SelectPickerSlotActionRowHandle[0x10]; // 0x0618 (Size: 0x10, Type: StructProperty)
    std::uint8_t CyclePickerSortActionRowHandle[0x10]; // 0x0628 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreviousSquadActionRowHandle[0x10]; // 0x0638 (Size: 0x10, Type: StructProperty)
    std::uint8_t NextSquadActionRowHandle[0x10]; // 0x0648 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearAllActionRowHandle[0x10]; // 0x0658 (Size: 0x10, Type: StructProperty)
    std::uint8_t HelpScreenActionRowHandle[0x10]; // 0x0668 (Size: 0x10, Type: StructProperty)
    void* DisableAutoSlottingToClearSquadPromptAction; // 0x0678 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0680
    void* ItemViewContext_SquadSlotsView; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* ItemViewContext_SquadSlotItemPicker; // 0x0698 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadManagementScreenBase, bReadOnlyModeWIFE) == 1424, "Offset mismatch for UFortSquadManagementScreenBase::bReadOnlyModeWIFE");
static_assert(offsetof(UFortSquadManagementScreenBase, SquadStatsWidget) == 1432, "Offset mismatch for UFortSquadManagementScreenBase::SquadStatsWidget");
static_assert(offsetof(UFortSquadManagementScreenBase, SquadSlotsView) == 1440, "Offset mismatch for UFortSquadManagementScreenBase::SquadSlotsView");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectedSlotDetailsPanel) == 1448, "Offset mismatch for UFortSquadManagementScreenBase::SelectedSlotDetailsPanel");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectedSlotItemPicker) == 1456, "Offset mismatch for UFortSquadManagementScreenBase::SelectedSlotItemPicker");
static_assert(offsetof(UFortSquadManagementScreenBase, InspectInputActionRowHandle) == 1464, "Offset mismatch for UFortSquadManagementScreenBase::InspectInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, ManageInputActionRowHandle) == 1480, "Offset mismatch for UFortSquadManagementScreenBase::ManageInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, BackInputActionRowHandle) == 1496, "Offset mismatch for UFortSquadManagementScreenBase::BackInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, InventoryInputActionRowHandle) == 1512, "Offset mismatch for UFortSquadManagementScreenBase::InventoryInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, InventoryCloseInputActionRowHandle) == 1528, "Offset mismatch for UFortSquadManagementScreenBase::InventoryCloseInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, ClosePickerInputActionRowHandle) == 1544, "Offset mismatch for UFortSquadManagementScreenBase::ClosePickerInputActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectPickerSlotActionRowHandle) == 1560, "Offset mismatch for UFortSquadManagementScreenBase::SelectPickerSlotActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, CyclePickerSortActionRowHandle) == 1576, "Offset mismatch for UFortSquadManagementScreenBase::CyclePickerSortActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, PreviousSquadActionRowHandle) == 1592, "Offset mismatch for UFortSquadManagementScreenBase::PreviousSquadActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, NextSquadActionRowHandle) == 1608, "Offset mismatch for UFortSquadManagementScreenBase::NextSquadActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, ClearAllActionRowHandle) == 1624, "Offset mismatch for UFortSquadManagementScreenBase::ClearAllActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, HelpScreenActionRowHandle) == 1640, "Offset mismatch for UFortSquadManagementScreenBase::HelpScreenActionRowHandle");
static_assert(offsetof(UFortSquadManagementScreenBase, DisableAutoSlottingToClearSquadPromptAction) == 1656, "Offset mismatch for UFortSquadManagementScreenBase::DisableAutoSlottingToClearSquadPromptAction");
static_assert(offsetof(UFortSquadManagementScreenBase, ItemViewContext_SquadSlotsView) == 1680, "Offset mismatch for UFortSquadManagementScreenBase::ItemViewContext_SquadSlotsView");
static_assert(offsetof(UFortSquadManagementScreenBase, ItemViewContext_SquadSlotItemPicker) == 1688, "Offset mismatch for UFortSquadManagementScreenBase::ItemViewContext_SquadSlotItemPicker");

// /Script/SaveTheWorldUI.FortSquadSelectorButton
// Kind: Class; super: CommonButtonLegacy
class UFortSquadSelectorButton
{
public:
    std::uint8_t Pad_0000[0x1600]; // 0x0000
    std::int32_t SquadSlotIndex; // 0x1600 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSquadSelectorButton, SquadSlotIndex) == 5632, "Offset mismatch for UFortSquadSelectorButton::SquadSlotIndex");

// /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel
// Kind: Class; super: CommonUserWidget
class UFortSquadSlotDetailsPanel
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    void* ItemDetailsPanel; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> ItemViewContext; // 0x0358 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortSquadSlotDetailsPanel, ItemDetailsPanel) == 848, "Offset mismatch for UFortSquadSlotDetailsPanel::ItemDetailsPanel");
static_assert(offsetof(UFortSquadSlotDetailsPanel, ItemViewContext) == 856, "Offset mismatch for UFortSquadSlotDetailsPanel::ItemViewContext");

// /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
// Kind: Class; super: FortItemDetailElementWidget
class UFortSquadSlotItemDetailElementWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> ItemToDetail; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ItemToCompareWith; // 0x0338 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bShouldPreviewUpgradingItem; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0341
    std::int32_t UpgradeLevelDelta; // 0x0344 (Size: 0x4, Type: IntProperty)
    TScriptInterface<void> ItemViewContext; // 0x0348 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t CurrentInspectMode; // 0x0358 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0359
    std::int32_t QuantityOverride; // 0x035C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsUpdatingSuspended; // 0x0360 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, ItemToDetail) == 816, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::ItemToDetail");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, ItemToCompareWith) == 824, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::ItemToCompareWith");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, bShouldPreviewUpgradingItem) == 832, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::bShouldPreviewUpgradingItem");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, UpgradeLevelDelta) == 836, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::UpgradeLevelDelta");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, ItemViewContext) == 840, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::ItemViewContext");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, CurrentInspectMode) == 856, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::CurrentInspectMode");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, QuantityOverride) == 860, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::QuantityOverride");
static_assert(offsetof(UFortSquadSlotItemDetailElementWidget, bIsUpdatingSuspended) == 864, "Offset mismatch for UFortSquadSlotItemDetailElementWidget::bIsUpdatingSuspended");

// /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
// Kind: Class; super: FortItemDetailsHostPanel
class UFortSquadSlotItemDetailsHostPanel
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnItemChanged; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> ItemToDetail; // 0x0340 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0348
    TWeakObjectPtr<void> ItemToCompareWith; // 0x0358 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0360
    std::uint8_t bShouldPreviewUpgradingItem; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0371
    std::int32_t UpgradeLevelDelta; // 0x0374 (Size: 0x4, Type: IntProperty)
    void* ScrollBox; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* DetailsContainerSlotWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* HighRarityBorder; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> ItemViewContext; // 0x0390 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t CurrentInspectMode; // 0x03A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x27]; // 0x03A1
    std::int32_t QuantityOverride; // 0x03C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x03CC
    void* ItemToDetailLoadingWrapper; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* ItemToCompareLoadingWrapper; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* ItemToDetailLoadGuard; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* ItemToCompareLoadGuard; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Border_Details; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* Image_RechargeableIcon; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAsyncLoadTooltipData; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpdatingSuspended; // 0x0401 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, OnItemChanged) == 816, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::OnItemChanged");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToDetail) == 832, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToDetail");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToCompareWith) == 856, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToCompareWith");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, bShouldPreviewUpgradingItem) == 880, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::bShouldPreviewUpgradingItem");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, UpgradeLevelDelta) == 884, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::UpgradeLevelDelta");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ScrollBox) == 888, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ScrollBox");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, DetailsContainerSlotWidget) == 896, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::DetailsContainerSlotWidget");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, HighRarityBorder) == 904, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::HighRarityBorder");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemViewContext) == 912, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemViewContext");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, CurrentInspectMode) == 928, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::CurrentInspectMode");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, QuantityOverride) == 968, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::QuantityOverride");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToDetailLoadingWrapper) == 976, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToDetailLoadingWrapper");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToCompareLoadingWrapper) == 984, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToCompareLoadingWrapper");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToDetailLoadGuard) == 992, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToDetailLoadGuard");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, ItemToCompareLoadGuard) == 1000, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::ItemToCompareLoadGuard");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, Border_Details) == 1008, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::Border_Details");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, Image_RechargeableIcon) == 1016, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::Image_RechargeableIcon");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, bAsyncLoadTooltipData) == 1024, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::bAsyncLoadTooltipData");
static_assert(offsetof(UFortSquadSlotItemDetailsHostPanel, bIsUpdatingSuspended) == 1025, "Offset mismatch for UFortSquadSlotItemDetailsHostPanel::bIsUpdatingSuspended");

// /Script/SaveTheWorldUI.FortSquadSlotItemPicker
// Kind: Class; super: FortItemPickerBase
class UFortSquadSlotItemPicker
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FMulticastInlineDelegate OnSortChanged; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortSquadSlotItemPicker, OnSortChanged) == 1184, "Offset mismatch for UFortSquadSlotItemPicker::OnSortChanged");

// /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
// Kind: Class; super: FortItemTileButton
class UFortSquadSlotItemPickerTileButton
{
public:
    std::uint8_t Pad_0000[0x1600]; // 0x0000
    void* ItemWidget; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* ItemWidgetSTW; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> Item; // 0x1610 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ItemCardSize; // 0x1618 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsRewardCard; // 0x1619 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x161A
    TScriptInterface<void> ItemViewContext; // 0x1620 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortSquadSlotItemPickerTileButton, ItemWidget) == 5632, "Offset mismatch for UFortSquadSlotItemPickerTileButton::ItemWidget");
static_assert(offsetof(UFortSquadSlotItemPickerTileButton, ItemWidgetSTW) == 5640, "Offset mismatch for UFortSquadSlotItemPickerTileButton::ItemWidgetSTW");
static_assert(offsetof(UFortSquadSlotItemPickerTileButton, Item) == 5648, "Offset mismatch for UFortSquadSlotItemPickerTileButton::Item");
static_assert(offsetof(UFortSquadSlotItemPickerTileButton, ItemCardSize) == 5656, "Offset mismatch for UFortSquadSlotItemPickerTileButton::ItemCardSize");
static_assert(offsetof(UFortSquadSlotItemPickerTileButton, IsRewardCard) == 5657, "Offset mismatch for UFortSquadSlotItemPickerTileButton::IsRewardCard");
static_assert(offsetof(UFortSquadSlotItemPickerTileButton, ItemViewContext) == 5664, "Offset mismatch for UFortSquadSlotItemPickerTileButton::ItemViewContext");

// /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
// Kind: Class; super: CommonButtonLegacy
class UFortSquadSlotSelectorButton
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x1610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x1620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SquadSlotWidget; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenuAnchor; // 0x1638 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> ItemViewContext; // 0x1640 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0001[0x18]; // 0x1650
    void* PopupMenu; // 0x1668 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadSlotSelectorButton, OnRequestOpenSquadSlotEvent) == 5648, "Offset mismatch for UFortSquadSlotSelectorButton::OnRequestOpenSquadSlotEvent");
static_assert(offsetof(UFortSquadSlotSelectorButton, OnRequestViewInAllEvent) == 5664, "Offset mismatch for UFortSquadSlotSelectorButton::OnRequestViewInAllEvent");
static_assert(offsetof(UFortSquadSlotSelectorButton, SquadSlotWidget) == 5680, "Offset mismatch for UFortSquadSlotSelectorButton::SquadSlotWidget");
static_assert(offsetof(UFortSquadSlotSelectorButton, PopupMenuAnchor) == 5688, "Offset mismatch for UFortSquadSlotSelectorButton::PopupMenuAnchor");
static_assert(offsetof(UFortSquadSlotSelectorButton, ItemViewContext) == 5696, "Offset mismatch for UFortSquadSlotSelectorButton::ItemViewContext");
static_assert(offsetof(UFortSquadSlotSelectorButton, PopupMenu) == 5736, "Offset mismatch for UFortSquadSlotSelectorButton::PopupMenu");

// /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
// Kind: Class; super: FortPopupMenu_Legacy
class UFortSquadSlotSelectorPopupMenu
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    std::uint8_t bReadOnlyModeWIFE; // 0x0580 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSquadSlotSelectorPopupMenu, bReadOnlyModeWIFE) == 1408, "Offset mismatch for UFortSquadSlotSelectorPopupMenu::bReadOnlyModeWIFE");

// /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// Kind: Class; super: FortSquadSlotItemDetailElementWidget
class UFortSquadSlotSurvivorTraitMatchesDetailWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t IsSquadLeaderSlot; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LeaderMatchesSquadType; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x03AA
    std::int32_t SubordinatePersonalityMatchCount; // 0x03AC (Size: 0x4, Type: IntProperty)
    std::uint8_t MatchesLeaderPersonality; // 0x03B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x03B1
    std::int32_t MatchingSetBonusCount; // 0x03B4 (Size: 0x4, Type: IntProperty)
    std::int32_t SetBonusSize; // 0x03B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, IsSquadLeaderSlot) == 936, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::IsSquadLeaderSlot");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, LeaderMatchesSquadType) == 937, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::LeaderMatchesSquadType");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, SubordinatePersonalityMatchCount) == 940, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::SubordinatePersonalityMatchCount");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, MatchesLeaderPersonality) == 944, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::MatchesLeaderPersonality");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, MatchingSetBonusCount) == 948, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::MatchingSetBonusCount");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, SetBonusSize) == 952, "Offset mismatch for UFortSquadSlotSurvivorTraitMatchesDetailWidget::SetBonusSize");

// /Script/SaveTheWorldUI.FortSquadSlotWidget
// Kind: Class; super: Widget
class UFortSquadSlotWidget
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    std::uint8_t ItemCardSize; // 0x0188 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3F]; // 0x0189
    void* SlottedItemCard; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01D0
    TScriptInterface<void> ItemViewContext; // 0x01D8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortSquadSlotWidget, ItemCardSize) == 392, "Offset mismatch for UFortSquadSlotWidget::ItemCardSize");
static_assert(offsetof(UFortSquadSlotWidget, SlottedItemCard) == 456, "Offset mismatch for UFortSquadSlotWidget::SlottedItemCard");
static_assert(offsetof(UFortSquadSlotWidget, ItemViewContext) == 472, "Offset mismatch for UFortSquadSlotWidget::ItemViewContext");

// /Script/SaveTheWorldUI.FortSquadSlotsView
// Kind: Class; super: CommonUserWidget
class UFortSquadSlotsView
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    FMulticastInlineDelegate OnDifferentSquadSlotSelectedEvent; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bReadOnlyModeWIFE; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0371
    std::int32_t IndexOfSelectedSquadSlot; // 0x0374 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSlotButtonsRequireSelection; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInPreviewMode; // 0x0379 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x037A
    TMap<void*, void*> SquadSlotSortTypesMap; // 0x0380 (Size: 0x10, Type: MapProperty)
    void* DisableAutoSlottingToOpenSquadSlotPromptAction; // 0x0390 (Size: 0x8, Type: ClassProperty)
    void* SquadSlotButtonGroup; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x30]; // 0x03A0
    TScriptInterface<void> ItemViewContext; // 0x03D0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortSquadSlotsView, OnDifferentSquadSlotSelectedEvent) == 832, "Offset mismatch for UFortSquadSlotsView::OnDifferentSquadSlotSelectedEvent");
static_assert(offsetof(UFortSquadSlotsView, OnRequestOpenSquadSlotEvent) == 848, "Offset mismatch for UFortSquadSlotsView::OnRequestOpenSquadSlotEvent");
static_assert(offsetof(UFortSquadSlotsView, OnRequestViewInAllEvent) == 864, "Offset mismatch for UFortSquadSlotsView::OnRequestViewInAllEvent");
static_assert(offsetof(UFortSquadSlotsView, bReadOnlyModeWIFE) == 880, "Offset mismatch for UFortSquadSlotsView::bReadOnlyModeWIFE");
static_assert(offsetof(UFortSquadSlotsView, IndexOfSelectedSquadSlot) == 884, "Offset mismatch for UFortSquadSlotsView::IndexOfSelectedSquadSlot");
static_assert(offsetof(UFortSquadSlotsView, bSlotButtonsRequireSelection) == 888, "Offset mismatch for UFortSquadSlotsView::bSlotButtonsRequireSelection");
static_assert(offsetof(UFortSquadSlotsView, bInPreviewMode) == 889, "Offset mismatch for UFortSquadSlotsView::bInPreviewMode");
static_assert(offsetof(UFortSquadSlotsView, SquadSlotSortTypesMap) == 896, "Offset mismatch for UFortSquadSlotsView::SquadSlotSortTypesMap");
static_assert(offsetof(UFortSquadSlotsView, DisableAutoSlottingToOpenSquadSlotPromptAction) == 912, "Offset mismatch for UFortSquadSlotsView::DisableAutoSlottingToOpenSquadSlotPromptAction");
static_assert(offsetof(UFortSquadSlotsView, SquadSlotButtonGroup) == 920, "Offset mismatch for UFortSquadSlotsView::SquadSlotButtonGroup");
static_assert(offsetof(UFortSquadSlotsView, ItemViewContext) == 976, "Offset mismatch for UFortSquadSlotsView::ItemViewContext");

// /Script/SaveTheWorldUI.FortSquadStatDetailsWidget
// Kind: Class; super: CommonUserWidget
class UFortSquadStatDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSquadStatDetailsWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortSquadStatDetailsWidget::bDisplayInActionBar");
static_assert(offsetof(UFortSquadStatDetailsWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortSquadStatDetailsWidget::bConsumePointerInput");

// /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
// Kind: Class; super: CommonUserWidget
class UFortSquadStatValueWithIcon
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t Attribute[0x38]; // 0x0330 (Size: 0x38, Type: StructProperty)
    std::uint8_t TeamAttribute[0x38]; // 0x0368 (Size: 0x38, Type: StructProperty)
    std::uint8_t ImageSize; // 0x03A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A1
    void* Value; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadStatValueWithIcon, Attribute) == 816, "Offset mismatch for UFortSquadStatValueWithIcon::Attribute");
static_assert(offsetof(UFortSquadStatValueWithIcon, TeamAttribute) == 872, "Offset mismatch for UFortSquadStatValueWithIcon::TeamAttribute");
static_assert(offsetof(UFortSquadStatValueWithIcon, ImageSize) == 928, "Offset mismatch for UFortSquadStatValueWithIcon::ImageSize");
static_assert(offsetof(UFortSquadStatValueWithIcon, Value) == 936, "Offset mismatch for UFortSquadStatValueWithIcon::Value");
static_assert(offsetof(UFortSquadStatValueWithIcon, Icon) == 944, "Offset mismatch for UFortSquadStatValueWithIcon::Icon");

// /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
// Kind: Class; super: CommonUserWidget
class UFortSquadStatsWidgetBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> OverviewStats; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    void* DetailedStats; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSquadStatsWidgetBase, OverviewStats) == 816, "Offset mismatch for UFortSquadStatsWidgetBase::OverviewStats");
static_assert(offsetof(UFortSquadStatsWidgetBase, DetailedStats) == 832, "Offset mismatch for UFortSquadStatsWidgetBase::DetailedStats");

// /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
// Kind: Class; super: FortActivatablePanel
class UFortSquadTypeLandingPageBase
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    std::uint8_t bReadOnlyModeWIFE; // 0x0580 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SquadType; // 0x0581 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0582
    std::uint8_t BackInputActionRowHandle[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    std::uint8_t ItemManagementScreenFilter; // 0x0598 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0599
    TArray<void*> SquadSelectorButtons; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSquadTypeLandingPageBase, bReadOnlyModeWIFE) == 1408, "Offset mismatch for UFortSquadTypeLandingPageBase::bReadOnlyModeWIFE");
static_assert(offsetof(UFortSquadTypeLandingPageBase, SquadType) == 1409, "Offset mismatch for UFortSquadTypeLandingPageBase::SquadType");
static_assert(offsetof(UFortSquadTypeLandingPageBase, BackInputActionRowHandle) == 1416, "Offset mismatch for UFortSquadTypeLandingPageBase::BackInputActionRowHandle");
static_assert(offsetof(UFortSquadTypeLandingPageBase, ItemManagementScreenFilter) == 1432, "Offset mismatch for UFortSquadTypeLandingPageBase::ItemManagementScreenFilter");
static_assert(offsetof(UFortSquadTypeLandingPageBase, SquadSelectorButtons) == 1440, "Offset mismatch for UFortSquadTypeLandingPageBase::SquadSelectorButtons");

// /Script/SaveTheWorldUI.FortStatIcon
// Kind: Class; super: CommonUserWidget
class UFortStatIcon
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t Attribute[0x38]; // 0x0330 (Size: 0x38, Type: StructProperty)
    std::uint8_t ImageSize; // 0x0368 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0369
    void* Icon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStatIcon, Attribute) == 816, "Offset mismatch for UFortStatIcon::Attribute");
static_assert(offsetof(UFortStatIcon, ImageSize) == 872, "Offset mismatch for UFortStatIcon::ImageSize");
static_assert(offsetof(UFortStatIcon, Icon) == 880, "Offset mismatch for UFortStatIcon::Icon");

// /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
// Kind: Class; super: CommonUserWidget
class UFortStatsOverviewDetailsBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> OverviewStats; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    void* DetailedStats; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStatsOverviewDetailsBase, OverviewStats) == 816, "Offset mismatch for UFortStatsOverviewDetailsBase::OverviewStats");
static_assert(offsetof(UFortStatsOverviewDetailsBase, DetailedStats) == 832, "Offset mismatch for UFortStatsOverviewDetailsBase::DetailedStats");

// /Script/SaveTheWorldUI.FortStoreOpeningCardPack
// Kind: Class; super: CommonActivatableWidget
class UFortStoreOpeningCardPack
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t CachedStoreState; // 0x04A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04A9
    void* Store_Summary; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedCards; // 0x04B8 (Size: 0x10, Type: ArrayProperty)
    void* CardItemWidgetType; // 0x04C8 (Size: 0x8, Type: ClassProperty)
    void* CardItemWidgetStyle; // 0x04D0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> CachedCardArraySinglePack; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedCardArrayMultiplePacks; // 0x04E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortStoreOpeningCardPack, CachedStoreState) == 1192, "Offset mismatch for UFortStoreOpeningCardPack::CachedStoreState");
static_assert(offsetof(UFortStoreOpeningCardPack, Store_Summary) == 1200, "Offset mismatch for UFortStoreOpeningCardPack::Store_Summary");
static_assert(offsetof(UFortStoreOpeningCardPack, CachedCards) == 1208, "Offset mismatch for UFortStoreOpeningCardPack::CachedCards");
static_assert(offsetof(UFortStoreOpeningCardPack, CardItemWidgetType) == 1224, "Offset mismatch for UFortStoreOpeningCardPack::CardItemWidgetType");
static_assert(offsetof(UFortStoreOpeningCardPack, CardItemWidgetStyle) == 1232, "Offset mismatch for UFortStoreOpeningCardPack::CardItemWidgetStyle");
static_assert(offsetof(UFortStoreOpeningCardPack, CachedCardArraySinglePack) == 1240, "Offset mismatch for UFortStoreOpeningCardPack::CachedCardArraySinglePack");
static_assert(offsetof(UFortStoreOpeningCardPack, CachedCardArrayMultiplePacks) == 1256, "Offset mismatch for UFortStoreOpeningCardPack::CachedCardArrayMultiplePacks");

// /Script/SaveTheWorldUI.FortStoreRootTabs
// Kind: Class; super: CommonActivatableWidget
class UFortStoreRootTabs
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    TMap<void*, void*> StoreTabsMap; // 0x04A0 (Size: 0x10, Type: MapProperty)
    void* TabsLoot; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStoreRootTabs, StoreTabsMap) == 1184, "Offset mismatch for UFortStoreRootTabs::StoreTabsMap");
static_assert(offsetof(UFortStoreRootTabs, TabsLoot) == 1200, "Offset mismatch for UFortStoreRootTabs::TabsLoot");

// /Script/SaveTheWorldUI.FortStoreSummary
// Kind: Class; super: CommonActivatableWidget
class UFortStoreSummary
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* MulchConfirmationModalClass; // 0x04A8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> StoreCardObjects; // 0x04B0 (Size: 0x10, Type: ArrayProperty)
    void* TileView; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x04C8
    void* MulchConfirmationModal; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStoreSummary, MulchConfirmationModalClass) == 1192, "Offset mismatch for UFortStoreSummary::MulchConfirmationModalClass");
static_assert(offsetof(UFortStoreSummary, StoreCardObjects) == 1200, "Offset mismatch for UFortStoreSummary::StoreCardObjects");
static_assert(offsetof(UFortStoreSummary, TileView) == 1216, "Offset mismatch for UFortStoreSummary::TileView");
static_assert(offsetof(UFortStoreSummary, MulchConfirmationModal) == 1248, "Offset mismatch for UFortStoreSummary::MulchConfirmationModal");

// /Script/SaveTheWorldUI.FortStoreSummaryItemButton
// Kind: Class; super: CommonButtonBase
class UFortStoreSummaryItemButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t HasAnItemMarkedForMulching; // 0x15A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2F]; // 0x15A1
    void* PopupMenuAnchor; // 0x15D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedCard[0x18]; // 0x15D8 (Size: 0x18, Type: StructProperty)
    void* StoreCardObject; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* InventoryContext; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStoreSummaryItemButton, HasAnItemMarkedForMulching) == 5536, "Offset mismatch for UFortStoreSummaryItemButton::HasAnItemMarkedForMulching");
static_assert(offsetof(UFortStoreSummaryItemButton, PopupMenuAnchor) == 5584, "Offset mismatch for UFortStoreSummaryItemButton::PopupMenuAnchor");
static_assert(offsetof(UFortStoreSummaryItemButton, CachedCard) == 5592, "Offset mismatch for UFortStoreSummaryItemButton::CachedCard");
static_assert(offsetof(UFortStoreSummaryItemButton, StoreCardObject) == 5616, "Offset mismatch for UFortStoreSummaryItemButton::StoreCardObject");
static_assert(offsetof(UFortStoreSummaryItemButton, InventoryContext) == 5624, "Offset mismatch for UFortStoreSummaryItemButton::InventoryContext");

// /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu
// Kind: Class; super: FortPopupMenu
class UFortStoreSummaryItemPopupMenu
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t bUseInputStack; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0561
    TWeakObjectPtr<void> OwningMenuAnchor; // 0x0564 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ContextProvidingObject; // 0x056C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortStoreSummaryItemPopupMenu, bUseInputStack) == 1376, "Offset mismatch for UFortStoreSummaryItemPopupMenu::bUseInputStack");
static_assert(offsetof(UFortStoreSummaryItemPopupMenu, OwningMenuAnchor) == 1380, "Offset mismatch for UFortStoreSummaryItemPopupMenu::OwningMenuAnchor");
static_assert(offsetof(UFortStoreSummaryItemPopupMenu, ContextProvidingObject) == 1388, "Offset mismatch for UFortStoreSummaryItemPopupMenu::ContextProvidingObject");

// /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
// Kind: Class; super: FortSquadManagementScreenBase
class UFortSurvivorSquadManagementScreen
{
public:
    std::uint8_t Pad_0000[0x6A0]; // 0x0000
    void* StatMatchesWidget; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSurvivorSquadManagementScreen, StatMatchesWidget) == 1696, "Offset mismatch for UFortSurvivorSquadManagementScreen::StatMatchesWidget");

// /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
// Kind: Class; super: FortSquadSelectorButton
class UFortSurvivorSquadSelectorButton
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    TArray<void*> FortStatAttributes; // 0x1610 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FortTeamStatAttributes; // 0x1620 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSurvivorSquadSelectorButton, FortStatAttributes) == 5648, "Offset mismatch for UFortSurvivorSquadSelectorButton::FortStatAttributes");
static_assert(offsetof(UFortSurvivorSquadSelectorButton, FortTeamStatAttributes) == 5664, "Offset mismatch for UFortSurvivorSquadSelectorButton::FortTeamStatAttributes");

// /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase
// Kind: Class; super: CommonUserWidget
class UFortSurvivorSquadStatMatchBase
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t StatMatch[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSurvivorSquadStatMatchBase, StatMatch) == 832, "Offset mismatch for UFortSurvivorSquadStatMatchBase::StatMatch");

// /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
// Kind: Class; super: FortSquadStatDetailsWidget
class UFortSurvivorSquadStatMatchesBase
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    void* StatMatchClass; // 0x0360 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSummaryView; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0369
    TArray<void*> StatMatches; // 0x0370 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, StatMatchClass) == 864, "Offset mismatch for UFortSurvivorSquadStatMatchesBase::StatMatchClass");
static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, bSummaryView) == 872, "Offset mismatch for UFortSurvivorSquadStatMatchesBase::bSummaryView");
static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, StatMatches) == 880, "Offset mismatch for UFortSurvivorSquadStatMatchesBase::StatMatches");

// /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
// Kind: Class; super: CommonUserWidget
class UFortSurvivorSquadSummaryStatItem
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ImageSize; // 0x0330 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0331
    void* Icon; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Value; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Name; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, ImageSize) == 816, "Offset mismatch for UFortSurvivorSquadSummaryStatItem::ImageSize");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Icon) == 824, "Offset mismatch for UFortSurvivorSquadSummaryStatItem::Icon");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Value) == 832, "Offset mismatch for UFortSurvivorSquadSummaryStatItem::Value");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Name) == 840, "Offset mismatch for UFortSurvivorSquadSummaryStatItem::Name");

// /Script/SaveTheWorldUI.FortTheaterSelect
// Kind: Class; super: CommonActivatableWidget
class UFortTheaterSelect
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* OverlayMain; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04B8
    void* DefaultRequiredCompletedQuest; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsMainTab; // 0x04D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x04D1
    std::uint8_t BackInputActionRowHandle[0x1]; // 0x04D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTheaterSelect, OverlayMain) == 1200, "Offset mismatch for UFortTheaterSelect::OverlayMain");
static_assert(offsetof(UFortTheaterSelect, DefaultRequiredCompletedQuest) == 1224, "Offset mismatch for UFortTheaterSelect::DefaultRequiredCompletedQuest");
static_assert(offsetof(UFortTheaterSelect, bIsMainTab) == 1232, "Offset mismatch for UFortTheaterSelect::bIsMainTab");
static_assert(offsetof(UFortTheaterSelect, BackInputActionRowHandle) == 1240, "Offset mismatch for UFortTheaterSelect::BackInputActionRowHandle");

// /Script/SaveTheWorldUI.FortUISTWNavigationLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortUISTWNavigationLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.FortUISTWScreenData
// Kind: Class; super: DataAsset
class UFortUISTWScreenData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ScreenData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortUISTWScreenData, ScreenData) == 40, "Offset mismatch for UFortUISTWScreenData::ScreenData");

// /Script/SaveTheWorldUI.FortUIStateWidget_Cinematic
// Kind: Class; super: FortUIStateWidgetBase
class UFortUIStateWidget_Cinematic
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* WidgetStack_PrimaryContent; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseDynamicUI; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04B9
    TArray<void*> ScenesStack; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* StackUnallowScene; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ActionDomain; // 0x04D8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortUIStateWidget_Cinematic, WidgetStack_PrimaryContent) == 1200, "Offset mismatch for UFortUIStateWidget_Cinematic::WidgetStack_PrimaryContent");
static_assert(offsetof(UFortUIStateWidget_Cinematic, bUseDynamicUI) == 1208, "Offset mismatch for UFortUIStateWidget_Cinematic::bUseDynamicUI");
static_assert(offsetof(UFortUIStateWidget_Cinematic, ScenesStack) == 1216, "Offset mismatch for UFortUIStateWidget_Cinematic::ScenesStack");
static_assert(offsetof(UFortUIStateWidget_Cinematic, StackUnallowScene) == 1232, "Offset mismatch for UFortUIStateWidget_Cinematic::StackUnallowScene");
static_assert(offsetof(UFortUIStateWidget_Cinematic, ActionDomain) == 1240, "Offset mismatch for UFortUIStateWidget_Cinematic::ActionDomain");

// /Script/SaveTheWorldUI.FortUIStateWidget_STW
// Kind: Class; super: FortUIStateWidgetBase
class UFortUIStateWidget_STW
{
public:
    std::uint8_t Pad_0000[0x510]; // 0x0000
    void* SideMenu_STW; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* OnSideMenuOpenSound; // 0x0518 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUIStateWidget_STW, SideMenu_STW) == 1296, "Offset mismatch for UFortUIStateWidget_STW::SideMenu_STW");
static_assert(offsetof(UFortUIStateWidget_STW, OnSideMenuOpenSound) == 1304, "Offset mismatch for UFortUIStateWidget_STW::OnSideMenuOpenSound");

// /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
// Kind: Class; super: FortUIStateWidget_STW
class UFortUIStateWidget_STWFrontend
{
public:
    std::uint8_t Pad_0000[0x548]; // 0x0000
    void* ChatWidget_V3; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* BottomBar_STW; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* TopBar_STW; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> MainTabsScreen; // 0x0560 (Size: 0x8, Type: WeakObjectProperty)
    void* ActiveGuardScreen; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* ActiveWidgetSlotWrapper; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowFrontendOnLoad; // 0x0578 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0579
    void* PlayerBannedScreenClass; // 0x0580 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ScriptedActionsToRegister; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeferredSquadAutoSlottingStoreStates; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x48]; // 0x05A8
    TArray<void*> PendingRemovalGiftBoxes; // 0x05F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortUIStateWidget_STWFrontend, ChatWidget_V3) == 1352, "Offset mismatch for UFortUIStateWidget_STWFrontend::ChatWidget_V3");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, BottomBar_STW) == 1360, "Offset mismatch for UFortUIStateWidget_STWFrontend::BottomBar_STW");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, TopBar_STW) == 1368, "Offset mismatch for UFortUIStateWidget_STWFrontend::TopBar_STW");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, MainTabsScreen) == 1376, "Offset mismatch for UFortUIStateWidget_STWFrontend::MainTabsScreen");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, ActiveGuardScreen) == 1384, "Offset mismatch for UFortUIStateWidget_STWFrontend::ActiveGuardScreen");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, ActiveWidgetSlotWrapper) == 1392, "Offset mismatch for UFortUIStateWidget_STWFrontend::ActiveWidgetSlotWrapper");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, bShowFrontendOnLoad) == 1400, "Offset mismatch for UFortUIStateWidget_STWFrontend::bShowFrontendOnLoad");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, PlayerBannedScreenClass) == 1408, "Offset mismatch for UFortUIStateWidget_STWFrontend::PlayerBannedScreenClass");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, ScriptedActionsToRegister) == 1416, "Offset mismatch for UFortUIStateWidget_STWFrontend::ScriptedActionsToRegister");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, DeferredSquadAutoSlottingStoreStates) == 1432, "Offset mismatch for UFortUIStateWidget_STWFrontend::DeferredSquadAutoSlottingStoreStates");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, PendingRemovalGiftBoxes) == 1520, "Offset mismatch for UFortUIStateWidget_STWFrontend::PendingRemovalGiftBoxes");

// /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
// Kind: Class; super: FortUIStateWidgetBase
class UFortUIStateWidget_STWJoinServer
{
public:
    std::uint8_t Pad_0000[0x508]; // 0x0000
    void* RejoinWindow; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TutorialCompleteStatHandle[0x10]; // 0x0510 (Size: 0x10, Type: StructProperty)
    void* RejoinWindowClass; // 0x0520 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortUIStateWidget_STWJoinServer, RejoinWindow) == 1288, "Offset mismatch for UFortUIStateWidget_STWJoinServer::RejoinWindow");
static_assert(offsetof(UFortUIStateWidget_STWJoinServer, TutorialCompleteStatHandle) == 1296, "Offset mismatch for UFortUIStateWidget_STWJoinServer::TutorialCompleteStatHandle");
static_assert(offsetof(UFortUIStateWidget_STWJoinServer, RejoinWindowClass) == 1312, "Offset mismatch for UFortUIStateWidget_STWJoinServer::RejoinWindowClass");

// /Script/SaveTheWorldUI.FortUpgradeDetailsBase
// Kind: Class; super: CommonUserWidget
class UFortUpgradeDetailsBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* VideoPlayer; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* UpgradeInfo; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUpgradeDetailsBase, VideoPlayer) == 816, "Offset mismatch for UFortUpgradeDetailsBase::VideoPlayer");
static_assert(offsetof(UFortUpgradeDetailsBase, UpgradeInfo) == 824, "Offset mismatch for UFortUpgradeDetailsBase::UpgradeInfo");

// /Script/SaveTheWorldUI.FortUpgradeInfo
// Kind: Class; super: Object
class UFortUpgradeInfo
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* NodeItemDef; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUpgradeInfo, NodeItemDef) == 72, "Offset mismatch for UFortUpgradeInfo::NodeItemDef");

// /Script/SaveTheWorldUI.FortUpgradeScreenBase
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortUpgradeScreenBase
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    void* UpgradesTileView; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* UpgradeTileViewLoadGuard; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Details; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TabToNodeTypeMap; // 0x0580 (Size: 0x10, Type: MapProperty)
    void* UpgradesRespecToken; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0598
    std::uint8_t RespecInputAction[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t StartPreviewUpgradesInputAction[0x10]; // 0x05B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t StopPreviewUpgradesInputAction[0x10]; // 0x05C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputAction[0x1]; // 0x05D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUpgradeScreenBase, UpgradesTileView) == 1384, "Offset mismatch for UFortUpgradeScreenBase::UpgradesTileView");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradeTileViewLoadGuard) == 1392, "Offset mismatch for UFortUpgradeScreenBase::UpgradeTileViewLoadGuard");
static_assert(offsetof(UFortUpgradeScreenBase, Details) == 1400, "Offset mismatch for UFortUpgradeScreenBase::Details");
static_assert(offsetof(UFortUpgradeScreenBase, TabToNodeTypeMap) == 1408, "Offset mismatch for UFortUpgradeScreenBase::TabToNodeTypeMap");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradesRespecToken) == 1424, "Offset mismatch for UFortUpgradeScreenBase::UpgradesRespecToken");
static_assert(offsetof(UFortUpgradeScreenBase, RespecInputAction) == 1448, "Offset mismatch for UFortUpgradeScreenBase::RespecInputAction");
static_assert(offsetof(UFortUpgradeScreenBase, StartPreviewUpgradesInputAction) == 1464, "Offset mismatch for UFortUpgradeScreenBase::StartPreviewUpgradesInputAction");
static_assert(offsetof(UFortUpgradeScreenBase, StopPreviewUpgradesInputAction) == 1480, "Offset mismatch for UFortUpgradeScreenBase::StopPreviewUpgradesInputAction");
static_assert(offsetof(UFortUpgradeScreenBase, BackInputAction) == 1496, "Offset mismatch for UFortUpgradeScreenBase::BackInputAction");

// /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
// Kind: Class; super: CommonActivatablePanelLegacy
class UFortUpgradeScreenBase_Legacy
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    void* UpgradesTabSelector; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* UpgradesTileView; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* UpgradeTileViewLoadGuard; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Details; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TabToNodeTypeMap; // 0x0580 (Size: 0x10, Type: MapProperty)
    void* UpgradesRespecToken; // 0x0590 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesTabSelector) == 1376, "Offset mismatch for UFortUpgradeScreenBase_Legacy::UpgradesTabSelector");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesTileView) == 1384, "Offset mismatch for UFortUpgradeScreenBase_Legacy::UpgradesTileView");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradeTileViewLoadGuard) == 1392, "Offset mismatch for UFortUpgradeScreenBase_Legacy::UpgradeTileViewLoadGuard");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, Details) == 1400, "Offset mismatch for UFortUpgradeScreenBase_Legacy::Details");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, TabToNodeTypeMap) == 1408, "Offset mismatch for UFortUpgradeScreenBase_Legacy::TabToNodeTypeMap");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesRespecToken) == 1424, "Offset mismatch for UFortUpgradeScreenBase_Legacy::UpgradesRespecToken");

// /Script/SaveTheWorldUI.FortUpgradeTileBase
// Kind: Class; super: CommonButtonLegacy
class UFortUpgradeTileBase
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* UpgradeInfo; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUpgradeTileBase, UpgradeInfo) == 5624, "Offset mismatch for UFortUpgradeTileBase::UpgradeInfo");

// /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
// Kind: Class; super: CommonUserWidget
class UFortWorkerSetBonusIcon
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t GameplayTag[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::uint8_t ImageSize; // 0x0334 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0335
    void* Icon; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortWorkerSetBonusIcon, GameplayTag) == 816, "Offset mismatch for UFortWorkerSetBonusIcon::GameplayTag");
static_assert(offsetof(UFortWorkerSetBonusIcon, ImageSize) == 820, "Offset mismatch for UFortWorkerSetBonusIcon::ImageSize");
static_assert(offsetof(UFortWorkerSetBonusIcon, Icon) == 824, "Offset mismatch for UFortWorkerSetBonusIcon::Icon");

// /Script/SaveTheWorldUI.InspectScreenInitData
// Kind: Class; super: Object
class UInspectScreenInitData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitParams[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInspectScreenInitData, InitParams) == 40, "Offset mismatch for UInspectScreenInitData::InitParams");

// /Script/SaveTheWorldUI.MgmtTabsScreen_STW
// Kind: Class; super: CommonActivatableWidget
class UMgmtTabsScreen_STW
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    FMulticastInlineDelegate BP_OnMgmtTabsScreenDestroyed; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMgmtTabsScreen_STW, BP_OnMgmtTabsScreenDestroyed) == 1192, "Offset mismatch for UMgmtTabsScreen_STW::BP_OnMgmtTabsScreenDestroyed");

// /Script/SaveTheWorldUI.ObjectivesPage
// Kind: Class; super: CommonActivatablePanelLegacy
class UObjectivesPage
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t LeaveInventoryInputHandle[0x10]; // 0x0560 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackInputHandle[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UObjectivesPage, LeaveInventoryInputHandle) == 1376, "Offset mismatch for UObjectivesPage::LeaveInventoryInputHandle");
static_assert(offsetof(UObjectivesPage, BackInputHandle) == 1392, "Offset mismatch for UObjectivesPage::BackInputHandle");

// /Script/SaveTheWorldUI.ResultsSkipInterface
// Kind: Class; super: Interface
class UResultsSkipInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.ReticleWidgetsContainer
// Kind: Class; super: CommonUserWidget
class UReticleWidgetsContainer
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* IndicatorContent; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WeaponReticleExtensionList; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    void* CurrentCustomReticleExtension; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RecentReticleExtensions; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0360
    std::int32_t ReticleExtensionSize; // 0x0364 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UReticleWidgetsContainer, IndicatorContent) == 816, "Offset mismatch for UReticleWidgetsContainer::IndicatorContent");
static_assert(offsetof(UReticleWidgetsContainer, WeaponReticleExtensionList) == 824, "Offset mismatch for UReticleWidgetsContainer::WeaponReticleExtensionList");
static_assert(offsetof(UReticleWidgetsContainer, CurrentCustomReticleExtension) == 840, "Offset mismatch for UReticleWidgetsContainer::CurrentCustomReticleExtension");
static_assert(offsetof(UReticleWidgetsContainer, RecentReticleExtensions) == 848, "Offset mismatch for UReticleWidgetsContainer::RecentReticleExtensions");
static_assert(offsetof(UReticleWidgetsContainer, ReticleExtensionSize) == 868, "Offset mismatch for UReticleWidgetsContainer::ReticleExtensionSize");

// /Script/SaveTheWorldUI.STWDeathWidget
// Kind: Class; super: CommonActivatableWidget
class USTWDeathWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t PreviousTeammateActionRowHandle[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NextTeammateActionRowHandle[0x18]; // 0x04B0 (Size: 0x18, Type: StructProperty)
    void* SpectatingPlayerBanner; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USTWDeathWidget, PreviousTeammateActionRowHandle) == 1184, "Offset mismatch for USTWDeathWidget::PreviousTeammateActionRowHandle");
static_assert(offsetof(USTWDeathWidget, NextTeammateActionRowHandle) == 1200, "Offset mismatch for USTWDeathWidget::NextTeammateActionRowHandle");
static_assert(offsetof(USTWDeathWidget, SpectatingPlayerBanner) == 1224, "Offset mismatch for USTWDeathWidget::SpectatingPlayerBanner");

// /Script/SaveTheWorldUI.STWDynUIDirectorInterface
// Kind: Class; super: Interface
class USTWDynUIDirectorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWEventRouterLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USTWEventRouterLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.STWFortPickupManagerWidget
// Kind: Class; super: FortPickupManagerWidget
class USTWFortPickupManagerWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* Panel_AllResources; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CurrentSpendableVisibleWidget; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t GoldSpendablesActorTags[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    float OverlapGoldSpendableSphereRadius; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03A4
    TArray<void*> ResourceWidgets; // 0x03A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USTWFortPickupManagerWidget, Panel_AllResources) == 880, "Offset mismatch for USTWFortPickupManagerWidget::Panel_AllResources");
static_assert(offsetof(USTWFortPickupManagerWidget, CurrentSpendableVisibleWidget) == 888, "Offset mismatch for USTWFortPickupManagerWidget::CurrentSpendableVisibleWidget");
static_assert(offsetof(USTWFortPickupManagerWidget, GoldSpendablesActorTags) == 896, "Offset mismatch for USTWFortPickupManagerWidget::GoldSpendablesActorTags");
static_assert(offsetof(USTWFortPickupManagerWidget, OverlapGoldSpendableSphereRadius) == 928, "Offset mismatch for USTWFortPickupManagerWidget::OverlapGoldSpendableSphereRadius");
static_assert(offsetof(USTWFortPickupManagerWidget, ResourceWidgets) == 936, "Offset mismatch for USTWFortPickupManagerWidget::ResourceWidgets");

// /Script/SaveTheWorldUI.STWHUDDynUIConv
// Kind: Class; super: CommonUserWidget
class USTWHUDDynUIConv
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* BottomBar_STW; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* PersistentHUDContent; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* PersistentHUDScaleBox; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* ChatScaleBox; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* ChatSpacer; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* SafeZone_CameraModeContent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* DeathWidget; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* PickerData; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> LegacyRadialPickerClass; // 0x0370 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USTWHUDDynUIConv, BottomBar_STW) == 816, "Offset mismatch for USTWHUDDynUIConv::BottomBar_STW");
static_assert(offsetof(USTWHUDDynUIConv, PersistentHUDContent) == 824, "Offset mismatch for USTWHUDDynUIConv::PersistentHUDContent");
static_assert(offsetof(USTWHUDDynUIConv, PersistentHUDScaleBox) == 832, "Offset mismatch for USTWHUDDynUIConv::PersistentHUDScaleBox");
static_assert(offsetof(USTWHUDDynUIConv, ChatScaleBox) == 840, "Offset mismatch for USTWHUDDynUIConv::ChatScaleBox");
static_assert(offsetof(USTWHUDDynUIConv, ChatSpacer) == 848, "Offset mismatch for USTWHUDDynUIConv::ChatSpacer");
static_assert(offsetof(USTWHUDDynUIConv, SafeZone_CameraModeContent) == 856, "Offset mismatch for USTWHUDDynUIConv::SafeZone_CameraModeContent");
static_assert(offsetof(USTWHUDDynUIConv, DeathWidget) == 864, "Offset mismatch for USTWHUDDynUIConv::DeathWidget");
static_assert(offsetof(USTWHUDDynUIConv, PickerData) == 872, "Offset mismatch for USTWHUDDynUIConv::PickerData");
static_assert(offsetof(USTWHUDDynUIConv, LegacyRadialPickerClass) == 880, "Offset mismatch for USTWHUDDynUIConv::LegacyRadialPickerClass");

// /Script/SaveTheWorldUI.STWPowerHourAlert
// Kind: Class; super: CommonUserWidget
class USTWPowerHourAlert
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    FText Body; // 0x0340 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USTWPowerHourAlert, Title) == 816, "Offset mismatch for USTWPowerHourAlert::Title");
static_assert(offsetof(USTWPowerHourAlert, Body) == 832, "Offset mismatch for USTWPowerHourAlert::Body");

// /Script/SaveTheWorldUI.STWPowerHourSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class USTWPowerHourSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnCountdownActiveChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCountdownUpdated; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPowerHourStarted; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPowerHourEnded; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0070
    float EventSyncRate; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float TimeUntilPowerHourDurationSeconds; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USTWPowerHourSubsystem, OnCountdownActiveChanged) == 48, "Offset mismatch for USTWPowerHourSubsystem::OnCountdownActiveChanged");
static_assert(offsetof(USTWPowerHourSubsystem, OnCountdownUpdated) == 64, "Offset mismatch for USTWPowerHourSubsystem::OnCountdownUpdated");
static_assert(offsetof(USTWPowerHourSubsystem, OnPowerHourStarted) == 80, "Offset mismatch for USTWPowerHourSubsystem::OnPowerHourStarted");
static_assert(offsetof(USTWPowerHourSubsystem, OnPowerHourEnded) == 96, "Offset mismatch for USTWPowerHourSubsystem::OnPowerHourEnded");
static_assert(offsetof(USTWPowerHourSubsystem, EventSyncRate) == 216, "Offset mismatch for USTWPowerHourSubsystem::EventSyncRate");
static_assert(offsetof(USTWPowerHourSubsystem, TimeUntilPowerHourDurationSeconds) == 220, "Offset mismatch for USTWPowerHourSubsystem::TimeUntilPowerHourDurationSeconds");

// /Script/SaveTheWorldUI.STWRollbacksBP
// Kind: Class; super: BlueprintFunctionLibrary
class USTWRollbacksBP
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.SaveTheWorldRegisterUIManager
// Kind: Class; super: FortUIGameFeatureAction
class USaveTheWorldRegisterUIManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
// Kind: Class; super: FortUIGameFeatureAction
class USaveTheWorldRequestsFeatureAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ItemManagementScreenClass_STW[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ItemInspectionScreenClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HeroLoadoutScreenClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SurvivorSquadManagementScreenClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ItemManagementScreenClass[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HelpScreenData[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HelpPanelClass[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> BoostsClass; // 0x0108 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USaveTheWorldRequestsFeatureAction, ItemManagementScreenClass_STW) == 40, "Offset mismatch for USaveTheWorldRequestsFeatureAction::ItemManagementScreenClass_STW");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, ItemInspectionScreenClass) == 72, "Offset mismatch for USaveTheWorldRequestsFeatureAction::ItemInspectionScreenClass");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, HeroLoadoutScreenClass) == 104, "Offset mismatch for USaveTheWorldRequestsFeatureAction::HeroLoadoutScreenClass");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, SurvivorSquadManagementScreenClass) == 136, "Offset mismatch for USaveTheWorldRequestsFeatureAction::SurvivorSquadManagementScreenClass");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, ItemManagementScreenClass) == 168, "Offset mismatch for USaveTheWorldRequestsFeatureAction::ItemManagementScreenClass");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, HelpScreenData) == 200, "Offset mismatch for USaveTheWorldRequestsFeatureAction::HelpScreenData");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, HelpPanelClass) == 232, "Offset mismatch for USaveTheWorldRequestsFeatureAction::HelpPanelClass");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, BoostsClass) == 264, "Offset mismatch for USaveTheWorldRequestsFeatureAction::BoostsClass");

// /Script/SaveTheWorldUI.SaveTheWorldStatsHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class USaveTheWorldStatsHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveTheWorldUI.SquadCommsEmoteWheelCategoryConfig_STW
// Kind: Class; super: EmoteWheelCategoryConfig
class USquadCommsEmoteWheelCategoryConfig_STW
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> SquadCommsBank; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelCategoryConfig_STW, SquadCommsBank) == 168, "Offset mismatch for USquadCommsEmoteWheelCategoryConfig_STW::SquadCommsBank");

// /Script/SaveTheWorldUI.SquadCommsEmoteWheelCategoryVM_STW
// Kind: Class; super: EmoteWheelCategoryVM
class USquadCommsEmoteWheelCategoryVM_STW
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Config; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubTabs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSubTab; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelCategoryVM_STW, Config) == 120, "Offset mismatch for USquadCommsEmoteWheelCategoryVM_STW::Config");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM_STW, EquippedItems) == 128, "Offset mismatch for USquadCommsEmoteWheelCategoryVM_STW::EquippedItems");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM_STW, SubTabs) == 144, "Offset mismatch for USquadCommsEmoteWheelCategoryVM_STW::SubTabs");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM_STW, ActiveSubTab) == 160, "Offset mismatch for USquadCommsEmoteWheelCategoryVM_STW::ActiveSubTab");

// /Script/SaveTheWorldUI.SquadCommsEmoteWheelItemVM_STW
// Kind: Class; super: EmoteWheelItemVM
class USquadCommsEmoteWheelItemVM_STW
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Entry[0xE0]; // 0x00B0 (Size: 0xE0, Type: StructProperty)
    std::uint8_t QuickChatActiveEntry[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelItemVM_STW, Entry) == 176, "Offset mismatch for USquadCommsEmoteWheelItemVM_STW::Entry");
static_assert(offsetof(USquadCommsEmoteWheelItemVM_STW, QuickChatActiveEntry) == 400, "Offset mismatch for USquadCommsEmoteWheelItemVM_STW::QuickChatActiveEntry");

// /Script/SaveTheWorldUI.StWHUD
// Kind: Class; super: FortUIStateWidget_STW
class UStWHUD
{
public:
    std::uint8_t Pad_0000[0x540]; // 0x0000
    FMulticastInlineDelegate OnSTWHUDMenuStackChanged; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* GeneralIndicators; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ManagementTabsScreenClass[0x20]; // 0x0558 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PostGameScreenClass[0x20]; // 0x0578 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> DefenderConfigPanelClass; // 0x0598 (Size: 0x28, Type: SoftClassProperty)
    void* DynUIConvertedWidget; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* STWDynUIDirector; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStWHUD, OnSTWHUDMenuStackChanged) == 1344, "Offset mismatch for UStWHUD::OnSTWHUDMenuStackChanged");
static_assert(offsetof(UStWHUD, GeneralIndicators) == 1360, "Offset mismatch for UStWHUD::GeneralIndicators");
static_assert(offsetof(UStWHUD, ManagementTabsScreenClass) == 1368, "Offset mismatch for UStWHUD::ManagementTabsScreenClass");
static_assert(offsetof(UStWHUD, PostGameScreenClass) == 1400, "Offset mismatch for UStWHUD::PostGameScreenClass");
static_assert(offsetof(UStWHUD, DefenderConfigPanelClass) == 1432, "Offset mismatch for UStWHUD::DefenderConfigPanelClass");
static_assert(offsetof(UStWHUD, DynUIConvertedWidget) == 1472, "Offset mismatch for UStWHUD::DynUIConvertedWidget");
static_assert(offsetof(UStWHUD, STWDynUIDirector) == 1480, "Offset mismatch for UStWHUD::STWDynUIDirector");

// /Script/SaveTheWorldUI.StoreCardObject
// Kind: Class; super: Object
class UStoreCardObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Card[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::int32_t OriginalIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UStoreCardObject, Card) == 40, "Offset mismatch for UStoreCardObject::Card");
static_assert(offsetof(UStoreCardObject, OriginalIndex) == 64, "Offset mismatch for UStoreCardObject::OriginalIndex");

// /Script/SaveTheWorldUI.TopBar_STW
// Kind: Class; super: CommonActivatableWidget
class UTopBar_STW
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* PhoenixSeasonDisplayInfoMap; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* Image_ActiveInvitesNotification; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Social; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SidebarAvatar; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* MiniPartyBar; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTopBar_STW, PhoenixSeasonDisplayInfoMap) == 1184, "Offset mismatch for UTopBar_STW::PhoenixSeasonDisplayInfoMap");
static_assert(offsetof(UTopBar_STW, Image_ActiveInvitesNotification) == 1192, "Offset mismatch for UTopBar_STW::Image_ActiveInvitesNotification");
static_assert(offsetof(UTopBar_STW, Button_Social) == 1200, "Offset mismatch for UTopBar_STW::Button_Social");
static_assert(offsetof(UTopBar_STW, Button_SidebarAvatar) == 1208, "Offset mismatch for UTopBar_STW::Button_SidebarAvatar");
static_assert(offsetof(UTopBar_STW, MiniPartyBar) == 1216, "Offset mismatch for UTopBar_STW::MiniPartyBar");

// /Script/SaveTheWorldUI.XpBoostsRootWidget
// Kind: Class; super: CommonActivatablePanelLegacy
class UXpBoostsRootWidget
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    std::uint8_t BackInputActionRowHandle[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShowLeaderboardInputActionRowHandle[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCanShowLeaderboard; // 0x0588 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UXpBoostsRootWidget, BackInputActionRowHandle) == 1384, "Offset mismatch for UXpBoostsRootWidget::BackInputActionRowHandle");
static_assert(offsetof(UXpBoostsRootWidget, ShowLeaderboardInputActionRowHandle) == 1400, "Offset mismatch for UXpBoostsRootWidget::ShowLeaderboardInputActionRowHandle");
static_assert(offsetof(UXpBoostsRootWidget, bCanShowLeaderboard) == 1416, "Offset mismatch for UXpBoostsRootWidget::bCanShowLeaderboard");
