/**
 * decamp dumper generated SDK
 * Package: /Script/BeanstalkCosmeticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeanstalkCosmeticsRuntime.BeanCosmeticDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FBeanCosmeticDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Definition; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FBeanCosmeticDataTableRow, Definition) == 8, "Offset mismatch for FBeanCosmeticDataTableRow::Definition");

// /Script/BeanstalkCosmeticsRuntime.BeanEmoteConversionRow
// Kind: ScriptStruct; super: TableRowBase
struct FBeanEmoteConversionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> EmoteDefinition; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FBeanEmoteConversionRow, EmoteDefinition) == 8, "Offset mismatch for FBeanEmoteConversionRow::EmoteDefinition");

// /Script/BeanstalkCosmeticsRuntime.BeanAccountItemDefinitionOverride
// Kind: Class; super: PrimaryDataAsset
class UBeanAccountItemDefinitionOverride
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkCosmeticsRuntime.BeanAthenaCharacterItemDefinitionOverride
// Kind: Class; super: BeanAccountItemDefinitionOverride
class UBeanAthenaCharacterItemDefinitionOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BaseAthenaCharacterItemDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> BeanAthenaCharacterItemDefinitionOverride; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UBeanAthenaCharacterItemDefinitionOverride, BaseAthenaCharacterItemDefinition) == 40, "Offset mismatch for UBeanAthenaCharacterItemDefinitionOverride::BaseAthenaCharacterItemDefinition");
static_assert(offsetof(UBeanAthenaCharacterItemDefinitionOverride, BeanAthenaCharacterItemDefinitionOverride) == 72, "Offset mismatch for UBeanAthenaCharacterItemDefinitionOverride::BeanAthenaCharacterItemDefinitionOverride");

// /Script/BeanstalkCosmeticsRuntime.BeanCosmeticItemDefinitionBase
// Kind: Class; super: FortCosmeticItemAdditionalData
class UBeanCosmeticItemDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Body_Pattern[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t BodyFaceplateColorIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t BodyFaceplateMaterialTypeIndex; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t BodyEyesColorIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t BodyEyesMaterialTypeIndex; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEyelashes; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::int32_t EyelashesColorIndex; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t EyelashesMaterialTypeIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t bGlasses; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    std::int32_t GlassesFrameColorIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t GlassesFrameMaterialTypeIndex; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bGlassesLenses; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::int32_t GlassesLensesColorIndex; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t GlassesLensesMaterialTypeIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t HeadCostumeMainColorIndex; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t HeadCostumeMainMaterialTypeIndex; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHeadCostumeMainClothingPattern; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0085
    std::int32_t HeadCostumeSecondaryColorIndex; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t HeadCostumeSecondaryMaterialTypeIndex; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHeadCostumeSecondaryClothingPattern; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0091
    std::int32_t HeadCostumeAccentColorIndex; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t HeadCostumeAccentMaterialTypeIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHeadCostumeAccentClothingPattern; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x009D
    std::int32_t BodyMainColorIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t BodyMainMaterialTypeIndex; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t BodySecondaryColorIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t BodySecondaryMaterialTypeIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t CostumePatternAtlasTextureSlot; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t HeadCostumePatternAtlasTextureSlot; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t CostumeMainColorIndex; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t CostumeMainMaterialTypeIndex; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::uint8_t bCostumeMainClothingPattern; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00C1
    std::int32_t CostumeSecondaryColorIndex; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::int32_t CostumeSecondaryMaterialTypeIndex; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCostumeSecondaryClothingPattern; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00CD
    std::int32_t CostumeAccentColorIndex; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t CostumeAccentMaterialTypeIndex; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCostumeAccentClothingPattern; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBeanCosmeticItemDefinitionBase, Body_Pattern) == 40, "Offset mismatch for UBeanCosmeticItemDefinitionBase::Body_Pattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyFaceplateColorIndex) == 72, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyFaceplateColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyFaceplateMaterialTypeIndex) == 76, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyFaceplateMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyEyesColorIndex) == 80, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyEyesColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyEyesMaterialTypeIndex) == 84, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyEyesMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bEyelashes) == 88, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bEyelashes");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, EyelashesColorIndex) == 92, "Offset mismatch for UBeanCosmeticItemDefinitionBase::EyelashesColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, EyelashesMaterialTypeIndex) == 96, "Offset mismatch for UBeanCosmeticItemDefinitionBase::EyelashesMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bGlasses) == 100, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bGlasses");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, GlassesFrameColorIndex) == 104, "Offset mismatch for UBeanCosmeticItemDefinitionBase::GlassesFrameColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, GlassesFrameMaterialTypeIndex) == 108, "Offset mismatch for UBeanCosmeticItemDefinitionBase::GlassesFrameMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bGlassesLenses) == 112, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bGlassesLenses");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, GlassesLensesColorIndex) == 116, "Offset mismatch for UBeanCosmeticItemDefinitionBase::GlassesLensesColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, GlassesLensesMaterialTypeIndex) == 120, "Offset mismatch for UBeanCosmeticItemDefinitionBase::GlassesLensesMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeMainColorIndex) == 124, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeMainColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeMainMaterialTypeIndex) == 128, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeMainMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bHeadCostumeMainClothingPattern) == 132, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bHeadCostumeMainClothingPattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeSecondaryColorIndex) == 136, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeSecondaryColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeSecondaryMaterialTypeIndex) == 140, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeSecondaryMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bHeadCostumeSecondaryClothingPattern) == 144, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bHeadCostumeSecondaryClothingPattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeAccentColorIndex) == 148, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeAccentColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumeAccentMaterialTypeIndex) == 152, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumeAccentMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bHeadCostumeAccentClothingPattern) == 156, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bHeadCostumeAccentClothingPattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyMainColorIndex) == 160, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyMainColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodyMainMaterialTypeIndex) == 164, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodyMainMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodySecondaryColorIndex) == 168, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodySecondaryColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, BodySecondaryMaterialTypeIndex) == 172, "Offset mismatch for UBeanCosmeticItemDefinitionBase::BodySecondaryMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumePatternAtlasTextureSlot) == 176, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumePatternAtlasTextureSlot");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, HeadCostumePatternAtlasTextureSlot) == 180, "Offset mismatch for UBeanCosmeticItemDefinitionBase::HeadCostumePatternAtlasTextureSlot");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeMainColorIndex) == 184, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeMainColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeMainMaterialTypeIndex) == 188, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeMainMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bCostumeMainClothingPattern) == 192, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bCostumeMainClothingPattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeSecondaryColorIndex) == 196, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeSecondaryColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeSecondaryMaterialTypeIndex) == 200, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeSecondaryMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bCostumeSecondaryClothingPattern) == 204, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bCostumeSecondaryClothingPattern");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeAccentColorIndex) == 208, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeAccentColorIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, CostumeAccentMaterialTypeIndex) == 212, "Offset mismatch for UBeanCosmeticItemDefinitionBase::CostumeAccentMaterialTypeIndex");
static_assert(offsetof(UBeanCosmeticItemDefinitionBase, bCostumeAccentClothingPattern) == 216, "Offset mismatch for UBeanCosmeticItemDefinitionBase::bCostumeAccentClothingPattern");

// /Script/BeanstalkCosmeticsRuntime.BeanCosmeticsData
// Kind: Class; super: PrimaryDataAsset
class UBeanCosmeticsData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* HeroType; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BulkCosmeticsPlaceholderCID[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    void* CharacterCosmeticsMap; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* EmoteLookupMap; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DefaultCharacterCosmetics; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* EmptyHandsPickaxeDef; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanCosmeticsData, HeroType) == 40, "Offset mismatch for UBeanCosmeticsData::HeroType");
static_assert(offsetof(UBeanCosmeticsData, BulkCosmeticsPlaceholderCID) == 48, "Offset mismatch for UBeanCosmeticsData::BulkCosmeticsPlaceholderCID");
static_assert(offsetof(UBeanCosmeticsData, CharacterCosmeticsMap) == 80, "Offset mismatch for UBeanCosmeticsData::CharacterCosmeticsMap");
static_assert(offsetof(UBeanCosmeticsData, EmoteLookupMap) == 88, "Offset mismatch for UBeanCosmeticsData::EmoteLookupMap");
static_assert(offsetof(UBeanCosmeticsData, DefaultCharacterCosmetics) == 96, "Offset mismatch for UBeanCosmeticsData::DefaultCharacterCosmetics");
static_assert(offsetof(UBeanCosmeticsData, EmptyHandsPickaxeDef) == 112, "Offset mismatch for UBeanCosmeticsData::EmptyHandsPickaxeDef");

// /Script/BeanstalkCosmeticsRuntime.BeanFortPlayerMannequin
// Kind: Class; super: FortPlayerMannequin
class UBeanFortPlayerMannequin
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    void* AthenaCharacter; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* AthenaBackBling; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* ExtraPart; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x03B8
    std::uint8_t MannequinLightingChannels[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    float MannequinBoundsScale; // 0x03DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMannequinVisible; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMannequinCastsHiddenShadow; // 0x03E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x03E2
    TArray<void*> AppliedCosmeticParts; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    void* CharacterPartList; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x40]; // 0x0400
    TSoftObjectPtr<void> SoftCharacterPartList; // 0x0440 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0004[0xF8]; // 0x0468
    TSoftObjectPtr<void> BackupCharacterPartList; // 0x0560 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0005[0x130]; // 0x0588
    TArray<void*> OverrideVariants; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    void* ColorSwatches; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x06D0
    void* WeaponSkeletalMesh; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    FName WeaponAttachSocket; // 0x06E0 (Size: 0x8, Type: NameProperty)
    void* WeaponSkeletalMeshComponent; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticDataComponent; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* MannequinPartSkeletalMeshComponents; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x40]; // 0x0700
    void* MannequinPartChaosClothComponents; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x40]; // 0x0748
    TArray<void*> MorphTargets; // 0x0788 (Size: 0x10, Type: ArrayProperty)
    void* CosmeticApplicatorComponent; // 0x0798 (Size: 0x8, Type: ObjectProperty)
    void* ContextualAnimSceneActorComponent; // 0x07A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInitialized; // 0x07A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitTick; // 0x07A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHighPriorityRBAN; // 0x07AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRegisterMannequinWithBudgetAllocator; // 0x07AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCalculateMannequinSignificance; // 0x07AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x07AD
    void* CustomizationAssetLoader; // 0x07B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoadingMode; // 0x07B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x6F]; // 0x07B9
    FMulticastInlineDelegate OnMaterialsUpdated; // 0x0828 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t UsageContext; // 0x0838 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000B[0x7]; // 0x0839
    void* PartModifiers; // 0x0840 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x48]; // 0x0848
    void* PlaceholderPartsList; // 0x0890 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanFortPlayerMannequin, AthenaCharacter) == 928, "Offset mismatch for UBeanFortPlayerMannequin::AthenaCharacter");
static_assert(offsetof(UBeanFortPlayerMannequin, AthenaBackBling) == 936, "Offset mismatch for UBeanFortPlayerMannequin::AthenaBackBling");
static_assert(offsetof(UBeanFortPlayerMannequin, ExtraPart) == 944, "Offset mismatch for UBeanFortPlayerMannequin::ExtraPart");
static_assert(offsetof(UBeanFortPlayerMannequin, MannequinLightingChannels) == 984, "Offset mismatch for UBeanFortPlayerMannequin::MannequinLightingChannels");
static_assert(offsetof(UBeanFortPlayerMannequin, MannequinBoundsScale) == 988, "Offset mismatch for UBeanFortPlayerMannequin::MannequinBoundsScale");
static_assert(offsetof(UBeanFortPlayerMannequin, bIsMannequinVisible) == 992, "Offset mismatch for UBeanFortPlayerMannequin::bIsMannequinVisible");
static_assert(offsetof(UBeanFortPlayerMannequin, bMannequinCastsHiddenShadow) == 993, "Offset mismatch for UBeanFortPlayerMannequin::bMannequinCastsHiddenShadow");
static_assert(offsetof(UBeanFortPlayerMannequin, AppliedCosmeticParts) == 1000, "Offset mismatch for UBeanFortPlayerMannequin::AppliedCosmeticParts");
static_assert(offsetof(UBeanFortPlayerMannequin, CharacterPartList) == 1016, "Offset mismatch for UBeanFortPlayerMannequin::CharacterPartList");
static_assert(offsetof(UBeanFortPlayerMannequin, SoftCharacterPartList) == 1088, "Offset mismatch for UBeanFortPlayerMannequin::SoftCharacterPartList");
static_assert(offsetof(UBeanFortPlayerMannequin, BackupCharacterPartList) == 1376, "Offset mismatch for UBeanFortPlayerMannequin::BackupCharacterPartList");
static_assert(offsetof(UBeanFortPlayerMannequin, OverrideVariants) == 1720, "Offset mismatch for UBeanFortPlayerMannequin::OverrideVariants");
static_assert(offsetof(UBeanFortPlayerMannequin, ColorSwatches) == 1736, "Offset mismatch for UBeanFortPlayerMannequin::ColorSwatches");
static_assert(offsetof(UBeanFortPlayerMannequin, WeaponSkeletalMesh) == 1752, "Offset mismatch for UBeanFortPlayerMannequin::WeaponSkeletalMesh");
static_assert(offsetof(UBeanFortPlayerMannequin, WeaponAttachSocket) == 1760, "Offset mismatch for UBeanFortPlayerMannequin::WeaponAttachSocket");
static_assert(offsetof(UBeanFortPlayerMannequin, WeaponSkeletalMeshComponent) == 1768, "Offset mismatch for UBeanFortPlayerMannequin::WeaponSkeletalMeshComponent");
static_assert(offsetof(UBeanFortPlayerMannequin, CosmeticDataComponent) == 1776, "Offset mismatch for UBeanFortPlayerMannequin::CosmeticDataComponent");
static_assert(offsetof(UBeanFortPlayerMannequin, MannequinPartSkeletalMeshComponents) == 1784, "Offset mismatch for UBeanFortPlayerMannequin::MannequinPartSkeletalMeshComponents");
static_assert(offsetof(UBeanFortPlayerMannequin, MannequinPartChaosClothComponents) == 1856, "Offset mismatch for UBeanFortPlayerMannequin::MannequinPartChaosClothComponents");
static_assert(offsetof(UBeanFortPlayerMannequin, MorphTargets) == 1928, "Offset mismatch for UBeanFortPlayerMannequin::MorphTargets");
static_assert(offsetof(UBeanFortPlayerMannequin, CosmeticApplicatorComponent) == 1944, "Offset mismatch for UBeanFortPlayerMannequin::CosmeticApplicatorComponent");
static_assert(offsetof(UBeanFortPlayerMannequin, ContextualAnimSceneActorComponent) == 1952, "Offset mismatch for UBeanFortPlayerMannequin::ContextualAnimSceneActorComponent");
static_assert(offsetof(UBeanFortPlayerMannequin, bInitialized) == 1960, "Offset mismatch for UBeanFortPlayerMannequin::bInitialized");
static_assert(offsetof(UBeanFortPlayerMannequin, bLimitTick) == 1961, "Offset mismatch for UBeanFortPlayerMannequin::bLimitTick");
static_assert(offsetof(UBeanFortPlayerMannequin, bHighPriorityRBAN) == 1962, "Offset mismatch for UBeanFortPlayerMannequin::bHighPriorityRBAN");
static_assert(offsetof(UBeanFortPlayerMannequin, bAutoRegisterMannequinWithBudgetAllocator) == 1963, "Offset mismatch for UBeanFortPlayerMannequin::bAutoRegisterMannequinWithBudgetAllocator");
static_assert(offsetof(UBeanFortPlayerMannequin, bAutoCalculateMannequinSignificance) == 1964, "Offset mismatch for UBeanFortPlayerMannequin::bAutoCalculateMannequinSignificance");
static_assert(offsetof(UBeanFortPlayerMannequin, CustomizationAssetLoader) == 1968, "Offset mismatch for UBeanFortPlayerMannequin::CustomizationAssetLoader");
static_assert(offsetof(UBeanFortPlayerMannequin, LoadingMode) == 1976, "Offset mismatch for UBeanFortPlayerMannequin::LoadingMode");
static_assert(offsetof(UBeanFortPlayerMannequin, OnMaterialsUpdated) == 2088, "Offset mismatch for UBeanFortPlayerMannequin::OnMaterialsUpdated");
static_assert(offsetof(UBeanFortPlayerMannequin, UsageContext) == 2104, "Offset mismatch for UBeanFortPlayerMannequin::UsageContext");
static_assert(offsetof(UBeanFortPlayerMannequin, PartModifiers) == 2112, "Offset mismatch for UBeanFortPlayerMannequin::PartModifiers");
static_assert(offsetof(UBeanFortPlayerMannequin, PlaceholderPartsList) == 2192, "Offset mismatch for UBeanFortPlayerMannequin::PlaceholderPartsList");

// /Script/BeanstalkCosmeticsRuntime.FortAthenaMutator_BeanBRCosmeticsOverride
// Kind: Class; super: FortAthenaMutator_CosmeticLoadoutOverride
class UFortAthenaMutator_BeanBRCosmeticsOverride
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t CosmeticsData[0x20]; // 0x02F0 (Size: 0x20, Type: SoftObjectProperty)
    void* CosmeticsDataCache; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaMutator_BeanBRCosmeticsOverride, CosmeticsData) == 752, "Offset mismatch for UFortAthenaMutator_BeanBRCosmeticsOverride::CosmeticsData");
static_assert(offsetof(UFortAthenaMutator_BeanBRCosmeticsOverride, CosmeticsDataCache) == 784, "Offset mismatch for UFortAthenaMutator_BeanBRCosmeticsOverride::CosmeticsDataCache");

// /Script/BeanstalkCosmeticsRuntime.FortCosmeticStep_ApplyBeanCD
// Kind: Class; super: FortCosmeticStep
class UFortCosmeticStep_ApplyBeanCD
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t BeanPartQuery[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCosmeticStep_ApplyBeanCD, BeanPartQuery) == 128, "Offset mismatch for UFortCosmeticStep_ApplyBeanCD::BeanPartQuery");

// /Script/BeanstalkCosmeticsRuntime.FortCosmeticStep_BeanRemoveBackpack
// Kind: Class; super: FortCosmeticStep
class UFortCosmeticStep_BeanRemoveBackpack
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCosmeticStep_BeanRemoveBackpack, FlowgraphKey) == 88, "Offset mismatch for UFortCosmeticStep_BeanRemoveBackpack::FlowgraphKey");
