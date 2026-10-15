/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortniteAI
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortniteAI.CharacterDefinitionEntry
// Kind: ScriptStruct; super: none
struct FCharacterDefinitionEntry
{
public:
    FString DefaultName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TSoftObjectPtr<void> NPCDefinition; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCharacterDefinitionEntry, DefaultName) == 0, "Offset mismatch for FCharacterDefinitionEntry::DefaultName");
static_assert(offsetof(FCharacterDefinitionEntry, NPCDefinition) == 16, "Offset mismatch for FCharacterDefinitionEntry::NPCDefinition");

// /Script/VerseFortniteAI.CharacterModifierEmote
// Kind: ScriptStruct; super: none
struct FCharacterModifierEmote
{
public:
    TSoftObjectPtr<void> EmoteDefinition; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCharacterModifierEmote, EmoteDefinition) == 0, "Offset mismatch for FCharacterModifierEmote::EmoteDefinition");

// /Script/VerseFortniteAI.CharacterModifierInfo
// Kind: ScriptStruct; super: none
struct FCharacterModifierInfo
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CharacterType[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bAddToDefaultModifiers; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExcludeFromAdditionalModifiers; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCharacterModifierInfo, Modifiers) == 0, "Offset mismatch for FCharacterModifierInfo::Modifiers");
static_assert(offsetof(FCharacterModifierInfo, CharacterType) == 16, "Offset mismatch for FCharacterModifierInfo::CharacterType");
static_assert(offsetof(FCharacterModifierInfo, bAddToDefaultModifiers) == 48, "Offset mismatch for FCharacterModifierInfo::bAddToDefaultModifiers");
static_assert(offsetof(FCharacterModifierInfo, bExcludeFromAdditionalModifiers) == 49, "Offset mismatch for FCharacterModifierInfo::bExcludeFromAdditionalModifiers");

// /Script/VerseFortniteAI.CharacterModifierInventoryItem
// Kind: ScriptStruct; super: none
struct FCharacterModifierInventoryItem
{
public:
    std::uint8_t ItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ItemQuantity; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCharacterModifierInventoryItem, ItemDefinition) == 0, "Offset mismatch for FCharacterModifierInventoryItem::ItemDefinition");
static_assert(offsetof(FCharacterModifierInventoryItem, ItemQuantity) == 32, "Offset mismatch for FCharacterModifierInventoryItem::ItemQuantity");

// /Script/VerseFortniteAI.CharacterPreviewAssets
// Kind: ScriptStruct; super: none
struct FCharacterPreviewAssets
{
public:
    std::uint8_t SkeletalMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SkeletalMeshAnimBP[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> CharacterParts; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemDefinition[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VariantChannels; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCharacterPreviewAssets, SkeletalMesh) == 0, "Offset mismatch for FCharacterPreviewAssets::SkeletalMesh");
static_assert(offsetof(FCharacterPreviewAssets, SkeletalMeshAnimBP) == 32, "Offset mismatch for FCharacterPreviewAssets::SkeletalMeshAnimBP");
static_assert(offsetof(FCharacterPreviewAssets, CharacterParts) == 64, "Offset mismatch for FCharacterPreviewAssets::CharacterParts");
static_assert(offsetof(FCharacterPreviewAssets, ItemDefinition) == 80, "Offset mismatch for FCharacterPreviewAssets::ItemDefinition");
static_assert(offsetof(FCharacterPreviewAssets, VariantChannels) == 112, "Offset mismatch for FCharacterPreviewAssets::VariantChannels");

// /Script/VerseFortniteAI.CharacterPreviewMesh
// Kind: ScriptStruct; super: none
struct FCharacterPreviewMesh
{
public:
    std::uint8_t SkeletalMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshDescriptor[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCharacterPreviewMesh, SkeletalMesh) == 0, "Offset mismatch for FCharacterPreviewMesh::SkeletalMesh");
static_assert(offsetof(FCharacterPreviewMesh, MeshDescriptor) == 32, "Offset mismatch for FCharacterPreviewMesh::MeshDescriptor");

// /Script/VerseFortniteAI.CharacterTypePreset
// Kind: ScriptStruct; super: none
struct FCharacterTypePreset
{
public:
    std::uint8_t SpawnerData[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t AdditionalData[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> CharacterDefinitionThumbnail; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCharacterTypePreset, SpawnerData) == 0, "Offset mismatch for FCharacterTypePreset::SpawnerData");
static_assert(offsetof(FCharacterTypePreset, AdditionalData) == 32, "Offset mismatch for FCharacterTypePreset::AdditionalData");
static_assert(offsetof(FCharacterTypePreset, CharacterDefinitionThumbnail) == 64, "Offset mismatch for FCharacterTypePreset::CharacterDefinitionThumbnail");

// /Script/VerseFortniteAI.DefaultCharacterCustomizationData
// Kind: ScriptStruct; super: none
struct FDefaultCharacterCustomizationData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> CharacterParts; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDefaultCharacterCustomizationData, CharacterParts) == 64, "Offset mismatch for FDefaultCharacterCustomizationData::CharacterParts");

// /Script/VerseFortniteAI.FortPawnScaleComponentParams
// Kind: ScriptStruct; super: none
struct FFortPawnScaleComponentParams
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAffectLocomotionAnimations; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleLocomotionAnimations; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortPawnScaleComponentParams, Scale) == 0, "Offset mismatch for FFortPawnScaleComponentParams::Scale");
static_assert(offsetof(FFortPawnScaleComponentParams, bAffectLocomotionAnimations) == 4, "Offset mismatch for FFortPawnScaleComponentParams::bAffectLocomotionAnimations");
static_assert(offsetof(FFortPawnScaleComponentParams, bScaleLocomotionAnimations) == 5, "Offset mismatch for FFortPawnScaleComponentParams::bScaleLocomotionAnimations");

// /Script/VerseFortniteAI.GameplayAbilityTargetData_PlayAnim
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FGameplayAbilityTargetData_PlayAnim
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Animation; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PlayCount; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float StartPosition; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BlendInTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    FName Slot; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, Animation) == 8, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::Animation");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, PlayRate) == 16, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::PlayRate");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, PlayCount) == 20, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::PlayCount");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, StartPosition) == 24, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::StartPosition");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, BlendInTime) == 28, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::BlendInTime");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, BlendOutTime) == 32, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::BlendOutTime");
static_assert(offsetof(FGameplayAbilityTargetData_PlayAnim, Slot) == 36, "Offset mismatch for FGameplayAbilityTargetData_PlayAnim::Slot");

// /Script/VerseFortniteAI.RandomCharacterPartsEntry
// Kind: ScriptStruct; super: none
struct FRandomCharacterPartsEntry
{
public:
    TArray<void*> RandomCharacterParts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumPartsToApply; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRandomCharacterPartsEntry, RandomCharacterParts) == 0, "Offset mismatch for FRandomCharacterPartsEntry::RandomCharacterParts");
static_assert(offsetof(FRandomCharacterPartsEntry, NumPartsToApply) == 16, "Offset mismatch for FRandomCharacterPartsEntry::NumPartsToApply");

// /Script/VerseFortniteAI.AIActionTaskInterfaceProxy
// Kind: Class; super: Object
class UAIActionTaskInterfaceProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.AIActionsHandlerComponent
// Kind: Class; super: ActorComponent
class UAIActionsHandlerComponent
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

static_assert(offsetof(UAIActionsHandlerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UAIActionsHandlerComponent::PrimaryComponentTick");
static_assert(offsetof(UAIActionsHandlerComponent, ComponentTags) == 104, "Offset mismatch for UAIActionsHandlerComponent::ComponentTags");
static_assert(offsetof(UAIActionsHandlerComponent, AssetUserData) == 120, "Offset mismatch for UAIActionsHandlerComponent::AssetUserData");
static_assert(offsetof(UAIActionsHandlerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UAIActionsHandlerComponent::UCSSerializationIndex");
static_assert(offsetof(UAIActionsHandlerComponent, bNetAddressable) == 152, "Offset mismatch for UAIActionsHandlerComponent::bNetAddressable");
static_assert(offsetof(UAIActionsHandlerComponent, bAutoActivate) == 154, "Offset mismatch for UAIActionsHandlerComponent::bAutoActivate");
static_assert(offsetof(UAIActionsHandlerComponent, bIsEditorOnly) == 155, "Offset mismatch for UAIActionsHandlerComponent::bIsEditorOnly");
static_assert(offsetof(UAIActionsHandlerComponent, CreationMethod) == 185, "Offset mismatch for UAIActionsHandlerComponent::CreationMethod");
static_assert(offsetof(UAIActionsHandlerComponent, OnComponentActivated) == 186, "Offset mismatch for UAIActionsHandlerComponent::OnComponentActivated");
static_assert(offsetof(UAIActionsHandlerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UAIActionsHandlerComponent::OnComponentDeactivated");

// /Script/VerseFortniteAI.AIAnimationComponentData
// Kind: Class; super: AIComponentData
class UAIAnimationComponentData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayAnimGameplayAbility; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UAIAnimationComponentData, PlayAnimGameplayAbility) == 40, "Offset mismatch for UAIAnimationComponentData::PlayAnimGameplayAbility");

// /Script/VerseFortniteAI.AIComponentData
// Kind: Class; super: Object
class UAIComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.AIPerceptionComponentData
// Kind: Class; super: Object
class UAIPerceptionComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.BehaviorTreeVerseInjection
// Kind: Class; super: Object
class UBehaviorTreeVerseInjection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InjectionTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBehaviorTreeVerseInjection, InjectionTag) == 40, "Offset mismatch for UBehaviorTreeVerseInjection::InjectionTag");

// /Script/VerseFortniteAI.CosmeticDownloadCandidateComponentNPC
// Kind: Class; super: CosmeticDownloadCandidateComponent
class UCosmeticDownloadCandidateComponentNPC
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

static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, PrimaryComponentTick) == 56, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::PrimaryComponentTick");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, ComponentTags) == 104, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::ComponentTags");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, AssetUserData) == 120, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::AssetUserData");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, UCSSerializationIndex) == 144, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::UCSSerializationIndex");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, bNetAddressable) == 152, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::bNetAddressable");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, bAutoActivate) == 154, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::bAutoActivate");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, bIsEditorOnly) == 155, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::bIsEditorOnly");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, CreationMethod) == 185, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::CreationMethod");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, OnComponentActivated) == 186, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::OnComponentActivated");
static_assert(offsetof(UCosmeticDownloadCandidateComponentNPC, OnComponentDeactivated) == 187, "Offset mismatch for UCosmeticDownloadCandidateComponentNPC::OnComponentDeactivated");

// /Script/VerseFortniteAI.FortAIComponent_RandomCustomization
// Kind: Class; super: ActorComponent
class UFortAIComponent_RandomCustomization
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::int32_t CharacterRandomSeed; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t ChosenCharacter[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    TArray<void*> ChosenCharacterParts; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAIComponent_RandomCustomization, CharacterRandomSeed) == 208, "Offset mismatch for UFortAIComponent_RandomCustomization::CharacterRandomSeed");
static_assert(offsetof(UFortAIComponent_RandomCustomization, ChosenCharacter) == 216, "Offset mismatch for UFortAIComponent_RandomCustomization::ChosenCharacter");
static_assert(offsetof(UFortAIComponent_RandomCustomization, ChosenCharacterParts) == 264, "Offset mismatch for UFortAIComponent_RandomCustomization::ChosenCharacterParts");

// /Script/VerseFortniteAI.FortAthenaAISpawnerDataComponent_Verse
// Kind: Class; super: FortAthenaAISpawnerDataComponent_ScriptBase
class UFortAthenaAISpawnerDataComponent_Verse
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* NPCBehaviorScriptInstance; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* NPCBehaviorScriptOverride; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NPCPrefab[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bReplicateEntity; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    std::uint8_t EnableVerseForNPC[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, NPCBehaviorScriptInstance) == 48, "Offset mismatch for UFortAthenaAISpawnerDataComponent_Verse::NPCBehaviorScriptInstance");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, NPCBehaviorScriptOverride) == 56, "Offset mismatch for UFortAthenaAISpawnerDataComponent_Verse::NPCBehaviorScriptOverride");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, NPCPrefab) == 64, "Offset mismatch for UFortAthenaAISpawnerDataComponent_Verse::NPCPrefab");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, bReplicateEntity) == 96, "Offset mismatch for UFortAthenaAISpawnerDataComponent_Verse::bReplicateEntity");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, EnableVerseForNPC) == 104, "Offset mismatch for UFortAthenaAISpawnerDataComponent_Verse::EnableVerseForNPC");

// /Script/VerseFortniteAI.FortControllerComponent_Verse
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_Verse
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

static_assert(offsetof(UFortControllerComponent_Verse, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_Verse::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_Verse, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_Verse::ComponentTags");
static_assert(offsetof(UFortControllerComponent_Verse, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_Verse::AssetUserData");
static_assert(offsetof(UFortControllerComponent_Verse, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_Verse::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_Verse, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_Verse::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_Verse, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_Verse::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_Verse, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_Verse::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_Verse, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_Verse::CreationMethod");
static_assert(offsetof(UFortControllerComponent_Verse, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_Verse::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_Verse, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_Verse::OnComponentDeactivated");

// /Script/VerseFortniteAI.FortGameFeatureAction_SetDefaultCharacterDefinition
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_SetDefaultCharacterDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultNPCCharacterDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PreviousNPCCharacterDefinition; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGameFeatureAction_SetDefaultCharacterDefinition, DefaultNPCCharacterDefinition) == 40, "Offset mismatch for UFortGameFeatureAction_SetDefaultCharacterDefinition::DefaultNPCCharacterDefinition");
static_assert(offsetof(UFortGameFeatureAction_SetDefaultCharacterDefinition, PreviousNPCCharacterDefinition) == 72, "Offset mismatch for UFortGameFeatureAction_SetDefaultCharacterDefinition::PreviousNPCCharacterDefinition");

// /Script/VerseFortniteAI.FortPawnComponent_AICompanionProxy
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_AICompanionProxy
{
public:
    std::uint8_t Pad_0000[0xD9]; // 0x0000
    std::uint8_t bAnticsEnabled; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00DA
    void* CosmeticComponent; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00E8
    void* ReactionProxyAsset; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ReactionTags; // 0x00F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0108
    TSoftObjectPtr<void> ReactionMontage; // 0x0110 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0138
    TSoftObjectPtr<void> AnimSequenceToPlay; // 0x0150 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0178
    float BlendInTime; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x019C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAboutToStop; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x01A1
    float StopAnimationTriggerDistance; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CosmeticLoadout[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_AICompanionProxy, bAnticsEnabled) == 217, "Offset mismatch for UFortPawnComponent_AICompanionProxy::bAnticsEnabled");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, CosmeticComponent) == 224, "Offset mismatch for UFortPawnComponent_AICompanionProxy::CosmeticComponent");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, ReactionProxyAsset) == 240, "Offset mismatch for UFortPawnComponent_AICompanionProxy::ReactionProxyAsset");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, ReactionTags) == 248, "Offset mismatch for UFortPawnComponent_AICompanionProxy::ReactionTags");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, ReactionMontage) == 272, "Offset mismatch for UFortPawnComponent_AICompanionProxy::ReactionMontage");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, AnimSequenceToPlay) == 336, "Offset mismatch for UFortPawnComponent_AICompanionProxy::AnimSequenceToPlay");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, BlendInTime) == 408, "Offset mismatch for UFortPawnComponent_AICompanionProxy::BlendInTime");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, BlendOutTime) == 412, "Offset mismatch for UFortPawnComponent_AICompanionProxy::BlendOutTime");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, bAboutToStop) == 416, "Offset mismatch for UFortPawnComponent_AICompanionProxy::bAboutToStop");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, StopAnimationTriggerDistance) == 420, "Offset mismatch for UFortPawnComponent_AICompanionProxy::StopAnimationTriggerDistance");
static_assert(offsetof(UFortPawnComponent_AICompanionProxy, CosmeticLoadout) == 424, "Offset mismatch for UFortPawnComponent_AICompanionProxy::CosmeticLoadout");

// /Script/VerseFortniteAI.FortPawnComponent_Scale
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_Scale
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t ScaleParams[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_Scale, ScaleParams) == 200, "Offset mismatch for UFortPawnComponent_Scale::ScaleParams");

// /Script/VerseFortniteAI.GameFeatureAction_RegisterModifier
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ModifiersInfo; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_RegisterModifier, ModifiersInfo) == 40, "Offset mismatch for UGameFeatureAction_RegisterModifier::ModifiersInfo");

// /Script/VerseFortniteAI.GameplayAbility_PlayAnim
// Kind: Class; super: GameplayAbility
class UGameplayAbility_PlayAnim
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AbilityTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bReplicateInputDirectly; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemoteInstanceEnded; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CA
    std::uint8_t ReplicationPolicy; // 0x00CE (Size: 0x1, Type: ByteProperty)
    std::uint8_t InstancingPolicy; // 0x00CF (Size: 0x1, Type: ByteProperty)
    std::uint8_t bServerRespectsRemoteAbilityCancellation; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetriggerInstancedAbility; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00D2
    std::uint8_t CurrentActivationInfo[0x14]; // 0x00D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t CurrentEventData[0xC0]; // 0x00E8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t NetExecutionPolicy; // 0x01A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetSecurityPolicy; // 0x01A9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01AA
    void* CostGameplayEffectClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AbilityTriggers; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    void* CooldownGameplayEffectClass; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CancelAbilitiesWithTag[0x20]; // 0x01D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilitiesWithTag[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationOwnedTags[0x20]; // 0x0210 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationRequiredTags[0x20]; // 0x0230 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationBlockedTags[0x20]; // 0x0250 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceRequiredTags[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceBlockedTags[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetRequiredTags[0x20]; // 0x02B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetBlockedTags[0x40]; // 0x02D0 (Size: 0x40, Type: StructProperty)
    TArray<void*> ActiveTasks; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0320
    void* CurrentMontage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x30]; // 0x0338
    std::uint8_t bIsActive; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAbilityEnding; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCancelable; // 0x036A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBlockingOtherAbilities; // 0x036B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayAbility_PlayAnim, AbilityTags) == 168, "Offset mismatch for UGameplayAbility_PlayAnim::AbilityTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, bReplicateInputDirectly) == 200, "Offset mismatch for UGameplayAbility_PlayAnim::bReplicateInputDirectly");
static_assert(offsetof(UGameplayAbility_PlayAnim, RemoteInstanceEnded) == 201, "Offset mismatch for UGameplayAbility_PlayAnim::RemoteInstanceEnded");
static_assert(offsetof(UGameplayAbility_PlayAnim, ReplicationPolicy) == 206, "Offset mismatch for UGameplayAbility_PlayAnim::ReplicationPolicy");
static_assert(offsetof(UGameplayAbility_PlayAnim, InstancingPolicy) == 207, "Offset mismatch for UGameplayAbility_PlayAnim::InstancingPolicy");
static_assert(offsetof(UGameplayAbility_PlayAnim, bServerRespectsRemoteAbilityCancellation) == 208, "Offset mismatch for UGameplayAbility_PlayAnim::bServerRespectsRemoteAbilityCancellation");
static_assert(offsetof(UGameplayAbility_PlayAnim, bRetriggerInstancedAbility) == 209, "Offset mismatch for UGameplayAbility_PlayAnim::bRetriggerInstancedAbility");
static_assert(offsetof(UGameplayAbility_PlayAnim, CurrentActivationInfo) == 212, "Offset mismatch for UGameplayAbility_PlayAnim::CurrentActivationInfo");
static_assert(offsetof(UGameplayAbility_PlayAnim, CurrentEventData) == 232, "Offset mismatch for UGameplayAbility_PlayAnim::CurrentEventData");
static_assert(offsetof(UGameplayAbility_PlayAnim, NetExecutionPolicy) == 424, "Offset mismatch for UGameplayAbility_PlayAnim::NetExecutionPolicy");
static_assert(offsetof(UGameplayAbility_PlayAnim, NetSecurityPolicy) == 425, "Offset mismatch for UGameplayAbility_PlayAnim::NetSecurityPolicy");
static_assert(offsetof(UGameplayAbility_PlayAnim, CostGameplayEffectClass) == 432, "Offset mismatch for UGameplayAbility_PlayAnim::CostGameplayEffectClass");
static_assert(offsetof(UGameplayAbility_PlayAnim, AbilityTriggers) == 440, "Offset mismatch for UGameplayAbility_PlayAnim::AbilityTriggers");
static_assert(offsetof(UGameplayAbility_PlayAnim, CooldownGameplayEffectClass) == 456, "Offset mismatch for UGameplayAbility_PlayAnim::CooldownGameplayEffectClass");
static_assert(offsetof(UGameplayAbility_PlayAnim, CancelAbilitiesWithTag) == 464, "Offset mismatch for UGameplayAbility_PlayAnim::CancelAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility_PlayAnim, BlockAbilitiesWithTag) == 496, "Offset mismatch for UGameplayAbility_PlayAnim::BlockAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility_PlayAnim, ActivationOwnedTags) == 528, "Offset mismatch for UGameplayAbility_PlayAnim::ActivationOwnedTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, ActivationRequiredTags) == 560, "Offset mismatch for UGameplayAbility_PlayAnim::ActivationRequiredTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, ActivationBlockedTags) == 592, "Offset mismatch for UGameplayAbility_PlayAnim::ActivationBlockedTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, SourceRequiredTags) == 624, "Offset mismatch for UGameplayAbility_PlayAnim::SourceRequiredTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, SourceBlockedTags) == 656, "Offset mismatch for UGameplayAbility_PlayAnim::SourceBlockedTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, TargetRequiredTags) == 688, "Offset mismatch for UGameplayAbility_PlayAnim::TargetRequiredTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, TargetBlockedTags) == 720, "Offset mismatch for UGameplayAbility_PlayAnim::TargetBlockedTags");
static_assert(offsetof(UGameplayAbility_PlayAnim, ActiveTasks) == 784, "Offset mismatch for UGameplayAbility_PlayAnim::ActiveTasks");
static_assert(offsetof(UGameplayAbility_PlayAnim, CurrentMontage) == 816, "Offset mismatch for UGameplayAbility_PlayAnim::CurrentMontage");
static_assert(offsetof(UGameplayAbility_PlayAnim, bIsActive) == 872, "Offset mismatch for UGameplayAbility_PlayAnim::bIsActive");
static_assert(offsetof(UGameplayAbility_PlayAnim, bIsAbilityEnding) == 873, "Offset mismatch for UGameplayAbility_PlayAnim::bIsAbilityEnding");
static_assert(offsetof(UGameplayAbility_PlayAnim, bIsCancelable) == 874, "Offset mismatch for UGameplayAbility_PlayAnim::bIsCancelable");
static_assert(offsetof(UGameplayAbility_PlayAnim, bIsBlockingOtherAbilities) == 875, "Offset mismatch for UGameplayAbility_PlayAnim::bIsBlockingOtherAbilities");

// /Script/VerseFortniteAI.GuardPerceptionComponentData
// Kind: Class; super: AIPerceptionComponentData
class UGuardPerceptionComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.InjectedActionScript
// Kind: Class; super: InjectedBehaviorScriptBase
class UInjectedActionScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.InjectedBehaviorScriptBase
// Kind: Class; super: NPCBehaviorScriptBase
class UInjectedBehaviorScriptBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.InjectedConditionScript
// Kind: Class; super: InjectedBehaviorScriptBase
class UInjectedConditionScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.LoadAndCreateComponentListAsync
// Kind: Class; super: LoadNPCCharacterDefinitionAsyncBase
class ULoadAndCreateComponentListAsync
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> ComponentsList; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bStoredForPreview; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULoadAndCreateComponentListAsync, OnFinished) == 152, "Offset mismatch for ULoadAndCreateComponentListAsync::OnFinished");
static_assert(offsetof(ULoadAndCreateComponentListAsync, ComponentsList) == 168, "Offset mismatch for ULoadAndCreateComponentListAsync::ComponentsList");
static_assert(offsetof(ULoadAndCreateComponentListAsync, bStoredForPreview) == 176, "Offset mismatch for ULoadAndCreateComponentListAsync::bStoredForPreview");

// /Script/VerseFortniteAI.LoadNPCCharacterDefinitionAsync
// Kind: Class; super: LoadNPCCharacterDefinitionAsyncBase
class ULoadNPCCharacterDefinitionAsync
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    FMulticastInlineDelegate OnLoaded; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULoadNPCCharacterDefinitionAsync, OnLoaded) == 152, "Offset mismatch for ULoadNPCCharacterDefinitionAsync::OnLoaded");

// /Script/VerseFortniteAI.LoadNPCCharacterDefinitionAsyncBase
// Kind: Class; super: BlueprintAsyncActionBase
class ULoadNPCCharacterDefinitionAsyncBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> LoadedCharacterDefinition; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    void* ContextObject; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoredAdditionalModifiers; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StoredCharacterDefinition[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> LoadedObjects; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULoadNPCCharacterDefinitionAsyncBase, LoadedCharacterDefinition) == 48, "Offset mismatch for ULoadNPCCharacterDefinitionAsyncBase::LoadedCharacterDefinition");
static_assert(offsetof(ULoadNPCCharacterDefinitionAsyncBase, ContextObject) == 56, "Offset mismatch for ULoadNPCCharacterDefinitionAsyncBase::ContextObject");
static_assert(offsetof(ULoadNPCCharacterDefinitionAsyncBase, StoredAdditionalModifiers) == 64, "Offset mismatch for ULoadNPCCharacterDefinitionAsyncBase::StoredAdditionalModifiers");
static_assert(offsetof(ULoadNPCCharacterDefinitionAsyncBase, StoredCharacterDefinition) == 80, "Offset mismatch for ULoadNPCCharacterDefinitionAsyncBase::StoredCharacterDefinition");
static_assert(offsetof(ULoadNPCCharacterDefinitionAsyncBase, LoadedObjects) == 112, "Offset mismatch for ULoadNPCCharacterDefinitionAsyncBase::LoadedObjects");

// /Script/VerseFortniteAI.NPCBehaviorScript
// Kind: Class; super: NPCBehaviorScriptBase
class UNPCBehaviorScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.NPCBehaviorScriptBase
// Kind: Class; super: Object
class UNPCBehaviorScriptBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.NPCBehaviorScriptComponent
// Kind: Class; super: FortUserOptionContainerComponent
class UNPCBehaviorScriptComponent
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    void* NPCBehaviorScript; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNPCBehaviorScriptComponent, NPCBehaviorScript) == 336, "Offset mismatch for UNPCBehaviorScriptComponent::NPCBehaviorScript");

// /Script/VerseFortniteAI.NPCCharacterDefinition
// Kind: Class; super: FortAIPawnCustomizationDefinition
class UNPCCharacterDefinition
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    FMulticastInlineDelegate OnCharacterModifierModified; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCharacterTypeModified; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Type; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* Behavior; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Modifiers; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNPCCharacterDefinition, OnCharacterModifierModified) == 312, "Offset mismatch for UNPCCharacterDefinition::OnCharacterModifierModified");
static_assert(offsetof(UNPCCharacterDefinition, OnCharacterTypeModified) == 328, "Offset mismatch for UNPCCharacterDefinition::OnCharacterTypeModified");
static_assert(offsetof(UNPCCharacterDefinition, Type) == 344, "Offset mismatch for UNPCCharacterDefinition::Type");
static_assert(offsetof(UNPCCharacterDefinition, Behavior) == 352, "Offset mismatch for UNPCCharacterDefinition::Behavior");
static_assert(offsetof(UNPCCharacterDefinition, Modifiers) == 360, "Offset mismatch for UNPCCharacterDefinition::Modifiers");

// /Script/VerseFortniteAI.NPCCharacterDefinitionComponent
// Kind: Class; super: FortUserOptionContainerComponent
class UNPCCharacterDefinitionComponent
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t NPCCharacterDefinition[0x20]; // 0x0150 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultNPCCharacterDefinition[0x20]; // 0x0170 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> NPCCharacterModifiers; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequiredTag[0x8]; // 0x01A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ForbiddenTags[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNPCCharacterDefinitionComponent, NPCCharacterDefinition) == 336, "Offset mismatch for UNPCCharacterDefinitionComponent::NPCCharacterDefinition");
static_assert(offsetof(UNPCCharacterDefinitionComponent, DefaultNPCCharacterDefinition) == 368, "Offset mismatch for UNPCCharacterDefinitionComponent::DefaultNPCCharacterDefinition");
static_assert(offsetof(UNPCCharacterDefinitionComponent, NPCCharacterModifiers) == 400, "Offset mismatch for UNPCCharacterDefinitionComponent::NPCCharacterModifiers");
static_assert(offsetof(UNPCCharacterDefinitionComponent, RequiredTag) == 416, "Offset mismatch for UNPCCharacterDefinitionComponent::RequiredTag");
static_assert(offsetof(UNPCCharacterDefinitionComponent, ForbiddenTags) == 424, "Offset mismatch for UNPCCharacterDefinitionComponent::ForbiddenTags");

// /Script/VerseFortniteAI.NPCCharacterModifier
// Kind: Class; super: Object
class UNPCCharacterModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.NPCCharacterModifier_Behavior
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Behavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.NPCCharacterModifier_Bots
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Bots
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bGenerateRandomName; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFixedName; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    FString FixedBotName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Bots, bGenerateRandomName) == 40, "Offset mismatch for UNPCCharacterModifier_Bots::bGenerateRandomName");
static_assert(offsetof(UNPCCharacterModifier_Bots, bUseFixedName) == 41, "Offset mismatch for UNPCCharacterModifier_Bots::bUseFixedName");
static_assert(offsetof(UNPCCharacterModifier_Bots, FixedBotName) == 48, "Offset mismatch for UNPCCharacterModifier_Bots::FixedBotName");

// /Script/VerseFortniteAI.NPCCharacterModifier_CosmeticSpawn
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_CosmeticSpawn
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CharacterLook; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t CharacterCosmetic[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> CharacterVariantChannels; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    FString CharacterCosmeticAssetId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t SidekickCosmetic[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    FString CompanionCosmeticAssetId; // 0x0098 (Size: 0x10, Type: StrProperty)
    TArray<void*> CompanionVariantChannels; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CharacterBlueprint[0x20]; // 0x00B8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CharacterMovement; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D9
    std::uint8_t AnimPreset[0x20]; // 0x00E0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t IKRetargeter[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RandomCharacterParts; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CharacterCosmeticAssetIdDataTable[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ExcludedCharacterCosmeticContextTags[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    std::uint8_t AICompanionProxyToApply[0x20]; // 0x0170 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bSupportAnimPreset; // 0x0190 (Size: 0x1, Type: BoolProperty)
    // 0x0190 BoolProperty bSupportCharacterMovement (shared storage)
    // 0x0190 BoolProperty bSupportCustomCharacter (shared storage)
    // 0x0190 BoolProperty bSupportFortniteCharacter (shared storage)
    // 0x0190 BoolProperty bSupportFortniteCompanion (shared storage)
    // 0x0190 BoolProperty bSupportRandomizeCharacterParts (shared storage)
};

static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterLook) == 48, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterLook");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterCosmetic) == 56, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterCosmetic");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterVariantChannels) == 88, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterVariantChannels");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterCosmeticAssetId) == 104, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterCosmeticAssetId");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, SidekickCosmetic) == 120, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::SidekickCosmetic");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CompanionCosmeticAssetId) == 152, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CompanionCosmeticAssetId");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CompanionVariantChannels) == 168, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CompanionVariantChannels");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterBlueprint) == 184, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterBlueprint");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterMovement) == 216, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterMovement");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, AnimPreset) == 224, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::AnimPreset");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, IKRetargeter) == 256, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::IKRetargeter");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, RandomCharacterParts) == 288, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::RandomCharacterParts");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, CharacterCosmeticAssetIdDataTable) == 304, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::CharacterCosmeticAssetIdDataTable");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, ExcludedCharacterCosmeticContextTags) == 336, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::ExcludedCharacterCosmeticContextTags");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, AICompanionProxyToApply) == 368, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::AICompanionProxyToApply");
static_assert(offsetof(UNPCCharacterModifier_CosmeticSpawn, bSupportAnimPreset) == 400, "Offset mismatch for UNPCCharacterModifier_CosmeticSpawn::bSupportAnimPreset");

// /Script/VerseFortniteAI.NPCCharacterModifier_Effects
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Effects
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.NPCCharacterModifier_Emotes
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Emotes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Emotes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Emotes, Emotes) == 40, "Offset mismatch for UNPCCharacterModifier_Emotes::Emotes");

// /Script/VerseFortniteAI.NPCCharacterModifier_Group
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Group
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bCanBeLeader; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Group, bCanBeLeader) == 40, "Offset mismatch for UNPCCharacterModifier_Group::bCanBeLeader");

// /Script/VerseFortniteAI.NPCCharacterModifier_GuardPerception
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_GuardPerception
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableDamage; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bEnableHearing (shared storage)
    // 0x0028 BoolProperty bEnableSight (shared storage)
    // 0x0028 BoolProperty bEnableTouch (shared storage)
    // 0x0028 BoolProperty bOverrideDamageSettings (shared storage)
    // 0x0028 BoolProperty bOverrideHearingSettings (shared storage)
    // 0x0028 BoolProperty bOverrideSightSettings (shared storage)
    // 0x0028 BoolProperty bOverrideTouchSettings (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* SightPerceptionSettings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0038
    void* HearingPerceptionSettings; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0058
    void* TouchPerceptionSettings; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0078
    void* DamagePerceptionSettings; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNPCCharacterModifier_GuardPerception, bEnableDamage) == 40, "Offset mismatch for UNPCCharacterModifier_GuardPerception::bEnableDamage");
static_assert(offsetof(UNPCCharacterModifier_GuardPerception, SightPerceptionSettings) == 48, "Offset mismatch for UNPCCharacterModifier_GuardPerception::SightPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_GuardPerception, HearingPerceptionSettings) == 80, "Offset mismatch for UNPCCharacterModifier_GuardPerception::HearingPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_GuardPerception, TouchPerceptionSettings) == 112, "Offset mismatch for UNPCCharacterModifier_GuardPerception::TouchPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_GuardPerception, DamagePerceptionSettings) == 144, "Offset mismatch for UNPCCharacterModifier_GuardPerception::DamagePerceptionSettings");

// /Script/VerseFortniteAI.NPCCharacterModifier_Inventory
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Inventory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SupportedItemTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Inventory, Items) == 40, "Offset mismatch for UNPCCharacterModifier_Inventory::Items");
static_assert(offsetof(UNPCCharacterModifier_Inventory, SupportedItemTags) == 56, "Offset mismatch for UNPCCharacterModifier_Inventory::SupportedItemTags");

// /Script/VerseFortniteAI.NPCCharacterModifier_Movement
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Movement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float WalkSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float RunSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float SprintSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideFortniteLimits; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Movement, WalkSpeed) == 40, "Offset mismatch for UNPCCharacterModifier_Movement::WalkSpeed");
static_assert(offsetof(UNPCCharacterModifier_Movement, RunSpeed) == 44, "Offset mismatch for UNPCCharacterModifier_Movement::RunSpeed");
static_assert(offsetof(UNPCCharacterModifier_Movement, SprintSpeed) == 48, "Offset mismatch for UNPCCharacterModifier_Movement::SprintSpeed");
static_assert(offsetof(UNPCCharacterModifier_Movement, Acceleration) == 52, "Offset mismatch for UNPCCharacterModifier_Movement::Acceleration");
static_assert(offsetof(UNPCCharacterModifier_Movement, Deceleration) == 56, "Offset mismatch for UNPCCharacterModifier_Movement::Deceleration");
static_assert(offsetof(UNPCCharacterModifier_Movement, bOverrideFortniteLimits) == 60, "Offset mismatch for UNPCCharacterModifier_Movement::bOverrideFortniteLimits");

// /Script/VerseFortniteAI.NPCCharacterModifier_Navigation
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Navigation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bOverrideGenerationRadii; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float GenerationRadius; // 0x002C (Size: 0x4, Type: FloatProperty)
    float GenerationRemovalRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlwaysGenerateNavigation; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Navigation, bOverrideGenerationRadii) == 40, "Offset mismatch for UNPCCharacterModifier_Navigation::bOverrideGenerationRadii");
static_assert(offsetof(UNPCCharacterModifier_Navigation, GenerationRadius) == 44, "Offset mismatch for UNPCCharacterModifier_Navigation::GenerationRadius");
static_assert(offsetof(UNPCCharacterModifier_Navigation, GenerationRemovalRadius) == 48, "Offset mismatch for UNPCCharacterModifier_Navigation::GenerationRemovalRadius");
static_assert(offsetof(UNPCCharacterModifier_Navigation, bAlwaysGenerateNavigation) == 52, "Offset mismatch for UNPCCharacterModifier_Navigation::bAlwaysGenerateNavigation");

// /Script/VerseFortniteAI.NPCCharacterModifier_PatrolPath
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_PatrolPath
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PatrolPathGroup; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNPCCharacterModifier_PatrolPath, PatrolPathGroup) == 40, "Offset mismatch for UNPCCharacterModifier_PatrolPath::PatrolPathGroup");

// /Script/VerseFortniteAI.NPCCharacterModifier_Perception
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Perception
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableDamage; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bEnableHearing (shared storage)
    // 0x0028 BoolProperty bEnableSight (shared storage)
    // 0x0028 BoolProperty bEnableTouch (shared storage)
    // 0x0028 BoolProperty bOverrideDamageSettings (shared storage)
    // 0x0028 BoolProperty bOverrideHearingSettings (shared storage)
    // 0x0028 BoolProperty bOverrideSightSettings (shared storage)
    // 0x0028 BoolProperty bOverrideTouchSettings (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* SightPerceptionSettings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* HearingPerceptionSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* TouchPerceptionSettings; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* DamagePerceptionSettings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Perception, bEnableDamage) == 40, "Offset mismatch for UNPCCharacterModifier_Perception::bEnableDamage");
static_assert(offsetof(UNPCCharacterModifier_Perception, SightPerceptionSettings) == 48, "Offset mismatch for UNPCCharacterModifier_Perception::SightPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_Perception, HearingPerceptionSettings) == 56, "Offset mismatch for UNPCCharacterModifier_Perception::HearingPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_Perception, TouchPerceptionSettings) == 64, "Offset mismatch for UNPCCharacterModifier_Perception::TouchPerceptionSettings");
static_assert(offsetof(UNPCCharacterModifier_Perception, DamagePerceptionSettings) == 72, "Offset mismatch for UNPCCharacterModifier_Perception::DamagePerceptionSettings");

// /Script/VerseFortniteAI.NPCCharacterModifier_Physics
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Physics
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bCollidesWithPawn; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Physics, bCollidesWithPawn) == 40, "Offset mismatch for UNPCCharacterModifier_Physics::bCollidesWithPawn");

// /Script/VerseFortniteAI.NPCCharacterModifier_Scale
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Scale
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Scale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleLocomotionAnimations; // 0x002C (Size: 0x1, Type: BoolProperty)
    // 0x002C BoolProperty bSupportModifyLocomotion (shared storage)
    // 0x002C BoolProperty bSupportModifyScale (shared storage)
};

static_assert(offsetof(UNPCCharacterModifier_Scale, Scale) == 40, "Offset mismatch for UNPCCharacterModifier_Scale::Scale");
static_assert(offsetof(UNPCCharacterModifier_Scale, bScaleLocomotionAnimations) == 44, "Offset mismatch for UNPCCharacterModifier_Scale::bScaleLocomotionAnimations");

// /Script/VerseFortniteAI.NPCCharacterModifier_Sequencer
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Sequencer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString UniqueIdentifier; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint32_t HashedUniqueIdentifier; // 0x0038 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNPCCharacterModifier_Sequencer, UniqueIdentifier) == 40, "Offset mismatch for UNPCCharacterModifier_Sequencer::UniqueIdentifier");
static_assert(offsetof(UNPCCharacterModifier_Sequencer, HashedUniqueIdentifier) == 56, "Offset mismatch for UNPCCharacterModifier_Sequencer::HashedUniqueIdentifier");

// /Script/VerseFortniteAI.NPCCharacterModifier_Team
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Team
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TeamOption; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint32_t TeamIndex; // 0x002C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNPCCharacterModifier_Team, TeamOption) == 40, "Offset mismatch for UNPCCharacterModifier_Team::TeamOption");
static_assert(offsetof(UNPCCharacterModifier_Team, TeamIndex) == 44, "Offset mismatch for UNPCCharacterModifier_Team::TeamIndex");

// /Script/VerseFortniteAI.NPCCharacterModifier_UI
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_UI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    void* Icon; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowNamePlate; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShowArrow; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShowIconMinimap; // 0x0062 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSupportModifyIndicators; // 0x0063 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNPCCharacterModifier_UI, DisplayName) == 40, "Offset mismatch for UNPCCharacterModifier_UI::DisplayName");
static_assert(offsetof(UNPCCharacterModifier_UI, ShortDescription) == 56, "Offset mismatch for UNPCCharacterModifier_UI::ShortDescription");
static_assert(offsetof(UNPCCharacterModifier_UI, Description) == 72, "Offset mismatch for UNPCCharacterModifier_UI::Description");
static_assert(offsetof(UNPCCharacterModifier_UI, Icon) == 88, "Offset mismatch for UNPCCharacterModifier_UI::Icon");
static_assert(offsetof(UNPCCharacterModifier_UI, ShowNamePlate) == 96, "Offset mismatch for UNPCCharacterModifier_UI::ShowNamePlate");
static_assert(offsetof(UNPCCharacterModifier_UI, ShowArrow) == 97, "Offset mismatch for UNPCCharacterModifier_UI::ShowArrow");
static_assert(offsetof(UNPCCharacterModifier_UI, ShowIconMinimap) == 98, "Offset mismatch for UNPCCharacterModifier_UI::ShowIconMinimap");
static_assert(offsetof(UNPCCharacterModifier_UI, bSupportModifyIndicators) == 99, "Offset mismatch for UNPCCharacterModifier_UI::bSupportModifyIndicators");

// /Script/VerseFortniteAI.NPCCharacterModifier_VerseBehavior
// Kind: Class; super: NPCCharacterModifier_Behavior
class UNPCCharacterModifier_VerseBehavior
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* NPCBehaviorScript; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNPCCharacterModifier_VerseBehavior, NPCBehaviorScript) == 40, "Offset mismatch for UNPCCharacterModifier_VerseBehavior::NPCBehaviorScript");

// /Script/VerseFortniteAI.NPCCharacterType
// Kind: Class; super: Object
class UNPCCharacterType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CharacterDefinitionTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    FName NavMeshTag; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UNPCCharacterType, CharacterDefinitionTag) == 40, "Offset mismatch for UNPCCharacterType::CharacterDefinitionTag");
static_assert(offsetof(UNPCCharacterType, NavMeshTag) == 44, "Offset mismatch for UNPCCharacterType::NavMeshTag");

// /Script/VerseFortniteAI.NPCCharacterType_Custom
// Kind: Class; super: NPCCharacterType
class UNPCCharacterType_Custom
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultCosmetics[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AISpawnerData[0x20]; // 0x0050 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PlayerSpawnerData[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> CharacterDefinitionThumbnail; // 0x0090 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNPCCharacterType_Custom, DefaultCosmetics) == 48, "Offset mismatch for UNPCCharacterType_Custom::DefaultCosmetics");
static_assert(offsetof(UNPCCharacterType_Custom, AISpawnerData) == 80, "Offset mismatch for UNPCCharacterType_Custom::AISpawnerData");
static_assert(offsetof(UNPCCharacterType_Custom, PlayerSpawnerData) == 112, "Offset mismatch for UNPCCharacterType_Custom::PlayerSpawnerData");
static_assert(offsetof(UNPCCharacterType_Custom, CharacterDefinitionThumbnail) == 144, "Offset mismatch for UNPCCharacterType_Custom::CharacterDefinitionThumbnail");

// /Script/VerseFortniteAI.NPCCharacterType_FromPreset
// Kind: Class; super: NPCCharacterType
class UNPCCharacterType_FromPreset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString SelectedAI; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t SelectedPreset[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    TArray<void*> Presets; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNPCCharacterType_FromPreset, SelectedAI) == 48, "Offset mismatch for UNPCCharacterType_FromPreset::SelectedAI");
static_assert(offsetof(UNPCCharacterType_FromPreset, SelectedPreset) == 64, "Offset mismatch for UNPCCharacterType_FromPreset::SelectedPreset");
static_assert(offsetof(UNPCCharacterType_FromPreset, Presets) == 160, "Offset mismatch for UNPCCharacterType_FromPreset::Presets");

// /Script/VerseFortniteAI.NPCCharacterType_Participant
// Kind: Class; super: NPCCharacterType
class UNPCCharacterType_Participant
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SpawnerData[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> CharacterDefinitionThumbnail; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNPCCharacterType_Participant, SpawnerData) == 48, "Offset mismatch for UNPCCharacterType_Participant::SpawnerData");
static_assert(offsetof(UNPCCharacterType_Participant, CharacterDefinitionThumbnail) == 80, "Offset mismatch for UNPCCharacterType_Participant::CharacterDefinitionThumbnail");

// /Script/VerseFortniteAI.NPCCharacterType_Randomize
// Kind: Class; super: NPCCharacterType
class UNPCCharacterType_Randomize
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> CharacterDefinitions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> CharacterDefinitionThumbnail; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNPCCharacterType_Randomize, CharacterDefinitions) == 48, "Offset mismatch for UNPCCharacterType_Randomize::CharacterDefinitions");
static_assert(offsetof(UNPCCharacterType_Randomize, CharacterDefinitionThumbnail) == 64, "Offset mismatch for UNPCCharacterType_Randomize::CharacterDefinitionThumbnail");

// /Script/VerseFortniteAI.NPCIndicatorComponent
// Kind: Class; super: PlayerStateComponent
class UNPCIndicatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t AllyIndicators; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HostileIndicators; // 0x00C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NeutralIndicators; // 0x00C2 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNPCIndicatorComponent, AllyIndicators) == 192, "Offset mismatch for UNPCIndicatorComponent::AllyIndicators");
static_assert(offsetof(UNPCIndicatorComponent, HostileIndicators) == 193, "Offset mismatch for UNPCIndicatorComponent::HostileIndicators");
static_assert(offsetof(UNPCIndicatorComponent, NeutralIndicators) == 194, "Offset mismatch for UNPCIndicatorComponent::NeutralIndicators");

// /Script/VerseFortniteAI.ParticipantDefinitionComponent
// Kind: Class; super: FortUserOptionContainerComponent
class UParticipantDefinitionComponent
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t ParticipantDefinition[0x20]; // 0x0150 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RequiredTag[0x4]; // 0x0170 (Size: 0x4, Type: StructProperty)
    FName NavMeshTag; // 0x0174 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UParticipantDefinitionComponent, ParticipantDefinition) == 336, "Offset mismatch for UParticipantDefinitionComponent::ParticipantDefinition");
static_assert(offsetof(UParticipantDefinitionComponent, RequiredTag) == 368, "Offset mismatch for UParticipantDefinitionComponent::RequiredTag");
static_assert(offsetof(UParticipantDefinitionComponent, NavMeshTag) == 372, "Offset mismatch for UParticipantDefinitionComponent::NavMeshTag");

// /Script/VerseFortniteAI.PersonaUsageBlockingSubsystem
// Kind: Class; super: WorldSubsystem
class UPersonaUsageBlockingSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.PlayAnimationGlobals
// Kind: Class; super: Object
class UPlayAnimationGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAI.VerseAIPerceptionStimuliSourceComponent
// Kind: Class; super: AthenaAIPerceptionStimuliSourceComponent
class UVerseAIPerceptionStimuliSourceComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t bIsConsideredAsThreateningObjectForBots; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseAIPerceptionStimuliSourceComponent, bIsConsideredAsThreateningObjectForBots) == 216, "Offset mismatch for UVerseAIPerceptionStimuliSourceComponent::bIsConsideredAsThreateningObjectForBots");
