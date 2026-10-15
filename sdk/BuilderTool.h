/**
 * decamp dumper generated SDK
 * Package: /Script/BuilderTool
 */
#pragma once
#include "Basic.h"

// /Script/BuilderTool.BuilderToolActorClassSet
// Kind: ScriptStruct; super: none
struct FBuilderToolActorClassSet
{
public:
    std::uint8_t Classes[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    TSet<void*> ExcludedSubclasses; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FBuilderToolActorClassSet, Classes) == 0, "Offset mismatch for FBuilderToolActorClassSet::Classes");
static_assert(offsetof(FBuilderToolActorClassSet, ExcludedSubclasses) == 16, "Offset mismatch for FBuilderToolActorClassSet::ExcludedSubclasses");

// /Script/BuilderTool.BuilderToolBehaviorRow
// Kind: ScriptStruct; super: TableRowBase
struct FBuilderToolBehaviorRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SupportedClasses[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t SupportedBehaviorTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSupportsNonActorInteraction; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBuilderToolBehaviorRow, SupportedClasses) == 8, "Offset mismatch for FBuilderToolBehaviorRow::SupportedClasses");
static_assert(offsetof(FBuilderToolBehaviorRow, SupportedBehaviorTags) == 40, "Offset mismatch for FBuilderToolBehaviorRow::SupportedBehaviorTags");
static_assert(offsetof(FBuilderToolBehaviorRow, bSupportsNonActorInteraction) == 72, "Offset mismatch for FBuilderToolBehaviorRow::bSupportsNonActorInteraction");

// /Script/BuilderTool.BuilderToolItemDisplayData
// Kind: ScriptStruct; super: none
struct FBuilderToolItemDisplayData
{
public:
    std::uint8_t ItemType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FBuilderToolItemDisplayData, ItemType) == 0, "Offset mismatch for FBuilderToolItemDisplayData::ItemType");
static_assert(offsetof(FBuilderToolItemDisplayData, DisplayName) == 8, "Offset mismatch for FBuilderToolItemDisplayData::DisplayName");
static_assert(offsetof(FBuilderToolItemDisplayData, ShortDescription) == 24, "Offset mismatch for FBuilderToolItemDisplayData::ShortDescription");
static_assert(offsetof(FBuilderToolItemDisplayData, Description) == 40, "Offset mismatch for FBuilderToolItemDisplayData::Description");

// /Script/BuilderTool.BuilderToolSelectedActor
// Kind: ScriptStruct; super: none
struct FBuilderToolSelectedActor
{
public:
    void* Class; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Actor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ToSelection[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBuilderToolSelectedActor, Class) == 0, "Offset mismatch for FBuilderToolSelectedActor::Class");
static_assert(offsetof(FBuilderToolSelectedActor, Actor) == 8, "Offset mismatch for FBuilderToolSelectedActor::Actor");
static_assert(offsetof(FBuilderToolSelectedActor, ToSelection) == 16, "Offset mismatch for FBuilderToolSelectedActor::ToSelection");

// /Script/BuilderTool.BuilderToolSelectionSpawnParams
// Kind: ScriptStruct; super: none
struct FBuilderToolSelectionSpawnParams
{
public:
    std::int32_t SpawnID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t SelectionGUID[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    TArray<void*> SelectedActors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    std::uint8_t SelectionTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    void* Instigator; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StableNames; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBuilderToolSelectionSpawnParams, SpawnID) == 0, "Offset mismatch for FBuilderToolSelectionSpawnParams::SpawnID");
static_assert(offsetof(FBuilderToolSelectionSpawnParams, SelectionGUID) == 4, "Offset mismatch for FBuilderToolSelectionSpawnParams::SelectionGUID");
static_assert(offsetof(FBuilderToolSelectionSpawnParams, SelectedActors) == 24, "Offset mismatch for FBuilderToolSelectionSpawnParams::SelectedActors");
static_assert(offsetof(FBuilderToolSelectionSpawnParams, SelectionTransform) == 48, "Offset mismatch for FBuilderToolSelectionSpawnParams::SelectionTransform");
static_assert(offsetof(FBuilderToolSelectionSpawnParams, Instigator) == 144, "Offset mismatch for FBuilderToolSelectionSpawnParams::Instigator");
static_assert(offsetof(FBuilderToolSelectionSpawnParams, StableNames) == 152, "Offset mismatch for FBuilderToolSelectionSpawnParams::StableNames");

// /Script/BuilderTool.BuilderToolSoftSelectedActor
// Kind: ScriptStruct; super: none
struct FBuilderToolSoftSelectedActor
{
public:
    std::uint8_t Class[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TWeakObjectPtr<void> Actor; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    std::uint8_t ToSelection[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBuilderToolSoftSelectedActor, Class) == 0, "Offset mismatch for FBuilderToolSoftSelectedActor::Class");
static_assert(offsetof(FBuilderToolSoftSelectedActor, Actor) == 32, "Offset mismatch for FBuilderToolSoftSelectedActor::Actor");
static_assert(offsetof(FBuilderToolSoftSelectedActor, ToSelection) == 48, "Offset mismatch for FBuilderToolSoftSelectedActor::ToSelection");

// /Script/BuilderTool.BuilderToolSpawnedActor
// Kind: ScriptStruct; super: none
struct FBuilderToolSpawnedActor
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    FName StableName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBuilderToolSpawnedActor, Actor) == 0, "Offset mismatch for FBuilderToolSpawnedActor::Actor");
static_assert(offsetof(FBuilderToolSpawnedActor, StableName) == 8, "Offset mismatch for FBuilderToolSpawnedActor::StableName");

// /Script/BuilderTool.BuilderToolSpawnedSelection
// Kind: ScriptStruct; super: none
struct FBuilderToolSpawnedSelection
{
public:
    std::int32_t SpawnID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Guid[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    TArray<void*> Actors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBuilderToolSpawnedSelection, SpawnID) == 0, "Offset mismatch for FBuilderToolSpawnedSelection::SpawnID");
static_assert(offsetof(FBuilderToolSpawnedSelection, Guid) == 4, "Offset mismatch for FBuilderToolSpawnedSelection::Guid");
static_assert(offsetof(FBuilderToolSpawnedSelection, Actors) == 24, "Offset mismatch for FBuilderToolSpawnedSelection::Actors");

// /Script/BuilderTool.BuilderToolSupportActorComponentPair
// Kind: ScriptStruct; super: none
struct FBuilderToolSupportActorComponentPair
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Component; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBuilderToolSupportActorComponentPair, Actor) == 0, "Offset mismatch for FBuilderToolSupportActorComponentPair::Actor");
static_assert(offsetof(FBuilderToolSupportActorComponentPair, Component) == 8, "Offset mismatch for FBuilderToolSupportActorComponentPair::Component");

// /Script/BuilderTool.BuilderToolSupportCandidate
// Kind: ScriptStruct; super: none
struct FBuilderToolSupportCandidate
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Component; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FBuilderToolSupportCandidate, Actor) == 0, "Offset mismatch for FBuilderToolSupportCandidate::Actor");
static_assert(offsetof(FBuilderToolSupportCandidate, Component) == 8, "Offset mismatch for FBuilderToolSupportCandidate::Component");

// /Script/BuilderTool.BuilderToolTimedActors
// Kind: ScriptStruct; super: none
struct FBuilderToolTimedActors
{
public:
    TArray<void*> Actors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBuilderToolTimedActors, Actors) == 0, "Offset mismatch for FBuilderToolTimedActors::Actors");

// /Script/BuilderTool.ItemComponentData_BuilderTool
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_BuilderTool
{
public:
    TSoftClassPtr<void> ActorClass; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FItemComponentData_BuilderTool, ActorClass) == 0, "Offset mismatch for FItemComponentData_BuilderTool::ActorClass");

// /Script/BuilderTool.BuilderTool
// Kind: Class; super: FortWeapon
class UBuilderTool
{
public:
    std::uint8_t Pad_0000[0x19F8]; // 0x0000
    FMulticastInlineDelegate OnInteractionStarted; // 0x19F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInteractionStopped; // 0x1A08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InputMappingContext; // 0x1A18 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x1A20 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1A24
    void* UnEquipInputAction; // 0x1A28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActivatedTags[0x20]; // 0x1A30 (Size: 0x20, Type: StructProperty)
    TArray<void*> Behaviors; // 0x1A50 (Size: 0x10, Type: ArrayProperty)
    void* ActiveBehavior; // 0x1A60 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBuilderTool, OnInteractionStarted) == 6648, "Offset mismatch for UBuilderTool::OnInteractionStarted");
static_assert(offsetof(UBuilderTool, OnInteractionStopped) == 6664, "Offset mismatch for UBuilderTool::OnInteractionStopped");
static_assert(offsetof(UBuilderTool, InputMappingContext) == 6680, "Offset mismatch for UBuilderTool::InputMappingContext");
static_assert(offsetof(UBuilderTool, InputMappingPriority) == 6688, "Offset mismatch for UBuilderTool::InputMappingPriority");
static_assert(offsetof(UBuilderTool, UnEquipInputAction) == 6696, "Offset mismatch for UBuilderTool::UnEquipInputAction");
static_assert(offsetof(UBuilderTool, ActivatedTags) == 6704, "Offset mismatch for UBuilderTool::ActivatedTags");
static_assert(offsetof(UBuilderTool, Behaviors) == 6736, "Offset mismatch for UBuilderTool::Behaviors");
static_assert(offsetof(UBuilderTool, ActiveBehavior) == 6752, "Offset mismatch for UBuilderTool::ActiveBehavior");

// /Script/BuilderTool.BuilderToolBehavior
// Kind: Class; super: ActorComponent
class UBuilderToolBehavior
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnInteractionStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInteractionTrigger; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInteractionEnd; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInteractionExit; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bShouldAddToParent; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0101
    std::int32_t Priority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t ConfigData[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActivatedTags[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    void* InputMappingContext; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0144
    void* TriggerInputAction; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* ExitInputAction; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0158
    void* StartInteractionAbility; // 0x0168 (Size: 0x8, Type: ClassProperty)
    void* EndInteractionAbility; // 0x0170 (Size: 0x8, Type: ClassProperty)
    void* FailAbility; // 0x0178 (Size: 0x8, Type: ClassProperty)
    void* ExitAbility; // 0x0180 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SupportedClasses[0x20]; // 0x0188 (Size: 0x20, Type: StructProperty)
    std::uint8_t SupportedBehaviorTags[0x20]; // 0x01A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSupportsNonActorInteraction; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01C9
    TArray<void*> SelectedActors; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectionGUID[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentBehaviorTag[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    TArray<void*> ClientPredictedActors; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerSpawnedSelections; // 0x0208 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBuilderToolBehavior, OnInteractionStart) == 192, "Offset mismatch for UBuilderToolBehavior::OnInteractionStart");
static_assert(offsetof(UBuilderToolBehavior, OnInteractionTrigger) == 208, "Offset mismatch for UBuilderToolBehavior::OnInteractionTrigger");
static_assert(offsetof(UBuilderToolBehavior, OnInteractionEnd) == 224, "Offset mismatch for UBuilderToolBehavior::OnInteractionEnd");
static_assert(offsetof(UBuilderToolBehavior, OnInteractionExit) == 240, "Offset mismatch for UBuilderToolBehavior::OnInteractionExit");
static_assert(offsetof(UBuilderToolBehavior, bShouldAddToParent) == 256, "Offset mismatch for UBuilderToolBehavior::bShouldAddToParent");
static_assert(offsetof(UBuilderToolBehavior, Priority) == 260, "Offset mismatch for UBuilderToolBehavior::Priority");
static_assert(offsetof(UBuilderToolBehavior, ConfigData) == 264, "Offset mismatch for UBuilderToolBehavior::ConfigData");
static_assert(offsetof(UBuilderToolBehavior, ActivatedTags) == 280, "Offset mismatch for UBuilderToolBehavior::ActivatedTags");
static_assert(offsetof(UBuilderToolBehavior, InputMappingContext) == 312, "Offset mismatch for UBuilderToolBehavior::InputMappingContext");
static_assert(offsetof(UBuilderToolBehavior, InputMappingPriority) == 320, "Offset mismatch for UBuilderToolBehavior::InputMappingPriority");
static_assert(offsetof(UBuilderToolBehavior, TriggerInputAction) == 328, "Offset mismatch for UBuilderToolBehavior::TriggerInputAction");
static_assert(offsetof(UBuilderToolBehavior, ExitInputAction) == 336, "Offset mismatch for UBuilderToolBehavior::ExitInputAction");
static_assert(offsetof(UBuilderToolBehavior, StartInteractionAbility) == 360, "Offset mismatch for UBuilderToolBehavior::StartInteractionAbility");
static_assert(offsetof(UBuilderToolBehavior, EndInteractionAbility) == 368, "Offset mismatch for UBuilderToolBehavior::EndInteractionAbility");
static_assert(offsetof(UBuilderToolBehavior, FailAbility) == 376, "Offset mismatch for UBuilderToolBehavior::FailAbility");
static_assert(offsetof(UBuilderToolBehavior, ExitAbility) == 384, "Offset mismatch for UBuilderToolBehavior::ExitAbility");
static_assert(offsetof(UBuilderToolBehavior, SupportedClasses) == 392, "Offset mismatch for UBuilderToolBehavior::SupportedClasses");
static_assert(offsetof(UBuilderToolBehavior, SupportedBehaviorTags) == 424, "Offset mismatch for UBuilderToolBehavior::SupportedBehaviorTags");
static_assert(offsetof(UBuilderToolBehavior, bSupportsNonActorInteraction) == 456, "Offset mismatch for UBuilderToolBehavior::bSupportsNonActorInteraction");
static_assert(offsetof(UBuilderToolBehavior, SelectedActors) == 464, "Offset mismatch for UBuilderToolBehavior::SelectedActors");
static_assert(offsetof(UBuilderToolBehavior, SelectionGUID) == 480, "Offset mismatch for UBuilderToolBehavior::SelectionGUID");
static_assert(offsetof(UBuilderToolBehavior, CurrentBehaviorTag) == 496, "Offset mismatch for UBuilderToolBehavior::CurrentBehaviorTag");
static_assert(offsetof(UBuilderToolBehavior, ClientPredictedActors) == 504, "Offset mismatch for UBuilderToolBehavior::ClientPredictedActors");
static_assert(offsetof(UBuilderToolBehavior, ServerSpawnedSelections) == 520, "Offset mismatch for UBuilderToolBehavior::ServerSpawnedSelections");

// /Script/BuilderTool.BuilderToolItemDefinition
// Kind: Class; super: FortWorldItemDefinition
class UBuilderToolItemDefinition
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t ItemType; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrimaryAssetIdItemTypeOverride; // 0x0099 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldDisplayQuantity; // 0x009A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBuilderToolItemDefinition, ItemType) == 152, "Offset mismatch for UBuilderToolItemDefinition::ItemType");
static_assert(offsetof(UBuilderToolItemDefinition, PrimaryAssetIdItemTypeOverride) == 153, "Offset mismatch for UBuilderToolItemDefinition::PrimaryAssetIdItemTypeOverride");
static_assert(offsetof(UBuilderToolItemDefinition, bShouldDisplayQuantity) == 154, "Offset mismatch for UBuilderToolItemDefinition::bShouldDisplayQuantity");

// /Script/BuilderTool.BuilderToolPlayerComponent
// Kind: Class; super: FortControllerComponent
class UBuilderToolPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BuilderToolWeaponItemDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBuilderToolPlayerComponent, BuilderToolWeaponItemDefinition) == 200, "Offset mismatch for UBuilderToolPlayerComponent::BuilderToolWeaponItemDefinition");

// /Script/BuilderTool.BuilderToolSelectedActorInterface
// Kind: Class; super: Interface
class UBuilderToolSelectedActorInterface
{
public:
    std::uint8_t Opaque[1];
};
