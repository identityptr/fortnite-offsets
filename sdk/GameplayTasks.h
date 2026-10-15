/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayTasks
 */
#pragma once
#include "Basic.h"

// /Script/GameplayTasks.GameplayResourceSet
// Kind: ScriptStruct; super: none
struct FGameplayResourceSet
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTasks.GameplayTask
// Kind: Class; super: Object
class UGameplayTask
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InstanceName[0x6]; // 0x0030 (Size: 0x6, Type: NameProperty)
    std::uint8_t ResourceOverlapPolicy; // 0x0036 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x21]; // 0x0037
    void* ChildTask; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayTask, InstanceName) == 48, "Offset mismatch for UGameplayTask::InstanceName");
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 54, "Offset mismatch for UGameplayTask::ResourceOverlapPolicy");
static_assert(offsetof(UGameplayTask, ChildTask) == 88, "Offset mismatch for UGameplayTask::ChildTask");

// /Script/GameplayTasks.GameplayTaskOwnerInterface
// Kind: Class; super: Interface
class UGameplayTaskOwnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTasks.GameplayTaskResource
// Kind: Class; super: Object
class UGameplayTaskResource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ManualResourceID; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int8_t AutoResourceID; // 0x002C (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t bManuallySetID; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayTaskResource, ManualResourceID) == 40, "Offset mismatch for UGameplayTaskResource::ManualResourceID");
static_assert(offsetof(UGameplayTaskResource, AutoResourceID) == 44, "Offset mismatch for UGameplayTaskResource::AutoResourceID");
static_assert(offsetof(UGameplayTaskResource, bManuallySetID) == 48, "Offset mismatch for UGameplayTaskResource::bManuallySetID");

// /Script/GameplayTasks.GameplayTask_ClaimResource
// Kind: Class; super: GameplayTask
class UGameplayTask_ClaimResource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InstanceName[0x6]; // 0x0030 (Size: 0x6, Type: NameProperty)
    std::uint8_t ResourceOverlapPolicy; // 0x0036 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x21]; // 0x0037
    void* ChildTask; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayTask_ClaimResource, InstanceName) == 48, "Offset mismatch for UGameplayTask_ClaimResource::InstanceName");
static_assert(offsetof(UGameplayTask_ClaimResource, ResourceOverlapPolicy) == 54, "Offset mismatch for UGameplayTask_ClaimResource::ResourceOverlapPolicy");
static_assert(offsetof(UGameplayTask_ClaimResource, ChildTask) == 88, "Offset mismatch for UGameplayTask_ClaimResource::ChildTask");

// /Script/GameplayTasks.GameplayTask_SpawnActor
// Kind: Class; super: GameplayTask
class UGameplayTask_SpawnActor
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate Success; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate DidNotSpawn; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0080
    void* ClassToSpawn; // 0x00B0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UGameplayTask_SpawnActor, Success) == 96, "Offset mismatch for UGameplayTask_SpawnActor::Success");
static_assert(offsetof(UGameplayTask_SpawnActor, DidNotSpawn) == 112, "Offset mismatch for UGameplayTask_SpawnActor::DidNotSpawn");
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 176, "Offset mismatch for UGameplayTask_SpawnActor::ClassToSpawn");

// /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
// Kind: Class; super: GameplayTask
class UGameplayTask_TimeLimitedExecution
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimeExpired; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnFinished) == 96, "Offset mismatch for UGameplayTask_TimeLimitedExecution::OnFinished");
static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnTimeExpired) == 112, "Offset mismatch for UGameplayTask_TimeLimitedExecution::OnTimeExpired");

// /Script/GameplayTasks.GameplayTask_WaitDelay
// Kind: Class; super: GameplayTask
class UGameplayTask_WaitDelay
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGameplayTask_WaitDelay, OnFinish) == 96, "Offset mismatch for UGameplayTask_WaitDelay::OnFinish");

// /Script/GameplayTasks.GameplayTasksComponent
// Kind: Class; super: ActorComponent
class UGameplayTasksComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> TaskPriorityQueue; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00E8
    TArray<void*> TickingTasks; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KnownTasks; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnClaimedResourcesChange; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> SimulatedTasks; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 216, "Offset mismatch for UGameplayTasksComponent::TaskPriorityQueue");
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 248, "Offset mismatch for UGameplayTasksComponent::TickingTasks");
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 264, "Offset mismatch for UGameplayTasksComponent::KnownTasks");
static_assert(offsetof(UGameplayTasksComponent, OnClaimedResourcesChange) == 280, "Offset mismatch for UGameplayTasksComponent::OnClaimedResourcesChange");
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 296, "Offset mismatch for UGameplayTasksComponent::SimulatedTasks");
