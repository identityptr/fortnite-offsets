/**
 * decamp dumper generated SDK
 * Package: /Script/JunoControlUnitRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoControlUnitRuntime.JunoControlUnitSessionData
// Kind: ScriptStruct; super: none
struct FJunoControlUnitSessionData
{
public:
    TWeakObjectPtr<void> ControlUnitActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoControlUnitSessionData, ControlUnitActor) == 0, "Offset mismatch for FJunoControlUnitSessionData::ControlUnitActor");

// /Script/JunoControlUnitRuntime.JunoEvent_ControlChannelTriggered
// Kind: ScriptStruct; super: none
struct FJunoEvent_ControlChannelTriggered
{
public:
    std::uint8_t TriggeredInputAction[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bTriggered; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCompleted; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoEvent_ControlChannelTriggered, TriggeredInputAction) == 0, "Offset mismatch for FJunoEvent_ControlChannelTriggered::TriggeredInputAction");
static_assert(offsetof(FJunoEvent_ControlChannelTriggered, bTriggered) == 32, "Offset mismatch for FJunoEvent_ControlChannelTriggered::bTriggered");
static_assert(offsetof(FJunoEvent_ControlChannelTriggered, bCompleted) == 33, "Offset mismatch for FJunoEvent_ControlChannelTriggered::bCompleted");

// /Script/JunoControlUnitRuntime.JunoEvent_HUDControlUnitMessage
// Kind: ScriptStruct; super: none
struct FJunoEvent_HUDControlUnitMessage
{
public:
    TSoftObjectPtr<void> ControlUnitActor; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoEvent_HUDControlUnitMessage, ControlUnitActor) == 0, "Offset mismatch for FJunoEvent_HUDControlUnitMessage::ControlUnitActor");

// /Script/JunoControlUnitRuntime.JunoControlUnitAnalytics
// Kind: Class; super: Object
class UJunoControlUnitAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoControlUnitRuntime.JunoControlUnitAnimInstance
// Kind: Class; super: AnimInstance
class UJunoControlUnitAnimInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CurrentSkeleton; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPropagateNotifiesToLinkedInstances; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bReceiveNotifiesFromLinkedInstances (shared storage)
    // 0x0031 BoolProperty bUseMainInstanceMontageEvaluationData (shared storage)
    // 0x0031 BoolProperty bUseMultiThreadedAnimationUpdate (shared storage)
    // 0x0031 BoolProperty bUsingCopyPoseFromMesh (shared storage)
    std::uint8_t bQueueMontageEvents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    FMulticastInlineDelegate OnMontageBlendingOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendedIn; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageStarted; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageEnded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageSectionChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0098
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x48]; // 0x00C8
    std::uint8_t NotifyQueue[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    TArray<void*> ActiveAnimNotifyState; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveAnimNotifyEventReference; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoControlUnitAnimInstance, CurrentSkeleton) == 40, "Offset mismatch for UJunoControlUnitAnimInstance::CurrentSkeleton");
static_assert(offsetof(UJunoControlUnitAnimInstance, RootMotionMode) == 48, "Offset mismatch for UJunoControlUnitAnimInstance::RootMotionMode");
static_assert(offsetof(UJunoControlUnitAnimInstance, bPropagateNotifiesToLinkedInstances) == 49, "Offset mismatch for UJunoControlUnitAnimInstance::bPropagateNotifiesToLinkedInstances");
static_assert(offsetof(UJunoControlUnitAnimInstance, bQueueMontageEvents) == 50, "Offset mismatch for UJunoControlUnitAnimInstance::bQueueMontageEvents");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnMontageBlendingOut) == 56, "Offset mismatch for UJunoControlUnitAnimInstance::OnMontageBlendingOut");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnMontageBlendedIn) == 72, "Offset mismatch for UJunoControlUnitAnimInstance::OnMontageBlendedIn");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnMontageStarted) == 88, "Offset mismatch for UJunoControlUnitAnimInstance::OnMontageStarted");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnMontageEnded) == 104, "Offset mismatch for UJunoControlUnitAnimInstance::OnMontageEnded");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnAllMontageInstancesEnded) == 120, "Offset mismatch for UJunoControlUnitAnimInstance::OnAllMontageInstancesEnded");
static_assert(offsetof(UJunoControlUnitAnimInstance, OnMontageSectionChanged) == 136, "Offset mismatch for UJunoControlUnitAnimInstance::OnMontageSectionChanged");
static_assert(offsetof(UJunoControlUnitAnimInstance, SlotGroupInertializationRequestDataMap) == 184, "Offset mismatch for UJunoControlUnitAnimInstance::SlotGroupInertializationRequestDataMap");
static_assert(offsetof(UJunoControlUnitAnimInstance, NotifyQueue) == 272, "Offset mismatch for UJunoControlUnitAnimInstance::NotifyQueue");
static_assert(offsetof(UJunoControlUnitAnimInstance, ActiveAnimNotifyState) == 328, "Offset mismatch for UJunoControlUnitAnimInstance::ActiveAnimNotifyState");
static_assert(offsetof(UJunoControlUnitAnimInstance, ActiveAnimNotifyEventReference) == 344, "Offset mismatch for UJunoControlUnitAnimInstance::ActiveAnimNotifyEventReference");

// /Script/JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoControlUnitBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoControlUnitRuntime.JunoPlayerControllerComponent_ControlUnitAnalytics
// Kind: Class; super: ControllerComponent
class UJunoPlayerControllerComponent_ControlUnitAnalytics
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ControlUnitSessionData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerControllerComponent_ControlUnitAnalytics, ControlUnitSessionData) == 192, "Offset mismatch for UJunoPlayerControllerComponent_ControlUnitAnalytics::ControlUnitSessionData");
