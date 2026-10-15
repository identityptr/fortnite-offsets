/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayEventRouter
 */
#pragma once
#include "Basic.h"

// /Script/GameplayEventRouter.GameplayEventGlobalRouterPendingListenerData
// Kind: ScriptStruct; super: none
struct FGameplayEventGlobalRouterPendingListenerData
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* EventType; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* EventContext; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayEventGlobalRouterPendingListenerData, EventType) == 176, "Offset mismatch for FGameplayEventGlobalRouterPendingListenerData::EventType");
static_assert(offsetof(FGameplayEventGlobalRouterPendingListenerData, EventContext) == 184, "Offset mismatch for FGameplayEventGlobalRouterPendingListenerData::EventContext");

// /Script/GameplayEventRouter.GameplayEventId
// Kind: ScriptStruct; super: none
struct FGameplayEventId
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayEventRouter.GameplayEventListenerBackwardCompatibleHandle
// Kind: ScriptStruct; super: none
struct FGameplayEventListenerBackwardCompatibleHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayEventRouter.GameplayEventListenerData
// Kind: ScriptStruct; super: none
struct FGameplayEventListenerData
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TWeakObjectPtr<void> EventType; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    void* EventContext; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayEventListenerData, EventType) == 144, "Offset mismatch for FGameplayEventListenerData::EventType");
static_assert(offsetof(FGameplayEventListenerData, EventContext) == 152, "Offset mismatch for FGameplayEventListenerData::EventContext");

// /Script/GameplayEventRouter.GameplayEventListenerHandle
// Kind: ScriptStruct; super: none
struct FGameplayEventListenerHandle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayEventListenerHandle, Handle) == 16, "Offset mismatch for FGameplayEventListenerHandle::Handle");

// /Script/GameplayEventRouter.GameplayEventListenerList
// Kind: ScriptStruct; super: none
struct FGameplayEventListenerList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_StartListeningToEvent
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnEventReceived; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_StartListeningToEvent, OnEventReceived) == 48, "Offset mismatch for UAsyncAction_StartListeningToEvent::OnEventReceived");

// /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_StartListeningToStatefulEvent
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnEventReceived; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSavedEventStateExists; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventStateCleared; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnEventReceived) == 48, "Offset mismatch for UAsyncAction_StartListeningToStatefulEvent::OnEventReceived");
static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnSavedEventStateExists) == 64, "Offset mismatch for UAsyncAction_StartListeningToStatefulEvent::OnSavedEventStateExists");
static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnEventStateCleared) == 80, "Offset mismatch for UAsyncAction_StartListeningToStatefulEvent::OnEventStateCleared");

// /Script/GameplayEventRouter.AsyncAction_WaitForGlobalEventRouter
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_WaitForGlobalEventRouter
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnEventRouterAvailable; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_WaitForGlobalEventRouter, OnEventRouterAvailable) == 48, "Offset mismatch for UAsyncAction_WaitForGlobalEventRouter::OnEventRouterAvailable");

// /Script/GameplayEventRouter.GameplayEventRouterComponent
// Kind: Class; super: ActorComponent
class UGameplayEventRouterComponent
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

static_assert(offsetof(UGameplayEventRouterComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGameplayEventRouterComponent::PrimaryComponentTick");
static_assert(offsetof(UGameplayEventRouterComponent, ComponentTags) == 104, "Offset mismatch for UGameplayEventRouterComponent::ComponentTags");
static_assert(offsetof(UGameplayEventRouterComponent, AssetUserData) == 120, "Offset mismatch for UGameplayEventRouterComponent::AssetUserData");
static_assert(offsetof(UGameplayEventRouterComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGameplayEventRouterComponent::UCSSerializationIndex");
static_assert(offsetof(UGameplayEventRouterComponent, bNetAddressable) == 152, "Offset mismatch for UGameplayEventRouterComponent::bNetAddressable");
static_assert(offsetof(UGameplayEventRouterComponent, bAutoActivate) == 154, "Offset mismatch for UGameplayEventRouterComponent::bAutoActivate");
static_assert(offsetof(UGameplayEventRouterComponent, bIsEditorOnly) == 155, "Offset mismatch for UGameplayEventRouterComponent::bIsEditorOnly");
static_assert(offsetof(UGameplayEventRouterComponent, CreationMethod) == 185, "Offset mismatch for UGameplayEventRouterComponent::CreationMethod");
static_assert(offsetof(UGameplayEventRouterComponent, OnComponentActivated) == 186, "Offset mismatch for UGameplayEventRouterComponent::OnComponentActivated");
static_assert(offsetof(UGameplayEventRouterComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGameplayEventRouterComponent::OnComponentDeactivated");

// /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface
// Kind: Class; super: Interface
class UGameplayEventRouterOwnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayEventRouter.GameplayEventRouterSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UGameplayEventRouterSubsystem
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> PendingGlobalRouterListenerDatas; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayEventRouterSubsystem, PendingGlobalRouterListenerDatas) == 136, "Offset mismatch for UGameplayEventRouterSubsystem::PendingGlobalRouterListenerDatas");
