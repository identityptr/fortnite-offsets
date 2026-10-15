/**
 * decamp dumper generated SDK
 * Package: /Script/ExtractionCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ExtractionCoreRuntime.ChancePlayerAugments
// Kind: ScriptStruct; super: none
struct FChancePlayerAugments
{
public:
    float Chance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Augment; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FChancePlayerAugments, Chance) == 0, "Offset mismatch for FChancePlayerAugments::Chance");
static_assert(offsetof(FChancePlayerAugments, Augment) == 8, "Offset mismatch for FChancePlayerAugments::Augment");

// /Script/ExtractionCoreRuntime.EquippedExtractableChangedMessage
// Kind: ScriptStruct; super: none
struct FEquippedExtractableChangedMessage
{
public:
    std::uint8_t DefinitionMappingId[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Experience; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FEquippedExtractableChangedMessage, DefinitionMappingId) == 0, "Offset mismatch for FEquippedExtractableChangedMessage::DefinitionMappingId");
static_assert(offsetof(FEquippedExtractableChangedMessage, Experience) == 4, "Offset mismatch for FEquippedExtractableChangedMessage::Experience");

// /Script/ExtractionCoreRuntime.ExtractableBackendData
// Kind: ScriptStruct; super: TableRowBase
struct FExtractableBackendData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t SummonCost; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsStarter; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FExtractableBackendData, SummonCost) == 8, "Offset mismatch for FExtractableBackendData::SummonCost");
static_assert(offsetof(FExtractableBackendData, bIsStarter) == 12, "Offset mismatch for FExtractableBackendData::bIsStarter");

// /Script/ExtractionCoreRuntime.ExtractableItemPersistenceData
// Kind: ScriptStruct; super: none
struct FExtractableItemPersistenceData
{
public:
    std::uint8_t SpriteUniqueId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t CollectionExperience; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t DefinitionMappingId[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> AugmentMappingIds; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CollectionState; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    std::int32_t Experience; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0030
    std::int32_t InstanceCreationCost; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t UnlockCost; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t TimesExtracted; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int64_t InstanceCount; // 0x0040 (Size: 0x8, Type: Int64Property)
    std::uint8_t bMastered; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPilotMechReward; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x004A
    TArray<void*> VariationMappingIds; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FExtractableItemPersistenceData, SpriteUniqueId) == 0, "Offset mismatch for FExtractableItemPersistenceData::SpriteUniqueId");
static_assert(offsetof(FExtractableItemPersistenceData, CollectionExperience) == 16, "Offset mismatch for FExtractableItemPersistenceData::CollectionExperience");
static_assert(offsetof(FExtractableItemPersistenceData, DefinitionMappingId) == 20, "Offset mismatch for FExtractableItemPersistenceData::DefinitionMappingId");
static_assert(offsetof(FExtractableItemPersistenceData, AugmentMappingIds) == 24, "Offset mismatch for FExtractableItemPersistenceData::AugmentMappingIds");
static_assert(offsetof(FExtractableItemPersistenceData, CollectionState) == 40, "Offset mismatch for FExtractableItemPersistenceData::CollectionState");
static_assert(offsetof(FExtractableItemPersistenceData, Experience) == 44, "Offset mismatch for FExtractableItemPersistenceData::Experience");
static_assert(offsetof(FExtractableItemPersistenceData, InstanceCreationCost) == 52, "Offset mismatch for FExtractableItemPersistenceData::InstanceCreationCost");
static_assert(offsetof(FExtractableItemPersistenceData, UnlockCost) == 56, "Offset mismatch for FExtractableItemPersistenceData::UnlockCost");
static_assert(offsetof(FExtractableItemPersistenceData, TimesExtracted) == 60, "Offset mismatch for FExtractableItemPersistenceData::TimesExtracted");
static_assert(offsetof(FExtractableItemPersistenceData, InstanceCount) == 64, "Offset mismatch for FExtractableItemPersistenceData::InstanceCount");
static_assert(offsetof(FExtractableItemPersistenceData, bMastered) == 72, "Offset mismatch for FExtractableItemPersistenceData::bMastered");
static_assert(offsetof(FExtractableItemPersistenceData, bHasPilotMechReward) == 73, "Offset mismatch for FExtractableItemPersistenceData::bHasPilotMechReward");
static_assert(offsetof(FExtractableItemPersistenceData, VariationMappingIds) == 80, "Offset mismatch for FExtractableItemPersistenceData::VariationMappingIds");

// /Script/ExtractionCoreRuntime.ExtractableItemPersistenceDataArray
// Kind: ScriptStruct; super: none
struct FExtractableItemPersistenceDataArray
{
public:
    TArray<void*> SpritesExtractionData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ExtractionPoints; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t StarterRelic[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t EquippedVariant[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::int32_t PityScore; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FExtractableItemPersistenceDataArray, SpritesExtractionData) == 0, "Offset mismatch for FExtractableItemPersistenceDataArray::SpritesExtractionData");
static_assert(offsetof(FExtractableItemPersistenceDataArray, ExtractionPoints) == 16, "Offset mismatch for FExtractableItemPersistenceDataArray::ExtractionPoints");
static_assert(offsetof(FExtractableItemPersistenceDataArray, StarterRelic) == 20, "Offset mismatch for FExtractableItemPersistenceDataArray::StarterRelic");
static_assert(offsetof(FExtractableItemPersistenceDataArray, EquippedVariant) == 24, "Offset mismatch for FExtractableItemPersistenceDataArray::EquippedVariant");
static_assert(offsetof(FExtractableItemPersistenceDataArray, PityScore) == 28, "Offset mismatch for FExtractableItemPersistenceDataArray::PityScore");

// /Script/ExtractionCoreRuntime.ExtractableItemRuntimeData
// Kind: ScriptStruct; super: none
struct FExtractableItemRuntimeData
{
public:
    FName DefinitionMappingId; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> AugmentMappingIds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Experience; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t ExtractableAbilitySetHandle[0x38]; // 0x0020 (Size: 0x38, Type: StructProperty)
    TArray<void*> AugmentAbilitySetHandles; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldDestroyOnDrop; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FExtractableItemRuntimeData, DefinitionMappingId) == 0, "Offset mismatch for FExtractableItemRuntimeData::DefinitionMappingId");
static_assert(offsetof(FExtractableItemRuntimeData, AugmentMappingIds) == 8, "Offset mismatch for FExtractableItemRuntimeData::AugmentMappingIds");
static_assert(offsetof(FExtractableItemRuntimeData, Experience) == 24, "Offset mismatch for FExtractableItemRuntimeData::Experience");
static_assert(offsetof(FExtractableItemRuntimeData, ExtractableAbilitySetHandle) == 32, "Offset mismatch for FExtractableItemRuntimeData::ExtractableAbilitySetHandle");
static_assert(offsetof(FExtractableItemRuntimeData, AugmentAbilitySetHandles) == 88, "Offset mismatch for FExtractableItemRuntimeData::AugmentAbilitySetHandles");
static_assert(offsetof(FExtractableItemRuntimeData, bShouldDestroyOnDrop) == 104, "Offset mismatch for FExtractableItemRuntimeData::bShouldDestroyOnDrop");

// /Script/ExtractionCoreRuntime.ExtractableItemSnapshot
// Kind: ScriptStruct; super: none
struct FExtractableItemSnapshot
{
public:
    void* Definition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Level; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Experience; // 0x000C (Size: 0x4, Type: IntProperty)
    float ProgressToNextLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExtractableItemSnapshot, Definition) == 0, "Offset mismatch for FExtractableItemSnapshot::Definition");
static_assert(offsetof(FExtractableItemSnapshot, Level) == 8, "Offset mismatch for FExtractableItemSnapshot::Level");
static_assert(offsetof(FExtractableItemSnapshot, Experience) == 12, "Offset mismatch for FExtractableItemSnapshot::Experience");
static_assert(offsetof(FExtractableItemSnapshot, ProgressToNextLevel) == 16, "Offset mismatch for FExtractableItemSnapshot::ProgressToNextLevel");

// /Script/ExtractionCoreRuntime.ExtractablePickupCreationParams
// Kind: ScriptStruct; super: none
struct FExtractablePickupCreationParams
{
public:
    std::uint8_t ItemEntry[0x98]; // 0x0000 (Size: 0x98, Type: StructProperty)
    void* Instigator; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FExtractablePickupCreationParams, ItemEntry) == 0, "Offset mismatch for FExtractablePickupCreationParams::ItemEntry");
static_assert(offsetof(FExtractablePickupCreationParams, Instigator) == 152, "Offset mismatch for FExtractablePickupCreationParams::Instigator");

// /Script/ExtractionCoreRuntime.ExtractableProgressUpdateMessage
// Kind: ScriptStruct; super: none
struct FExtractableProgressUpdateMessage
{
public:
    std::uint8_t DefinitionMappingId[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t ExperienceDelta; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ExperienceAfterUpdate; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChangeReason; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FExtractableProgressUpdateMessage, DefinitionMappingId) == 0, "Offset mismatch for FExtractableProgressUpdateMessage::DefinitionMappingId");
static_assert(offsetof(FExtractableProgressUpdateMessage, ExperienceDelta) == 4, "Offset mismatch for FExtractableProgressUpdateMessage::ExperienceDelta");
static_assert(offsetof(FExtractableProgressUpdateMessage, ExperienceAfterUpdate) == 8, "Offset mismatch for FExtractableProgressUpdateMessage::ExperienceAfterUpdate");
static_assert(offsetof(FExtractableProgressUpdateMessage, ChangeReason) == 12, "Offset mismatch for FExtractableProgressUpdateMessage::ChangeReason");

// /Script/ExtractionCoreRuntime.ExtractableSpriteCosmeticData
// Kind: ScriptStruct; super: none
struct FExtractableSpriteCosmeticData
{
public:
    std::uint8_t Icon[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SkeletalMesh[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StaticMesh[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> OverrideMaterials; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FExtractableSpriteCosmeticData, Icon) == 0, "Offset mismatch for FExtractableSpriteCosmeticData::Icon");
static_assert(offsetof(FExtractableSpriteCosmeticData, SkeletalMesh) == 32, "Offset mismatch for FExtractableSpriteCosmeticData::SkeletalMesh");
static_assert(offsetof(FExtractableSpriteCosmeticData, StaticMesh) == 64, "Offset mismatch for FExtractableSpriteCosmeticData::StaticMesh");
static_assert(offsetof(FExtractableSpriteCosmeticData, OverrideMaterials) == 96, "Offset mismatch for FExtractableSpriteCosmeticData::OverrideMaterials");

// /Script/ExtractionCoreRuntime.ExtractableVariantWeights
// Kind: ScriptStruct; super: TableRowBase
struct FExtractableVariantWeights
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TSoftObjectPtr<void> VariantDefinition; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FExtractableVariantWeights, Weight) == 8, "Offset mismatch for FExtractableVariantWeights::Weight");
static_assert(offsetof(FExtractableVariantWeights, VariantDefinition) == 16, "Offset mismatch for FExtractableVariantWeights::VariantDefinition");

// /Script/ExtractionCoreRuntime.ExtractableVariantsContainer
// Kind: ScriptStruct; super: none
struct FExtractableVariantsContainer
{
public:
    void* ParentDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VariantDefinitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FExtractableVariantsContainer, ParentDefinition) == 0, "Offset mismatch for FExtractableVariantsContainer::ParentDefinition");
static_assert(offsetof(FExtractableVariantsContainer, VariantDefinitions) == 8, "Offset mismatch for FExtractableVariantsContainer::VariantDefinitions");

// /Script/ExtractionCoreRuntime.ExtractablesExternalData
// Kind: ScriptStruct; super: none
struct FExtractablesExternalData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionAnalyticsItemRow
// Kind: ScriptStruct; super: none
struct FExtractionAnalyticsItemRow
{
public:
    FString ExtractableId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t RarityStars; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString Variant; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bFirstTimeExtracted; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FExtractionAnalyticsItemRow, ExtractableId) == 0, "Offset mismatch for FExtractionAnalyticsItemRow::ExtractableId");
static_assert(offsetof(FExtractionAnalyticsItemRow, RarityStars) == 16, "Offset mismatch for FExtractionAnalyticsItemRow::RarityStars");
static_assert(offsetof(FExtractionAnalyticsItemRow, Variant) == 24, "Offset mismatch for FExtractionAnalyticsItemRow::Variant");
static_assert(offsetof(FExtractionAnalyticsItemRow, bFirstTimeExtracted) == 40, "Offset mismatch for FExtractionAnalyticsItemRow::bFirstTimeExtracted");

// /Script/ExtractionCoreRuntime.ExtractionFlushRequestedEvent
// Kind: ScriptStruct; super: none
struct FExtractionFlushRequestedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionPreFlushEvent
// Kind: ScriptStruct; super: none
struct FExtractionPreFlushEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionVariantRarityData
// Kind: ScriptStruct; super: TableRowBase
struct FExtractionVariantRarityData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VariantRarityTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t Rarity; // 0x000C (Size: 0x4, Type: IntProperty)
    float RarityDexNumber; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t ExtractionValue; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t RarityData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FExtractionVariantRarityData, VariantRarityTag) == 8, "Offset mismatch for FExtractionVariantRarityData::VariantRarityTag");
static_assert(offsetof(FExtractionVariantRarityData, Rarity) == 12, "Offset mismatch for FExtractionVariantRarityData::Rarity");
static_assert(offsetof(FExtractionVariantRarityData, RarityDexNumber) == 16, "Offset mismatch for FExtractionVariantRarityData::RarityDexNumber");
static_assert(offsetof(FExtractionVariantRarityData, ExtractionValue) == 20, "Offset mismatch for FExtractionVariantRarityData::ExtractionValue");
static_assert(offsetof(FExtractionVariantRarityData, RarityData) == 24, "Offset mismatch for FExtractionVariantRarityData::RarityData");

// /Script/ExtractionCoreRuntime.FortItemComponentData_ExtractionSoundLibraries
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_ExtractionSoundLibraries
{
public:
    TArray<void*> BGASoundLibraries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnSoundLibraries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProjectileSoundLibraries; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BackpackSoundLibraries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortItemComponentData_ExtractionSoundLibraries, BGASoundLibraries) == 0, "Offset mismatch for FFortItemComponentData_ExtractionSoundLibraries::BGASoundLibraries");
static_assert(offsetof(FFortItemComponentData_ExtractionSoundLibraries, PawnSoundLibraries) == 16, "Offset mismatch for FFortItemComponentData_ExtractionSoundLibraries::PawnSoundLibraries");
static_assert(offsetof(FFortItemComponentData_ExtractionSoundLibraries, ProjectileSoundLibraries) == 32, "Offset mismatch for FFortItemComponentData_ExtractionSoundLibraries::ProjectileSoundLibraries");
static_assert(offsetof(FFortItemComponentData_ExtractionSoundLibraries, BackpackSoundLibraries) == 48, "Offset mismatch for FFortItemComponentData_ExtractionSoundLibraries::BackpackSoundLibraries");

// /Script/ExtractionCoreRuntime.FortItemComponentData_ExtractionVisualData
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_ExtractionVisualData
{
public:
    std::uint8_t StaticMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SkeletalMesh[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MaterialSlot2[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NiagaraSystem[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseBackpackMeshOffsetTransform; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x00A1
    std::uint8_t BackpackMeshOffsetTransform[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, StaticMesh) == 0, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::StaticMesh");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, SkeletalMesh) == 32, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::SkeletalMesh");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, Material) == 64, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::Material");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, MaterialSlot2) == 96, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::MaterialSlot2");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, NiagaraSystem) == 128, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::NiagaraSystem");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, bUseBackpackMeshOffsetTransform) == 160, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::bUseBackpackMeshOffsetTransform");
static_assert(offsetof(FFortItemComponentData_ExtractionVisualData, BackpackMeshOffsetTransform) == 176, "Offset mismatch for FFortItemComponentData_ExtractionVisualData::BackpackMeshOffsetTransform");

// /Script/ExtractionCoreRuntime.FortItemComponentData_RuntimeExtractableData
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_RuntimeExtractableData
{
public:
    std::uint8_t RuntimeData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemComponentData_RuntimeExtractableData, RuntimeData) == 0, "Offset mismatch for FFortItemComponentData_RuntimeExtractableData::RuntimeData");

// /Script/ExtractionCoreRuntime.FortItemComponentData_VariantRarity
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_VariantRarity
{
public:
    std::uint8_t VariantRarityTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortItemComponentData_VariantRarity, VariantRarityTag) == 0, "Offset mismatch for FFortItemComponentData_VariantRarity::VariantRarityTag");

// /Script/ExtractionCoreRuntime.ItemExtractedEvent
// Kind: ScriptStruct; super: none
struct FItemExtractedEvent
{
public:
    void* ExtractedItemDef; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PointsAwarded; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FItemExtractedEvent, ExtractedItemDef) == 0, "Offset mismatch for FItemExtractedEvent::ExtractedItemDef");
static_assert(offsetof(FItemExtractedEvent, PointsAwarded) == 8, "Offset mismatch for FItemExtractedEvent::PointsAwarded");

// /Script/ExtractionCoreRuntime.NameToAssetMappingTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FNameToAssetMappingTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName MappingID; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t ContextTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Asset[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ParentMappingID[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    FName ReverseMappingIDOverride; // 0x0054 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNameToAssetMappingTableRow, MappingID) == 8, "Offset mismatch for FNameToAssetMappingTableRow::MappingID");
static_assert(offsetof(FNameToAssetMappingTableRow, ContextTags) == 16, "Offset mismatch for FNameToAssetMappingTableRow::ContextTags");
static_assert(offsetof(FNameToAssetMappingTableRow, Asset) == 48, "Offset mismatch for FNameToAssetMappingTableRow::Asset");
static_assert(offsetof(FNameToAssetMappingTableRow, ParentMappingID) == 80, "Offset mismatch for FNameToAssetMappingTableRow::ParentMappingID");
static_assert(offsetof(FNameToAssetMappingTableRow, ReverseMappingIDOverride) == 84, "Offset mismatch for FNameToAssetMappingTableRow::ReverseMappingIDOverride");

// /Script/ExtractionCoreRuntime.ParsedModuleEntryResult
// Kind: ScriptStruct; super: none
struct FParsedModuleEntryResult
{
public:
    TMap<void*, void*> EntitlementsInventory; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t ModuleMetadataResult[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FParsedModuleEntryResult, EntitlementsInventory) == 0, "Offset mismatch for FParsedModuleEntryResult::EntitlementsInventory");
static_assert(offsetof(FParsedModuleEntryResult, ModuleMetadataResult) == 16, "Offset mismatch for FParsedModuleEntryResult::ModuleMetadataResult");

// /Script/ExtractionCoreRuntime.PersistenceManagerClassTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FPersistenceManagerClassTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> PersistenceManagerClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FPersistenceManagerClassTableRow, PersistenceManagerClass) == 8, "Offset mismatch for FPersistenceManagerClassTableRow::PersistenceManagerClass");

// /Script/ExtractionCoreRuntime.PlayerPersistenceManagerSet
// Kind: ScriptStruct; super: none
struct FPlayerPersistenceManagerSet
{
public:
    TMap<void*, void*> Managers; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPlayerPersistenceManagerSet, Managers) == 0, "Offset mismatch for FPlayerPersistenceManagerSet::Managers");

// /Script/ExtractionCoreRuntime.PostMatchExtractionData
// Kind: ScriptStruct; super: none
struct FPostMatchExtractionData
{
public:
    TArray<void*> DroppedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtractedItems; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FirstTimeExtractedDefinitions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FirstTimeMasteries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtractionsFromVictory; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int64_t SpritePointDelta; // 0x0050 (Size: 0x8, Type: Int64Property)
    std::int64_t BoostedSpritePointDelta; // 0x0058 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FPostMatchExtractionData, DroppedItems) == 0, "Offset mismatch for FPostMatchExtractionData::DroppedItems");
static_assert(offsetof(FPostMatchExtractionData, ExtractedItems) == 16, "Offset mismatch for FPostMatchExtractionData::ExtractedItems");
static_assert(offsetof(FPostMatchExtractionData, FirstTimeExtractedDefinitions) == 32, "Offset mismatch for FPostMatchExtractionData::FirstTimeExtractedDefinitions");
static_assert(offsetof(FPostMatchExtractionData, FirstTimeMasteries) == 48, "Offset mismatch for FPostMatchExtractionData::FirstTimeMasteries");
static_assert(offsetof(FPostMatchExtractionData, ExtractionsFromVictory) == 64, "Offset mismatch for FPostMatchExtractionData::ExtractionsFromVictory");
static_assert(offsetof(FPostMatchExtractionData, SpritePointDelta) == 80, "Offset mismatch for FPostMatchExtractionData::SpritePointDelta");
static_assert(offsetof(FPostMatchExtractionData, BoostedSpritePointDelta) == 88, "Offset mismatch for FPostMatchExtractionData::BoostedSpritePointDelta");

// /Script/ExtractionCoreRuntime.ExtractableCoreUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UExtractableCoreUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractableEventsComponent
// Kind: Class; super: ActorComponent
class UExtractableEventsComponent
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

static_assert(offsetof(UExtractableEventsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UExtractableEventsComponent::PrimaryComponentTick");
static_assert(offsetof(UExtractableEventsComponent, ComponentTags) == 104, "Offset mismatch for UExtractableEventsComponent::ComponentTags");
static_assert(offsetof(UExtractableEventsComponent, AssetUserData) == 120, "Offset mismatch for UExtractableEventsComponent::AssetUserData");
static_assert(offsetof(UExtractableEventsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UExtractableEventsComponent::UCSSerializationIndex");
static_assert(offsetof(UExtractableEventsComponent, bNetAddressable) == 152, "Offset mismatch for UExtractableEventsComponent::bNetAddressable");
static_assert(offsetof(UExtractableEventsComponent, bAutoActivate) == 154, "Offset mismatch for UExtractableEventsComponent::bAutoActivate");
static_assert(offsetof(UExtractableEventsComponent, bIsEditorOnly) == 155, "Offset mismatch for UExtractableEventsComponent::bIsEditorOnly");
static_assert(offsetof(UExtractableEventsComponent, CreationMethod) == 185, "Offset mismatch for UExtractableEventsComponent::CreationMethod");
static_assert(offsetof(UExtractableEventsComponent, OnComponentActivated) == 186, "Offset mismatch for UExtractableEventsComponent::OnComponentActivated");
static_assert(offsetof(UExtractableEventsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UExtractableEventsComponent::OnComponentDeactivated");

// /Script/ExtractionCoreRuntime.ExtractableItemDefinition
// Kind: Class; super: FortWeaponItemDefinition
class UExtractableItemDefinition
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    TArray<void*> PossibleAugments; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LevelUpExpCurve[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RelicPointsOnExtraction[0x10]; // 0x0508 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentExtractableDefinition[0x20]; // 0x0518 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t DexNumber; // 0x0538 (Size: 0x4, Type: IntProperty)
    std::uint8_t ExtractableType; // 0x053C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x053D
    std::uint8_t ItemToGrant[0x20]; // 0x0540 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AcquisitionType; // 0x0560 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0561
    std::uint8_t CustomProjectile[0x20]; // 0x0568 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t EquippedActiveAbilitySet[0x20]; // 0x0588 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AIEventTableRow[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t AcquisitionHintText[0x10]; // 0x05B8 (Size: 0x10, Type: TextProperty)
    FName ExtractRewardLootTier; // 0x05C8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UExtractableItemDefinition, PossibleAugments) == 1232, "Offset mismatch for UExtractableItemDefinition::PossibleAugments");
static_assert(offsetof(UExtractableItemDefinition, LevelUpExpCurve) == 1248, "Offset mismatch for UExtractableItemDefinition::LevelUpExpCurve");
static_assert(offsetof(UExtractableItemDefinition, RelicPointsOnExtraction) == 1288, "Offset mismatch for UExtractableItemDefinition::RelicPointsOnExtraction");
static_assert(offsetof(UExtractableItemDefinition, ParentExtractableDefinition) == 1304, "Offset mismatch for UExtractableItemDefinition::ParentExtractableDefinition");
static_assert(offsetof(UExtractableItemDefinition, DexNumber) == 1336, "Offset mismatch for UExtractableItemDefinition::DexNumber");
static_assert(offsetof(UExtractableItemDefinition, ExtractableType) == 1340, "Offset mismatch for UExtractableItemDefinition::ExtractableType");
static_assert(offsetof(UExtractableItemDefinition, ItemToGrant) == 1344, "Offset mismatch for UExtractableItemDefinition::ItemToGrant");
static_assert(offsetof(UExtractableItemDefinition, AcquisitionType) == 1376, "Offset mismatch for UExtractableItemDefinition::AcquisitionType");
static_assert(offsetof(UExtractableItemDefinition, CustomProjectile) == 1384, "Offset mismatch for UExtractableItemDefinition::CustomProjectile");
static_assert(offsetof(UExtractableItemDefinition, EquippedActiveAbilitySet) == 1416, "Offset mismatch for UExtractableItemDefinition::EquippedActiveAbilitySet");
static_assert(offsetof(UExtractableItemDefinition, AIEventTableRow) == 1448, "Offset mismatch for UExtractableItemDefinition::AIEventTableRow");
static_assert(offsetof(UExtractableItemDefinition, AcquisitionHintText) == 1464, "Offset mismatch for UExtractableItemDefinition::AcquisitionHintText");
static_assert(offsetof(UExtractableItemDefinition, ExtractRewardLootTier) == 1480, "Offset mismatch for UExtractableItemDefinition::ExtractRewardLootTier");

// /Script/ExtractionCoreRuntime.ExtractableItem_DataComponent
// Kind: Class; super: ActorComponent
class UExtractableItem_DataComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ItemEntry[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UExtractableItem_DataComponent, ItemEntry) == 192, "Offset mismatch for UExtractableItem_DataComponent::ItemEntry");

// /Script/ExtractionCoreRuntime.ExtractablePickup
// Kind: Class; super: FortPickupAthena
class UExtractablePickup
{
public:
    std::uint8_t Pad_0000[0x760]; // 0x0000
    std::uint8_t bOverrideInteract; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0761
    std::uint8_t InteractionText[0x10]; // 0x0768 (Size: 0x10, Type: TextProperty)
    void* InteractionOverrideWidget; // 0x0778 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SecondaryInteractionText[0x10]; // 0x0780 (Size: 0x10, Type: TextProperty)
    float SecondaryInteractionDuration; // 0x0790 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHiddenForCustomDrop; // 0x0794 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0795
    void* CustomInteractionWidgetInstance; // 0x0798 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractablePickup, bOverrideInteract) == 1888, "Offset mismatch for UExtractablePickup::bOverrideInteract");
static_assert(offsetof(UExtractablePickup, InteractionText) == 1896, "Offset mismatch for UExtractablePickup::InteractionText");
static_assert(offsetof(UExtractablePickup, InteractionOverrideWidget) == 1912, "Offset mismatch for UExtractablePickup::InteractionOverrideWidget");
static_assert(offsetof(UExtractablePickup, SecondaryInteractionText) == 1920, "Offset mismatch for UExtractablePickup::SecondaryInteractionText");
static_assert(offsetof(UExtractablePickup, SecondaryInteractionDuration) == 1936, "Offset mismatch for UExtractablePickup::SecondaryInteractionDuration");
static_assert(offsetof(UExtractablePickup, bHiddenForCustomDrop) == 1940, "Offset mismatch for UExtractablePickup::bHiddenForCustomDrop");
static_assert(offsetof(UExtractablePickup, CustomInteractionWidgetInstance) == 1944, "Offset mismatch for UExtractablePickup::CustomInteractionWidgetInstance");

// /Script/ExtractionCoreRuntime.ExtractablePreviousSeason_MagpiePersistenceManager
// Kind: Class; super: Extractable_MagpiePersistenceManager
class UExtractablePreviousSeason_MagpiePersistenceManager
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* MagpieCatalogProviderClass; // 0x01C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UExtractablePreviousSeason_MagpiePersistenceManager, MagpieCatalogProviderClass) == 448, "Offset mismatch for UExtractablePreviousSeason_MagpiePersistenceManager::MagpieCatalogProviderClass");

// /Script/ExtractionCoreRuntime.ExtractableSpawnSource
// Kind: Class; super: Interface
class UExtractableSpawnSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.Extractable_Ch7S3_MagpieModuleProvider
// Kind: Class; super: Object
class UExtractable_Ch7S3_MagpieModuleProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.Extractable_Ch7S4_MagpieModuleProvider
// Kind: Class; super: Object
class UExtractable_Ch7S4_MagpieModuleProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.Extractable_LocalPersistenceManager
// Kind: Class; super: Extractable_PersistenceManager
class UExtractable_LocalPersistenceManager
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t UnlockCostCurveTable[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> InstancePurchaseCurveTable; // 0x0150 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UExtractable_LocalPersistenceManager, UnlockCostCurveTable) == 304, "Offset mismatch for UExtractable_LocalPersistenceManager::UnlockCostCurveTable");
static_assert(offsetof(UExtractable_LocalPersistenceManager, InstancePurchaseCurveTable) == 336, "Offset mismatch for UExtractable_LocalPersistenceManager::InstancePurchaseCurveTable");

// /Script/ExtractionCoreRuntime.Extractable_MagpiePersistenceManager
// Kind: Class; super: Extractable_PersistenceManager
class UExtractable_MagpiePersistenceManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* LocalBackendDataTable; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractable_MagpiePersistenceManager, LocalBackendDataTable) == 208, "Offset mismatch for UExtractable_MagpiePersistenceManager::LocalBackendDataTable");

// /Script/ExtractionCoreRuntime.Extractable_PersistenceManager
// Kind: Class; super: ExtractionCorePersistenceManager
class UExtractable_PersistenceManager
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MaxExtractionPoints[0x40]; // 0x0068 (Size: 0x40, Type: StructProperty)
    std::uint8_t InternalPersistenceData[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UExtractable_PersistenceManager, MaxExtractionPoints) == 104, "Offset mismatch for UExtractable_PersistenceManager::MaxExtractionPoints");
static_assert(offsetof(UExtractable_PersistenceManager, InternalPersistenceData) == 168, "Offset mismatch for UExtractable_PersistenceManager::InternalPersistenceData");

// /Script/ExtractionCoreRuntime.ExtractionAnalyticsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UExtractionAnalyticsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionAttributeSet
// Kind: Class; super: FortAttributeSet
class UExtractionAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentExtractableExperience[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UExtractionAttributeSet, CurrentExtractableExperience) == 72, "Offset mismatch for UExtractionAttributeSet::CurrentExtractableExperience");

// /Script/ExtractionCoreRuntime.ExtractionBackpackActor
// Kind: Class; super: Actor
class UExtractionBackpackActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t HideExtractableTag[0x4]; // 0x0278 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OwningPawn; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ExtractableItemDefinition; // 0x0284 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UExtractionBackpackActor, HideExtractableTag) == 632, "Offset mismatch for UExtractionBackpackActor::HideExtractableTag");
static_assert(offsetof(UExtractionBackpackActor, OwningPawn) == 636, "Offset mismatch for UExtractionBackpackActor::OwningPawn");
static_assert(offsetof(UExtractionBackpackActor, ExtractableItemDefinition) == 644, "Offset mismatch for UExtractionBackpackActor::ExtractableItemDefinition");

// /Script/ExtractionCoreRuntime.ExtractionBackpackGameplayAbility
// Kind: Class; super: FortGameplayAbility
class UExtractionBackpackGameplayAbility
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t ActivationType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t EffectContainers[0x398]; // 0x03B0 (Size: 0x398, Type: StructProperty)
    TArray<void*> GameplayEffectContainers; // 0x0748 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DynamicGameplayEffectContainers; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t OwnerPreviewImageOverrideTags[0x20]; // 0x0768 (Size: 0x20, Type: StructProperty)
    void* ProjectileClass; // 0x0788 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowBlueprintReplicatedVariables; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0791
    std::uint8_t DamageStatHandle[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    TArray<void*> AbilityCosts; // 0x07A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Costs; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyingCostsEnabled; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    // 0x07C8 BoolProperty bShowWidgetForCosts (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x07C9
    std::uint8_t MovementCancellationLeashLength[0x28]; // 0x07D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownDuration[0x28]; // 0x07F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownTags[0x20]; // 0x0820 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplicitCooldownAssetTags[0x20]; // 0x0840 (Size: 0x20, Type: StructProperty)
    std::uint8_t CustomFiringSequenceLength; // 0x0860 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0861
    std::uint8_t bDisableMoveCombining; // 0x0864 (Size: 0x1, Type: BoolProperty)
    // 0x0864 BoolProperty bIgnoreClientActivationAttempts (shared storage)
    // 0x0864 BoolProperty bPersistOnDeath (shared storage)
    // 0x0864 BoolProperty bRequireServerTimeValidationPass (shared storage)
    // 0x0864 BoolProperty bRequireServerValidationPass (shared storage)
    // 0x0864 BoolProperty bStartWithCooldown (shared storage)
    // 0x0864 BoolProperty bStopsAIBehaviorLogic (shared storage)
    // 0x0864 BoolProperty bStopsAIMovement (shared storage)
    std::uint8_t bForceNormalAILOD; // 0x0865 (Size: 0x1, Type: BoolProperty)
    // 0x0865 BoolProperty bStopsRVOAvoidance (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x0866
    std::uint8_t MinimumRequiredAILODLevel; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0869
    std::uint8_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests; // 0x086C (Size: 0x1, Type: BoolProperty)
    // 0x086C BoolProperty bAcceptTargetActorVehicleForCanHitTests (shared storage)
    // 0x086C BoolProperty bRelevantForAIDespawning (shared storage)
    // 0x086C BoolProperty bUseOwnerInstigatorAsInstigator (shared storage)
    // 0x086C BoolProperty bUseTetheredPawnAsInstigator (shared storage)
    std::uint8_t bUseAIFireLocationAndRotation; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x086E
    std::uint8_t AIWeaponUsage; // 0x0870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0871
    std::uint8_t WeaponTestApplicationTag[0x4]; // 0x0874 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x0878 (Size: 0x1, Type: BoolProperty)
    // 0x0878 BoolProperty bVerifyFireOffsetIsNotObstructedByWorldGeometry (shared storage)
    std::uint8_t Pad_0009[0x7]; // 0x0879
    std::uint8_t FireOffset[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    float ActivationNoiseRange; // 0x0898 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseRange; // 0x089C (Size: 0x4, Type: FloatProperty)
    float ActivationNoiseLoudness; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseLoudness; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProhibitedTargetTags[0x21]; // 0x08A8 (Size: 0x21, Type: StructProperty)
    std::uint8_t bLeadPawnTargets; // 0x08C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x08CA
    float DesiredThrowAngle; // 0x08CC (Size: 0x4, Type: FloatProperty)
    float MaxYawAngleToFire; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMaxYawAngleToFire; // 0x08D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTargetActorLocation; // 0x08D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x08D6
    float InitialAccuracyMax; // 0x08D8 (Size: 0x4, Type: FloatProperty)
    float InitialAccuracyMin; // 0x08DC (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMax; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMin; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    float MinAccuracyDistance; // 0x08E8 (Size: 0x4, Type: FloatProperty)
    float MaxAccuracyDistance; // 0x08EC (Size: 0x4, Type: FloatProperty)
    float AccuracyDistanceMultiplier; // 0x08F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUsesToReachTargetAccuracy; // 0x08F4 (Size: 0x4, Type: IntProperty)
    std::int32_t UseCount; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMobileToggle; // 0x08FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateIfTagsAlreadyPresent; // 0x08FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0xA]; // 0x08FE
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0918
    std::uint8_t MontageInfo[0x58]; // 0x0978 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousMontageInfo[0x58]; // 0x09D0 (Size: 0x58, Type: StructProperty)
    TArray<void*> ModList; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* AbilityWeapon; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0A50 (Size: 0x18, Type: TextProperty)
    void* SmallPreviewImageOverride; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x10]; // 0x0A70
    float ChargeStartTime; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0A84
    std::uint8_t ChargeState; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x27]; // 0x0A89
    void* ToolTip; // 0x0AB0 (Size: 0x8, Type: ClassProperty)
    void* StatList; // 0x0AB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0AC0
    std::uint8_t ActorTrackingSettings[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnalyticsTags[0x20]; // 0x0AF0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagChangedActions; // 0x0B10 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractionBackpackGameplayAbility, ActivationType) == 936, "Offset mismatch for UExtractionBackpackGameplayAbility::ActivationType");
static_assert(offsetof(UExtractionBackpackGameplayAbility, EffectContainers) == 944, "Offset mismatch for UExtractionBackpackGameplayAbility::EffectContainers");
static_assert(offsetof(UExtractionBackpackGameplayAbility, GameplayEffectContainers) == 1864, "Offset mismatch for UExtractionBackpackGameplayAbility::GameplayEffectContainers");
static_assert(offsetof(UExtractionBackpackGameplayAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UExtractionBackpackGameplayAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(UExtractionBackpackGameplayAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UExtractionBackpackGameplayAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ProjectileClass) == 1928, "Offset mismatch for UExtractionBackpackGameplayAbility::ProjectileClass");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UExtractionBackpackGameplayAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UExtractionBackpackGameplayAbility, DamageStatHandle) == 1944, "Offset mismatch for UExtractionBackpackGameplayAbility::DamageStatHandle");
static_assert(offsetof(UExtractionBackpackGameplayAbility, AbilityCosts) == 1960, "Offset mismatch for UExtractionBackpackGameplayAbility::AbilityCosts");
static_assert(offsetof(UExtractionBackpackGameplayAbility, Costs) == 1976, "Offset mismatch for UExtractionBackpackGameplayAbility::Costs");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for UExtractionBackpackGameplayAbility::bApplyingCostsEnabled");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for UExtractionBackpackGameplayAbility::MovementCancellationLeashLength");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for UExtractionBackpackGameplayAbility::ExplicitCooldownDuration");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for UExtractionBackpackGameplayAbility::ExplicitCooldownTags");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UExtractionBackpackGameplayAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(UExtractionBackpackGameplayAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for UExtractionBackpackGameplayAbility::CustomFiringSequenceLength");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bDisableMoveCombining) == 2148, "Offset mismatch for UExtractionBackpackGameplayAbility::bDisableMoveCombining");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bForceNormalAILOD) == 2149, "Offset mismatch for UExtractionBackpackGameplayAbility::bForceNormalAILOD");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UExtractionBackpackGameplayAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UExtractionBackpackGameplayAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UExtractionBackpackGameplayAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(UExtractionBackpackGameplayAbility, AIWeaponUsage) == 2160, "Offset mismatch for UExtractionBackpackGameplayAbility::AIWeaponUsage");
static_assert(offsetof(UExtractionBackpackGameplayAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for UExtractionBackpackGameplayAbility::WeaponTestApplicationTag");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UExtractionBackpackGameplayAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UExtractionBackpackGameplayAbility, FireOffset) == 2176, "Offset mismatch for UExtractionBackpackGameplayAbility::FireOffset");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ActivationNoiseRange) == 2200, "Offset mismatch for UExtractionBackpackGameplayAbility::ActivationNoiseRange");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ImpactNoiseRange) == 2204, "Offset mismatch for UExtractionBackpackGameplayAbility::ImpactNoiseRange");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for UExtractionBackpackGameplayAbility::ActivationNoiseLoudness");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for UExtractionBackpackGameplayAbility::ImpactNoiseLoudness");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for UExtractionBackpackGameplayAbility::ProhibitedTargetTags");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bLeadPawnTargets) == 2249, "Offset mismatch for UExtractionBackpackGameplayAbility::bLeadPawnTargets");
static_assert(offsetof(UExtractionBackpackGameplayAbility, DesiredThrowAngle) == 2252, "Offset mismatch for UExtractionBackpackGameplayAbility::DesiredThrowAngle");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for UExtractionBackpackGameplayAbility::MaxYawAngleToFire");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UExtractionBackpackGameplayAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for UExtractionBackpackGameplayAbility::bUseTargetActorLocation");
static_assert(offsetof(UExtractionBackpackGameplayAbility, InitialAccuracyMax) == 2264, "Offset mismatch for UExtractionBackpackGameplayAbility::InitialAccuracyMax");
static_assert(offsetof(UExtractionBackpackGameplayAbility, InitialAccuracyMin) == 2268, "Offset mismatch for UExtractionBackpackGameplayAbility::InitialAccuracyMin");
static_assert(offsetof(UExtractionBackpackGameplayAbility, TargetAccuracyMax) == 2272, "Offset mismatch for UExtractionBackpackGameplayAbility::TargetAccuracyMax");
static_assert(offsetof(UExtractionBackpackGameplayAbility, TargetAccuracyMin) == 2276, "Offset mismatch for UExtractionBackpackGameplayAbility::TargetAccuracyMin");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MinAccuracyDistance) == 2280, "Offset mismatch for UExtractionBackpackGameplayAbility::MinAccuracyDistance");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for UExtractionBackpackGameplayAbility::MaxAccuracyDistance");
static_assert(offsetof(UExtractionBackpackGameplayAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UExtractionBackpackGameplayAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(UExtractionBackpackGameplayAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UExtractionBackpackGameplayAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UExtractionBackpackGameplayAbility, UseCount) == 2296, "Offset mismatch for UExtractionBackpackGameplayAbility::UseCount");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bIsMobileToggle) == 2300, "Offset mismatch for UExtractionBackpackGameplayAbility::bIsMobileToggle");
static_assert(offsetof(UExtractionBackpackGameplayAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UExtractionBackpackGameplayAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UExtractionBackpackGameplayAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UExtractionBackpackGameplayAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UExtractionBackpackGameplayAbility, MontageInfo) == 2424, "Offset mismatch for UExtractionBackpackGameplayAbility::MontageInfo");
static_assert(offsetof(UExtractionBackpackGameplayAbility, PreviousMontageInfo) == 2512, "Offset mismatch for UExtractionBackpackGameplayAbility::PreviousMontageInfo");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ModList) == 2600, "Offset mismatch for UExtractionBackpackGameplayAbility::ModList");
static_assert(offsetof(UExtractionBackpackGameplayAbility, AbilityWeapon) == 2616, "Offset mismatch for UExtractionBackpackGameplayAbility::AbilityWeapon");
static_assert(offsetof(UExtractionBackpackGameplayAbility, DisplayName) == 2624, "Offset mismatch for UExtractionBackpackGameplayAbility::DisplayName");
static_assert(offsetof(UExtractionBackpackGameplayAbility, Description) == 2640, "Offset mismatch for UExtractionBackpackGameplayAbility::Description");
static_assert(offsetof(UExtractionBackpackGameplayAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for UExtractionBackpackGameplayAbility::SmallPreviewImageOverride");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ChargeStartTime) == 2688, "Offset mismatch for UExtractionBackpackGameplayAbility::ChargeStartTime");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ChargeState) == 2696, "Offset mismatch for UExtractionBackpackGameplayAbility::ChargeState");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ToolTip) == 2736, "Offset mismatch for UExtractionBackpackGameplayAbility::ToolTip");
static_assert(offsetof(UExtractionBackpackGameplayAbility, StatList) == 2744, "Offset mismatch for UExtractionBackpackGameplayAbility::StatList");
static_assert(offsetof(UExtractionBackpackGameplayAbility, ActorTrackingSettings) == 2760, "Offset mismatch for UExtractionBackpackGameplayAbility::ActorTrackingSettings");
static_assert(offsetof(UExtractionBackpackGameplayAbility, AnalyticsTags) == 2800, "Offset mismatch for UExtractionBackpackGameplayAbility::AnalyticsTags");
static_assert(offsetof(UExtractionBackpackGameplayAbility, TagChangedActions) == 2832, "Offset mismatch for UExtractionBackpackGameplayAbility::TagChangedActions");

// /Script/ExtractionCoreRuntime.ExtractionCoreCheatManager
// Kind: Class; super: ChildCheatManager
class UExtractionCoreCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionCoreClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UExtractionCoreClientSettingRecordPartition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bHideRiftRelicOnMyBack; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UExtractionCoreClientSettingRecordPartition, bHideRiftRelicOnMyBack) == 64, "Offset mismatch for UExtractionCoreClientSettingRecordPartition::bHideRiftRelicOnMyBack");

// /Script/ExtractionCoreRuntime.ExtractionCoreControllerComponent
// Kind: Class; super: FortControllerComponent
class UExtractionCoreControllerComponent
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

static_assert(offsetof(UExtractionCoreControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UExtractionCoreControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UExtractionCoreControllerComponent, ComponentTags) == 104, "Offset mismatch for UExtractionCoreControllerComponent::ComponentTags");
static_assert(offsetof(UExtractionCoreControllerComponent, AssetUserData) == 120, "Offset mismatch for UExtractionCoreControllerComponent::AssetUserData");
static_assert(offsetof(UExtractionCoreControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UExtractionCoreControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UExtractionCoreControllerComponent, bNetAddressable) == 152, "Offset mismatch for UExtractionCoreControllerComponent::bNetAddressable");
static_assert(offsetof(UExtractionCoreControllerComponent, bAutoActivate) == 154, "Offset mismatch for UExtractionCoreControllerComponent::bAutoActivate");
static_assert(offsetof(UExtractionCoreControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UExtractionCoreControllerComponent::bIsEditorOnly");
static_assert(offsetof(UExtractionCoreControllerComponent, CreationMethod) == 185, "Offset mismatch for UExtractionCoreControllerComponent::CreationMethod");
static_assert(offsetof(UExtractionCoreControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UExtractionCoreControllerComponent::OnComponentActivated");
static_assert(offsetof(UExtractionCoreControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UExtractionCoreControllerComponent::OnComponentDeactivated");

// /Script/ExtractionCoreRuntime.ExtractionCoreMenu
// Kind: Class; super: ImGuiDebugMenuBase
class UExtractionCoreMenu
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* PrivateLocalPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractionCoreMenu, PrivateLocalPlayerController) == 656, "Offset mismatch for UExtractionCoreMenu::PrivateLocalPlayerController");

// /Script/ExtractionCoreRuntime.ExtractionCorePersistenceManager
// Kind: Class; super: Object
class UExtractionCorePersistenceManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnReceivedPersistenceData; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UExtractionCorePersistenceManager, OnReceivedPersistenceData) == 40, "Offset mismatch for UExtractionCorePersistenceManager::OnReceivedPersistenceData");

// /Script/ExtractionCoreRuntime.ExtractionCoreSubsystem
// Kind: Class; super: WorldSubsystem
class UExtractionCoreSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> ExtractableRegisteredAssetRegistry_Map; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtractableRegisteredAssetRegistry_InverseMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtractableRegisteredAssetRegistry_InverseMapOverrides; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CachedPersistenceManagerClasses; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x40]; // 0x00A8
    TMap<void*, void*> PersistenceManagerInstances; // 0x00E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x20]; // 0x00F8
    TArray<void*> PerPlayerPersistenceManagerList; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractionCoreSubsystem, ExtractableRegisteredAssetRegistry_Map) == 104, "Offset mismatch for UExtractionCoreSubsystem::ExtractableRegisteredAssetRegistry_Map");
static_assert(offsetof(UExtractionCoreSubsystem, ExtractableRegisteredAssetRegistry_InverseMap) == 120, "Offset mismatch for UExtractionCoreSubsystem::ExtractableRegisteredAssetRegistry_InverseMap");
static_assert(offsetof(UExtractionCoreSubsystem, ExtractableRegisteredAssetRegistry_InverseMapOverrides) == 136, "Offset mismatch for UExtractionCoreSubsystem::ExtractableRegisteredAssetRegistry_InverseMapOverrides");
static_assert(offsetof(UExtractionCoreSubsystem, CachedPersistenceManagerClasses) == 152, "Offset mismatch for UExtractionCoreSubsystem::CachedPersistenceManagerClasses");
static_assert(offsetof(UExtractionCoreSubsystem, PersistenceManagerInstances) == 232, "Offset mismatch for UExtractionCoreSubsystem::PersistenceManagerInstances");
static_assert(offsetof(UExtractionCoreSubsystem, PerPlayerPersistenceManagerList) == 280, "Offset mismatch for UExtractionCoreSubsystem::PerPlayerPersistenceManagerList");

// /Script/ExtractionCoreRuntime.ExtractionInventoryUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UExtractionInventoryUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionObjectInterface
// Kind: Class; super: Interface
class UExtractionObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ExtractionCoreRuntime.ExtractionPickupInteractOverrideComponent
// Kind: Class; super: FortPickupInteractOverrideComponent
class UExtractionPickupInteractOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FText SecondaryInteractionText; // 0x00E0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UExtractionPickupInteractOverrideComponent, SecondaryInteractionText) == 224, "Offset mismatch for UExtractionPickupInteractOverrideComponent::SecondaryInteractionText");

// /Script/ExtractionCoreRuntime.FortAthenaMutator_RelicExtraction
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_RelicExtraction
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FString LeaderboardGameId; // 0x02E0 (Size: 0x10, Type: StrProperty)
    FString LeaderboardEventId; // 0x02F0 (Size: 0x10, Type: StrProperty)
    FString LeaderboardWindowId; // 0x0300 (Size: 0x10, Type: StrProperty)
    FString LeaderboardTrackedStat; // 0x0310 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortAthenaMutator_RelicExtraction, LeaderboardGameId) == 736, "Offset mismatch for UFortAthenaMutator_RelicExtraction::LeaderboardGameId");
static_assert(offsetof(UFortAthenaMutator_RelicExtraction, LeaderboardEventId) == 752, "Offset mismatch for UFortAthenaMutator_RelicExtraction::LeaderboardEventId");
static_assert(offsetof(UFortAthenaMutator_RelicExtraction, LeaderboardWindowId) == 768, "Offset mismatch for UFortAthenaMutator_RelicExtraction::LeaderboardWindowId");
static_assert(offsetof(UFortAthenaMutator_RelicExtraction, LeaderboardTrackedStat) == 784, "Offset mismatch for UFortAthenaMutator_RelicExtraction::LeaderboardTrackedStat");

// /Script/ExtractionCoreRuntime.SpriteSaveGame
// Kind: Class; super: SaveGame
class USpriteSaveGame
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ExternalDataJson; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USpriteSaveGame, ExternalDataJson) == 40, "Offset mismatch for USpriteSaveGame::ExternalDataJson");
