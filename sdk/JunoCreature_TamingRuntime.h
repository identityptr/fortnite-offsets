/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCreature_TamingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoAnimalProcessorConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SelectionPreconditions[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t AssociatedCraftingObjectTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    void* FriendshipModifiersOverride; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoAnimalProcessorConfigTableRow, SelectionPreconditions) == 8, "Offset mismatch for FJunoAnimalProcessorConfigTableRow::SelectionPreconditions");
static_assert(offsetof(FJunoAnimalProcessorConfigTableRow, AssociatedCraftingObjectTags) == 48, "Offset mismatch for FJunoAnimalProcessorConfigTableRow::AssociatedCraftingObjectTags");
static_assert(offsetof(FJunoAnimalProcessorConfigTableRow, FriendshipModifiersOverride) == 80, "Offset mismatch for FJunoAnimalProcessorConfigTableRow::FriendshipModifiersOverride");

// /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorModifierTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoAnimalProcessorModifierTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float CraftingSpeedMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoAnimalProcessorModifierTableRow, CraftingSpeedMultiplier) == 8, "Offset mismatch for FJunoAnimalProcessorModifierTableRow::CraftingSpeedMultiplier");

// /Script/JunoCreature_TamingRuntime.JunoEvent_OpenBarnAssignmentMenuMessage
// Kind: ScriptStruct; super: none
struct FJunoEvent_OpenBarnAssignmentMenuMessage
{
public:
    void* DEPRECATED_BarnActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BarnAssignmentMenuInitData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_OpenBarnAssignmentMenuMessage, DEPRECATED_BarnActor) == 0, "Offset mismatch for FJunoEvent_OpenBarnAssignmentMenuMessage::DEPRECATED_BarnActor");
static_assert(offsetof(FJunoEvent_OpenBarnAssignmentMenuMessage, BarnAssignmentMenuInitData) == 8, "Offset mismatch for FJunoEvent_OpenBarnAssignmentMenuMessage::BarnAssignmentMenuInitData");

// /Script/JunoCreature_TamingRuntime.JunoWorldConditionAnimalProcessorChecks
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FJunoWorldConditionAnimalProcessorChecks
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t AssignedAnimalTagQuery[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldConditionAnimalProcessorChecks, ActorRef) == 16, "Offset mismatch for FJunoWorldConditionAnimalProcessorChecks::ActorRef");
static_assert(offsetof(FJunoWorldConditionAnimalProcessorChecks, AssignedAnimalTagQuery) == 24, "Offset mismatch for FJunoWorldConditionAnimalProcessorChecks::AssignedAnimalTagQuery");

// /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoAnimalProcessorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* DefaultFriendshipModifiers; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnimalProcessorConfigRegistryType[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t UnassignedCraftingTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AssignedAnimalDescriptorTag[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AssignedFriendshipStateTag[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    float CurrentCraftingSpeedModifier; // 0x00FC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoAnimalProcessorComponent, DefaultFriendshipModifiers) == 192, "Offset mismatch for UJunoAnimalProcessorComponent::DefaultFriendshipModifiers");
static_assert(offsetof(UJunoAnimalProcessorComponent, AnimalProcessorConfigRegistryType) == 200, "Offset mismatch for UJunoAnimalProcessorComponent::AnimalProcessorConfigRegistryType");
static_assert(offsetof(UJunoAnimalProcessorComponent, UnassignedCraftingTags) == 208, "Offset mismatch for UJunoAnimalProcessorComponent::UnassignedCraftingTags");
static_assert(offsetof(UJunoAnimalProcessorComponent, AssignedAnimalDescriptorTag) == 240, "Offset mismatch for UJunoAnimalProcessorComponent::AssignedAnimalDescriptorTag");
static_assert(offsetof(UJunoAnimalProcessorComponent, AssignedFriendshipStateTag) == 248, "Offset mismatch for UJunoAnimalProcessorComponent::AssignedFriendshipStateTag");
static_assert(offsetof(UJunoAnimalProcessorComponent, CurrentCraftingSpeedModifier) == 252, "Offset mismatch for UJunoAnimalProcessorComponent::CurrentCraftingSpeedModifier");

// /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorFriendshipModifierMappings
// Kind: Class; super: DataAsset
class UJunoAnimalProcessorFriendshipModifierMappings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> FriendshipModifierMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoAnimalProcessorFriendshipModifierMappings, FriendshipModifierMap) == 40, "Offset mismatch for UJunoAnimalProcessorFriendshipModifierMappings::FriendshipModifierMap");

// /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UJunoAnimalProcessorWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoAnimalProcessorWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UJunoAnimalProcessorWorldConditionSchema::ContextDataDescs");

// /Script/JunoCreature_TamingRuntime.JunoBarnAssignmentMenuInitData
// Kind: Class; super: Object
class UJunoBarnAssignmentMenuInitData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> BarnActor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AnimalActor; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BarnAssignmentMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t UniqueAIIdentifier[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    FText ExistingName; // 0x0040 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UJunoBarnAssignmentMenuInitData, BarnActor) == 40, "Offset mismatch for UJunoBarnAssignmentMenuInitData::BarnActor");
static_assert(offsetof(UJunoBarnAssignmentMenuInitData, AnimalActor) == 48, "Offset mismatch for UJunoBarnAssignmentMenuInitData::AnimalActor");
static_assert(offsetof(UJunoBarnAssignmentMenuInitData, BarnAssignmentMode) == 56, "Offset mismatch for UJunoBarnAssignmentMenuInitData::BarnAssignmentMode");
static_assert(offsetof(UJunoBarnAssignmentMenuInitData, UniqueAIIdentifier) == 60, "Offset mismatch for UJunoBarnAssignmentMenuInitData::UniqueAIIdentifier");
static_assert(offsetof(UJunoBarnAssignmentMenuInitData, ExistingName) == 64, "Offset mismatch for UJunoBarnAssignmentMenuInitData::ExistingName");

// /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_Taming
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t FollowingAnimalAIDescriptorTag[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoControllerComponent_Taming, FollowingAnimalAIDescriptorTag) == 272, "Offset mismatch for UJunoControllerComponent_Taming::FollowingAnimalAIDescriptorTag");
