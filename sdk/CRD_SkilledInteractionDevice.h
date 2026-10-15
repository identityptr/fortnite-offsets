/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_SkilledInteractionDevice
 */
#pragma once
#include "Basic.h"

// /Script/CRD_SkilledInteractionDevice.ActionIdentifier
// Kind: ScriptStruct; super: none
struct FActionIdentifier
{
public:
    std::uint8_t CommonInputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName ActionName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FActionIdentifier, CommonInputType) == 0, "Offset mismatch for FActionIdentifier::CommonInputType");
static_assert(offsetof(FActionIdentifier, ActionName) == 4, "Offset mismatch for FActionIdentifier::ActionName");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractContainerBase
// Kind: Class; super: CommonActivatableWidget
class UFortSkilledInteractContainerBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FMulticastInlineDelegate OnInputPressed; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInputReleased; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> TriggeringActions; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSkilledInteractContainerBase, OnInputPressed) == 1184, "Offset mismatch for UFortSkilledInteractContainerBase::OnInputPressed");
static_assert(offsetof(UFortSkilledInteractContainerBase, OnInputReleased) == 1200, "Offset mismatch for UFortSkilledInteractContainerBase::OnInputReleased");
static_assert(offsetof(UFortSkilledInteractContainerBase, TriggeringActions) == 1216, "Offset mismatch for UFortSkilledInteractContainerBase::TriggeringActions");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionPlayerComponent
// Kind: Class; super: PlayerStateComponent
class UFortSkilledInteractionPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ViewModelClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* ViewModel; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> InteractionDevice; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InteractionState; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    std::int32_t SuccessCount; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::int32_t FailureCount; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSkilledInteractionPlayerComponent, ViewModelClass) == 192, "Offset mismatch for UFortSkilledInteractionPlayerComponent::ViewModelClass");
static_assert(offsetof(UFortSkilledInteractionPlayerComponent, ViewModel) == 200, "Offset mismatch for UFortSkilledInteractionPlayerComponent::ViewModel");
static_assert(offsetof(UFortSkilledInteractionPlayerComponent, InteractionDevice) == 208, "Offset mismatch for UFortSkilledInteractionPlayerComponent::InteractionDevice");
static_assert(offsetof(UFortSkilledInteractionPlayerComponent, InteractionState) == 216, "Offset mismatch for UFortSkilledInteractionPlayerComponent::InteractionState");
static_assert(offsetof(UFortSkilledInteractionPlayerComponent, SuccessCount) == 220, "Offset mismatch for UFortSkilledInteractionPlayerComponent::SuccessCount");
static_assert(offsetof(UFortSkilledInteractionPlayerComponent, FailureCount) == 224, "Offset mismatch for UFortSkilledInteractionPlayerComponent::FailureCount");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionPlayerListComponent
// Kind: Class; super: ActorComponent
class UFortSkilledInteractionPlayerListComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ViewModelClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* ViewModel; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SuccessTarget; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t FailureLimit; // 0x00D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSkilledInteractionPlayerListComponent, ViewModelClass) == 192, "Offset mismatch for UFortSkilledInteractionPlayerListComponent::ViewModelClass");
static_assert(offsetof(UFortSkilledInteractionPlayerListComponent, ViewModel) == 200, "Offset mismatch for UFortSkilledInteractionPlayerListComponent::ViewModel");
static_assert(offsetof(UFortSkilledInteractionPlayerListComponent, SuccessTarget) == 208, "Offset mismatch for UFortSkilledInteractionPlayerListComponent::SuccessTarget");
static_assert(offsetof(UFortSkilledInteractionPlayerListComponent, FailureLimit) == 212, "Offset mismatch for UFortSkilledInteractionPlayerListComponent::FailureLimit");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionPlayerListViewModel
// Kind: Class; super: MVVMViewModelBase
class UFortSkilledInteractionPlayerListViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> Players; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SuccessTarget; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t FailureLimit; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortSkilledInteractionPlayerListViewModel, Players) == 104, "Offset mismatch for UFortSkilledInteractionPlayerListViewModel::Players");
static_assert(offsetof(UFortSkilledInteractionPlayerListViewModel, SuccessTarget) == 120, "Offset mismatch for UFortSkilledInteractionPlayerListViewModel::SuccessTarget");
static_assert(offsetof(UFortSkilledInteractionPlayerListViewModel, FailureLimit) == 124, "Offset mismatch for UFortSkilledInteractionPlayerListViewModel::FailureLimit");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionPlayerQueueComponent
// Kind: Class; super: ActorComponent
class UFortSkilledInteractionPlayerQueueComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t QueueType; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::int32_t SynchronousExecutionAmount; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowDuplicateControllerEntries; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C9
    std::int32_t QueueSizeMax; // 0x00CC (Size: 0x4, Type: IntProperty)
    TArray<void*> ControllerQueue; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSkilledInteractionPlayerQueueComponent, QueueType) == 192, "Offset mismatch for UFortSkilledInteractionPlayerQueueComponent::QueueType");
static_assert(offsetof(UFortSkilledInteractionPlayerQueueComponent, SynchronousExecutionAmount) == 196, "Offset mismatch for UFortSkilledInteractionPlayerQueueComponent::SynchronousExecutionAmount");
static_assert(offsetof(UFortSkilledInteractionPlayerQueueComponent, bAllowDuplicateControllerEntries) == 200, "Offset mismatch for UFortSkilledInteractionPlayerQueueComponent::bAllowDuplicateControllerEntries");
static_assert(offsetof(UFortSkilledInteractionPlayerQueueComponent, QueueSizeMax) == 204, "Offset mismatch for UFortSkilledInteractionPlayerQueueComponent::QueueSizeMax");
static_assert(offsetof(UFortSkilledInteractionPlayerQueueComponent, ControllerQueue) == 208, "Offset mismatch for UFortSkilledInteractionPlayerQueueComponent::ControllerQueue");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionPlayerViewModel
// Kind: Class; super: MVVMViewModelBase
class UFortSkilledInteractionPlayerViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* PlayerState; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InteractionState; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::int32_t SuccessCount; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t FailureCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x007C
    std::uint8_t CleanupDate[0x1]; // 0x0080 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortSkilledInteractionPlayerViewModel, PlayerState) == 104, "Offset mismatch for UFortSkilledInteractionPlayerViewModel::PlayerState");
static_assert(offsetof(UFortSkilledInteractionPlayerViewModel, InteractionState) == 112, "Offset mismatch for UFortSkilledInteractionPlayerViewModel::InteractionState");
static_assert(offsetof(UFortSkilledInteractionPlayerViewModel, SuccessCount) == 116, "Offset mismatch for UFortSkilledInteractionPlayerViewModel::SuccessCount");
static_assert(offsetof(UFortSkilledInteractionPlayerViewModel, FailureCount) == 120, "Offset mismatch for UFortSkilledInteractionPlayerViewModel::FailureCount");
static_assert(offsetof(UFortSkilledInteractionPlayerViewModel, CleanupDate) == 128, "Offset mismatch for UFortSkilledInteractionPlayerViewModel::CleanupDate");

// /Script/CRD_SkilledInteractionDevice.FortSkilledInteractionViewModelResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UFortSkilledInteractionViewModelResolver
{
public:
    std::uint8_t Opaque[1];
};
