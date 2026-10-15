/**
 * decamp dumper generated SDK
 * Package: /Script/Curie
 */
#pragma once
#include "Basic.h"

// /Script/Curie.CurieContainerHandle
// Kind: ScriptStruct; super: none
struct FCurieContainerHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieEffectContainer
// Kind: ScriptStruct; super: none
struct FCurieEffectContainer
{
public:
    std::uint8_t TargetFilter[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* GameplayEffect; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FCurieEffectContainer, TargetFilter) == 0, "Offset mismatch for FCurieEffectContainer::TargetFilter");
static_assert(offsetof(FCurieEffectContainer, GameplayEffect) == 72, "Offset mismatch for FCurieEffectContainer::GameplayEffect");

// /Script/Curie.CurieElementAttachConditionHandlersContainer
// Kind: ScriptStruct; super: none
struct FCurieElementAttachConditionHandlersContainer
{
public:
    TArray<void*> Handlers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCurieElementAttachConditionHandlersContainer, Handlers) == 0, "Offset mismatch for FCurieElementAttachConditionHandlersContainer::Handlers");

// /Script/Curie.CurieElementAttachHandlersContainer
// Kind: ScriptStruct; super: none
struct FCurieElementAttachHandlersContainer
{
public:
    TArray<void*> Handlers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCurieElementAttachHandlersContainer, Handlers) == 0, "Offset mismatch for FCurieElementAttachHandlersContainer::Handlers");

// /Script/Curie.CurieElementDefinitionBase
// Kind: ScriptStruct; super: TableRowBase
struct FCurieElementDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ElementAllocationHandler; // 0x0008 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ElementAttachHandlers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* ElementAttachConditionHandler; // 0x0020 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ElementInteractHandlers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ElementMaterialInteractHandlers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ElementContainerInteractHandlers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ElementalImmunities[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCurieElementDefinitionBase, ElementAllocationHandler) == 8, "Offset mismatch for FCurieElementDefinitionBase::ElementAllocationHandler");
static_assert(offsetof(FCurieElementDefinitionBase, ElementAttachHandlers) == 16, "Offset mismatch for FCurieElementDefinitionBase::ElementAttachHandlers");
static_assert(offsetof(FCurieElementDefinitionBase, ElementAttachConditionHandler) == 32, "Offset mismatch for FCurieElementDefinitionBase::ElementAttachConditionHandler");
static_assert(offsetof(FCurieElementDefinitionBase, ElementInteractHandlers) == 40, "Offset mismatch for FCurieElementDefinitionBase::ElementInteractHandlers");
static_assert(offsetof(FCurieElementDefinitionBase, ElementMaterialInteractHandlers) == 56, "Offset mismatch for FCurieElementDefinitionBase::ElementMaterialInteractHandlers");
static_assert(offsetof(FCurieElementDefinitionBase, ElementContainerInteractHandlers) == 72, "Offset mismatch for FCurieElementDefinitionBase::ElementContainerInteractHandlers");
static_assert(offsetof(FCurieElementDefinitionBase, ElementalImmunities) == 88, "Offset mismatch for FCurieElementDefinitionBase::ElementalImmunities");
static_assert(offsetof(FCurieElementDefinitionBase, bIsEnabled) == 120, "Offset mismatch for FCurieElementDefinitionBase::bIsEnabled");

// /Script/Curie.CurieElementHandle
// Kind: ScriptStruct; super: none
struct FCurieElementHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieElementInteractWithContainerHandlersContainer
// Kind: ScriptStruct; super: none
struct FCurieElementInteractWithContainerHandlersContainer
{
public:
    TArray<void*> Handlers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCurieElementInteractWithContainerHandlersContainer, Handlers) == 0, "Offset mismatch for FCurieElementInteractWithContainerHandlersContainer::Handlers");

// /Script/Curie.CurieElementInteractWithElementHandlersContainer
// Kind: ScriptStruct; super: none
struct FCurieElementInteractWithElementHandlersContainer
{
public:
    TArray<void*> Handlers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCurieElementInteractWithElementHandlersContainer, Handlers) == 0, "Offset mismatch for FCurieElementInteractWithElementHandlersContainer::Handlers");

// /Script/Curie.CurieElementInteractWithMaterialHandlersContainer
// Kind: ScriptStruct; super: none
struct FCurieElementInteractWithMaterialHandlersContainer
{
public:
    TArray<void*> Handlers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCurieElementInteractWithMaterialHandlersContainer, Handlers) == 0, "Offset mismatch for FCurieElementInteractWithMaterialHandlersContainer::Handlers");

// /Script/Curie.CurieElementPairKey
// Kind: ScriptStruct; super: none
struct FCurieElementPairKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieEntityStateDefinitionBase
// Kind: ScriptStruct; super: TableRowBase
struct FCurieEntityStateDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* StateBehaviorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIsEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCurieEntityStateDefinitionBase, StateBehaviorClass) == 8, "Offset mismatch for FCurieEntityStateDefinitionBase::StateBehaviorClass");
static_assert(offsetof(FCurieEntityStateDefinitionBase, bIsEnabled) == 16, "Offset mismatch for FCurieEntityStateDefinitionBase::bIsEnabled");

// /Script/Curie.CurieInteractHandle
// Kind: ScriptStruct; super: none
struct FCurieInteractHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieInteractParamsHandle
// Kind: ScriptStruct; super: none
struct FCurieInteractParamsHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieManagerComponentEntry
// Kind: ScriptStruct; super: TableRowBase
struct FCurieManagerComponentEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsActive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Priority; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    void* ManagerType; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* Config; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCurieManagerComponentEntry, bIsActive) == 8, "Offset mismatch for FCurieManagerComponentEntry::bIsActive");
static_assert(offsetof(FCurieManagerComponentEntry, Priority) == 9, "Offset mismatch for FCurieManagerComponentEntry::Priority");
static_assert(offsetof(FCurieManagerComponentEntry, ManagerType) == 16, "Offset mismatch for FCurieManagerComponentEntry::ManagerType");
static_assert(offsetof(FCurieManagerComponentEntry, Config) == 24, "Offset mismatch for FCurieManagerComponentEntry::Config");

// /Script/Curie.CurieMaterialDefinitionBase
// Kind: ScriptStruct; super: TableRowBase
struct FCurieMaterialDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ElementalImmunities[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t ElementAttachmentImmunities[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t ElementsAllowedWhenCannotBeDamaged[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t MaterialProperties[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCurieMaterialDefinitionBase, ElementalImmunities) == 8, "Offset mismatch for FCurieMaterialDefinitionBase::ElementalImmunities");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementAttachmentImmunities) == 40, "Offset mismatch for FCurieMaterialDefinitionBase::ElementAttachmentImmunities");
static_assert(offsetof(FCurieMaterialDefinitionBase, ElementsAllowedWhenCannotBeDamaged) == 72, "Offset mismatch for FCurieMaterialDefinitionBase::ElementsAllowedWhenCannotBeDamaged");
static_assert(offsetof(FCurieMaterialDefinitionBase, MaterialProperties) == 104, "Offset mismatch for FCurieMaterialDefinitionBase::MaterialProperties");

// /Script/Curie.CurieStateHandle
// Kind: ScriptStruct; super: none
struct FCurieStateHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieComponent
// Kind: Class; super: ActorComponent
class UCurieComponent
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

static_assert(offsetof(UCurieComponent, PrimaryComponentTick) == 56, "Offset mismatch for UCurieComponent::PrimaryComponentTick");
static_assert(offsetof(UCurieComponent, ComponentTags) == 104, "Offset mismatch for UCurieComponent::ComponentTags");
static_assert(offsetof(UCurieComponent, AssetUserData) == 120, "Offset mismatch for UCurieComponent::AssetUserData");
static_assert(offsetof(UCurieComponent, UCSSerializationIndex) == 144, "Offset mismatch for UCurieComponent::UCSSerializationIndex");
static_assert(offsetof(UCurieComponent, bNetAddressable) == 152, "Offset mismatch for UCurieComponent::bNetAddressable");
static_assert(offsetof(UCurieComponent, bAutoActivate) == 154, "Offset mismatch for UCurieComponent::bAutoActivate");
static_assert(offsetof(UCurieComponent, bIsEditorOnly) == 155, "Offset mismatch for UCurieComponent::bIsEditorOnly");
static_assert(offsetof(UCurieComponent, CreationMethod) == 185, "Offset mismatch for UCurieComponent::CreationMethod");
static_assert(offsetof(UCurieComponent, OnComponentActivated) == 186, "Offset mismatch for UCurieComponent::OnComponentActivated");
static_assert(offsetof(UCurieComponent, OnComponentDeactivated) == 187, "Offset mismatch for UCurieComponent::OnComponentDeactivated");

// /Script/Curie.CurieElementAllocationHandler
// Kind: Class; super: Object
class UCurieElementAllocationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieElementAttachConditionHandler
// Kind: Class; super: Object
class UCurieElementAttachConditionHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HandlerPriority; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t ElementTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCurieElementAttachConditionHandler, HandlerPriority) == 40, "Offset mismatch for UCurieElementAttachConditionHandler::HandlerPriority");
static_assert(offsetof(UCurieElementAttachConditionHandler, ElementTag) == 44, "Offset mismatch for UCurieElementAttachConditionHandler::ElementTag");

// /Script/Curie.CurieElementAttachHandler
// Kind: Class; super: CurieElementGameplayEffectOwner
class UCurieElementAttachHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HandlerPriority; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HandlerBehavior; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t ElementTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    TArray<void*> OnBeginAttachmentEffects; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OngoingAttachmentEffects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnEndAttachmentEffects; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCurieElementAttachHandler, HandlerPriority) == 40, "Offset mismatch for UCurieElementAttachHandler::HandlerPriority");
static_assert(offsetof(UCurieElementAttachHandler, HandlerBehavior) == 41, "Offset mismatch for UCurieElementAttachHandler::HandlerBehavior");
static_assert(offsetof(UCurieElementAttachHandler, ElementTag) == 44, "Offset mismatch for UCurieElementAttachHandler::ElementTag");
static_assert(offsetof(UCurieElementAttachHandler, OnBeginAttachmentEffects) == 48, "Offset mismatch for UCurieElementAttachHandler::OnBeginAttachmentEffects");
static_assert(offsetof(UCurieElementAttachHandler, OngoingAttachmentEffects) == 64, "Offset mismatch for UCurieElementAttachHandler::OngoingAttachmentEffects");
static_assert(offsetof(UCurieElementAttachHandler, OnEndAttachmentEffects) == 80, "Offset mismatch for UCurieElementAttachHandler::OnEndAttachmentEffects");

// /Script/Curie.CurieElementGameplayEffectOwner
// Kind: Class; super: Object
class UCurieElementGameplayEffectOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieElementInteractWithContainerHandler
// Kind: Class; super: CurieElementGameplayEffectOwner
class UCurieElementInteractWithContainerHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HandlerPriority; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HandlerBehavior; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t ElementTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    TArray<void*> OnInstantInteractionEffects; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnBeginInteractionEffects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OngoingInteractionEffects; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnEndInteractionEffects; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCurieElementInteractWithContainerHandler, HandlerPriority) == 40, "Offset mismatch for UCurieElementInteractWithContainerHandler::HandlerPriority");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, HandlerBehavior) == 41, "Offset mismatch for UCurieElementInteractWithContainerHandler::HandlerBehavior");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, ElementTag) == 44, "Offset mismatch for UCurieElementInteractWithContainerHandler::ElementTag");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, OnInstantInteractionEffects) == 48, "Offset mismatch for UCurieElementInteractWithContainerHandler::OnInstantInteractionEffects");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, OnBeginInteractionEffects) == 64, "Offset mismatch for UCurieElementInteractWithContainerHandler::OnBeginInteractionEffects");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, OngoingInteractionEffects) == 80, "Offset mismatch for UCurieElementInteractWithContainerHandler::OngoingInteractionEffects");
static_assert(offsetof(UCurieElementInteractWithContainerHandler, OnEndInteractionEffects) == 96, "Offset mismatch for UCurieElementInteractWithContainerHandler::OnEndInteractionEffects");

// /Script/Curie.CurieElementInteractWithElementHandler
// Kind: Class; super: Object
class UCurieElementInteractWithElementHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HandlerPriority; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HandlerBehavior; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t ElementTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCurieElementInteractWithElementHandler, HandlerPriority) == 40, "Offset mismatch for UCurieElementInteractWithElementHandler::HandlerPriority");
static_assert(offsetof(UCurieElementInteractWithElementHandler, HandlerBehavior) == 41, "Offset mismatch for UCurieElementInteractWithElementHandler::HandlerBehavior");
static_assert(offsetof(UCurieElementInteractWithElementHandler, ElementTag) == 44, "Offset mismatch for UCurieElementInteractWithElementHandler::ElementTag");

// /Script/Curie.CurieElementInteractWithMaterialHandler
// Kind: Class; super: Object
class UCurieElementInteractWithMaterialHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HandlerPriority; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HandlerBehavior; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t ElementTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCurieElementInteractWithMaterialHandler, HandlerPriority) == 40, "Offset mismatch for UCurieElementInteractWithMaterialHandler::HandlerPriority");
static_assert(offsetof(UCurieElementInteractWithMaterialHandler, HandlerBehavior) == 41, "Offset mismatch for UCurieElementInteractWithMaterialHandler::HandlerBehavior");
static_assert(offsetof(UCurieElementInteractWithMaterialHandler, ElementTag) == 44, "Offset mismatch for UCurieElementInteractWithMaterialHandler::ElementTag");

// /Script/Curie.CurieEntityStateBehavior
// Kind: Class; super: CurieElementGameplayEffectOwner
class UCurieEntityStateBehavior
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RequiredAttachedElements[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredInteractingElements[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t AllowedAttachmentEntityTypes[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    TArray<void*> OnBeginEffects; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OngoingEffects; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnEndEffects; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldDetach; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    // 0x00B8 BoolProperty bSkipExecuteAttachDetach (shared storage)
};

static_assert(offsetof(UCurieEntityStateBehavior, RequiredAttachedElements) == 40, "Offset mismatch for UCurieEntityStateBehavior::RequiredAttachedElements");
static_assert(offsetof(UCurieEntityStateBehavior, RequiredInteractingElements) == 72, "Offset mismatch for UCurieEntityStateBehavior::RequiredInteractingElements");
static_assert(offsetof(UCurieEntityStateBehavior, AllowedAttachmentEntityTypes) == 104, "Offset mismatch for UCurieEntityStateBehavior::AllowedAttachmentEntityTypes");
static_assert(offsetof(UCurieEntityStateBehavior, OnBeginEffects) == 136, "Offset mismatch for UCurieEntityStateBehavior::OnBeginEffects");
static_assert(offsetof(UCurieEntityStateBehavior, OngoingEffects) == 152, "Offset mismatch for UCurieEntityStateBehavior::OngoingEffects");
static_assert(offsetof(UCurieEntityStateBehavior, OnEndEffects) == 168, "Offset mismatch for UCurieEntityStateBehavior::OnEndEffects");
static_assert(offsetof(UCurieEntityStateBehavior, bShouldDetach) == 184, "Offset mismatch for UCurieEntityStateBehavior::bShouldDetach");

// /Script/Curie.CurieGlobals
// Kind: Class; super: Object
class UCurieGlobals
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableCurie; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CurieGlobalsClassName[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    void* RegisteredCurieManager; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCurieGlobals, bEnableCurie) == 40, "Offset mismatch for UCurieGlobals::bEnableCurie");
static_assert(offsetof(UCurieGlobals, CurieGlobalsClassName) == 48, "Offset mismatch for UCurieGlobals::CurieGlobalsClassName");
static_assert(offsetof(UCurieGlobals, RegisteredCurieManager) == 72, "Offset mismatch for UCurieGlobals::RegisteredCurieManager");

// /Script/Curie.CurieInterface
// Kind: Class; super: Interface
class UCurieInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Curie.CurieManager
// Kind: Class; super: GameStateComponent
class UCurieManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CurieComponentClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CurieManagerRegistryName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialDataRegistryName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementDataRegistryName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    FName EntityStateDataRegistryName; // 0x00D4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x94]; // 0x00DC
    TMap<void*, void*> ElementAllocationHandlers; // 0x0170 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ElementAttachmentHandlers; // 0x0180 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ElementAttachmentConditionHandlers; // 0x0190 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ElementInteractWithElementHandlers; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ElementInteractWithMaterialHandlers; // 0x01B0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ElementInteractWithContainerHandlers; // 0x01C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CurieManagerComponents; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCurieManager, CurieComponentClass) == 192, "Offset mismatch for UCurieManager::CurieComponentClass");
static_assert(offsetof(UCurieManager, CurieManagerRegistryName) == 200, "Offset mismatch for UCurieManager::CurieManagerRegistryName");
static_assert(offsetof(UCurieManager, MaterialDataRegistryName) == 204, "Offset mismatch for UCurieManager::MaterialDataRegistryName");
static_assert(offsetof(UCurieManager, ElementDataRegistryName) == 208, "Offset mismatch for UCurieManager::ElementDataRegistryName");
static_assert(offsetof(UCurieManager, EntityStateDataRegistryName) == 212, "Offset mismatch for UCurieManager::EntityStateDataRegistryName");
static_assert(offsetof(UCurieManager, ElementAllocationHandlers) == 368, "Offset mismatch for UCurieManager::ElementAllocationHandlers");
static_assert(offsetof(UCurieManager, ElementAttachmentHandlers) == 384, "Offset mismatch for UCurieManager::ElementAttachmentHandlers");
static_assert(offsetof(UCurieManager, ElementAttachmentConditionHandlers) == 400, "Offset mismatch for UCurieManager::ElementAttachmentConditionHandlers");
static_assert(offsetof(UCurieManager, ElementInteractWithElementHandlers) == 416, "Offset mismatch for UCurieManager::ElementInteractWithElementHandlers");
static_assert(offsetof(UCurieManager, ElementInteractWithMaterialHandlers) == 432, "Offset mismatch for UCurieManager::ElementInteractWithMaterialHandlers");
static_assert(offsetof(UCurieManager, ElementInteractWithContainerHandlers) == 448, "Offset mismatch for UCurieManager::ElementInteractWithContainerHandlers");
static_assert(offsetof(UCurieManager, CurieManagerComponents) == 464, "Offset mismatch for UCurieManager::CurieManagerComponents");

// /Script/Curie.CurieManagerComponent
// Kind: Class; super: Object
class UCurieManagerComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CachedConfig; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCurieManagerComponent, CachedConfig) == 40, "Offset mismatch for UCurieManagerComponent::CachedConfig");

// /Script/Curie.CurieManagerComponentConfig
// Kind: Class; super: PrimaryDataAsset
class UCurieManagerComponentConfig
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ConfigName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConfigTag[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCurieManagerComponentConfig, ConfigName) == 48, "Offset mismatch for UCurieManagerComponentConfig::ConfigName");
static_assert(offsetof(UCurieManagerComponentConfig, ConfigTag) == 52, "Offset mismatch for UCurieManagerComponentConfig::ConfigTag");

// /Script/Curie.CurieManagerComponentInterface
// Kind: Class; super: Interface
class UCurieManagerComponentInterface
{
public:
    std::uint8_t Opaque[1];
};
